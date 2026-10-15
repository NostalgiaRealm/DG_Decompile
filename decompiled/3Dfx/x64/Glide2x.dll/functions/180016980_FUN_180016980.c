/*
 * FUN_180016980 at 180016980
 * undefined __fastcall FUN_180016980(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 180016980-180016a51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016980(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0x159)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0x15a))) ||
        (param_4 != *(byte *)((longlong)plVar1 + 0x15b))) ||
       ((param_5 != *(byte *)((longlong)plVar1 + 0x15c) ||
        (param_6 != *(int *)((longlong)plVar1 + 0x15d))))) {
      (**(code **)(*plVar1 + 0x178))();
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x159) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15a) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15b) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15c) = (char)param_5;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x15d) = param_6;
      FUN_180015fec(param_1);
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

