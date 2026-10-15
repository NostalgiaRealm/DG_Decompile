/*
 * FUN_180062d98 at 180062d98
 * undefined __cdecl FUN_180062d98(longlong param_1)
 * Address ranges: 180062d98-180062d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180062d98(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

