/*
 * FUN_1801326f0 at 1801326f0
 * undefined FUN_1801326f0(void)
 * Address ranges: 1801326f0-180132767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1801326f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_18022aa40;
  FUN_180132e70();
  FUN_180142100(param_1 + 0x1ef0);
  FUN_1802229d8(param_1[0x1eea]);
  FUN_18013fe40(param_1 + 0x1ee5);
  *param_1 = &PTR_FUN_18022ac48;
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x10590);
  }
  return param_1;
}

