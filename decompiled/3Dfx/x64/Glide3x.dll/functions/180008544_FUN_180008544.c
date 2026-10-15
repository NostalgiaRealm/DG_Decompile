/*
 * FUN_180008544 at 180008544
 * undefined __fastcall FUN_180008544(longlong param_1, int param_2, int param_3)
 * Address ranges: 180008544-1800085b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008544(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((param_2 != *(int *)((longlong)plVar1 + 299)) ||
       (param_3 != *(int *)((longlong)plVar1 + 0x12f))) {
      (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2 != 0,param_3 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 299) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x12f) = param_3;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

