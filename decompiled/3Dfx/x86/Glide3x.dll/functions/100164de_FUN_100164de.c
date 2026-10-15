/*
 * FUN_100164de at 100164de
 * undefined __thiscall FUN_100164de(void * this, int param_1, int param_2, int param_3, undefined4 * param_4, int param_5)
 * Address ranges: 100164de-10016840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100164de(void *this,int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_41;
  int *local_38;
  int local_34;
  int *local_28;
  void *local_24;
  undefined4 **local_20;
  int *local_1c;
  int *local_18;
  void *local_14;
  undefined4 **local_10;
  int *local_c;
  
  FUN_1001416a((int)this + 0x35c0);
  *(int *)((int)this + 0x4278) = param_1;
  iVar5 = FUN_10015c64((int)this + 0x3f50);
  iVar2 = *(int *)((int)this + 0x3308);
  iVar11 = iVar5 * param_3;
  uVar12 = iVar11 + 4;
  FUN_1002acc0((int *)(iVar2 + 0x11c0));
  iVar3 = param_3;
  cVar1 = *(char *)(iVar2 + 0x12ec);
  local_18 = &param_3;
  local_10 = &param_4;
  local_1c = &param_5;
  local_14 = this;
  local_c = local_1c;
  if ((cVar1 == '\0') || (0x3eff < uVar12)) {
    local_38 = param_4;
    local_34 = param_5;
    local_41 = 0;
    local_28 = (int *)0x0;
    local_24 = (void *)0x0;
    local_20 = (undefined4 **)0x0;
    if ((cVar1 != '\0') &&
       (bVar4 = FUN_10049558((void *)(*(int *)((int)this + 0x3308) + 0x14f0),uVar12,(int *)&local_28
                            ), piVar9 = local_28, bVar4)) {
      FUN_10016841(&local_18,local_28);
      local_38 = piVar9;
      local_41 = 1;
      local_34 = iVar5;
    }
    iVar3 = param_3;
    iVar2 = *(int *)((int)this + 0x3308);
    piVar9 = (int *)(iVar2 + 0x11c0);
    if (*(char *)(iVar2 + 0x12ec) != '\0') {
      puVar6 = (undefined4 *)FUN_1002abe0(piVar9,0x28);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = 0x28;
        puVar6[2] = this;
        puVar6[3] = param_2;
        puVar6[4] = iVar3;
        puVar6[5] = local_38;
        puVar6[6] = local_34;
        *(undefined1 *)(puVar6 + 7) = local_41;
        puVar6[8] = param_1;
        puVar6[9] = local_28;
        puVar6[10] = local_24;
        puVar6[0xb] = local_20;
        puVar10 = (undefined4 *)((int)puVar6 + 0x33U & 0xfffffffc);
        *puVar10 = 0;
        *puVar6 = FUN_100168b5;
        piVar9[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar10;
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          *piVar9 = 0;
          SetEvent(*(HANDLE *)(iVar2 + 0x1220));
          return;
        }
        goto LAB_10016836;
      }
      FUN_10014f4d(piVar9);
    }
    puVar6 = *(undefined4 **)(iVar2 + 0x12d0);
    *puVar6 = this;
    puVar6[1] = param_2;
    puVar6[2] = iVar3;
    puVar6[3] = local_38;
    puVar6[4] = local_34;
    *(undefined1 *)(puVar6 + 5) = local_41;
    puVar6[6] = param_1;
    puVar6[7] = local_28;
    puVar6[8] = local_24;
    puVar6[9] = local_20;
    FUN_100168b5(puVar6,puVar6);
LAB_10016836:
    *piVar9 = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x3308);
  piVar9 = (int *)(iVar2 + 0x11c0);
  local_28 = &param_3;
  local_20 = &param_4;
  local_24 = this;
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    iVar7 = (uint)(uVar12 != 0) * 4 + 0x14;
    if (uVar12 != 0) {
      iVar7 = iVar7 + (iVar11 + 7U & 0xfffffffc);
    }
    puVar6 = (undefined4 *)FUN_1002abe0(piVar9,iVar7);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar6[1] = iVar7;
      uVar8 = (uint)(uVar12 != 0);
      puVar6[uVar8 + 2] = this;
      puVar6[uVar8 + 3] = param_2;
      puVar6[uVar8 + 4] = iVar3;
      puVar6[uVar8 + 5] = iVar5;
      puVar10 = (undefined4 *)((int)puVar6 + (uVar8 + 2) * 4 + 0x17 & 0xfffffffc);
      puVar6[uVar8 + 6] = param_1;
      if (uVar12 != 0) {
        puVar6[2] = puVar10;
        FUN_10016841(&local_28,puVar10);
        puVar10 = (undefined4 *)((int)puVar10 + (iVar11 + 7U & 0xfffffffc));
      }
      *puVar10 = 0;
      *puVar6 = FUN_10016883;
      piVar9[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar10;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *piVar9 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_100166ca;
    }
    FUN_10014f4d(piVar9);
  }
  local_18 = local_28;
  uVar8 = (uint)(uVar12 != 0);
  local_14 = local_24;
  local_10 = local_20;
  local_c = local_1c;
  puVar6 = *(undefined4 **)(iVar2 + 0x12d0);
  puVar6[uVar8] = this;
  puVar6[uVar8 + 1] = param_2;
  puVar6[uVar8 + 2] = iVar3;
  puVar6[uVar8 + 3] = iVar5;
  puVar6[uVar8 + 4] = param_1;
  if (uVar12 != 0) {
    *puVar6 = puVar6 + uVar8 + 5;
    FUN_10016841(&local_18,puVar6 + uVar8 + 5);
  }
  FUN_10016883(puVar6);
LAB_100166ca:
  *piVar9 = 0;
  return;
}

