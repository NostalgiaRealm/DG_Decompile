/*
 * FUN_180006d48 at 180006d48
 * undefined4 __fastcall FUN_180006d48(WNDPROC param_1, ulonglong param_2, uint param_3, uint param_4, undefined4 param_5, undefined8 param_6, undefined1 param_7, uint param_8, uint param_9, undefined1 * param_10)
 * Address ranges: 180006d48-180007781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180006d48(WNDPROC param_1,ulonglong param_2,uint param_3,uint param_4,undefined4 param_5,
             undefined8 param_6,undefined1 param_7,uint param_8,uint param_9,undefined1 *param_10)

{
  code *pcVar1;
  int *piVar2;
  LPVOID lpParameter;
  longlong lVar3;
  longlong *plVar4;
  HMODULE hModule;
  HANDLE hHandle;
  bool bVar5;
  char cVar6;
  uint uVar7;
  EXECUTION_STATE EVar8;
  uint uVar9;
  HWND pHVar10;
  ulonglong uVar11;
  HANDLE pvVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  WNDPROC pWVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined8 local_res10;
  uint local_res18;
  undefined4 local_res20;
  undefined4 uVar24;
  uint local_458;
  int local_454;
  int local_450;
  int local_44c;
  HWND local_440;
  CHAR local_438 [1024];
  
  uVar9 = 7;
  if (param_3 != 0xff) {
    uVar9 = param_3;
  }
  uVar19 = 0;
  if (param_4 != 0xff) {
    uVar19 = param_4;
  }
  local_res10 = param_2;
  uVar7 = FUN_1800079d4(param_1);
  if (0xf < uVar9) {
    if ((int)uVar9 < 0x100) {
      return 0;
    }
    if (uVar7 != 4) {
      return 0;
    }
  }
  if (8 < uVar19) {
    if ((int)uVar19 < 0xff) {
      return 0;
    }
    if (uVar7 != 4) {
      return 0;
    }
  }
  if ((int)uVar9 < 0x100) {
    local_res18 = (uint)*(ushort *)(&DAT_18006c230 + (longlong)(int)uVar9 * 4);
    uVar7 = (uint)*(ushort *)(&DAT_18006c232 + (longlong)(int)uVar9 * 4);
  }
  else {
    local_res18 = uVar9 & 0xffff;
    uVar7 = (int)uVar9 >> 0x10;
  }
  if (local_res18 == 0) {
    return 0;
  }
  if (uVar7 == 0) {
    return 0;
  }
  uVar20 = param_9;
  if (param_8 != 0) {
    uVar20 = param_8;
  }
  uVar22 = -(uint)(param_8 != 0) & param_9;
  if ((uVar20 == 1) && ((int)uVar22 < 3)) {
    uVar23 = 2;
    if (1 < (int)uVar22) {
      uVar22 = 1;
    }
  }
  else if ((uVar20 != 2) || (uVar23 = 2, 1 < (int)uVar22)) {
    if (uVar20 != 3) {
      return 0;
    }
    if (1 < (int)uVar22) {
      return 0;
    }
    uVar23 = (uVar22 != 1) + 2;
  }
  pcVar1 = param_1 + 0x30;
  uVar20 = (uVar23 + uVar22) * uVar7 * local_res18 * 2;
  if (0xff < (int)uVar9) {
    uVar20 = 0;
  }
  if (*(uint *)(*(longlong *)pcVar1 + 0x82b) < uVar20) {
    return 0;
  }
  pHVar10 = FUN_180010a74(param_1,(HWND)(local_res10 & 0xffffffff));
  local_440 = pHVar10;
  if (*(int *)(*(longlong *)pcVar1 + 0x8be) == 1) {
    uVar11 = GetWindowLongPtrW(pHVar10,-0x10);
    *(bool *)(*(longlong *)pcVar1 + 0x820) = (uVar11 & 0xc00000) != 0;
  }
  if (pHVar10 == (HWND)0x0) {
    return 0;
  }
  lVar15 = *(longlong *)pcVar1;
  iVar21 = *(int *)(lVar15 + 0x160);
  *(int *)(lVar15 + 0x160) = iVar21 + 1;
  if ((iVar21 == 0) && (*(char *)(lVar15 + 0x825) != '\0')) {
    EVar8 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)(lVar15 + 0x15c) = EVar8;
  }
  lpParameter = *(LPVOID *)pcVar1;
  iVar21 = *(int *)((longlong)lpParameter + 0x370);
  *(int *)((longlong)lpParameter + 0x370) = iVar21 + 1;
  if (iVar21 == 0) {
    *(undefined1 *)((longlong)lpParameter + 0x7e8) = 0;
    DAT_18006da70 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (DAT_18006da70 != (HANDLE)0x0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)((longlong)lpParameter + 0x388));
      pvVar12 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180004724,lpParameter,0,
                             (LPDWORD)((longlong)lpParameter + 0x374));
      hHandle = DAT_18006da70;
      *(HANDLE *)((longlong)lpParameter + 0x378) = pvVar12;
      WaitForSingleObject(hHandle,0xffffffff);
    }
  }
  bVar5 = FUN_180006a64((longlong)param_1);
  if (!bVar5) goto LAB_18000771b;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18) = *(undefined4 *)(param_1 + 0x20);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))(*(longlong **)(param_1 + 0x28),0);
  local_res20 = 0;
  if (0x10 < uVar9) {
    uVar9 = 0x10;
  }
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0x1c) = uVar9;
  if (uVar9 != 0) {
    uVar20 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                (*(longlong **)(param_1 + 0x28),&local_458,*(undefined4 *)(param_1 + 0x20),uVar20);
      uVar11 = (ulonglong)uVar20;
      uVar20 = uVar20 + 1;
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x20 + uVar11 * 8) = local_458;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x24 + uVar11 * 8) = local_454;
    } while (uVar20 < uVar9);
  }
  *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0) = local_440;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0xb0) = local_res18;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0xa8) = local_res18;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0xb4) = uVar7;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0xac) = uVar7;
  lVar15 = *(longlong *)pcVar1;
  uVar9 = *(uint *)(lVar15 + 0x837);
  uVar20 = *(uint *)(lVar15 + 0x83b);
  if ((uVar9 < 0xfffffff8) || (((uVar9 != uVar20 || (uVar9 == 0xfffffff9)) && (0xff < uVar20)))) {
    if ((uVar9 != 0) && (uVar20 != 0)) {
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0xb0) = uVar9;
      local_res10._4_4_ = *(undefined4 *)(*(longlong *)pcVar1 + 0x83b);
      goto LAB_1800070fa;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar3 + 0x1c)) {
      FUN_18000af7c(lVar3,(uint *)&local_res10,*(uint *)(param_1 + 0x24),lVar15 + 0x800);
      *(uint *)(lVar3 + 0xb0) = (uint)local_res10;
LAB_1800070fa:
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xb4) = local_res10._4_4_;
    }
    else {
      *(undefined4 *)(lVar3 + 0xb0) = 0x280;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xb4) = 0x1e0;
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x18);
  local_res10 = *(ulonglong *)(lVar15 + 0xb0);
  lVar13 = *(longlong *)pcVar1 + 0x800;
  FUN_18000afd0(lVar15,&local_458,(ulonglong)*(uint *)(param_1 + 0x24),(uint *)&local_res10,lVar13);
  *(uint *)(lVar15 + 0xb8) = local_458;
  lVar15 = *(longlong *)(param_1 + 0x18);
  *(int *)(lVar15 + 0xbc) = local_454;
  lVar3 = *(longlong *)pcVar1;
  uVar24 = (undefined4)((ulonglong)lVar13 >> 0x20);
  FUN_1800424c4(lVar15,&local_458,(uint *)&local_res10,*(uint *)(lVar3 + 0x8ae),
                *(uint *)(lVar3 + 0x8b2),*(uint *)(lVar3 + 0x8b6),*(uint *)(lVar3 + 0x8ba));
  uVar11 = CONCAT44(uVar24,local_44c);
  SetRect((LPRECT)(*(longlong *)(param_1 + 0x18) + 0xcc),local_458,local_454,local_450,local_44c);
  if ((int)uVar19 < 0x100) {
    iVar21 = *(int *)(&DAT_180062878 + (longlong)(int)uVar19 * 4);
  }
  else {
    iVar21 = (int)uVar19 >> 0x10;
  }
  iVar16 = 1;
  *(int *)(*(longlong *)(param_1 + 0x18) + 0xc0) = iVar21;
  lVar15 = *(longlong *)pcVar1;
  if (((*(char *)(lVar15 + 0x822) != '\0') && (*(int *)(lVar15 + 0x843) != 0)) &&
     (*(int *)(lVar15 + 0x847) != 0)) {
    iVar21 = *(int *)(lVar15 + 0x843);
    iVar16 = *(int *)(lVar15 + 0x847);
  }
  *(int *)(*(longlong *)(param_1 + 0x18) + 0xc4) = iVar21;
  *(int *)(*(longlong *)(param_1 + 0x18) + 200) = iVar16;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0xdc) = uVar23;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0xe0) = uVar22;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xe8) = 0x40;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xe4) = param_5;
  uVar9 = FUN_1800079d4(param_1);
  *(undefined *)(*(longlong *)(param_1 + 0x18) + 0xec) = (&DAT_18006d29a)[(ulonglong)uVar9 * 0x20];
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0xed) = *param_10;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0xee) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x12a) = param_7;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13d) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x11e) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x11a) = 0;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0x122) = local_res18;
  *(uint *)(*(longlong *)(param_1 + 0x18) + 0x126) = uVar7;
  iVar21 = 0;
  uVar9 = *(int *)(*(longlong *)pcVar1 + 0x833) * *(int *)(*(longlong *)pcVar1 + 0x82f);
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x328) == 0) {
    uVar14 = thunk_FUN_180060a9c((ulonglong)uVar9);
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x328) = uVar14;
  }
  uVar19 = (int)*(longlong *)pcVar1 + 0x7f0;
  pHVar10 = (HWND)(*(longlong *)pcVar1 + 0x800);
  pWVar17 = param_1;
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  if (cVar6 != '\0') {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))();
    if (cVar6 == '\0') {
      pHVar10 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
      uVar18 = -(ulonglong)(param_1 != (WNDPROC)0x0) & (ulonglong)(param_1 + 8);
      if (pHVar10 == *(HWND *)(param_1 + 0x48)) {
        pWVar17 = *(WNDPROC *)(param_1 + 0x50);
      }
      else {
        pWVar17 = (WNDPROC)0x0;
      }
      FUN_180004958(*(longlong *)pcVar1,pHVar10,pWVar17,uVar18);
      uVar19 = (uint)uVar18;
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    if ((cVar6 == '\0') != (bool)*(char *)(*(longlong *)pcVar1 + 0x820)) {
      FUN_180010c8c((longlong)param_1,pHVar10,pWVar17,uVar19);
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))();
    if (cVar6 != '\0') {
      if (*(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0) == *(HWND *)(param_1 + 0x48)) {
        uVar14 = *(undefined8 *)(param_1 + 0x50);
      }
      else {
        uVar14 = 0;
      }
      FUN_180004958(*(longlong *)pcVar1,*(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0),uVar14,
                    -(ulonglong)(param_1 != (WNDPROC)0x0) & (ulonglong)(param_1 + 8));
    }
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar4[0x65] != 0) {
      (**(code **)(*plVar4 + 0x290))(plVar4,plVar4[0x65],0,uVar9);
    }
    uVar24 = (undefined4)(uVar11 >> 0x20);
    if (0 < *(int *)(*(longlong *)pcVar1 + 0x833)) {
      do {
        plVar4 = *(longlong **)(param_1 + 0x18);
        lVar15 = (longlong)iVar21;
        uVar11 = uVar11 & 0xffffffff00000000;
        (**(code **)(*plVar4 + 0x2b8))(plVar4,iVar21,0,plVar4 + lVar15 * 0x9d + 0x67,uVar11,0x100);
        plVar4 = *(longlong **)(param_1 + 0x18);
        uVar11 = uVar11 & 0xffffffff00000000;
        (**(code **)(*plVar4 + 0x2b8))(plVar4,iVar21,1,plVar4 + lVar15 * 0x9d + 0x75,uVar11,0x100);
        plVar4 = *(longlong **)(param_1 + 0x18);
        uVar11 = uVar11 & 0xffffffff00000000;
        (**(code **)(*plVar4 + 0x2b8))(plVar4,iVar21,2,plVar4 + lVar15 * 0x9d + 0x83,uVar11,0x100);
        uVar24 = (undefined4)(uVar11 >> 0x20);
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)(*(longlong *)pcVar1 + 0x833));
    }
    param_1[100] = (code)0x1;
    FUN_180007b20((longlong)param_1,(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0),'\x01');
    if ((uVar23 < 3) && (FUN_180008110((longlong)param_1,2), param_1[100] != (WNDPROC)0x0)) {
      LOCK();
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      UNLOCK();
      if (*(int *)((longlong)*(longlong **)(param_1 + 0x18) + 0x139) != 1) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x148))();
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x139) = 1;
      }
      LOCK();
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      UNLOCK();
    }
    FUN_180007c88((longlong)param_1,0);
    FUN_180007d9c((longlong)param_1,0,0xff);
    FUN_180007c88((longlong)param_1,1);
    FUN_180007d9c((longlong)param_1,0,0xff);
    if (uVar23 < 3) {
      FUN_180008110((longlong)param_1,0);
      if (param_1[100] != (WNDPROC)0x0) {
        LOCK();
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x18);
        if (*(int *)((longlong)plVar4 + 0x139) != 0) {
          (**(code **)(*plVar4 + 0x148))(plVar4,0);
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x139) = 0;
        }
        LOCK();
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        UNLOCK();
      }
    }
    else {
      FUN_180007c88((longlong)param_1,2);
      FUN_180007d9c((longlong)param_1,0,0xff);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x200))();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x208))();
    FUN_180007b20((longlong)param_1,(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0),'\x01');
    FUN_180005bcc((longlong)param_1,(undefined8 *)&DAT_18006d9f0);
    FUN_180007c88((longlong)param_1,(uint)(1 < uVar23));
    lVar15 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x58) = 0x10001;
    uVar9 = *(uint *)(lVar15 + 0xa8);
    uVar11 = CONCAT44(uVar24,*(undefined4 *)(lVar15 + 0xac));
    FUN_180010d5c((longlong)param_1,*(LPCSTR *)(param_10 + 8),(int)*(undefined8 *)(lVar15 + 0xa0),
                  uVar9,*(undefined4 *)(lVar15 + 0xac),uVar23,uVar22,param_5);
    if (((*(char *)(*(longlong *)pcVar1 + 0x856) != '\0') && (*(longlong *)(param_1 + 0x70) != 0))
       && (param_1[0x99] != (WNDPROC)0x0)) {
      (**(code **)(param_1 + 0x90))
                (0,0,(float)*(uint *)(*(longlong *)(param_1 + 0x18) + 0xa8),
                 (float)*(uint *)(*(longlong *)(param_1 + 0x18) + 0xac),uVar11 & 0xffffffff00000000)
      ;
    }
    param_1[0x98] = *(code *)(*(longlong *)pcVar1 + 0x855);
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    FUN_180010c14((longlong)param_1,'\x01',cVar6,uVar9);
    plVar4 = *(longlong **)(param_1 + 0x18);
    cVar6 = (**(code **)(*plVar4 + 0x48))();
    FUN_18000ad64((longlong)plVar4,cVar6);
    hModule = DAT_18006d9d0;
    param_1[0x67] = (code)0x1;
    GetModuleFileNameA(hModule,local_438,0x400);
    LoadLibraryA(local_438);
    return *(undefined4 *)(param_1 + 0x58);
  }
LAB_18000771b:
  FUN_180004890(*(longlong *)pcVar1);
  lVar15 = *(longlong *)pcVar1;
  piVar2 = (int *)(lVar15 + 0x160);
  *piVar2 = *piVar2 + -1;
  if ((*piVar2 == 0) && (*(char *)(lVar15 + 0x825) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(lVar15 + 0x15c));
    *(undefined4 *)(lVar15 + 0x15c) = 0;
  }
  FUN_180004c8c(*(longlong *)pcVar1,local_440,
                -(ulonglong)(param_1 != (WNDPROC)0x0) & (ulonglong)(param_1 + 8));
  return 0;
}

