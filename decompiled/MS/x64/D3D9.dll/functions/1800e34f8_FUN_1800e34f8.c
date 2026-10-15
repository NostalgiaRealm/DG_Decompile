/*
 * FUN_1800e34f8 at 1800e34f8
 * undefined __fastcall FUN_1800e34f8(longlong param_1, int param_2)
 * Address ranges: 1800e34f8-1800e3530
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e34f8(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

