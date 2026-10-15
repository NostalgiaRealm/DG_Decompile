/*
 * FUN_1800b10d4 at 1800b10d4
 * undefined __fastcall FUN_1800b10d4(longlong param_1, int param_2, int param_3, undefined4 param_4)
 * Address ranges: 1800b10d4-1800b1121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b10d4(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x71e0;
  if (param_2 != 1) {
    lVar1 = param_1 + 0x13e0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800b111f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x128))
            (*(longlong **)(param_1 + 0x28),param_3,param_4,
             lVar1 + (ulonglong)(uint)(param_3 * 4) * 4);
  return;
}

