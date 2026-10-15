/*
 * FUN_10024d59 at 10024d59
 * undefined __thiscall FUN_10024d59(void * this, int param_1, uint * param_2, undefined4 * param_3, uint param_4, int param_5, undefined1 param_6)
 * Address ranges: 10024d59-100250f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10024d59(void *this,int param_1,uint *param_2,undefined4 *param_3,uint param_4,int param_5,
            undefined1 param_6)

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
  iVar1 = *(int *)((int)this + 0x1d54);
  FUN_1005c1d0((int *)(iVar1 + 0x11c0));
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)this + 0x2140)) {
      *(uint *)((int)this + 0x2140) = *param_2;
      uVar5 = FUN_1002498e((void *)((int)this + 0x1dd0),param_2);
      *(undefined4 *)((int)this + 0x2144) = uVar5;
    }
    local_48 = *(uint **)((int)this + 0x2144);
    bVar4 = true;
  }
  iVar1 = param_5;
  uVar2 = param_2[3];
  uVar7 = uVar2 * param_5;
  local_18 = &param_5;
  local_10 = &param_3;
  local_c = &param_4;
  local_14 = param_2;
  if ((!bVar4) || (0x3eff < uVar7 + 4)) {
    local_28 = (int *)0x0;
    local_24 = (uint *)0x0;
    local_20 = (undefined4 **)0x0;
    local_40 = param_3;
    local_3c = param_4;
    if ((bVar4) &&
       (bVar4 = FUN_10056854((void *)(*(int *)((int)this + 0x1d54) + 0x14f0),uVar7,(int *)&local_28)
       , piVar10 = local_28, bVar4)) {
      FUN_100250f3(&local_18,local_28);
      local_3c = param_2[3];
      local_40 = piVar10;
    }
    iVar3 = param_5;
    iVar1 = *(int *)((int)this + 0x1d54);
    piVar10 = (int *)(iVar1 + 0x11c0);
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      puVar6 = (undefined4 *)FUN_1005c0f0(piVar10,0x28);
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar6[1] = 0x28;
        puVar6[2] = this;
        puVar6[3] = param_1;
        puVar6[4] = local_48;
        puVar6[5] = local_40;
        puVar6[6] = local_3c;
        puVar6[7] = iVar3;
        *(undefined1 *)(puVar6 + 8) = param_6;
        puVar6[9] = local_28;
        puVar6[10] = local_24;
        puVar6[0xb] = local_20;
        puVar11 = (undefined4 *)((int)puVar6 + 0x33U & 0xfffffffc);
        *puVar11 = 0;
        *puVar6 = FUN_10025158;
        piVar10[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar11;
        if (*(char *)(iVar1 + 0x12ed) != '\0') {
          hEvent = *(HANDLE *)(iVar1 + 0x1220);
          *piVar10 = 0;
          goto LAB_1002508d;
        }
        goto LAB_100250e4;
      }
      FUN_1001b0b6(piVar10);
    }
    puVar6 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar6 = this;
    puVar6[1] = param_1;
    puVar6[2] = local_48;
    puVar6[3] = local_40;
    puVar6[4] = local_3c;
    puVar6[5] = iVar3;
    *(undefined1 *)(puVar6 + 6) = param_6;
    puVar6[7] = local_28;
    puVar6[8] = local_24;
    puVar6[9] = local_20;
    FUN_10025158(puVar6,puVar6);
LAB_100250e4:
    *piVar10 = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0x1d54);
  local_28 = &param_5;
  piVar10 = (int *)(iVar3 + 0x11c0);
  local_24 = param_2;
  local_20 = &param_3;
  local_1c = &param_4;
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    iVar8 = 0x18;
    if (uVar7 != 0xfffffffc) {
      iVar8 = (uVar7 + 7 & 0xfffffffc) + 0x1c;
    }
    puVar6 = (undefined4 *)FUN_1005c0f0(piVar10,iVar8);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
      UNLOCK();
      puVar6[1] = iVar8;
      uVar9 = (uint)(uVar7 != 0xfffffffc);
      puVar6[uVar9 + 2] = this;
      puVar6[uVar9 + 3] = param_1;
      puVar6[uVar9 + 4] = local_48;
      puVar6[uVar9 + 5] = uVar2;
      puVar6[uVar9 + 6] = iVar1;
      puVar11 = (undefined4 *)((int)puVar6 + (uVar9 + 2) * 4 + 0x1b & 0xfffffffc);
      *(undefined1 *)(puVar6 + uVar9 + 7) = param_6;
      if (uVar7 != 0xfffffffc) {
        puVar6[2] = puVar11;
        FUN_100250f3(&local_28,puVar11);
        puVar11 = (undefined4 *)((int)puVar11 + (uVar7 + 7 & 0xfffffffc));
      }
      *puVar11 = 0;
      *puVar6 = FUN_1002511c;
      piVar10[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)puVar11;
      if (*(char *)(iVar3 + 0x12ed) != '\0') {
        hEvent = *(HANDLE *)(iVar3 + 0x1220);
        *piVar10 = 0;
LAB_1002508d:
        SetEvent(hEvent);
        return;
      }
      goto LAB_10024f80;
    }
    FUN_1001b0b6(piVar10);
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
  puVar6[uVar9 + 3] = uVar2;
  puVar6[uVar9 + 4] = iVar1;
  *(undefined1 *)(puVar6 + uVar9 + 5) = param_6;
  if (uVar7 != 0xfffffffc) {
    *puVar6 = puVar6 + uVar9 + 6;
    FUN_100250f3(&local_18,puVar6 + uVar9 + 6);
  }
  FUN_1002511c(puVar6);
LAB_10024f80:
  *piVar10 = 0;
  return;
}

