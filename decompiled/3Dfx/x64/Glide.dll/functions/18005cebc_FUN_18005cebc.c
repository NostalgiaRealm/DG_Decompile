/*
 * FUN_18005cebc at 18005cebc
 * undefined __fastcall FUN_18005cebc(longlong param_1)
 * Address ranges: 18005cebc-18005cee6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005cebc(longlong param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

