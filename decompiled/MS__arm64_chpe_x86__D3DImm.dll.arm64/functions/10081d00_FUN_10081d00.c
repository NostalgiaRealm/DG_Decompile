/*
 * FUN_10081d00 at 10081d00
 * undefined FUN_10081d00(void)
 * Address ranges: 10081d00-10081d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081d00(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_100a1034)();
    (*(code *)PTR_FUN_100a103c)(uVar1,0,param_1);
  }
  return;
}

