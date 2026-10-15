/*
 * FUN_180016828 at 180016828
 * undefined __fastcall FUN_180016828(longlong param_1, ulonglong param_2)
 * Address ranges: 180016828-18001687d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016828(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar1 = FUN_18001e1d4((longlong)plVar2,param_2);
    if ((int)uVar1 != *(int *)((longlong)plVar2 + 0x10a)) {
      (**(code **)(*plVar2 + 0x158))(plVar2,uVar1 & 0xffffffff);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x10a) = (int)uVar1;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

