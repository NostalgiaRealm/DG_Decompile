/*
 * FUN_18001662c at 18001662c
 * undefined __fastcall FUN_18001662c(longlong param_1, uint param_2)
 * Address ranges: 18001662c-180016676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001662c(longlong param_1,uint param_2)

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

