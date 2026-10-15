/*
 * FUN_18001fd5c at 18001fd5c
 * undefined8 __fastcall FUN_18001fd5c(longlong param_1)
 * Address ranges: 18001fd5c-18001ff44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001fd5c(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  HANDLE pvVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong *local_res8 [4];
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined1 local_c0 [8];
  uint local_b8;
  uint local_b4;
  undefined1 local_98 [8];
  uint local_90;
  uint local_8c;
  
  lVar7 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar7 + 0x2978);
  uVar10 = *(uint *)(lVar7 + 200);
  uVar9 = *(uint *)(lVar7 + 0xc4);
  uVar1 = *(uint *)(lVar7 + 0x2980);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x620);
  EnterCriticalSection(lpCriticalSection);
  local_res8[0] = (longlong *)0x0;
  if (lVar2 == 0) {
    plVar4 = *(longlong **)(lVar3 + 0x18 + (ulonglong)uVar1 * 0x28);
    iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,0,local_res8);
    if (-1 < iVar5) {
      local_d0 = 0x1c;
      local_e0 = 0;
      uStack_d8 = 0;
      local_cc = 1;
      iVar5 = (**(code **)(*local_res8[0] + 0x48))(local_res8[0],&local_e0,local_c0,0);
      if (-1 < iVar5) {
        uVar10 = local_b4;
        uVar9 = local_b8;
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x60))(*(longlong **)(lVar2 + 8),local_98);
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x78))(*(longlong **)(lVar2 + 8),local_res8);
    uVar10 = local_8c;
    uVar9 = local_90;
  }
  if (local_res8[0] == (longlong *)0x0) {
    QueryPerformanceCounter(&local_f0);
  }
  else {
    pvVar6 = GetCurrentThread();
    iVar5 = GetThreadPriority(pvVar6);
    pvVar6 = GetCurrentThread();
    SetThreadPriority(pvVar6,0xf);
    (**(code **)(*local_res8[0] + 0x50))();
    (**(code **)(*local_res8[0] + 0x50))();
    (**(code **)(*local_res8[0] + 0x50))();
    QueryPerformanceCounter(&local_f0);
    pvVar6 = GetCurrentThread();
    SetThreadPriority(pvVar6,iVar5);
    (**(code **)(*local_res8[0] + 0x10))();
  }
  QueryPerformanceFrequency(&local_e8);
  lVar7 = (ulonglong)uVar10 * local_e8.QuadPart;
  LeaveCriticalSection(lpCriticalSection);
  *(longlong *)(param_1 + 0x18) = lVar7 / (longlong)(ulonglong)uVar9;
  *(LARGE_INTEGER *)(param_1 + 0x20) = local_f0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x20);
  ((LARGE_INTEGER *)(param_1 + 0x28))->QuadPart = (LONGLONG)local_e8;
  FUN_18005f374((undefined1 *)(param_1 + 0x50),0,0x68);
  puVar8 = FUN_18005f374((undefined1 *)(param_1 + 0xb8),0,0x70);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}

