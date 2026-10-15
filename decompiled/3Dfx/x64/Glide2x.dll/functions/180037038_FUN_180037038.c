/*
 * FUN_180037038 at 180037038
 * undefined __fastcall FUN_180037038(longlong param_1)
 * Address ranges: 180037038-18003707c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180037038(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x10))();
    *(undefined8 *)(param_1 + 0x168) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}

