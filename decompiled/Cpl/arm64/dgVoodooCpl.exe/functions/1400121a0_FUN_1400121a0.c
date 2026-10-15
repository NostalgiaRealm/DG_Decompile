/*
 * FUN_1400121a0 at 1400121a0
 * undefined __cdecl FUN_1400121a0(longlong param_1)
 * Address ranges: 1400121a0-1400121a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400121a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    DAT_14002c2c8 = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  return;
}

