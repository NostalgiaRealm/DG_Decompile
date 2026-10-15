/*
 * FUN_1800474d0 at 1800474d0
 * ulonglong __cdecl FUN_1800474d0(longlong * param_1, ulonglong param_2)
 * Address ranges: 1800474d0-1800475b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800474d0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_30 [2];
  
  uVar5 = 1;
  local_30[0] = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  lVar2 = FUN_180047718(param_1,local_30);
  if (lVar2 != 0) {
    local_30[0] = local_30[0] & 0xffffffff00000000;
    puVar3 = FUN_1800478f0(lVar2 + 8,(uint *)local_30);
    if ((puVar3 != (ulonglong *)0x0) &&
       (uVar4 = (**(code **)(**(longlong **)(*puVar3 + 0x18) + 0x40))(), uVar4 < puVar3[3])) {
      if (puVar3[1] != 0xffffffffffffffff) {
        uVar4 = FUN_18004baf0(puVar3[1] + 8,0);
        uVar5 = uVar4 & 0xff;
        if ((uVar4 & 0xff) == 0) goto LAB_180047594;
      }
      plVar1 = *(longlong **)(*puVar3 + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1,puVar3[3],*(undefined8 *)(*puVar3 + 0x20));
      WaitForSingleObject(*(HANDLE *)(*puVar3 + 0x20),0xffffffff);
    }
  }
LAB_180047594:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar5;
}

