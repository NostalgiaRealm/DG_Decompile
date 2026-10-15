/*
 * FUN_18004c4c8 at 18004c4c8
 * undefined __cdecl FUN_18004c4c8(longlong param_1, int param_2)
 * Address ranges: 18004c4c8-18004c50f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c4c8(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_18004b680(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

