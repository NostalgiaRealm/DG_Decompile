/*
 * FUN_1800f2288 at 1800f2288
 * undefined FUN_1800f2288(void)
 * Address ranges: 1800f2288-1800f231f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800f2288(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 0;
  local_28 = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  bVar1 = true;
  lVar2 = FUN_1800f2540(param_1,&local_28);
  if ((lVar2 != 0) &&
     (plVar3 = (longlong *)FUN_1800f2718(lVar2 + 8,local_30), plVar3 != (longlong *)0x0)) {
    uVar4 = (**(code **)(**(longlong **)(*plVar3 + 0x18) + 0x40))();
    bVar1 = (ulonglong)plVar3[3] <= uVar4;
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return bVar1;
}

