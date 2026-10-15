/*
 * FUN_180007d9c at 180007d9c
 * undefined __fastcall FUN_180007d9c(longlong param_1, ulonglong param_2, undefined1 param_3)
 * Address ranges: 180007d9c-180007de2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007d9c(longlong param_1,ulonglong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar2 = *(longlong **)(param_1 + 0x18);
    lVar3 = *plVar2;
    uVar1 = FUN_18000acc4((longlong)plVar2,param_2);
    (**(code **)(lVar3 + 0xd8))(plVar2,uVar1 & 0xffffffff,param_3);
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

