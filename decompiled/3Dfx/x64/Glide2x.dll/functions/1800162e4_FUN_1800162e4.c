/*
 * FUN_1800162e4 at 1800162e4
 * undefined __fastcall FUN_1800162e4(longlong param_1, ulonglong param_2, undefined1 param_3)
 * Address ranges: 1800162e4-18001632a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800162e4(longlong param_1,ulonglong param_2,undefined1 param_3)

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
    uVar1 = FUN_18001e1d4((longlong)plVar2,param_2);
    (**(code **)(lVar3 + 0xb8))(plVar2,uVar1 & 0xffffffff,param_3);
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

