/*
 * FUN_180057bc8 at 180057bc8
 * undefined8 * __cdecl FUN_180057bc8(longlong param_1, undefined8 * param_2, ulonglong param_3, uint param_4)
 * Address ranges: 180057bc8-180057bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180057bc8(longlong param_1,undefined8 *param_2,ulonglong param_3,uint param_4)

{
  thunk_FUN_180001218(param_2,(undefined8 *)
                              (*(longlong *)(param_1 + ((param_3 & 0xffffffff) + 0x22) * 0x10) +
                              (ulonglong)param_4 * 0x150),0x150);
  return param_2;
}

