/*
 * FUN_18004a678 at 18004a678
 * undefined __fastcall FUN_18004a678(longlong param_1, int param_2)
 * Address ranges: 18004a678-18004a6b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a678(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

