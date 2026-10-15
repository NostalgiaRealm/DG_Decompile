/*
 * FUN_18004b214 at 18004b214
 * undefined __fastcall FUN_18004b214(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 18004b214-18004b270
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b214(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_180049814(param_1);
  FUN_180049954(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_180049904(param_1);
  return;
}

