/*
 * FUN_18005adac at 18005adac
 * undefined __fastcall FUN_18005adac(longlong param_1, longlong * param_2)
 * Address ranges: 18005adac-18005adcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005adac(longlong param_1,longlong *param_2)

{
  FUN_180045694(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,'\x01');
                    /* WARNING: Could not recover jumptable at 0x00018005adcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

