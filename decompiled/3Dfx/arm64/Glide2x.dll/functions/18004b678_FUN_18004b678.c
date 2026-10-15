/*
 * FUN_18004b678 at 18004b678
 * undefined __cdecl FUN_18004b678(longlong param_1, int param_2)
 * Address ranges: 18004b678-18004b6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b678(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_18004a830(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

