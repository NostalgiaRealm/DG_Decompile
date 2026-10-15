/*
 * FUN_180016678 at 180016678
 * undefined __fastcall FUN_180016678(longlong param_1, int param_2)
 * Address ranges: 180016678-1800166c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016678(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x139)) {
      (**(code **)(*plVar1 + 0x128))(plVar1,param_2 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x139) = param_2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

