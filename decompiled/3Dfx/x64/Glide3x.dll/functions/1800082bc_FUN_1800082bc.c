/*
 * FUN_1800082bc at 1800082bc
 * undefined __fastcall FUN_1800082bc(longlong param_1, int param_2)
 * Address ranges: 1800082bc-180008308
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800082bc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x10e)) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 == 1);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x10e) = param_2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

