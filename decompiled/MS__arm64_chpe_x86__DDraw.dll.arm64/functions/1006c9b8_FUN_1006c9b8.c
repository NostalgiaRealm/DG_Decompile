/*
 * FUN_1006c9b8 at 1006c9b8
 * undefined FUN_1006c9b8(void)
 * Address ranges: 1006c9b8-1006ca67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006c9b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x2dc + uVar3 * 0x38);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_100ba14c)(iVar1,0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (*(short *)(param_1 + 0xc) != 0) {
    uVar2 = (*(code *)PTR_FUN_100ba0cc)(0);
    (*(code *)PTR_FUN_100ba2e8)(*(short *)(param_1 + 0xc),uVar2);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_100ba0a8)(iVar1);
      *(int *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

