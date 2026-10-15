/*
 * FUN_18004ad14 at 18004ad14
 * undefined __fastcall FUN_18004ad14(longlong param_1, int param_2)
 * Address ranges: 18004ad14-18004ad52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ad14(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xc0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}

