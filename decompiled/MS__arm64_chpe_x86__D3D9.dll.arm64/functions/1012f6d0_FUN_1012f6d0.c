/*
 * FUN_1012f6d0 at 1012f6d0
 * undefined FUN_1012f6d0(void)
 * Address ranges: 1012f6d0-1012f783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1012f6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x308);
  *(int *)(param_1 + 0x308) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x758) = 0;
    DAT_10175c58 = (*(code *)PTR_FUN_1016c050)(0,0,0,0);
    if (DAT_10175c58 != 0) {
      (*(code *)PTR_FUN_1016c0bc)(param_1 + 0x318);
      uVar2 = (*(code *)PTR_FUN_1016c064)(0,0,FUN_1012f4e0,param_1,0,param_1 + 0x30c);
      *(undefined4 *)(param_1 + 0x310) = uVar2;
      (*(code *)PTR_FUN_1016c138)(DAT_10175c58,0xffffffff);
    }
  }
  return;
}

