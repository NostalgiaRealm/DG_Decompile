/*
 * FUN_18004bd68 at 18004bd68
 * undefined __fastcall FUN_18004bd68(longlong param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 18004bd68-18004bda8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bd68(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_180049954(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018004bda2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x268))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  return;
}

