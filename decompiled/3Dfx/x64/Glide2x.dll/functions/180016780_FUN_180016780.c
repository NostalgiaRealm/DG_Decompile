/*
 * FUN_180016780 at 180016780
 * undefined __fastcall FUN_180016780(longlong param_1, uint param_2)
 * Address ranges: 180016780-1800167d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016780(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    uVar2 = 7;
    if ((int)param_2 < 8) {
      uVar2 = param_2;
    }
    if (uVar2 != *(byte *)((longlong)plVar1 + 0x114)) {
      (**(code **)(*plVar1 + 0x138))(plVar1,uVar2);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x114) = (char)uVar2;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

