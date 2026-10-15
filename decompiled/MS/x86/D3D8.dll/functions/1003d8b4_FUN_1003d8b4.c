/*
 * FUN_1003d8b4 at 1003d8b4
 * undefined __thiscall FUN_1003d8b4(void * this, int param_1, uint * param_2, int param_3, undefined4 * param_4, uint param_5, int param_6)
 * Address ranges: 1003d8b4-1003dc4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003d8b4(void *this,int param_1,uint *param_2,int param_3,undefined4 *param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  HANDLE hEvent;
  uint *local_48;
  int *local_40;
  uint local_3c;
  int *local_28;
  uint *local_24;
  undefined4 **local_20;
  uint *local_1c;
  int *local_18;
  uint *local_14;
  undefined4 **local_10;
  uint *local_c;
  
  local_48 = param_2;
  bVar4 = false;
  iVar1 = *(int *)((int)this + 0xd9b8);
  FUN_100abd50((int *)(iVar1 + 0x11c0));
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)this + 0xddc4)) {
      *(uint *)((int)this + 0xddc4) = *param_2;
      uVar5 = FUN_1003a42d((void *)((int)this + 0xda34),param_2);
      *(undefined4 *)((int)this + 0xddc8) = uVar5;
    }
    local_48 = *(uint **)((int)this + 0xddc8);
    bVar4 = true;
  }
  iVar1 = param_6;
  uVar2 = param_2[3];
  uVar7 = uVar2 * param_6;
  local_18 = &param_6;
  local_10 = &param_4;
  local_c = &param_5;
  local_14 = param_2;
  if ((!bVar4) || (0x3eff < uVar7 + 4)) {
    local_40 = param_4;
    local_3c = param_5;
    local_28 = (int *)0x0;
    local_24 = (uint *)0x0;
    local_20 = (undefined4 **)0x0;
    if ((bVar4) &&
       (bVar4 = FUN_100a000d((void *)(*(int *)((int)this + 0xd9b8) + 0x14f0),uVar7,(int *)&local_28)
       , piVar10 = local_28, bVar4)) {
      FUN_1003ab92(&local_18,local_28);
      local_3c = param_2[3];
      local_40 = piVar10;
    }
    iVar3 = param_6;
    iVar1 = *(int *)((int)this + 0xd9b8);
    piVar10 = (int *)(iVar1 + 0x11c0);
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      puVar6 = (undefined4 *)FUN_100abc70(piVar10,0x28);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = 0x28;
        puVar6[2] = this;
        puVar6[3] = param_1;
        puVar6[4] = local_48;
        puVar6[5] = param_3;
        puVar6[6] = local_40;
        puVar6[7] = local_3c;
        puVar6[8] = iVar3;
        puVar6[9] = local_28;
        puVar6[10] = local_24;
        puVar6[0xb] = local_20;
        puVar11 = (undefined4 *)((int)puVar6 + 0x33U & 0xfffffffc);
        *puVar11 = 0;
        *puVar6 = FUN_1003dc7d;
        piVar10[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar11;
        if (*(char *)(iVar1 + 0x12ed) != '\0') {
          hEvent = *(HANDLE *)(iVar1 + 0x1220);
          *piVar10 = 0;
          goto LAB_1003dbe8;
        }
        goto LAB_1003dc3f;
      }
      FUN_1002f90d(piVar10);
    }
    puVar6 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar6 = this;
    puVar6[1] = param_1;
    puVar6[2] = local_48;
    puVar6[3] = param_3;
    puVar6[4] = local_40;
    puVar6[5] = local_3c;
    puVar6[6] = iVar3;
    puVar6[7] = local_28;
    puVar6[8] = local_24;
    puVar6[9] = local_20;
    FUN_1003dc7d(puVar6);
LAB_1003dc3f:
    *piVar10 = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0xd9b8);
  local_28 = &param_6;
  piVar10 = (int *)(iVar3 + 0x11c0);
  local_24 = param_2;
  local_20 = &param_4;
  local_1c = &param_5;
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    iVar8 = 0x18;
    if (uVar7 != 0xfffffffc) {
      iVar8 = (uVar7 + 7 & 0xfffffffc) + 0x1c;
    }
    puVar6 = (undefined4 *)FUN_100abc70(piVar10,iVar8);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
      UNLOCK();
      puVar6[1] = iVar8;
      uVar9 = (uint)(uVar7 != 0xfffffffc);
      puVar6[uVar9 + 2] = this;
      puVar6[uVar9 + 3] = param_1;
      puVar6[uVar9 + 4] = local_48;
      puVar6[uVar9 + 5] = param_3;
      puVar6[uVar9 + 6] = uVar2;
      puVar11 = (undefined4 *)((int)puVar6 + (uVar9 + 2) * 4 + 0x1b & 0xfffffffc);
      puVar6[uVar9 + 7] = iVar1;
      if (uVar7 != 0xfffffffc) {
        puVar6[2] = puVar11;
        FUN_1003ab92(&local_28,puVar11);
        puVar11 = (undefined4 *)((int)puVar11 + (uVar7 + 7 & 0xfffffffc));
      }
      *puVar11 = 0;
      *puVar6 = FUN_1003dc4e;
      piVar10[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar11;
      if (*(char *)(iVar3 + 0x12ed) != '\0') {
        hEvent = *(HANDLE *)(iVar3 + 0x1220);
        *piVar10 = 0;
LAB_1003dbe8:
        SetEvent(hEvent);
        return;
      }
      goto LAB_1003dadb;
    }
    FUN_1002f90d(piVar10);
  }
  local_18 = local_28;
  uVar9 = (uint)(uVar7 != 0xfffffffc);
  local_14 = local_24;
  local_10 = local_20;
  local_c = local_1c;
  puVar6 = *(undefined4 **)(iVar3 + 0x12d0);
  puVar6[uVar9] = this;
  puVar6[uVar9 + 1] = param_1;
  puVar6[uVar9 + 2] = local_48;
  puVar6[uVar9 + 3] = param_3;
  puVar6[uVar9 + 4] = uVar2;
  puVar6[uVar9 + 5] = iVar1;
  if (uVar7 != 0xfffffffc) {
    *puVar6 = puVar6 + uVar9 + 6;
    FUN_1003ab92(&local_18,puVar6 + uVar9 + 6);
  }
  FUN_1003dc4e(puVar6);
LAB_1003dadb:
  *piVar10 = 0;
  return;
}

