/*
 * FUN_18004fc68 at 18004fc68
 * undefined FUN_18004fc68(void)
 * Address ranges: 18004fc68-18004fcab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004fc68(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1802345f8;
  FUN_18004f628();
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x90);
  }
  return param_1;
}

