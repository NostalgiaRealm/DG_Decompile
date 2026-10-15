/*
 * FUN_180017b58 at 180017b58
 * undefined4 __cdecl FUN_180017b58(LPVOID param_1, undefined8 param_2, uint param_3, uint param_4, undefined4 param_5, undefined8 param_6, uint param_7, int param_8, undefined8 param_9, undefined1 * param_10)
 * Address ranges: 180017b58-18001847f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_180017b58(LPVOID param_1,undefined8 param_2,uint param_3,uint param_4,undefined4 param_5,
             undefined8 param_6,uint param_7,int param_8,undefined8 param_9,undefined1 *param_10)

{
  uint uVar1;
  uint uVar2;
  HMODULE hModule;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  EXECUTION_STATE EVar7;
  uint uVar8;
  HWND pHVar9;
  ulonglong uVar10;
  HANDLE pvVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  LPCSTR pCVar15;
  longlong lVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  longlong extraout_x14;
  longlong lVar20;
  LPVOID lpParameter;
  uint uVar21;
  uint local_470;
  undefined4 uStack_46c;
  uint local_468;
  int local_464;
  int local_460;
  int iStack_45c;
  CHAR aCStack_450 [1024];
  
  if (param_3 == 0xff) {
    param_3 = 7;
  }
  if (param_4 == 0xff) {
    param_4 = 0;
  }
  uVar6 = FUN_180018700((longlong)param_1);
  if ((0xf < param_3) && ((int)param_3 < 0x100 || uVar6 != 4)) {
    return 0;
  }
  if ((8 < param_4) && ((int)param_4 < 0xff || uVar6 != 4)) {
    return 0;
  }
  if ((int)param_3 < 0x100) {
    uVar6 = (uint)*(ushort *)
                   ((-(ulonglong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulonglong)param_3 << 2) +
                   0x18006b380);
    uVar21 = (uint)*(ushort *)
                    ((-(ulonglong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulonglong)param_3 << 2)
                    + 0x18006b382);
  }
  else {
    uVar6 = param_3 & 0xffff;
    uVar21 = (int)param_3 >> 0x10;
  }
  if (uVar6 == 0 || (uVar6 == 0 || uVar21 == 0)) {
    return 0;
  }
  if (param_8 == 1) {
    param_8 = 2;
  }
  else if ((param_8 != 2) && (param_8 != 3)) {
    return 0;
  }
  uVar8 = 0;
  if ((int)param_3 < 0x100) {
    uVar8 = param_8 * uVar21 * uVar6 * 2;
  }
  if (*(uint *)(*(longlong *)((longlong)param_1 + 0x30) + 0x82b) < uVar8) {
    return 0;
  }
  pHVar9 = (HWND)FUN_18001f9d0(param_1);
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x8be) == 1) {
    uVar10 = GetWindowLongPtrW(pHVar9,-0x10);
    *(bool *)(*(longlong *)((longlong)param_1 + 0x30) + 0x820) = (uVar10 & 0xc00000) != 0;
  }
  if (pHVar9 == (HWND)0x0) {
    return 0;
  }
  lVar20 = *(longlong *)((longlong)param_1 + 0x30);
  iVar19 = *(int *)(lVar20 + 0x160);
  *(int *)(lVar20 + 0x160) = iVar19 + 1;
  if ((iVar19 == 0) && (*(char *)(lVar20 + 0x825) != '\0')) {
    EVar7 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)(lVar20 + 0x15c) = EVar7;
  }
  lpParameter = *(LPVOID *)((longlong)param_1 + 0x30);
  iVar19 = *(int *)((longlong)lpParameter + 0x370);
  *(int *)((longlong)lpParameter + 0x370) = iVar19 + 1;
  if (iVar19 == 0) {
    *(undefined1 *)((longlong)lpParameter + 0x7e8) = 0;
    DAT_18006c8e0 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (DAT_18006c8e0 != (HANDLE)0x0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)((longlong)lpParameter + 0x388));
      pvVar11 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180007d48,lpParameter,0,
                             (LPDWORD)((longlong)lpParameter + 0x374));
      *(HANDLE *)((longlong)lpParameter + 0x378) = pvVar11;
      WaitForSingleObject(DAT_18006c8e0,0xffffffff);
    }
  }
  bVar3 = FUN_180017810((longlong)param_1);
  if (!bVar3) goto LAB_18001840c;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x18) =
       *(undefined4 *)((longlong)param_1 + 0x20);
  uVar8 = (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x80))
                    (*(longlong **)((longlong)param_1 + 0x28),0);
  uVar10 = 0;
  if (0x10 < uVar8) {
    uVar8 = 0x10;
  }
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x1c) = uVar8;
  uVar2 = param_7;
  if (uVar8 != 0) {
    do {
      local_470 = uVar2;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x18))
                (*(longlong **)((longlong)param_1 + 0x28),&local_468,
                 *(undefined4 *)((longlong)param_1 + 0x20),uVar10);
      *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + uVar10 * 8 + 0x20) = local_468;
      lVar20 = uVar10 * 8;
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar1;
      *(int *)(*(longlong *)((longlong)param_1 + 0x18) + lVar20 + 0x24) = local_464;
      param_7 = local_470;
      uVar2 = local_470;
    } while (uVar1 < uVar8);
  }
  *(HWND *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa0) = pHVar9;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb0) = uVar6;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa8) = uVar6;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb4) = uVar21;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xac) = uVar21;
  lVar20 = *(longlong *)((longlong)param_1 + 0x30);
  uVar8 = *(uint *)(lVar20 + 0x83b);
  uVar2 = *(uint *)(lVar20 + 0x837);
  if ((uVar2 < 0xfffffff8) || ((uVar2 != uVar8 || uVar2 == 0xfffffff9) && 0xff < uVar8)) {
    if ((uVar2 != 0) && (uVar8 != 0)) {
      *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb0) = uVar2;
      uVar17 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x30) + 0x83b);
      goto LAB_180017eb0;
    }
  }
  else {
    lVar16 = *(longlong *)((longlong)param_1 + 0x18);
    if (*(uint *)((longlong)param_1 + 0x24) < *(uint *)(lVar16 + 0x1c)) {
      FUN_180020238(lVar16,&local_470,*(uint *)((longlong)param_1 + 0x24),lVar20 + 0x800);
      *(uint *)(lVar16 + 0xb0) = local_470;
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb4) = uStack_46c;
    }
    else {
      *(undefined4 *)(lVar16 + 0xb0) = 0x280;
      uVar17 = 0x1e0;
LAB_180017eb0:
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb4) = uVar17;
    }
  }
  lVar20 = *(longlong *)((longlong)param_1 + 0x18);
  local_470 = *(uint *)(lVar20 + 0xb0);
  uStack_46c = *(undefined4 *)(lVar20 + 0xb4);
  puVar12 = FUN_1800204b0(lVar20,&local_468,*(uint *)((longlong)param_1 + 0x24),&local_470,
                          *(longlong *)((longlong)param_1 + 0x30) + 0x800);
  *(uint *)(extraout_x14 + 0xb8) = local_468;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xbc) = local_464;
  lVar20 = *(longlong *)((longlong)param_1 + 0x30);
  FUN_180044010(puVar12,&local_468,&local_470,*(uint *)(lVar20 + 0x8ae),*(uint *)(lVar20 + 0x8b2),
                *(uint *)(lVar20 + 0x8b6),(ulonglong)*(uint *)(lVar20 + 0x8ba));
  SetRect((LPRECT)(*(longlong *)((longlong)param_1 + 0x18) + 0xcc),local_468,local_464,local_460,
          iStack_45c);
  if ((int)param_4 < 0x100) {
    iVar19 = (&DAT_180062af0)[(int)param_4];
  }
  else {
    iVar19 = (int)param_4 >> 0x10;
  }
  iVar18 = 1;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xc0) = iVar19;
  lVar20 = *(longlong *)((longlong)param_1 + 0x30);
  if (((*(char *)(lVar20 + 0x822) != '\0') && (*(int *)(lVar20 + 0x843) != 0)) &&
     (*(int *)(lVar20 + 0x847) != 0)) {
    iVar19 = *(int *)(lVar20 + 0x843);
    iVar18 = *(int *)(lVar20 + 0x847);
  }
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xc4) = iVar19;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 200) = iVar18;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xdc) = param_8;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xe0) = 0;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xe8) = 0x40;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xe4) = param_5;
  uVar8 = FUN_180018700((longlong)param_1);
  *(undefined *)(*(longlong *)((longlong)param_1 + 0x18) + 0xec) =
       (&DAT_18006b12a)[(ulonglong)uVar8 * 0x20];
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xed) = *param_10;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xee) = 1;
  *(char *)(*(longlong *)((longlong)param_1 + 0x18) + 0x12a) = (char)param_7;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x13d) = 0;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x11e) = 0;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x11a) = 0;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x122) = uVar6;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x126) = uVar21;
  uVar10 = (ulonglong)
           (uint)(*(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x833) *
                 *(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x82f));
  if (*(longlong *)(*(longlong *)((longlong)param_1 + 0x18) + 0x2b0) == 0) {
    uVar13 = thunk_FUN_1800609d8(uVar10);
    *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x2b0) = uVar13;
  }
  cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 8))
                    (*(longlong **)((longlong)param_1 + 0x18),
                     *(longlong *)((longlong)param_1 + 0x30) + 0x800,param_1,
                     *(longlong *)((longlong)param_1 + 0x30) + 0x7f0);
  if (cVar4 != '\0') {
    cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x78))();
    if (cVar4 == '\0') {
      uVar13 = 0;
      pHVar9 = *(HWND *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa0);
      lVar20 = 0;
      if (param_1 != (LPVOID)0x0) {
        lVar20 = (longlong)param_1 + 8;
      }
      if (pHVar9 == *(HWND *)((longlong)param_1 + 0x48)) {
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x50);
      }
      FUN_180008060(*(longlong *)((longlong)param_1 + 0x30),pHVar9,uVar13,lVar20);
    }
    cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
    if ((cVar4 == '\0') != (bool)*(char *)(*(longlong *)((longlong)param_1 + 0x30) + 0x820)) {
      FUN_18001fe00((longlong)param_1);
    }
    cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x78))();
    if (cVar4 != '\0') {
      uVar13 = 0;
      pHVar9 = *(HWND *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa0);
      lVar20 = 0;
      if (param_1 != (LPVOID)0x0) {
        lVar20 = (longlong)param_1 + 8;
      }
      if (pHVar9 == *(HWND *)((longlong)param_1 + 0x48)) {
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x50);
      }
      FUN_180008060(*(longlong *)((longlong)param_1 + 0x30),pHVar9,uVar13,lVar20);
    }
    plVar14 = *(longlong **)((longlong)param_1 + 0x18);
    if (plVar14[0x56] != 0) {
      (**(code **)(*plVar14 + 0x250))(plVar14,plVar14[0x56],0,uVar10);
    }
    iVar19 = 0;
    if (0 < *(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x833)) {
      do {
        plVar14 = *(longlong **)((longlong)param_1 + 0x18);
        (**(code **)(*plVar14 + 0x278))
                  (plVar14,iVar19,0,plVar14 + (longlong)iVar19 * 0x9d + 0x58,0,0x100);
        plVar14 = *(longlong **)((longlong)param_1 + 0x18);
        (**(code **)(*plVar14 + 0x278))
                  (plVar14,iVar19,1,plVar14 + (longlong)iVar19 * 0x9d + 0x66,0,0x100);
        plVar14 = *(longlong **)((longlong)param_1 + 0x18);
        (**(code **)(*plVar14 + 0x278))
                  (plVar14,iVar19,2,plVar14 + (longlong)iVar19 * 0x9d + 0x74,0,0x100);
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x833));
    }
    *(undefined1 *)((longlong)param_1 + 100) = 1;
    FUN_180018748((longlong)param_1,(undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xf0),1
                 );
    if (param_8 < 3) {
      FUN_180018b90((longlong)param_1,2);
      FUN_180018bf0((longlong)param_1,1);
    }
    FUN_180018818((longlong)param_1,0);
    FUN_180018870((longlong)param_1,0,0xff,0xffff);
    FUN_180018818((longlong)param_1,1);
    FUN_180018870((longlong)param_1,0,0xff,0xffff);
    if (param_8 < 3) {
      FUN_180018b90((longlong)param_1,0);
      FUN_180018bf0((longlong)param_1,0);
    }
    else {
      FUN_180018818((longlong)param_1,2);
      FUN_180018870((longlong)param_1,0,0xff,0xffff);
    }
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x1e0))();
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x1e8))();
    FUN_180018748((longlong)param_1,(undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xf0),1
                 );
    FUN_180018818((longlong)param_1,(uint)(1 < param_8));
    pCVar15 = *(LPCSTR *)(param_10 + 8);
    *(undefined4 *)((longlong)param_1 + 0x58) = 0x10001;
    lVar20 = *(longlong *)((longlong)param_1 + 0x18);
    FUN_180019d00((longlong)param_1,pCVar15,(int)*(undefined8 *)(lVar20 + 0xa0),
                  *(undefined4 *)(lVar20 + 0xa8),*(undefined4 *)(lVar20 + 0xac),param_8,0,param_5);
    if (((*(char *)(*(longlong *)((longlong)param_1 + 0x30) + 0x856) != '\0') &&
        (*(longlong *)((longlong)param_1 + 0x70) != 0)) &&
       (*(char *)((longlong)param_1 + 0x99) != '\0')) {
      (**(code **)((longlong)param_1 + 0x90))
                (0,0,(float)*(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa8),
                 (float)*(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xac),0);
    }
    *(undefined1 *)((longlong)param_1 + 0x98) =
         *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x30) + 0x855);
    bVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
    FUN_18001fbd0((longlong)param_1,1,bVar5);
    uVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
    FUN_180020118(*(longlong *)((longlong)param_1 + 0x18),uVar6);
    hModule = DAT_18006c860;
    *(undefined1 *)((longlong)param_1 + 0x67) = 1;
    GetModuleFileNameA(hModule,aCStack_450,0x400);
    LoadLibraryA(aCStack_450);
    return *(undefined4 *)((longlong)param_1 + 0x58);
  }
LAB_18001840c:
  FUN_180007f70(*(longlong *)((longlong)param_1 + 0x30));
  lVar20 = *(longlong *)((longlong)param_1 + 0x30);
  iVar19 = *(int *)(lVar20 + 0x160) + -1;
  *(int *)(lVar20 + 0x160) = iVar19;
  if ((iVar19 == 0) && (*(char *)(lVar20 + 0x825) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(lVar20 + 0x15c));
    *(undefined4 *)(lVar20 + 0x15c) = 0;
  }
  lVar20 = 0;
  if (param_1 != (LPVOID)0x0) {
    lVar20 = (longlong)param_1 + 8;
  }
  FUN_180008420(*(longlong *)((longlong)param_1 + 0x30),pHVar9,lVar20);
  return 0;
}

