/*
 * FUN_180049c04 at 180049c04
 * undefined __fastcall FUN_180049c04(longlong param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 180049c04-180049c44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049c04(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180049c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x268))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

