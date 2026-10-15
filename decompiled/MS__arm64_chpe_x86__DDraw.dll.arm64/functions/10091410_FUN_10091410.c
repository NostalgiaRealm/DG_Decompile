/*
 * FUN_10091410 at 10091410
 * undefined FUN_10091410(void)
 * Address ranges: 10091410-10091453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091410(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_100ba0d8)();
    (*(code *)PTR_FUN_100ba0e8)(uVar1,0,param_1);
  }
  return;
}

