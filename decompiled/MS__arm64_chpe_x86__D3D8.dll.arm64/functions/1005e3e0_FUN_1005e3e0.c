/*
 * FUN_1005e3e0 at 1005e3e0
 * undefined FUN_1005e3e0(void)
 * Address ranges: 1005e3e0-1005e483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e3e0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_1005e428;
    }
    do {
      iVar2 = *(int *)(param_1 + 0x10) + uVar3 * 0x28;
LAB_1005e428:
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        FUN_1005e490(iVar2);
        FUN_100fec90(iVar2,0x124);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

