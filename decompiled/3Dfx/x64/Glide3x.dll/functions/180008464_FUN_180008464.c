/*
 * FUN_180008464 at 180008464
 * undefined __fastcall FUN_180008464(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 180008464-180008543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008464(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0x15e)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0x15f))) || (param_4 != *(byte *)(plVar1 + 0x2c)))
       || ((param_5 != *(byte *)((longlong)plVar1 + 0x161) ||
           (param_6 != *(int *)((longlong)plVar1 + 0x162))))) {
      (**(code **)(*plVar1 + 0x198))();
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15e) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15f) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x160) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x161) = (char)param_5;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x162) = param_6;
      FUN_18000791c(param_1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2a4) = 0;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

