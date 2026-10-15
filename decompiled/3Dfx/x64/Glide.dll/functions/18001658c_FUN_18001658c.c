/*
 * FUN_18001658c at 18001658c
 * undefined __fastcall FUN_18001658c(longlong param_1, undefined1 param_2)
 * Address ranges: 18001658c-1800165cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001658c(longlong param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0xf0) = param_2;
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

