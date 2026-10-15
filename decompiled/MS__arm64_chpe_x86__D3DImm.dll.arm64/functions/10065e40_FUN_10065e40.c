/*
 * FUN_10065e40 at 10065e40
 * undefined FUN_10065e40(void)
 * Address ranges: 10065e40-10065e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10065e40(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar1 = FUN_10066360(param_1,param_2,param_3,0);
  }
  return uVar1;
}

