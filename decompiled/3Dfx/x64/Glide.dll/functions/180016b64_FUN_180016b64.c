/*
 * FUN_180016b64 at 180016b64
 * undefined __fastcall FUN_180016b64(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 180016b64-180016c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016b64(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    uVar2 = 0;
    if ((int)param_2 < 0x10) {
      uVar2 = param_2;
    }
    uVar3 = 0;
    if ((int)param_3 < 0x10) {
      uVar3 = param_3;
    }
    if ((((uVar2 != *(byte *)((longlong)plVar1 + 0xf2)) ||
         (uVar3 != *(byte *)((longlong)plVar1 + 0xf3))) ||
        (param_4 != *(byte *)((longlong)plVar1 + 0xf4))) ||
       (param_5 != *(byte *)((longlong)plVar1 + 0xf5))) {
      (**(code **)(*plVar1 + 0x130))(plVar1,uVar2,uVar3,param_4,param_5);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf2) = (char)uVar2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf3) = (char)uVar3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf4) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf5) = (char)param_5;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

