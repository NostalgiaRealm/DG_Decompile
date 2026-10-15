/*
 * FUN_18004a2f8 at 18004a2f8
 * undefined8 __cdecl FUN_18004a2f8(longlong * param_1, ulonglong param_2)
 * Address ranges: 18004a2f8-18004a3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004a2f8(longlong *param_1,ulonglong param_2)

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
  lVar1 = FUN_18004a458(param_1,&local_28);
  if (lVar1 != 0) {
    puVar2 = FUN_18004a630(lVar1 + 8,local_30);
    if (puVar2 == (ulonglong *)0x0) {
      local_30[0] = 0xffffffff;
      puVar2 = FUN_18004a630(extraout_x15 + 8,local_30);
      if (puVar2 == (ulonglong *)0x0) goto LAB_18004a3b0;
    }
    if ((*(int *)((longlong)puVar2 + 0x14) == 0) || (*(int *)(*puVar2 + 0x30) == 3)) {
      uVar3 = (**(code **)(**(longlong **)(*puVar2 + 0x18) + 0x40))();
      uVar4 = 1;
      if (puVar2[3] <= uVar3) goto LAB_18004a3b0;
    }
    uVar4 = 0;
  }
LAB_18004a3b0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar4;
}

