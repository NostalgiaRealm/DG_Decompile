/*
 * FUN_10072da0 at 10072da0
 * undefined FUN_10072da0(void)
 * Address ranges: 10072da0-10072e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072da0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_10072de8;
    }
    do {
      iVar2 = *(int *)(param_1 + 0x10) + uVar3 * 0x30;
LAB_10072de8:
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 != 0) {
        FUN_10072e50(iVar2);
        FUN_10132260(iVar2,0x2d0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

