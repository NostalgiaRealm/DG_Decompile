/*
 * FUN_18005b498 at 18005b498
 * undefined8 __cdecl FUN_18005b498(longlong param_1, undefined8 param_2, ulonglong param_3, uint param_4)
 * Address ranges: 18005b498-18005b49b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005b498(longlong param_1,undefined8 *param_2,ulonglong param_3,uint param_4)

{
  thunk_FUN_1800010d8(param_2,(undefined8 *)
                              (*(longlong *)(param_1 + ((param_3 & 0xffffffff) + 0x22) * 0x10) +
                              (ulonglong)param_4 * 0x150),0x150);
  return param_2;
}

