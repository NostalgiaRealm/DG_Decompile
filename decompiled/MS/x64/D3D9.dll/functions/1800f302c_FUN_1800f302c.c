/*
 * FUN_1800f302c at 1800f302c
 * undefined __fastcall FUN_1800f302c(longlong param_1, longlong * param_2)
 * Address ranges: 1800f302c-1800f304f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f302c(longlong param_1,longlong *param_2)

{
  FUN_1800ea1d0(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,'\x01');
                    /* WARNING: Could not recover jumptable at 0x0001800f304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

