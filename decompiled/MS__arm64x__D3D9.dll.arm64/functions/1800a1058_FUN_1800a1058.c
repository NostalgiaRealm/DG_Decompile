/*
 * FUN_1800a1058 at 1800a1058
 * undefined FUN_1800a1058(void)
 * Address ranges: 1800a1058-1800a125b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1058(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_100 [2];
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [8];
  uint local_a8;
  uint uStack_a4;
  undefined1 auStack_90 [8];
  uint local_88;
  uint uStack_84;
  
  lVar9 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x28);
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar9 + 0x620);
  local_100[0] = (longlong *)0x0;
  if (param_3 == 0) {
    uVar8 = 0x3c;
    uVar7 = 1;
    plVar5 = *(longlong **)(lVar9 + (ulonglong)uVar1 * 0x28 + 0x18);
    iVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2 & 0xffffffff,local_100);
    if (-1 < iVar3) {
      local_c0 = 0x10000001c;
      local_d0 = 0;
      uStack_c8 = 0;
      local_b8 = 0;
      iVar3 = (**(code **)(*local_100[0] + 0x48))(local_100[0],&local_d0,auStack_b0,0);
      if (-1 < iVar3) {
        uVar8 = (ulonglong)local_a8;
        uVar7 = (ulonglong)uStack_a4;
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(param_3 + 8) + 0x60))(*(longlong **)(param_3 + 8),auStack_90);
    uVar8 = (ulonglong)local_88;
    uVar7 = (ulonglong)uStack_84;
    (**(code **)(**(longlong **)(param_3 + 8) + 0x78))(*(longlong **)(param_3 + 8),local_100);
  }
  if (local_100[0] == (longlong *)0x0) {
    plVar5 = &lStack_e8;
    pcVar2 = __imp_KERNEL32_dll_QueryPerformanceCounter;
  }
  else {
    (*__imp_KERNEL32_dll_GetCurrentThread)();
    uVar4 = (*__imp_KERNEL32_dll_GetThreadPriority)();
    uVar6 = (*__imp_KERNEL32_dll_GetCurrentThread)();
    (*__imp_KERNEL32_dll_SetThreadPriority)(uVar6,0xf);
    (**(code **)(*local_100[0] + 0x50))();
    (**(code **)(*local_100[0] + 0x50))();
    (**(code **)(*local_100[0] + 0x50))();
    (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&lStack_e8);
    uVar6 = (*__imp_KERNEL32_dll_GetCurrentThread)();
    (*__imp_KERNEL32_dll_SetThreadPriority)(uVar6,uVar4);
    plVar5 = local_100[0];
    pcVar2 = *(code **)(*local_100[0] + 0x10);
  }
  (*pcVar2)(plVar5);
  (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(local_e0);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1800a1210);
    (*pcVar2)();
  }
  local_f0 = 0;
  if (uVar8 != 0) {
    local_f0 = (longlong)(uVar7 * local_e0[0]) / (longlong)uVar8;
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar9 + 0x620);
  param_1 = param_1 + (param_2 & 0xffffffff) * 0xc18;
  *(longlong *)(param_1 + 0x10cc8) = lStack_e8;
  *(longlong *)(param_1 + 0x10cc0) = local_f0;
  *(longlong *)(param_1 + 0x10cd0) = local_e0[0];
  return;
}

