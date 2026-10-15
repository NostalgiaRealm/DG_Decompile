/*
 * FUN_10081d50 at 10081d50
 * undefined FUN_10081d50(void)
 * Address ranges: 10081d50-10081d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081d50(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)PTR_FUN_100a1034)();
    (*(code *)PTR_FUN_100a103c)(uVar1,0,param_1);
  }
  return;
}

