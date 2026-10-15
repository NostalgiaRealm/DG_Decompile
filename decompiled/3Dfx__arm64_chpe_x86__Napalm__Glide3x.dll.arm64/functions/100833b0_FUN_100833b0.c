/*
 * FUN_100833b0 at 100833b0
 * undefined FUN_100833b0(void)
 * Address ranges: 100833b0-100833f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100833b0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_100a8078)();
    (*(code *)PTR_FUN_100a8088)(uVar1,0,param_1);
  }
  return;
}

