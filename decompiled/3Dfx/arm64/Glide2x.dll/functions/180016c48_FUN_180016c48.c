/*
 * FUN_180016c48 at 180016c48
 * undefined4 __cdecl FUN_180016c48(LPVOID param_1, ulonglong param_2, uint param_3, uint param_4, uint param_5, undefined8 param_6, undefined4 param_7, int param_8, int param_9, undefined1 * param_10)
 * Address ranges: 180016c48-1800175af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_180016c48(LPVOID param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5,
             undefined8 param_6,undefined4 param_7,int param_8,int param_9,undefined1 *param_10)

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
  uint uVar20;
  int iVar21;
  longlong lVar22;
  LPVOID lpParameter;
  uint local_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  uint local_470;
  int local_46c;
  int local_468;
  int iStack_464;
  CHAR aCStack_458 [1032];
  
  if (param_3 == 0xff) {
    param_3 = 7;
  }
  if (param_4 == 0xff) {
    param_4 = 0;
  }
  local_478 = param_7;
  uVar6 = FUN_1800179f8((longlong)param_1);
  if ((0xf < param_3) && ((int)param_3 < 0x100 || uVar6 != 4)) {
    return 0;
  }
  if ((8 < param_4) && ((int)param_4 < 0xff || uVar6 != 4)) {
    return 0;
  }
  if ((int)param_3 < 0x100) {
    uVar6 = (uint)*(ushort *)
                   ((-(ulonglong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulonglong)param_3 << 2) +
                   0x18006a380);
    uVar20 = (uint)*(ushort *)
                    ((-(ulonglong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulonglong)param_3 << 2)
                    + 0x18006a382);
  }
  else {
    uVar6 = param_3 & 0xffff;
    uVar20 = (int)param_3 >> 0x10;
  }
  if (uVar6 == 0 || (uVar6 == 0 || uVar20 == 0)) {
    return 0;
  }
  iVar21 = param_9;
  if (param_8 == 0) {
    iVar21 = 0;
    param_8 = param_9;
  }
  if (param_8 == 1 && iVar21 < 3) {
    if (1 < iVar21) {
      iVar21 = 1;
    }
    param_8 = 2;
  }
  else if (param_8 != 2 || 1 < iVar21) {
    if (param_8 != 3 || 1 < iVar21) {
      return 0;
    }
    param_8 = 2;
    if (iVar21 != 1) {
      param_8 = 3;
    }
  }
  uVar8 = 0;
  if ((int)param_3 < 0x100) {
    uVar8 = (param_8 + iVar21) * uVar20 * uVar6 * 2;
  }
  if (*(uint *)(*(longlong *)((longlong)param_1 + 0x30) + 0x82b) < uVar8) {
    return 0;
  }
  pHVar9 = (HWND)FUN_18001eb80(param_1,(HWND)(param_2 & 0xffffffff));
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x8be) == 1) {
    uVar10 = GetWindowLongPtrW(pHVar9,-0x10);
    *(bool *)(*(longlong *)((longlong)param_1 + 0x30) + 0x820) = (uVar10 & 0xc00000) != 0;
  }
  if (pHVar9 == (HWND)0x0) {
    return 0;
  }
  lVar22 = *(longlong *)((longlong)param_1 + 0x30);
  iVar19 = *(int *)(lVar22 + 0x160);
  *(int *)(lVar22 + 0x160) = iVar19 + 1;
  if ((iVar19 == 0) && (*(char *)(lVar22 + 0x825) != '\0')) {
    EVar7 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)(lVar22 + 0x15c) = EVar7;
  }
  lpParameter = *(LPVOID *)((longlong)param_1 + 0x30);
  iVar19 = *(int *)((longlong)lpParameter + 0x370);
  *(int *)((longlong)lpParameter + 0x370) = iVar19 + 1;
  if (iVar19 == 0) {
    *(undefined1 *)((longlong)lpParameter + 0x7e8) = 0;
    DAT_18006b888 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (DAT_18006b888 != (HANDLE)0x0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)((longlong)lpParameter + 0x388));
      pvVar11 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180006e30,lpParameter,0,
                             (LPDWORD)((longlong)lpParameter + 0x374));
      *(HANDLE *)((longlong)lpParameter + 0x378) = pvVar11;
      WaitForSingleObject(DAT_18006b888,0xffffffff);
    }
  }
  bVar3 = FUN_180016900((longlong)param_1);
  if (!bVar3) goto LAB_18001753c;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x18) =
       *(undefined4 *)((longlong)param_1 + 0x20);
  uVar8 = (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x80))
                    (*(longlong **)((longlong)param_1 + 0x28),0);
  uVar10 = 0;
  if (0x10 < uVar8) {
    uVar8 = 0x10;
  }
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x1c) = uVar8;
  uVar2 = param_5;
  if (uVar8 != 0) {
    do {
      local_480 = uVar2;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x18))
                (*(longlong **)((longlong)param_1 + 0x28),&local_470,
                 *(undefined4 *)((longlong)param_1 + 0x20),uVar10);
      *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + uVar10 * 8 + 0x20) = local_470;
      lVar22 = uVar10 * 8;
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar1;
      *(int *)(*(longlong *)((longlong)param_1 + 0x18) + lVar22 + 0x24) = local_46c;
      param_5 = local_480;
      uVar2 = local_480;
    } while (uVar1 < uVar8);
  }
  *(HWND *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa0) = pHVar9;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb0) = uVar6;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa8) = uVar6;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb4) = uVar20;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xac) = uVar20;
  lVar22 = *(longlong *)((longlong)param_1 + 0x30);
  uVar8 = *(uint *)(lVar22 + 0x83b);
  uVar2 = *(uint *)(lVar22 + 0x837);
  if ((uVar2 < 0xfffffff8) || ((uVar2 != uVar8 || uVar2 == 0xfffffff9) && 0xff < uVar8)) {
    if ((uVar2 != 0) && (uVar8 != 0)) {
      *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb0) = uVar2;
      uVar17 = *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x30) + 0x83b);
      goto LAB_180016fdc;
    }
  }
  else {
    lVar16 = *(longlong *)((longlong)param_1 + 0x18);
    if (*(uint *)((longlong)param_1 + 0x24) < *(uint *)(lVar16 + 0x1c)) {
      FUN_18001f3e8(lVar16,&local_480,*(uint *)((longlong)param_1 + 0x24),lVar22 + 0x800);
      *(uint *)(lVar16 + 0xb0) = local_480;
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb4) = uStack_47c;
    }
    else {
      *(undefined4 *)(lVar16 + 0xb0) = 0x280;
      uVar17 = 0x1e0;
LAB_180016fdc:
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xb4) = uVar17;
    }
  }
  lVar22 = *(longlong *)((longlong)param_1 + 0x18);
  local_480 = *(uint *)(lVar22 + 0xb0);
  uStack_47c = *(undefined4 *)(lVar22 + 0xb4);
  puVar12 = FUN_18001f660(lVar22,&local_470,*(uint *)((longlong)param_1 + 0x24),&local_480,
                          *(longlong *)((longlong)param_1 + 0x30) + 0x800);
  *(uint *)(extraout_x14 + 0xb8) = local_470;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xbc) = local_46c;
  lVar22 = *(longlong *)((longlong)param_1 + 0x30);
  FUN_1800431c0(puVar12,&local_470,&local_480,*(uint *)(lVar22 + 0x8ae),*(uint *)(lVar22 + 0x8b2),
                *(uint *)(lVar22 + 0x8b6),(ulonglong)*(uint *)(lVar22 + 0x8ba));
  SetRect((LPRECT)(*(longlong *)((longlong)param_1 + 0x18) + 0xcc),local_470,local_46c,local_468,
          iStack_464);
  if ((int)param_4 < 0x100) {
    iVar19 = (&DAT_180061af0)[(int)param_4];
  }
  else {
    iVar19 = (int)param_4 >> 0x10;
  }
  iVar18 = 1;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xc0) = iVar19;
  lVar22 = *(longlong *)((longlong)param_1 + 0x30);
  if (((*(char *)(lVar22 + 0x822) != '\0') && (*(int *)(lVar22 + 0x843) != 0)) &&
     (*(int *)(lVar22 + 0x847) != 0)) {
    iVar19 = *(int *)(lVar22 + 0x843);
    iVar18 = *(int *)(lVar22 + 0x847);
  }
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xc4) = iVar19;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 200) = iVar18;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xdc) = param_8;
  *(int *)(*(longlong *)((longlong)param_1 + 0x18) + 0xe0) = iVar21;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xe8) = 0x40;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0xe4) = param_5;
  uVar8 = FUN_1800179f8((longlong)param_1);
  *(undefined *)(*(longlong *)((longlong)param_1 + 0x18) + 0xec) =
       (&DAT_18006a12a)[(ulonglong)uVar8 * 0x20];
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xed) = *param_10;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xee) = 1;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x12a) = (undefined1)local_478;
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x13d) = 0;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x11e) = 0;
  *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x11a) = 0;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x122) = uVar6;
  *(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x126) = uVar20;
  uVar10 = (ulonglong)
           (uint)(*(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x833) *
                 *(int *)(*(longlong *)((longlong)param_1 + 0x30) + 0x82f));
  if (*(longlong *)(*(longlong *)((longlong)param_1 + 0x18) + 0x2b0) == 0) {
    uVar13 = thunk_FUN_18005fb88(uVar10);
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
      lVar22 = 0;
      if (param_1 != (LPVOID)0x0) {
        lVar22 = (longlong)param_1 + 8;
      }
      if (pHVar9 == *(HWND *)((longlong)param_1 + 0x48)) {
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x50);
      }
      FUN_180007148(*(longlong *)((longlong)param_1 + 0x30),pHVar9,uVar13,lVar22);
    }
    cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
    if ((cVar4 == '\0') != (bool)*(char *)(*(longlong *)((longlong)param_1 + 0x30) + 0x820)) {
      FUN_18001efb0((longlong)param_1);
    }
    cVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x78))();
    if (cVar4 != '\0') {
      uVar13 = 0;
      pHVar9 = *(HWND *)(*(longlong *)((longlong)param_1 + 0x18) + 0xa0);
      lVar22 = 0;
      if (param_1 != (LPVOID)0x0) {
        lVar22 = (longlong)param_1 + 8;
      }
      if (pHVar9 == *(HWND *)((longlong)param_1 + 0x48)) {
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x50);
      }
      FUN_180007148(*(longlong *)((longlong)param_1 + 0x30),pHVar9,uVar13,lVar22);
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
    FUN_180017a40((longlong)param_1,(undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xf0),1
                 );
    if (param_8 < 3) {
      FUN_180017d40((longlong)param_1,2);
      FUN_180017da0((longlong)param_1,1);
    }
    FUN_180017b10((longlong)param_1,0);
    FUN_180017b68((longlong)param_1,0,0xff,0xffff);
    FUN_180017b10((longlong)param_1,1);
    FUN_180017b68((longlong)param_1,0,0xff,0xffff);
    if (param_8 < 3) {
      FUN_180017d40((longlong)param_1,0);
      FUN_180017da0((longlong)param_1,0);
    }
    else {
      FUN_180017b10((longlong)param_1,2);
      FUN_180017b68((longlong)param_1,0,0xff,0xffff);
    }
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x1e0))();
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x1e8))();
    FUN_180017a40((longlong)param_1,(undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + 0xf0),1
                 );
    FUN_180017b10((longlong)param_1,(uint)(1 < param_8));
    pCVar15 = *(LPCSTR *)(param_10 + 8);
    *(undefined4 *)((longlong)param_1 + 0x58) = 0x10001;
    lVar22 = *(longlong *)((longlong)param_1 + 0x18);
    FUN_180018eb0((longlong)param_1,pCVar15,(int)*(undefined8 *)(lVar22 + 0xa0),
                  *(undefined4 *)(lVar22 + 0xa8),*(undefined4 *)(lVar22 + 0xac),param_8,iVar21,
                  param_5);
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
    FUN_18001ed80((longlong)param_1,1,bVar5);
    uVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
    FUN_18001f2c8(*(longlong *)((longlong)param_1 + 0x18),uVar6);
    hModule = DAT_18006b860;
    *(undefined1 *)((longlong)param_1 + 0x67) = 1;
    GetModuleFileNameA(hModule,aCStack_458,0x400);
    LoadLibraryA(aCStack_458);
    return *(undefined4 *)((longlong)param_1 + 0x58);
  }
LAB_18001753c:
  FUN_180007058(*(longlong *)((longlong)param_1 + 0x30));
  lVar22 = *(longlong *)((longlong)param_1 + 0x30);
  iVar21 = *(int *)(lVar22 + 0x160) + -1;
  *(int *)(lVar22 + 0x160) = iVar21;
  if ((iVar21 == 0) && (*(char *)(lVar22 + 0x825) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(lVar22 + 0x15c));
    *(undefined4 *)(lVar22 + 0x15c) = 0;
  }
  lVar22 = 0;
  if (param_1 != (LPVOID)0x0) {
    lVar22 = (longlong)param_1 + 8;
  }
  FUN_180007508(*(longlong *)((longlong)param_1 + 0x30),pHVar9,lVar22);
  return 0;
}

