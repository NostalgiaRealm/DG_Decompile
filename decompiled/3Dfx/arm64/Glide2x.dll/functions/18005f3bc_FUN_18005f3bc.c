/*
 * FUN_18005f3bc at 18005f3bc
 * undefined __cdecl FUN_18005f3bc(longlong param_1)
 * Address ranges: 18005f3bc-18005f3f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f3bc(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

