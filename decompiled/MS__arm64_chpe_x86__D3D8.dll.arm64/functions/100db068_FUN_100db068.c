/*
 * FUN_100db068 at 100db068
 * undefined FUN_100db068(void)
 * Address ranges: 100db068-100db117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100db068(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x2dc + uVar3 * 0x38);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_1013411c)(iVar1,0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (*(short *)(param_1 + 0xc) != 0) {
    uVar2 = (*(code *)PTR_FUN_10134098)(0);
    (*(code *)PTR_FUN_1013429c)(*(short *)(param_1 + 0xc),uVar2);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_10134078)(iVar1);
      *(int *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

