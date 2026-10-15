/*
 * FUN_180049110 at 180049110
 * undefined __fastcall FUN_180049110(longlong param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 180049110-180049151
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049110(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_180047208(param_1);
  FUN_180047348(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004914b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x1c0))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

