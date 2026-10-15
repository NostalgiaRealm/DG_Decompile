/*
 * FUN_10012e28 at 10012e28
 * undefined4 __thiscall FUN_10012e28(void * this, undefined4 param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, int param_7, undefined4 param_8, undefined1 * param_9)
 * Address ranges: 10012e28-100135cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10012e28(void *this,undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,undefined1 *param_9
            )

{
  LPVOID pvVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int extraout_EDX;
  int iVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  int unaff_ESI;
  float *pfVar13;
  float fStack_444;
  float local_440;
  undefined4 uStack_43c;
  uint local_438;
  uint local_434;
  float *local_430;
  float *local_42c;
  uint local_428;
  HWND local_424;
  int iStack_420;
  int iStack_41c;
  int iStack_418;
  CHAR aCStack_408 [1028];
  
  if (param_2 == 0xff) {
    param_2 = 7;
  }
  fVar10 = (float)(-(uint)(param_3 != 0xff) & param_3);
  local_440 = fVar10;
  uVar6 = FUN_10013805((int)this);
  if (((int)param_2 < 0) || (0xf < (int)param_2)) {
    if ((int)param_2 < 0x100) {
      return 0;
    }
    if (uVar6 != 4) {
      return 0;
    }
  }
  if (((int)fVar10 < 0) || (8 < (int)fVar10)) {
    if ((int)fVar10 < 0xff) {
      return 0;
    }
    if (uVar6 != 4) {
      return 0;
    }
  }
  if ((int)param_2 < 0x100) {
    local_438 = (uint)*(ushort *)(param_2 * 4 + 0x100583a0);
    local_428 = (uint)*(ushort *)(param_2 * 4 + 0x100583a2);
  }
  else {
    local_438 = param_2 & 0xffff;
    local_428 = (int)param_2 >> 0x10;
  }
  if (local_438 == 0) {
    return 0;
  }
  if (local_428 == 0) {
    return 0;
  }
  if ((param_7 == 1) || (param_7 == 2)) {
    local_434 = 2;
  }
  else {
    local_434 = 3;
    if (param_7 != 3) {
      return 0;
    }
  }
  if ((int)param_2 < 0x100) {
    uVar6 = local_434 * local_428 * local_438 * 2;
  }
  else {
    uVar6 = 0;
  }
  pfVar13 = (float *)((int)this + 0x1c);
  if (*(uint *)((int)*pfVar13 + 0x78f) < uVar6) {
    return 0;
  }
  local_42c = pfVar13;
  local_424 = FUN_10019a97(this);
  if (*(int *)((int)*pfVar13 + 0x822) == 1) {
    uVar6 = GetWindowLongW(local_424,-0x10);
    *(bool *)((int)*pfVar13 + 0x784) = (uVar6 & 0xc00000) != 0;
  }
  if (local_424 == (HWND)0x0) {
    return 0;
  }
  local_430 = (float *)*pfVar13;
  fVar7 = local_430[0x3e];
  local_430[0x3e] = (float)((int)fVar7 + 1);
  if ((fVar7 == 0.0) && (*(char *)((int)local_430 + 0x789) != '\0')) {
    fVar7 = (float)SetThreadExecutionState(0x80000002);
    local_430[0x3d] = fVar7;
  }
  pvVar1 = (LPVOID)*pfVar13;
  iVar12 = *(int *)((int)pvVar1 + 0x308);
  *(int *)((int)pvVar1 + 0x308) = iVar12 + 1;
  if (iVar12 == 0) {
    FUN_10003406(pvVar1);
  }
  bVar4 = FUN_10012b7e((int)this);
  if (!bVar4) goto LAB_10013599;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xc) = *(undefined4 *)((int)this + 0x10);
  local_434 = (**(code **)(**(int **)((int)this + 0x18) + 0x40))(0);
  if (0x10 < local_434) {
    local_434 = 0x10;
  }
  uVar6 = local_434;
  local_424 = (HWND)0x0;
  *(uint *)(*(int *)((int)this + 0xc) + 0x10) = local_434;
  if (local_434 != 0) {
    uVar11 = 0;
    do {
      (**(code **)(**(int **)((int)this + 0x18) + 0xc))
                (&local_424,*(undefined4 *)((int)this + 0x10),uVar11);
      *(HWND *)(*(int *)((int)this + 0xc) + 0x14 + uVar11 * 8) = local_424;
      *(int *)(*(int *)((int)this + 0xc) + 0x18 + uVar11 * 8) = iStack_420;
      uVar11 = uVar11 + 1;
      fVar10 = fStack_444;
      pfVar13 = local_430;
    } while (uVar11 < uVar6);
  }
  *(uint *)(*(int *)((int)this + 0xc) + 0x94) = local_428;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xa0) = uStack_43c;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x98) = uStack_43c;
  *(float **)(*(int *)((int)this + 0xc) + 0xa4) = local_42c;
  *(float **)(*(int *)((int)this + 0xc) + 0x9c) = local_42c;
  fStack_444 = *pfVar13;
  cVar5 = FUN_10005cdd(*(uint *)((int)fStack_444 + 0x79b),*(uint *)((int)fStack_444 + 0x79f));
  if (cVar5 == '\0') {
    if ((extraout_ECX != 0) && (extraout_EDX != 0)) {
      *(int *)(*(int *)((int)this + 0xc) + 0xa0) = extraout_ECX;
      local_440 = *(float *)((int)*pfVar13 + 0x79f);
      goto LAB_100130f0;
    }
  }
  else {
    pvVar2 = *(void **)((int)this + 0xc);
    if (*(uint *)((int)this + 0x14) < *(uint *)((int)pvVar2 + 0x10)) {
      FUN_1001a365(pvVar2,(uint *)&fStack_444,*(uint *)((int)this + 0x14),(int)fStack_444 + 0x764);
      *(float *)((int)pvVar2 + 0xa0) = fStack_444;
LAB_100130f0:
      *(float *)(*(int *)((int)this + 0xc) + 0xa4) = local_440;
    }
    else {
      *(undefined4 *)((int)pvVar2 + 0xa0) = 0x280;
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0xa4) = 0x1e0;
    }
  }
  pvVar2 = *(void **)((int)this + 0xc);
  fStack_444 = *(float *)((int)pvVar2 + 0xa0);
  local_440 = *(float *)((int)pvVar2 + 0xa4);
  FUN_1001a3ac(pvVar2,(uint *)&local_424,*(int *)((int)this + 0x14),(uint *)&fStack_444,
               (int)*local_430 + 0x764);
  pfVar13 = local_430;
  *(HWND *)((int)pvVar2 + 0xa8) = local_424;
  *(int *)(*(int *)((int)this + 0xc) + 0xac) = iStack_420;
  fVar7 = *local_430;
  FUN_10036d05((uint *)&local_424,(uint *)&fStack_444,*(uint *)((int)fVar7 + 0x812),
               *(uint *)((int)fVar7 + 0x816),*(uint *)((int)fVar7 + 0x81a),
               *(uint *)((int)fVar7 + 0x81e));
  SetRect((LPRECT)(*(int *)((int)this + 0xc) + 0xbc),(int)local_424,iStack_420,iStack_41c,iStack_418
         );
  uVar6 = local_438;
  if ((int)fVar10 < 0x100) {
    iVar12 = *(int *)(&DAT_100517e0 + (int)fVar10 * 4);
  }
  else {
    iVar12 = (int)fVar10 >> 0x10;
  }
  iVar9 = 1;
  *(int *)(*(int *)((int)this + 0xc) + 0xb0) = iVar12;
  fVar10 = *pfVar13;
  if (((*(char *)((int)fVar10 + 0x786) != '\0') && (*(int *)((int)fVar10 + 0x7a7) != 0)) &&
     (*(int *)((int)fVar10 + 0x7ab) != 0)) {
    iVar9 = *(int *)((int)fVar10 + 0x7ab);
    iVar12 = *(int *)((int)fVar10 + 0x7a7);
  }
  *(int *)(*(int *)((int)this + 0xc) + 0xb4) = iVar12;
  *(int *)(*(int *)((int)this + 0xc) + 0xb8) = iVar9;
  *(uint *)(*(int *)((int)this + 0xc) + 0xcc) = local_438;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xd0) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xd8) = 0x40;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0xd4) = param_4;
  uVar11 = FUN_10013805((int)this);
  *(undefined *)(*(int *)((int)this + 0xc) + 0xdc) = (&DAT_10058172)[uVar11 * 0x18];
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0xdd) = *param_9;
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0xde) = 1;
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0x11a) = param_6;
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0x12d) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x10e) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x10a) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x112) = uStack_43c;
  *(float **)(*(int *)((int)this + 0xc) + 0x116) = local_42c;
  fStack_444 = (float)(*(int *)((int)*pfVar13 + 0x797) * *(int *)((int)*pfVar13 + 0x793));
  if (*(int *)(*(int *)((int)this + 0xc) + 0x29c) == 0) {
    uVar8 = FUN_1004f9d3((SIZE_T)fStack_444);
    *(undefined4 *)(*(int *)((int)this + 0xc) + 0x29c) = uVar8;
  }
  cVar5 = (**(code **)(**(int **)((int)this + 0xc) + 4))
                    ((int)*pfVar13 + 0x764,this,(int)*pfVar13 + 0x75c);
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x3c))();
    if (cVar5 == '\0') {
      FUN_10019cf3((int)this);
    }
    cVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))();
    if ((char)('\x01' - (cVar5 != '\0')) != *(char *)((int)*pfVar13 + 0x784)) {
      FUN_10019c44(this);
    }
    cVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x3c))();
    if (cVar5 != '\0') {
      FUN_10019cf3((int)this);
    }
    iVar12 = (*(int **)((int)this + 0xc))[0xa7];
    if (iVar12 != 0) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x128))(iVar12,0,local_440);
    }
    if (0 < *(int *)((int)*pfVar13 + 0x797)) {
      local_438 = 0;
      iVar12 = 0;
      do {
        iVar9 = 0;
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar12,0,(int)*(int **)((int)this + 0xc) + local_438 + 0x2a8,0,0x100);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar12,1,unaff_ESI + 0x318 + (int)*(int **)((int)this + 0xc),0,0x100);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar12,2,iVar9 + 0x388 + (int)*(int **)((int)this + 0xc),0,0x100);
        iVar12 = iVar12 + 1;
        local_438 = local_438 + 0x4e8;
        uVar6 = local_434;
      } while (iVar12 < *(int *)((int)*pfVar13 + 0x797));
    }
    *(undefined1 *)((int)this + 0x3c) = 1;
    FUN_10013870(this,(undefined4 *)(*(int *)((int)this + 0xc) + 0xe0),'\x01');
    if ((int)uVar6 < 3) {
      FUN_10013cbc(this,2);
      FUN_10013cfd(this,1);
    }
    FUN_100138f7(this,0);
    FUN_1001392a(this,0,0xff,0xffff);
    FUN_100138f7(this,1);
    FUN_1001392a(this,0,0xff,0xffff);
    if ((int)uVar6 < 3) {
      FUN_10013cbc(this,0);
      FUN_10013cfd(this,0);
    }
    else {
      FUN_100138f7(this,2);
      FUN_1001392a(this,0,0xff,0xffff);
    }
    (**(code **)(**(int **)((int)this + 0xc) + 0xf0))();
    (**(code **)(**(int **)((int)this + 0xc) + 0xf4))();
    FUN_10013870(this,(undefined4 *)(*(int *)((int)this + 0xc) + 0xe0),'\x01');
    FUN_100138f7(this,(uint)(1 < (int)uVar6));
    iVar12 = *(int *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x30) = 0x10001;
    FUN_10015529(this,*(LPCSTR *)(param_9 + 4),*(undefined4 *)(iVar12 + 0x94),
                 *(undefined4 *)(iVar12 + 0x98),*(undefined4 *)(iVar12 + 0x9c),uVar6,0,param_4);
    if (*(char *)((int)*pfVar13 + 0x7ba) != '\0') {
      iVar12 = *(int *)((int)this + 0xc);
      fVar10 = (float)*(int *)(iVar12 + 0x9c);
      if (*(int *)(iVar12 + 0x9c) < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      local_440 = (float)*(int *)(iVar12 + 0x98);
      if (*(int *)(iVar12 + 0x98) < 0) {
        local_440 = local_440 + 4.2949673e+09;
      }
      FUN_100156fb(this,0,0,local_440,fVar10,0);
    }
    *(undefined1 *)((int)this + 0x58) = *(undefined1 *)((int)*pfVar13 + 0x7b9);
    cVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x20))();
    FUN_10019be5(this,'\x01',cVar5);
    piVar3 = *(int **)((int)this + 0xc);
    cVar5 = (**(code **)(*piVar3 + 0x20))();
    FUN_1001a143(piVar3,cVar5);
    *(undefined1 *)((int)this + 0x3f) = 1;
    GetModuleFileNameA(DAT_1005974c,aCStack_408,0x400);
    LoadLibraryA(aCStack_408);
    return *(undefined4 *)((int)this + 0x30);
  }
LAB_10013599:
  fVar10 = *pfVar13;
  piVar3 = (int *)((int)fVar10 + 0x308);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    FUN_10003461((int)fVar10);
  }
  FUN_10002eae((int)*pfVar13);
  FUN_100038b3((void *)*pfVar13,local_424,-(uint)(this != (void *)0x0) & (int)this + 4U);
  return 0;
}

