/*
 * FUN_18004806c at 18004806c
 * undefined __fastcall FUN_18004806c(longlong param_1, int param_2)
 * Address ranges: 18004806c-1800480a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004806c(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

