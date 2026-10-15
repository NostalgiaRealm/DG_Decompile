/*
 * FUN_1001b729 at 1001b729
 * undefined __fastcall FUN_1001b729(int param_1)
 * Address ranges: 1001b729-1001b758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b729(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_1004939f(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_1001540f((void *)(param_1 + 0x48),1,1);
  return;
}

