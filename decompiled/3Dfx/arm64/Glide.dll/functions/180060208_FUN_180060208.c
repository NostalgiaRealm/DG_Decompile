/*
 * FUN_180060208 at 180060208
 * undefined __cdecl FUN_180060208(longlong param_1)
 * Address ranges: 180060208-18006020b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060208(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

