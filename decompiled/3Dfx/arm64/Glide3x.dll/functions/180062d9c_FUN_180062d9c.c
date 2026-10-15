/*
 * FUN_180062d9c at 180062d9c
 * undefined __cdecl FUN_180062d9c(longlong param_1)
 * Address ranges: 180062d9c-180062dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180062d9c(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

