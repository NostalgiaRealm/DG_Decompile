/*
 * FUN_18005b460 at 18005b460
 * undefined4 __cdecl FUN_18005b460(longlong param_1, uint param_2)
 * Address ranges: 18005b460-18005b46b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18005b460(longlong param_1,uint param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 800) + (ulonglong)param_2 * 4);
}

