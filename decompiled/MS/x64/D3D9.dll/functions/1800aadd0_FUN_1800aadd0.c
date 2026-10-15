/*
 * FUN_1800aadd0 at 1800aadd0
 * undefined __fastcall FUN_1800aadd0(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 1800aadd0-1800aaf8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aadd0(longlong param_1,ulonglong param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  HANDLE pvVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *local_res8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined1 local_b0 [8];
  uint local_a8;
  uint local_a4;
  undefined1 local_88 [8];
  uint local_80;
  uint local_7c;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x28);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x620);
  EnterCriticalSection(lpCriticalSection);
  local_res8 = (longlong *)0x0;
  if (param_3 == 0) {
    uVar6 = 1;
    plVar1 = *(longlong **)(lVar4 + 0x18 + (ulonglong)uVar7 * 0x28);
    uVar7 = 0x3c;
    iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2 & 0xffffffff,&local_res8);
    if (-1 < iVar2) {
      local_c0 = 0x1c;
      local_d0 = 0;
      uStack_c8 = 0;
      local_bc = 1;
      iVar2 = (**(code **)(*local_res8 + 0x48))(local_res8,&local_d0,local_b0,0);
      if (-1 < iVar2) {
        uVar6 = (ulonglong)local_a4;
        uVar7 = local_a8;
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(param_3 + 8) + 0x60))(*(longlong **)(param_3 + 8),local_88);
    uVar6 = (ulonglong)local_7c;
    (**(code **)(**(longlong **)(param_3 + 8) + 0x78))(*(longlong **)(param_3 + 8),&local_res8);
    uVar7 = local_80;
  }
  if (local_res8 == (longlong *)0x0) {
    QueryPerformanceCounter(&local_e0);
  }
  else {
    pvVar3 = GetCurrentThread();
    iVar2 = GetThreadPriority(pvVar3);
    pvVar3 = GetCurrentThread();
    SetThreadPriority(pvVar3,0xf);
    (**(code **)(*local_res8 + 0x50))();
    (**(code **)(*local_res8 + 0x50))();
    (**(code **)(*local_res8 + 0x50))();
    QueryPerformanceCounter(&local_e0);
    pvVar3 = GetCurrentThread();
    SetThreadPriority(pvVar3,iVar2);
    (**(code **)(*local_res8 + 0x10))();
  }
  QueryPerformanceFrequency(&local_d8);
  lVar4 = uVar6 * local_d8.QuadPart;
  LeaveCriticalSection(lpCriticalSection);
  lVar5 = (param_2 & 0xffffffff) * 0xc18;
  *(longlong *)(lVar5 + 0x10cc0 + param_1) = lVar4 / (longlong)(ulonglong)uVar7;
  *(LARGE_INTEGER *)(lVar5 + 0x10cc8 + param_1) = local_e0;
  ((LARGE_INTEGER *)(lVar5 + 0x10cd0 + param_1))->QuadPart = (LONGLONG)local_d8;
  return;
}

