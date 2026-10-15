/*
 * FUN_1800162a4 at 1800162a4
 * undefined __fastcall FUN_1800162a4(longlong param_1, undefined1 param_2)
 * Address ranges: 1800162a4-1800162e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800162a4(longlong param_1,undefined1 param_2)

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

