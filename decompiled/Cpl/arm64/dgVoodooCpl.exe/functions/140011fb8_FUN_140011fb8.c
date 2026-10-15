/*
 * FUN_140011fb8 at 140011fb8
 * undefined __cdecl FUN_140011fb8(longlong param_1)
 * Address ranges: 140011fb8-140011ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140011fb8(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x21) = uVar1;
  }
  return;
}

