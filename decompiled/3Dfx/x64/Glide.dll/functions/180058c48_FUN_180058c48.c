/*
 * FUN_180058c48 at 180058c48
 * undefined __fastcall FUN_180058c48(longlong param_1, longlong * param_2)
 * Address ranges: 180058c48-180058c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058c48(longlong param_1,longlong *param_2)

{
  FUN_180043530(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,'\x01');
                    /* WARNING: Could not recover jumptable at 0x000180058c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

