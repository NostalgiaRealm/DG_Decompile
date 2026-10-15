/*
 * FUN_18005ca14 at 18005ca14
 * undefined __fastcall FUN_18005ca14(longlong param_1)
 * Address ranges: 18005ca14-18005ca3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ca14(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

