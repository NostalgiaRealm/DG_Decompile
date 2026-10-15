/*
 * FUN_140013cb0 at 140013cb0
 * undefined8 * __cdecl FUN_140013cb0(longlong param_1, undefined8 * param_2, ulonglong param_3, uint param_4)
 * Address ranges: 140013cb0-140013cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013cb0(longlong param_1,undefined8 *param_2,ulonglong param_3,uint param_4)

{
  thunk_FUN_140001000(param_2,(undefined8 *)
                              (*(longlong *)(param_1 + ((param_3 & 0xffffffff) + 0x22) * 0x10) +
                              (ulonglong)param_4 * 0x150),0x150);
  return param_2;
}

