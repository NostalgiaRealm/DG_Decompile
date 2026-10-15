/*
 * FUN_18005f020 at 18005f020
 * undefined __fastcall FUN_18005f020(longlong param_1)
 * Address ranges: 18005f020-18005f04a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f020(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

