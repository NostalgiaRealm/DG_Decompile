/*
 * FUN_18000830c at 18000830c
 * undefined __fastcall FUN_18000830c(longlong param_1, ulonglong param_2)
 * Address ranges: 18000830c-180008361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000830c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar2 = *(longlong **)(param_1 + 0x18);
    uVar1 = FUN_18000acc4((longlong)plVar2,param_2);
    if ((int)uVar1 != *(int *)((longlong)plVar2 + 0x10a)) {
      (**(code **)(*plVar2 + 0x178))(plVar2,uVar1 & 0xffffffff);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x10a) = (int)uVar1;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

