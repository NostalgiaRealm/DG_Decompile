/*
 * FUN_18000815c at 18000815c
 * undefined __fastcall FUN_18000815c(longlong param_1, int param_2)
 * Address ranges: 18000815c-1800081a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000815c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x139)) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x139) = param_2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

