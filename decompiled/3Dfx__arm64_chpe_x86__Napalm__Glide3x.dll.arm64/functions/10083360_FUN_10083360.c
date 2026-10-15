/*
 * FUN_10083360 at 10083360
 * undefined FUN_10083360(void)
 * Address ranges: 10083360-100833a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083360(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_100a8078)();
    (*(code *)PTR_FUN_100a8088)(uVar1,0,param_1);
  }
  return;
}

