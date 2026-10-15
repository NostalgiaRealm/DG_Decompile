/*
 * FUN_180046768 at 180046768
 * undefined8 __cdecl FUN_180046768(longlong * param_1, ulonglong param_2)
 * Address ranges: 180046768-180046843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180046768(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong extraout_x15;
  undefined8 uVar4;
  uint local_30 [2];
  ulonglong local_28;
  
  local_30[0] = 0;
  local_28 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar4 = 1;
  lVar1 = FUN_1800468c8(param_1,&local_28);
  if (lVar1 != 0) {
    puVar2 = FUN_180046aa0(lVar1 + 8,local_30);
    if (puVar2 == (ulonglong *)0x0) {
      local_30[0] = 0xffffffff;
      puVar2 = FUN_180046aa0(extraout_x15 + 8,local_30);
      if (puVar2 == (ulonglong *)0x0) goto LAB_180046820;
    }
    if ((*(int *)((longlong)puVar2 + 0x14) == 0) || (*(int *)(*puVar2 + 0x30) == 3)) {
      uVar3 = (**(code **)(**(longlong **)(*puVar2 + 0x18) + 0x40))();
      uVar4 = 1;
      if (puVar2[3] <= uVar3) goto LAB_180046820;
    }
    uVar4 = 0;
  }
LAB_180046820:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar4;
}

