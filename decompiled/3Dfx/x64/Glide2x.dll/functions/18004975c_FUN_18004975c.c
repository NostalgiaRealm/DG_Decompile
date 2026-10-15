/*
 * FUN_18004975c at 18004975c
 * undefined __fastcall FUN_18004975c(longlong param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 18004975c-18004979c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004975c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x268))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

