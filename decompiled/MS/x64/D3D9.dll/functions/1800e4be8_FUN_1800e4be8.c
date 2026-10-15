/*
 * FUN_1800e4be8 at 1800e4be8
 * undefined __fastcall FUN_1800e4be8(longlong param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 1800e4be8-1800e4c28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4be8(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1800e2604(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800e4c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x268))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

