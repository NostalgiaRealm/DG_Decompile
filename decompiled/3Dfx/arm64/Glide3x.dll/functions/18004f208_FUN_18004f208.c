/*
 * FUN_18004f208 at 18004f208
 * undefined __cdecl FUN_18004f208(longlong param_1, int param_2)
 * Address ranges: 18004f208-18004f24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f208(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

