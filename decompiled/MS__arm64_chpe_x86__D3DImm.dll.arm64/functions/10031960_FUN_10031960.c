/*
 * FUN_10031960 at 10031960
 * undefined FUN_10031960(void)
 * Address ranges: 10031960-10031a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031960(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_100319a8;
    }
    do {
      iVar2 = *(int *)(param_1 + 0x10) + uVar3 * 0x28;
LAB_100319a8:
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        FUN_10031a10(iVar2);
        FUN_10081d50(iVar2,0x124);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  FUN_10081dc0(*(undefined4 *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

