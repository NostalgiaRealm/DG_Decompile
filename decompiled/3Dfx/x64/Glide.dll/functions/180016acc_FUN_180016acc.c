/*
 * FUN_180016acc at 180016acc
 * undefined __fastcall FUN_180016acc(longlong param_1, uint param_2)
 * Address ranges: 180016acc-180016b16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016acc(longlong param_1,uint param_2)

{
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 != *(byte *)((longlong)*(longlong **)(param_1 + 0x18) + 0x137)) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x120))();
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x137) = (char)param_2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

