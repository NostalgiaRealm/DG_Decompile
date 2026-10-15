/*
 * FUN_1800df4d8 at 1800df4d8
 * undefined FUN_1800df4d8(void)
 * Address ranges: 1800df4d8-1800df51b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800df4d8(longlong param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  thunk_FUN_180001218(param_2,*(longlong *)(param_1 + ((param_3 & 0xffffffff) + 0x22) * 0x10) +
                              (ulonglong)param_4 * 0x150,0x150);
  return param_2;
}

