/*
 * FUN_1800475b8 at 1800475b8
 * undefined8 __cdecl FUN_1800475b8(longlong * param_1, ulonglong param_2)
 * Address ranges: 1800475b8-180047693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800475b8(longlong *param_1,ulonglong param_2)

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
  lVar1 = FUN_180047718(param_1,&local_28);
  if (lVar1 != 0) {
    puVar2 = FUN_1800478f0(lVar1 + 8,local_30);
    if (puVar2 == (ulonglong *)0x0) {
      local_30[0] = 0xffffffff;
      puVar2 = FUN_1800478f0(extraout_x15 + 8,local_30);
      if (puVar2 == (ulonglong *)0x0) goto LAB_180047670;
    }
    if ((*(int *)((longlong)puVar2 + 0x14) == 0) || (*(int *)(*puVar2 + 0x30) == 3)) {
      uVar3 = (**(code **)(**(longlong **)(*puVar2 + 0x18) + 0x40))();
      uVar4 = 1;
      if (puVar2[3] <= uVar3) goto LAB_180047670;
    }
    uVar4 = 0;
  }
LAB_180047670:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar4;
}

