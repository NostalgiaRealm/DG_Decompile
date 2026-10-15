/*
 * FUN_180008110 at 180008110
 * undefined __fastcall FUN_180008110(longlong param_1, uint param_2)
 * Address ranges: 180008110-18000815a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008110(longlong param_1,uint param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 != *(byte *)((longlong)*(longlong **)(param_1 + 0x18) + 0x137)) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))();
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x137) = (char)param_2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

