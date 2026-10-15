/*
 * FUN_100913c0 at 100913c0
 * undefined FUN_100913c0(void)
 * Address ranges: 100913c0-10091403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100913c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100ba0d8)();
  uVar1 = (*(code *)PTR_FUN_100ba0e4)(uVar1,0,param_1);
  return uVar1;
}

