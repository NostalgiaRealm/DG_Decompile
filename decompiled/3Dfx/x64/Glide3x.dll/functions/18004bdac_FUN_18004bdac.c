/*
 * FUN_18004bdac at 18004bdac
 * undefined __fastcall FUN_18004bdac(longlong param_1, undefined8 param_2)
 * Address ranges: 18004bdac-18004bdde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bdac(longlong param_1,undefined8 param_2)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004bdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x270))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

