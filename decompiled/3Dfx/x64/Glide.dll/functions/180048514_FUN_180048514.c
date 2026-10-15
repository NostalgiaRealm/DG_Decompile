/*
 * FUN_180048514 at 180048514
 * undefined __fastcall FUN_180048514(longlong param_1, int param_2)
 * Address ranges: 180048514-18004854c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048514(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

