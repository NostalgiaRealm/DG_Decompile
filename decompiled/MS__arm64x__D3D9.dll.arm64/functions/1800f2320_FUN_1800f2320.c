/*
 * FUN_1800f2320 at 1800f2320
 * undefined FUN_1800f2320(void)
 * Address ranges: 1800f2320-1800f23fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f2320(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong extraout_x15;
  undefined8 uVar4;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = param_3;
  local_28 = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  uVar4 = 1;
  lVar1 = FUN_1800f2540(param_1,&local_28);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1800f2718(lVar1 + 8,local_30);
    if (plVar2 == (longlong *)0x0) {
      local_30[0] = 0xffffffff;
      plVar2 = (longlong *)FUN_1800f2718(extraout_x15 + 8,local_30);
      if (plVar2 == (longlong *)0x0) goto LAB_1800f23d8;
    }
    if ((*(int *)((longlong)plVar2 + 0x14) == 0) || (*(int *)(*plVar2 + 0x30) == 3)) {
      uVar3 = (**(code **)(**(longlong **)(*plVar2 + 0x18) + 0x40))();
      uVar4 = 1;
      if ((ulonglong)plVar2[3] <= uVar3) goto LAB_1800f23d8;
    }
    uVar4 = 0;
  }
LAB_1800f23d8:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return uVar4;
}

