/*
 * FUN_1800587a0 at 1800587a0
 * undefined __fastcall FUN_1800587a0(longlong param_1, longlong * param_2)
 * Address ranges: 1800587a0-1800587c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800587a0(longlong param_1,longlong *param_2)

{
  FUN_180043088(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,'\x01');
                    /* WARNING: Could not recover jumptable at 0x0001800587c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

