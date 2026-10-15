/*
 * FUN_10012ad6 at 10012ad6
 * undefined4 __thiscall FUN_10012ad6(void * this, HWND param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, uint param_7, uint param_8, undefined1 * param_9)
 * Address ranges: 10012ad6-100132dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10012ad6(void *this,HWND param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  uint *puVar1;
  LPVOID pvVar2;
  void *pvVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  HWND pHVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  EXECUTION_STATE EVar11;
  undefined4 uVar12;
  int extraout_ECX;
  int extraout_EDX;
  int unaff_EBX;
  HWND pHVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint *local_444;
  int local_440;
  uint local_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  uint local_430;
  uint local_42c;
  HWND local_428;
  uint local_424;
  int iStack_420;
  int iStack_41c;
  int iStack_410;
  uint local_40c;
  CHAR aCStack_408 [1028];
  
  local_43c = param_7;
  if (param_2 == 0xff) {
    param_2 = 7;
  }
  uVar15 = -(uint)(param_3 != 0xff) & param_3;
  local_40c = uVar15;
  uVar10 = FUN_10013512((int)this);
  if (((int)param_2 < 0) || (0xf < (int)param_2)) {
    if ((int)param_2 < 0x100) {
      return 0;
    }
    if (uVar10 != 4) {
      return 0;
    }
  }
  if (((int)uVar15 < 0) || (8 < (int)uVar15)) {
    if ((int)uVar15 < 0xff) {
      return 0;
    }
    if (uVar10 != 4) {
      return 0;
    }
  }
  if ((int)param_2 < 0x100) {
    local_430 = (uint)*(ushort *)(param_2 * 4 + 0x100583a0);
    local_42c = (uint)*(ushort *)(param_2 * 4 + 0x100583a2);
  }
  else {
    local_430 = param_2 & 0xffff;
    local_42c = (int)param_2 >> 0x10;
  }
  if (local_430 == 0) {
    return 0;
  }
  if (local_42c == 0) {
    return 0;
  }
  if (param_7 == 0) {
    param_7 = param_8;
  }
  local_43c = -(uint)(local_43c != 0) & param_8;
  if ((param_7 == 1) && ((int)local_43c < 3)) {
    param_7 = 2;
    if ((int)local_43c < 2) goto LAB_10012bdf;
    local_43c = 1;
    param_7 = 2;
  }
  else {
    if ((param_7 != 2) || (1 < (int)local_43c)) {
      if (param_7 != 3) {
        return 0;
      }
      if (1 < (int)local_43c) {
        return 0;
      }
    }
LAB_10012bdf:
    if (param_7 == 3) {
      param_7 = (local_43c != 1) + 2;
    }
  }
  local_444 = (uint *)0x0;
  if ((int)param_2 < 0x100) {
    uVar10 = (local_43c + param_7) * local_42c * local_430 * 2;
  }
  else {
    uVar10 = 0;
  }
  puVar1 = (uint *)((int)this + 0x1c);
  if (*(uint *)(*puVar1 + 0x78f) < uVar10) {
    return 0;
  }
  local_428 = FUN_10019709(this,param_1);
  if (*(int *)(*puVar1 + 0x822) == 1) {
    uVar10 = GetWindowLongW(local_428,-0x10);
    *(bool *)(*puVar1 + 0x784) = (uVar10 & 0xc00000) != 0;
  }
  if (local_428 == (HWND)0x0) {
    return 0;
  }
  local_424 = *puVar1;
  iVar14 = *(int *)(local_424 + 0xf8);
  *(int *)(local_424 + 0xf8) = iVar14 + 1;
  if ((iVar14 == 0) && (*(char *)(local_424 + 0x789) != '\0')) {
    EVar11 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)(local_424 + 0xf4) = EVar11;
  }
  pvVar2 = (LPVOID)*puVar1;
  iVar14 = *(int *)((int)pvVar2 + 0x308);
  *(int *)((int)pvVar2 + 0x308) = iVar14 + 1;
  if (iVar14 == 0) {
    FUN_1000343a(pvVar2);
  }
  bVar8 = FUN_1001282c((int)this);
  puVar16 = puVar1;
  if (!bVar8) goto LAB_100132a6;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xc) = *(undefined4 *)((int)this + 0x10);
  local_428 = (HWND)(**(code **)(**(int **)((int)this + 0x18) + 0x40))(0);
  if ((HWND)0x10 < local_428) {
    local_428 = (HWND)0x10;
  }
  pHVar7 = local_428;
  local_43c = 0;
  *(HWND *)(*(int *)((int)this + 0xc) + 0x10) = local_428;
  if (local_428 != (HWND)0x0) {
    pHVar13 = (HWND)0x0;
    do {
      (**(code **)(**(int **)((int)this + 0x18) + 0xc))
                (&local_428,*(undefined4 *)((int)this + 0x10),pHVar13);
      *(HWND *)(*(int *)((int)this + 0xc) + 0x14 + (int)pHVar13 * 8) = local_428;
      *(uint *)(*(int *)((int)this + 0xc) + 0x18 + (int)pHVar13 * 8) = local_424;
      pHVar13 = (HWND)((int)&pHVar13->unused + 1);
      puVar16 = local_444;
    } while (pHVar13 < pHVar7);
  }
  *(uint *)(*(int *)((int)this + 0xc) + 0x94) = local_42c;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xa0) = uStack_434;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x98) = uStack_434;
  *(uint *)(*(int *)((int)this + 0xc) + 0xa4) = local_430;
  *(uint *)(*(int *)((int)this + 0xc) + 0x9c) = local_430;
  local_43c = *puVar16;
  cVar9 = FUN_1000598d(*(uint *)(local_43c + 0x79b),*(uint *)(local_43c + 0x79f));
  if (cVar9 == '\0') {
    if ((extraout_ECX != 0) && (extraout_EDX != 0)) {
      *(int *)(*(int *)((int)this + 0xc) + 0xa0) = extraout_ECX;
      uStack_438 = *(undefined4 *)(*puVar16 + 0x79f);
      goto LAB_10012df0;
    }
  }
  else {
    pvVar3 = *(void **)((int)this + 0xc);
    if (*(uint *)((int)this + 0x14) < *(uint *)((int)pvVar3 + 0x10)) {
      FUN_10019fda(pvVar3,&local_43c,*(uint *)((int)this + 0x14),local_43c + 0x764);
      *(uint *)((int)pvVar3 + 0xa0) = local_43c;
LAB_10012df0:
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0xa4) = uStack_438;
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0xa0) = 0x280;
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0xa4) = 0x1e0;
    }
  }
  pvVar3 = *(void **)((int)this + 0xc);
  local_43c = *(uint *)((int)pvVar3 + 0xa0);
  uStack_438 = *(undefined4 *)((int)pvVar3 + 0xa4);
  FUN_1001a021(pvVar3,(uint *)&local_428,*(int *)((int)this + 0x14),&local_43c,iRam00000000 + 0x764)
  ;
  *(HWND *)((int)pvVar3 + 0xa8) = local_428;
  puVar16 = (uint *)0x0;
  *(uint *)(*(int *)((int)this + 0xc) + 0xac) = local_424;
  FUN_10036975((uint *)&local_428,&local_43c,*(uint *)(iRam00000000 + 0x812),
               *(uint *)(iRam00000000 + 0x816),*(uint *)(iRam00000000 + 0x81a),
               *(uint *)(iRam00000000 + 0x81e));
  SetRect((LPRECT)(*(int *)((int)this + 0xc) + 0xbc),(int)local_428,local_424,iStack_420,iStack_41c)
  ;
  if (iStack_410 < 0x100) {
    iStack_410 = *(int *)(&DAT_100517e0 + iStack_410 * 4);
  }
  else {
    iStack_410 = iStack_410 >> 0x10;
  }
  local_428 = (HWND)0x1;
  *(int *)(*(int *)((int)this + 0xc) + 0xb0) = iStack_410;
  if (((*(char *)(iRam00000000 + 0x786) != '\0') && (*(int *)(iRam00000000 + 0x7a7) != 0)) &&
     (*(HWND *)(iRam00000000 + 0x7ab) != (HWND)0x0)) {
    iStack_410 = *(int *)(iRam00000000 + 0x7a7);
    local_428 = *(HWND *)(iRam00000000 + 0x7ab);
  }
  *(int *)(*(int *)((int)this + 0xc) + 0xb4) = iStack_410;
  *(HWND *)(*(int *)((int)this + 0xc) + 0xb8) = local_428;
  *(uint *)(*(int *)((int)this + 0xc) + 0xcc) = param_7;
  *(uint **)(*(int *)((int)this + 0xc) + 0xd0) = puVar1;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xd8) = 0x40;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xd4) = param_4;
  uVar10 = FUN_10013512((int)this);
  *(undefined *)(*(int *)((int)this + 0xc) + 0xdc) = (&DAT_10058172)[uVar10 * 0x18];
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0xdd) = *param_9;
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0xde) = 1;
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0x11a) = param_6;
  *(char *)(*(int *)((int)this + 0xc) + 0x12d) = (char)unaff_EBX;
  *(int *)(*(int *)((int)this + 0xc) + 0x10e) = unaff_EBX;
  *(int *)(*(int *)((int)this + 0xc) + 0x10a) = unaff_EBX;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x112) = uStack_434;
  *(uint *)(*(int *)((int)this + 0xc) + 0x116) = local_430;
  if (*(int *)(*(int *)((int)this + 0xc) + 0x29c) == unaff_EBX) {
    uVar12 = FUN_1004f643(*(int *)(iRam00000000 + 0x797) * *(int *)(iRam00000000 + 0x793));
    *(undefined4 *)(*(int *)((int)this + 0xc) + 0x29c) = uVar12;
  }
  cVar9 = (**(code **)(**(int **)((int)this + 0xc) + 4))
                    (iRam00000000 + 0x764,this,iRam00000000 + 0x75c);
  if (cVar9 != '\0') {
    cVar9 = (**(code **)(**(int **)((int)this + 0xc) + 0x3c))();
    if (cVar9 == '\0') {
      FUN_10019968((int)this);
    }
    cVar9 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))();
    if ((char)('\x01' - (cVar9 != '\0')) != *(char *)(iRam00000000 + 0x784)) {
      FUN_100198b9(this);
    }
    cVar9 = (**(code **)(**(int **)((int)this + 0xc) + 0x3c))();
    if (cVar9 != '\0') {
      FUN_10019968((int)this);
    }
    iVar14 = (*(int **)((int)this + 0xc))[0xa7];
    if (iVar14 != 0) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x128))(iVar14,0,0);
    }
    if (0 < *(int *)(iRam00000000 + 0x797)) {
      local_440 = 0;
      iVar14 = 0;
      do {
        iVar18 = 0x100;
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar14,0,(int)*(int **)((int)this + 0xc) + local_440 + 0x2a8,0,0x100);
        iVar17 = 0x100;
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar14,1,iVar18 + 0x318 + (int)*(int **)((int)this + 0xc),0,0x100);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar14,2,iVar17 + 0x388 + (int)*(int **)((int)this + 0xc),0,0x100);
        iVar14 = iVar14 + 1;
        local_440 = local_440 + 0x4e8;
      } while (iVar14 < *(int *)(iRam00000000 + 0x797));
    }
    *(undefined1 *)((int)this + 0x3c) = 1;
    FUN_1001357d(this,(undefined4 *)(*(int *)((int)this + 0xc) + 0xe0),'\x01');
    if ((int)param_7 < 3) {
      FUN_1001392e(this,2);
      FUN_1001396f(this,1);
    }
    FUN_10013604(this,0);
    FUN_10013637(this,0,0xff,0xffff);
    FUN_10013604(this,1);
    FUN_10013637(this,0,0xff,0xffff);
    if ((int)param_7 < 3) {
      FUN_1001392e(this,0);
      FUN_1001396f(this,0);
    }
    else {
      FUN_10013604(this,2);
      FUN_10013637(this,0,0xff,0xffff);
    }
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))();
    (**(code **)(**(int **)((int)this + 0xc) + 0xf4))();
    FUN_1001357d(this,(undefined4 *)(*(int *)((int)this + 0xc) + 0xe0),'\x01');
    FUN_10013604(this,(uint)(1 < (int)param_7));
    iVar14 = *(int *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x30) = 0x10001;
    FUN_1001519b(this,*(LPCSTR *)(param_9 + 4),*(undefined4 *)(iVar14 + 0x94),
                 *(undefined4 *)(iVar14 + 0x98),*(undefined4 *)(iVar14 + 0x9c),param_7,local_43c,
                 param_4);
    if (*(char *)(iRam00000000 + 0x7ba) != '\0') {
      iVar14 = *(int *)((int)this + 0xc);
      fVar5 = (float)*(int *)(iVar14 + 0x9c);
      if (*(int *)(iVar14 + 0x9c) < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      fVar6 = (float)*(int *)(iVar14 + 0x98);
      if (*(int *)(iVar14 + 0x98) < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      FUN_1001536d(this,0,0,fVar6,fVar5,0);
    }
    *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(iRam00000000 + 0x7b9);
    cVar9 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))();
    FUN_1001985a(this,'\x01',cVar9);
    piVar4 = *(int **)((int)this + 0xc);
    cVar9 = (**(code **)(*piVar4 + 0x20))();
    FUN_10019db8(piVar4,cVar9);
    *(undefined1 *)((int)this + 0x3f) = 1;
    GetModuleFileNameA(DAT_1005974c,aCStack_408,0x400);
    LoadLibraryA(aCStack_408);
    return *(undefined4 *)((int)this + 0x30);
  }
LAB_100132a6:
  uVar10 = *puVar16;
  piVar4 = (int *)(uVar10 + 0x308);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    FUN_10003495(uVar10);
  }
  FUN_10002ee2(*puVar16);
  FUN_100038e7((void *)*puVar16,local_428,-(uint)(this != (void *)0x0) & (int)this + 4U);
  return 0;
}

