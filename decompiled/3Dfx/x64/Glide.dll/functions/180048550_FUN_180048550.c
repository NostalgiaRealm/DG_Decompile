/*
 * FUN_180048550 at 180048550
 * undefined __fastcall FUN_180048550(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180048550-180048589
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048550(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800477f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180048583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x110))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

