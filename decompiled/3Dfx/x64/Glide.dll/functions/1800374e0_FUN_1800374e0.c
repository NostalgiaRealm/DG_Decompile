/*
 * FUN_1800374e0 at 1800374e0
 * undefined __fastcall FUN_1800374e0(longlong param_1)
 * Address ranges: 1800374e0-180037524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800374e0(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x10))();
    *(undefined8 *)(param_1 + 0x168) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}

