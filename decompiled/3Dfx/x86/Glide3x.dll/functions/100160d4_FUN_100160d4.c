/*
 * FUN_100160d4 at 100160d4
 * undefined __thiscall FUN_100160d4(void * this, int param_1, int param_2, int param_3, int * param_4)
 * Address ranges: 100160d4-10016414
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100160d4(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 local_41;
  int *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  void *local_20;
  int **local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  int **local_c;
  
  FUN_1001416a((int)this + 0x35c0);
  *(int *)((int)this + 0x4278) = param_1;
  iVar4 = FUN_10015c64((int)this + 0x3f50);
  iVar2 = *(int *)((int)this + 0x3308);
  local_38 = param_3 * 4;
  uVar9 = local_38 + 4 + iVar4 * param_3;
  local_2c = uVar9;
  FUN_1002acc0((int *)(iVar2 + 0x11c0));
  cVar1 = *(char *)(iVar2 + 0x12ec);
  local_18 = &local_38;
  local_14 = &param_3;
  local_c = &param_4;
  local_10 = this;
  if ((cVar1 == '\0') || (0x3eff < uVar9)) {
    local_3c = param_4;
    local_41 = 0;
    local_28 = (int *)0x0;
    local_24 = (int *)0x0;
    local_20 = (void *)0x0;
    if ((cVar1 != '\0') &&
       (bVar3 = FUN_10049558((void *)(*(int *)((int)this + 0x3308) + 0x14f0),uVar9 + 0x20,
                             (int *)&local_28), piVar7 = local_28, bVar3)) {
      FUN_10016415(&local_18,(int)local_28);
      local_3c = piVar7;
      local_41 = 1;
    }
    iVar2 = *(int *)((int)this + 0x3308);
    piVar7 = (int *)(iVar2 + 0x11c0);
    local_34 = param_3;
    if (*(char *)(iVar2 + 0x12ec) != '\0') {
      puVar8 = (undefined4 *)FUN_1002abe0(piVar7,0x24);
      if (puVar8 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
        UNLOCK();
        puVar8[1] = 0x24;
        puVar8[2] = this;
        puVar8[3] = param_2;
        puVar8[4] = local_34;
        puVar8[5] = local_3c;
        *(undefined1 *)(puVar8 + 6) = local_41;
        puVar8[7] = param_1;
        puVar8[8] = local_28;
        puVar8[9] = local_24;
        puVar8[10] = local_20;
        puVar6 = (undefined4 *)((int)puVar8 + 0x2fU & 0xfffffffc);
        *puVar6 = 0;
        *puVar8 = FUN_10016488;
        piVar7[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar6;
        if (*(char *)(iVar2 + 0x12ed) != '\0') {
          *piVar7 = 0;
          SetEvent(*(HANDLE *)(iVar2 + 0x1220));
          return;
        }
        goto LAB_1001640a;
      }
      FUN_10014f4d(piVar7);
    }
    puVar8 = *(undefined4 **)(iVar2 + 0x12d0);
    *puVar8 = this;
    puVar8[1] = param_2;
    puVar8[2] = local_34;
    puVar8[3] = local_3c;
    *(undefined1 *)(puVar8 + 4) = local_41;
    puVar8[5] = param_1;
    puVar8[6] = local_28;
    puVar8[7] = local_24;
    puVar8[8] = local_20;
    FUN_10016488(puVar8);
LAB_1001640a:
    *piVar7 = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x3308);
  piVar7 = (int *)(iVar2 + 0x11c0);
  local_34 = param_3;
  local_28 = &local_38;
  local_24 = &param_3;
  local_1c = &param_4;
  local_20 = this;
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    iVar4 = (uint)(uVar9 != 0) * 4 + 0x10;
    if (uVar9 != 0) {
      iVar4 = iVar4 + (uVar9 + 3 & 0xfffffffc);
    }
    local_30 = (undefined4 *)FUN_1002abe0(piVar7,iVar4);
    if (local_30 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      local_30[1] = iVar4;
      uVar5 = (uint)(uVar9 != 0);
      local_30[uVar5 + 2] = this;
      local_30[uVar5 + 3] = param_2;
      local_30[uVar5 + 4] = local_34;
      puVar8 = (undefined4 *)((int)local_30 + (uVar5 + 2) * 4 + 0x13 & 0xfffffffc);
      local_30[uVar5 + 5] = param_1;
      if (uVar9 != 0) {
        local_30[2] = puVar8;
        FUN_10016415(&local_28,(int)puVar8);
        puVar8 = (undefined4 *)((int)puVar8 + (uVar9 + 3 & 0xfffffffc));
      }
      *puVar8 = 0;
      *local_30 = FUN_1001645e;
      piVar7[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)puVar8;
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *piVar7 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_100162b8;
    }
    FUN_10014f4d(piVar7);
  }
  local_18 = local_28;
  uVar9 = (uint)(local_2c != 0);
  local_14 = local_24;
  local_10 = local_20;
  local_c = local_1c;
  puVar8 = *(undefined4 **)(iVar2 + 0x12d0);
  puVar8[uVar9] = this;
  puVar8[uVar9 + 1] = param_2;
  puVar8[uVar9 + 2] = local_34;
  puVar8[uVar9 + 3] = param_1;
  if (local_2c != 0) {
    *puVar8 = puVar8 + uVar9 + 4;
    FUN_10016415(&local_18,(int)(puVar8 + uVar9 + 4));
  }
  FUN_1001645e(puVar8);
LAB_100162b8:
  *piVar7 = 0;
  return;
}

