/*
 * FUN_180008670 at 180008670
 * undefined __fastcall FUN_180008670(longlong param_1, uint param_2)
 * Address ranges: 180008670-1800086ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008670(longlong param_1,uint param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 != *(ushort *)((longlong)*(longlong **)(param_1 + 0x18) + 0x141)) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1c8))();
      *(short *)(*(longlong *)(param_1 + 0x18) + 0x141) = (short)param_2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

