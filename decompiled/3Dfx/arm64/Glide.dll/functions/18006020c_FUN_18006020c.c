/*
 * FUN_18006020c at 18006020c
 * undefined __cdecl FUN_18006020c(longlong param_1)
 * Address ranges: 18006020c-180060247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006020c(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

