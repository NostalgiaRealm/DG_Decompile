/*
 * FUN_10025844 at 10025844
 * undefined __thiscall FUN_10025844(void * this, int param_1, uint * param_2, int param_3, int param_4, undefined1 param_5)
 * Address ranges: 10025844-10025bac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10025844(void *this,int param_1,uint *param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *this_00;
  undefined4 *puVar9;
  uint **local_30;
  int local_2c;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = param_3;
  local_10 = param_2[2] << 3;
  iVar1 = *(int *)((int)this + 0x1d54);
  local_18 = param_2;
  local_c = 0;
  bVar3 = false;
  FUN_1005c1d0((int *)(iVar1 + 0x11c0));
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)this + 0x2140)) {
      *(uint *)((int)this + 0x2140) = *param_2;
      uVar4 = FUN_1002498e((void *)((int)this + 0x1dd0),param_2);
      *(undefined4 *)((int)this + 0x2144) = uVar4;
    }
    local_18 = *(uint **)((int)this + 0x2144);
    if ((local_18 != (uint *)0x0) && (uVar8 = 0, param_2[2] != 0)) {
      do {
        local_c = local_c + 0x10 +
                  (uint)*(byte *)((int)param_2 +
                                 (uint)*(byte *)((int)param_2 + uVar8 + 0x9c) * 8 + 0x16) * param_4;
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_2[2]);
    }
    bVar3 = true;
  }
  puVar2 = local_18;
  local_30 = &local_18;
  uVar8 = local_10 + 0x10 + local_c;
  local_2c = param_4;
  if ((bVar3) && (uVar8 < 0x3f00)) {
    iVar1 = *(int *)((int)this + 0x1d54);
    this_00 = (int *)(iVar1 + 0x11c0);
    local_30 = &local_18;
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      iVar6 = 0x14;
      if (uVar8 != 0) {
        iVar6 = (uVar8 + 3 & 0xfffffffc) + 0x18;
      }
      puVar5 = (undefined4 *)FUN_1005c0f0(this_00,iVar6);
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar5[1] = iVar6;
        uVar7 = (uint)(uVar8 != 0);
        puVar5[uVar7 + 2] = this;
        puVar5[uVar7 + 3] = param_1;
        puVar5[uVar7 + 4] = puVar2;
        puVar5[uVar7 + 5] = param_4;
        puVar9 = (undefined4 *)((int)puVar5 + (uVar7 + 2) * 4 + 0x17 & 0xfffffffc);
        *(undefined1 *)(puVar5 + uVar7 + 6) = param_5;
        if (uVar8 != 0) {
          puVar5[2] = puVar9;
          FUN_10025bad(&local_30,(uint)puVar9);
          puVar9 = (undefined4 *)((int)puVar9 + (uVar8 + 3 & 0xfffffffc));
        }
        *puVar9 = 0;
        *puVar5 = FUN_10025c41;
        this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
LAB_10025b3d:
        if (*(char *)((int)this_00 + 0x12d) != '\0') {
          *this_00 = 0;
          SetEvent((HANDLE)this_00[0x18]);
          return;
        }
        goto LAB_10025b9e;
      }
      FUN_1001b0b6(this_00);
    }
    local_30 = &local_18;
    local_2c = param_4;
    puVar5 = *(undefined4 **)(iVar1 + 0x12d0);
    uVar7 = (uint)(uVar8 != 0);
    puVar5[uVar7] = this;
    puVar5[uVar7 + 1] = param_1;
    puVar5[uVar7 + 2] = puVar2;
    puVar5[uVar7 + 3] = param_4;
    *(undefined1 *)(puVar5 + uVar7 + 4) = param_5;
    if (uVar8 != 0) {
      *puVar5 = puVar5 + uVar7 + 5;
      FUN_10025bad(&local_30,(uint)(puVar5 + uVar7 + 5));
    }
    FUN_10025c41(puVar5);
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (bVar3) {
      bVar3 = FUN_10056854((void *)(*(int *)((int)this + 0x1d54) + 0x14f0),uVar8,(int *)&local_24);
      uVar8 = local_24;
      if (bVar3) {
        FUN_10025bad(&local_30,local_24);
      }
    }
    else {
      uVar8 = 0;
    }
    iVar6 = local_14;
    puVar2 = local_18;
    iVar1 = *(int *)((int)this + 0x1d54);
    this_00 = (int *)(iVar1 + 0x11c0);
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      puVar5 = (undefined4 *)FUN_1005c0f0(this_00,0x24);
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar5[1] = 0x24;
        puVar5[2] = this;
        puVar5[3] = param_1;
        puVar5[4] = puVar2;
        puVar5[5] = iVar6;
        puVar5[6] = param_4;
        *(undefined1 *)(puVar5 + 7) = param_5;
        puVar5[8] = uVar8;
        puVar5[9] = local_20;
        puVar5[10] = local_1c;
        puVar9 = (undefined4 *)((int)puVar5 + 0x2fU & 0xfffffffc);
        *puVar9 = 0;
        *puVar5 = FUN_10025c6c;
        this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar9;
        goto LAB_10025b3d;
      }
      FUN_1001b0b6(this_00);
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar5 = this;
    puVar5[1] = param_1;
    puVar5[2] = puVar2;
    puVar5[3] = iVar6;
    puVar5[4] = param_4;
    *(undefined1 *)(puVar5 + 5) = param_5;
    puVar5[6] = uVar8;
    puVar5[7] = local_20;
    puVar5[8] = local_1c;
    FUN_10025c6c(puVar5);
  }
LAB_10025b9e:
  *this_00 = 0;
  return;
}

