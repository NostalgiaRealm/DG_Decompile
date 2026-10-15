/*
 * FUN_180058010 at 180058010
 * longlong * __fastcall FUN_180058010(longlong param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 180058010-180058053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180058010(longlong param_1,longlong *param_2,ulonglong param_3)

{
  FUN_180058674(param_1,param_2,*(longlong *)(param_1 + 8),param_3,*(longlong *)(param_1 + 0x40),
                *(undefined8 **)(param_1 + 0x38),*(longlong *)(param_1 + 0x18) + 0x18,param_1 + 0x50
               );
  return param_2;
}

