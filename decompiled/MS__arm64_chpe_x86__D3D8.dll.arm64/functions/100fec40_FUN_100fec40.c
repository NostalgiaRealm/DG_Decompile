/*
 * FUN_100fec40 at 100fec40
 * undefined FUN_100fec40(void)
 * Address ranges: 100fec40-100fec83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100fec40(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_101340a4)();
    (*(code *)PTR_FUN_101340b4)(uVar1,0,param_1);
  }
  return;
}

