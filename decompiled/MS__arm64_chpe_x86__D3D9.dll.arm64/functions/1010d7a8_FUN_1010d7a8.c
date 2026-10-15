/*
 * FUN_1010d7a8 at 1010d7a8
 * undefined FUN_1010d7a8(void)
 * Address ranges: 1010d7a8-1010d857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010d7a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x2dc + uVar3 * 0x38);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_1016c11c)(iVar1,0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (*(short *)(param_1 + 0xc) != 0) {
    uVar2 = (*(code *)PTR_FUN_1016c09c)(0);
    (*(code *)PTR_FUN_1016c29c)(*(short *)(param_1 + 0xc),uVar2);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_1016c07c)(iVar1);
      *(int *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

