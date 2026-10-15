/*
 * FUN_1800221b0 at 1800221b0
 * undefined8 __cdecl FUN_1800221b0(longlong param_1)
 * Address ranges: 1800221b0-1800223db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800221b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  HANDLE pvVar7;
  LARGE_INTEGER *pLVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  LARGE_INTEGER *local_f0 [2];
  longlong local_e0;
  LARGE_INTEGER LStack_d8;
  LARGE_INTEGER local_d0 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [8];
  uint local_98;
  uint uStack_94;
  undefined1 auStack_80 [8];
  uint local_78;
  uint uStack_74;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar9 = *(longlong *)(lVar1 + 0x2978);
  uVar10 = (ulonglong)*(uint *)(lVar1 + 0xc4);
  uVar11 = (ulonglong)*(uint *)(lVar1 + 200);
  uVar3 = *(uint *)(lVar1 + 0x2980);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x620));
  local_f0[0] = (LARGE_INTEGER *)0x0;
  if (lVar2 == 0) {
    plVar6 = *(longlong **)(lVar9 + (ulonglong)uVar3 * 0x28 + 0x18);
    iVar5 = (**(code **)(*plVar6 + 0x38))(plVar6,0,local_f0);
    if (-1 < iVar5) {
      local_b0 = 0x10000001c;
      local_c0 = 0;
      uStack_b8 = 0;
      local_a8 = 0;
      iVar5 = (**(code **)(local_f0[0]->QuadPart + 0x48))(local_f0[0],&local_c0,auStack_a0,0);
      if (-1 < iVar5) {
        uVar10 = (ulonglong)local_98;
        uVar11 = (ulonglong)uStack_94;
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x60))(*(longlong **)(lVar2 + 8),auStack_80);
    uVar10 = (ulonglong)local_78;
    uVar11 = (ulonglong)uStack_74;
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x78))(*(longlong **)(lVar2 + 8),local_f0);
  }
  if (local_f0[0] == (LARGE_INTEGER *)0x0) {
    pLVar8 = &LStack_d8;
    pcVar4 = QueryPerformanceCounter_exref;
  }
  else {
    pvVar7 = GetCurrentThread();
    iVar5 = GetThreadPriority(pvVar7);
    pvVar7 = GetCurrentThread();
    SetThreadPriority(pvVar7,0xf);
    (**(code **)(local_f0[0]->QuadPart + 0x50))();
    (**(code **)(local_f0[0]->QuadPart + 0x50))();
    (**(code **)(local_f0[0]->QuadPart + 0x50))();
    QueryPerformanceCounter(&LStack_d8);
    pvVar7 = GetCurrentThread();
    SetThreadPriority(pvVar7,iVar5);
    pLVar8 = local_f0[0];
    pcVar4 = *(code **)(local_f0[0]->QuadPart + 0x10);
  }
  (*pcVar4)(pLVar8);
  QueryPerformanceFrequency(local_d0);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18002235c);
    (*pcVar4)();
  }
  local_e0 = 0;
  if (uVar10 != 0) {
    local_e0 = (longlong)(uVar11 * local_d0[0].QuadPart) / (longlong)uVar10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x620));
  *(LARGE_INTEGER *)(param_1 + 0x20) = LStack_d8;
  *(longlong *)(param_1 + 0x18) = local_e0;
  ((LARGE_INTEGER *)(param_1 + 0x28))->QuadPart = (LONGLONG)local_d0[0];
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x20);
  return 1;
}

