/*
 * FUN_1001f7ca at 1001f7ca
 * undefined __stdcall FUN_1001f7ca(undefined4 * param_1, uint param_2, uint param_3, int param_4, int param_5, uint param_6)
 * Address ranges: 1001f7ca-1001fc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f7ca(undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6
                 )

{
  undefined4 *puVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_a4 [10];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  puVar1 = param_1;
  uVar6 = param_1[8];
  puVar3 = FUN_10021793(param_2,param_3,&local_34,uVar6,param_1[9],param_5,(byte)param_6);
  local_24 = *puVar3;
  uVar10 = puVar3[1];
  local_1c = puVar3[2];
  local_18 = puVar3[3];
  param_1[0x11] = param_1[0x11] + (local_18 - uVar10 >> 4);
  local_44 = param_1[9];
  uVar11 = param_6 & 0xff;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_10 = uVar11 * 2 + 2;
  local_40 = 1;
  iVar4 = local_10 * param_5;
  if (param_2 < param_3) {
    local_44 = (local_1c != 0) + local_18;
    local_50 = uVar10;
  }
  iVar5 = *(int *)(*(int *)((int)local_8 + 0x138) + 0x3180);
  local_48 = uVar6;
  local_20 = uVar10;
  if (((*(char *)(*(int *)(*(int *)((int)local_8 + 0x138) + 0x3184) * 0x18 + 0x530 + iVar5) == '\0')
      || (param_4 == 0)) || (cVar2 = FUN_10039950(*(void **)(iVar5 + 0x172c0)), cVar2 == '\0')) {
    local_7c = param_1[uVar11 * 8 + 0x39];
    local_78 = 1;
    puVar8 = local_74;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_74[0] = 0;
    local_74[1] = 0;
    local_74[2] = param_1[uVar11 * 8 + 0x3d];
    local_74[3] = param_1[8];
    local_64 = param_1[9];
    local_5c = param_1[uVar11 * 8 + 0x3e];
    local_a4[0] = param_1[uVar11 * 8 + 0x37];
    local_a4[1] = 0;
    puVar3 = local_a4 + 2;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_60 = 1;
    local_a4[2] = 0;
    FUN_1003d12e(*(void **)(*(int *)(*(int *)((int)local_8 + 0x138) + 0x3188) + 0x1304),local_a4[0],
                 0,0,0x800);
    FUN_1003d12e(*(void **)(*(int *)(*(int *)((int)local_8 + 0x138) + 0x3188) + 0x1304),
                 param_1[uVar11 * 8 + 0x39],0,1,0x400);
    FUN_1003e057(*(int *)(*(int *)(*(int *)((int)local_8 + 0x138) + 0x3188) + 0x1304),&local_7c,0,
                 local_50,0,local_a4,&local_54);
    FUN_1003d12e(*(void **)(*(int *)(*(int *)((int)local_8 + 0x138) + 0x3188) + 0x1304),
                 param_1[uVar11 * 8 + 0x39],0,1,0);
    uVar12 = FUN_1003d25f(*(void **)(*(int *)(*(int *)((int)local_8 + 0x138) + 0x3188) + 0x1304));
    *(undefined8 *)(param_1 + 0x2c) = uVar12;
    FUN_100200df(local_8,(int)param_1);
    if (param_4 == 0) {
      return;
    }
    local_8 = (void *)(param_1[uVar11 * 8 + 0x3e] * local_44);
    local_c = param_1[uVar11 * 8 + 0x3e] * local_50;
    param_6 = 0;
    iVar5 = (**(code **)(*(int *)param_1[uVar11 * 8 + 0x39] + 0x20))
                      ((int *)param_1[uVar11 * 8 + 0x39],0,&local_c,&param_6);
    if (iVar5 < 0) {
      return;
    }
    puVar8 = (undefined4 *)(param_1[uVar11 * 8 + 0x3e] * uVar10 + param_6);
    if (local_24 != 0) {
      FUN_1004fd20((undefined4 *)(param_4 + param_2),
                   (undefined4 *)(local_10 * local_24 + (int)puVar8),
                   (param_1[8] - local_24) * local_10);
      puVar8 = (undefined4 *)((int)puVar8 + param_1[uVar11 * 8 + 0x3e]);
      uVar10 = uVar10 + 1;
    }
    puVar9 = (undefined4 *)(uVar10 * iVar4 + param_4);
    param_1 = puVar8;
    for (; uVar10 <= local_18; uVar10 = uVar10 + 1) {
      uVar6 = local_1c;
      if (uVar10 != local_18) {
        uVar6 = puVar1[8];
      }
      FUN_1004fd20(puVar9,param_1,local_10 * uVar6);
      param_1 = (undefined4 *)((int)param_1 + puVar1[uVar11 * 8 + 0x3e]);
      puVar9 = (undefined4 *)((int)puVar9 + iVar4);
    }
    piVar7 = (int *)puVar1[uVar11 * 8 + 0x39];
    goto LAB_1001fc12;
  }
  FUN_100200df(local_8,(int)param_1);
  iVar5 = (**(code **)(*(int *)param_1[uVar11 * 8 + 0x37] + 0x20))
                    ((int *)param_1[uVar11 * 8 + 0x37],0,0,0);
  if (iVar5 < 0) {
    return;
  }
  uVar6 = uVar10;
  if (local_24 != 0) {
    local_3c = local_24;
    local_34 = 0;
    local_30 = local_1c;
    if (local_18 != uVar10) {
      local_30 = param_1[8];
    }
    uVar6 = uVar10 + 1;
    local_28 = 1;
    local_38 = uVar10;
    local_2c = uVar6;
    (**(code **)(*(int *)param_1[uVar11 * 8 + 0x37] + 0x34))
              ((int *)param_1[uVar11 * 8 + 0x37],uVar10 * iVar4 + local_10 * local_24 + param_4,
               iVar4,0,0,&local_3c);
  }
  if (local_18 < uVar6) {
LAB_1001f998:
    if (local_18 == uVar6) goto LAB_1001f99c;
  }
  else {
    local_30 = param_1[8];
    local_3c = 0;
    local_34 = 0;
    if (local_1c == local_30) {
      local_2c = local_18 + 1;
    }
    else {
      local_2c = local_18;
    }
    local_28 = 1;
    local_38 = uVar6;
    (**(code **)(*(int *)param_1[uVar11 * 8 + 0x37] + 0x34))
              ((int *)param_1[uVar11 * 8 + 0x37],uVar6 * iVar4 + param_4,iVar4,0,0,&local_3c);
    uVar6 = local_18;
    if (local_1c == param_1[8]) {
      uVar6 = local_18 + 1;
      goto LAB_1001f998;
    }
LAB_1001f99c:
    if (local_1c != 0) {
      local_2c = local_18 + 1;
      local_3c = 0;
      local_34 = 0;
      local_28 = 1;
      local_38 = uVar6;
      local_30 = local_1c;
      (**(code **)(*(int *)param_1[uVar11 * 8 + 0x37] + 0x34))
                ((int *)param_1[uVar11 * 8 + 0x37],uVar6 * iVar4 + param_4,iVar4,0,0,&local_3c);
    }
  }
  piVar7 = (int *)param_1[uVar11 * 8 + 0x37];
LAB_1001fc12:
  local_14 = 0;
  local_10 = 0;
  (**(code **)(*piVar7 + 0x24))(piVar7,0,&local_14);
  return;
}

