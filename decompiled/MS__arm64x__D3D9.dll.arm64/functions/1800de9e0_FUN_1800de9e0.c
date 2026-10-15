/*
 * FUN_1800de9e0 at 1800de9e0
 * undefined FUN_1800de9e0(void)
 * Address ranges: 1800de9e0-1800dea2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800de9e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_18023b1b8;
  FUN_1800de738();
  FUN_1800df448(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x490);
  }
  return param_1;
}

