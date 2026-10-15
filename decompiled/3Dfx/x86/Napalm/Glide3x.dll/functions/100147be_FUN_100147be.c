/*
 * FUN_100147be at 100147be
 * undefined __thiscall FUN_100147be(void * this, undefined4 * param_1, uint param_2, uint param_3, int param_4, int param_5, byte param_6)
 * Address ranges: 100147be-10014b02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100147be(void *this,undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5,
            byte param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  int local_8;
  
  puVar3 = param_1;
  local_8 = *(int *)(*(int *)((int)this + 0x138) + 0x3684) * 0x18 +
            *(int *)(*(int *)((int)this + 0x138) + 0x3680);
  uVar2 = param_1[8];
  local_c = this;
  puVar5 = FUN_100161ed(param_2,param_3,&local_44,uVar2,param_1[9],param_5,param_6);
  local_30 = *puVar5;
  uVar11 = puVar5[1];
  local_28 = puVar5[2];
  local_24 = puVar5[3];
  local_64 = 0;
  param_1[0x11] = param_1[0x11] + (local_24 - uVar11 >> 4);
  local_54 = param_1[9];
  local_60 = 0;
  local_5c = 0;
  local_50 = 1;
  local_58 = uVar2;
  local_2c = uVar11;
  if ((param_3 <= param_2) ||
     (local_54 = (local_28 != 0) + local_24, local_60 = uVar11, param_4 == 0)) {
LAB_10014aec:
    FUN_10014650(local_c,(int)puVar3,&local_64,param_6);
    return;
  }
  uVar2 = (uint)param_6;
  iVar1 = uVar2 * 2 + 2;
  iVar6 = iVar1 * param_5;
  if ((*(char *)(local_8 + 0x530) == '\0') ||
     (cVar4 = FUN_1003f843(*(void **)(*(int *)(*(int *)((int)local_c + 0x138) + 0x3680) + 0x172c0)),
     cVar4 == '\0')) {
    local_8 = 0;
    local_18 = 0;
    local_14 = 0;
    iVar7 = (**(code **)(*(int *)param_1[uVar2 * 8 + 0x39] + 0x20))
                      ((int *)param_1[uVar2 * 8 + 0x39],0,&local_18,&local_8);
    if (-1 < iVar7) {
      puVar10 = (undefined4 *)(param_1[uVar2 * 8 + 0x3e] * uVar11 + local_8);
      if (local_30 != 0) {
        FUN_10055d40((undefined4 *)(iVar1 * local_30 + (int)puVar10),
                     (undefined4 *)(param_4 + param_2),(param_1[8] - local_30) * iVar1);
        puVar10 = (undefined4 *)((int)puVar10 + param_1[uVar2 * 8 + 0x3e]);
        uVar11 = uVar11 + 1;
      }
      puVar9 = (undefined4 *)(uVar11 * iVar6 + param_4);
      param_1 = puVar10;
      for (; uVar11 <= local_24; uVar11 = uVar11 + 1) {
        uVar8 = local_28;
        if (uVar11 != local_24) {
          uVar8 = puVar3[8];
        }
        FUN_10055d40(param_1,puVar9,iVar1 * uVar8);
        param_1 = (undefined4 *)((int)param_1 + puVar3[uVar2 * 8 + 0x3e]);
        puVar9 = (undefined4 *)((int)puVar9 + iVar6);
      }
    }
    local_1c = puVar3[uVar2 * 8 + 0x3e] * local_54;
    local_20 = puVar3[uVar2 * 8 + 0x3e] * local_60;
    (**(code **)(*(int *)puVar3[uVar2 * 8 + 0x39] + 0x24))
              ((int *)puVar3[uVar2 * 8 + 0x39],0,&local_20);
    goto LAB_10014aec;
  }
  local_10 = 0;
  local_c = (void *)0x0;
  iVar7 = (**(code **)(*(int *)param_1[uVar2 * 8 + 0x37] + 0x20))
                    ((int *)param_1[uVar2 * 8 + 0x37],0,&local_10,0);
  if (iVar7 < 0) {
    return;
  }
  uVar8 = uVar11;
  if (local_30 != 0) {
    local_4c = local_30;
    local_44 = 0;
    local_40 = local_28;
    if (local_24 != uVar11) {
      local_40 = param_1[8];
    }
    uVar8 = uVar11 + 1;
    local_38 = 1;
    local_48 = uVar11;
    local_3c = uVar8;
    (**(code **)(*(int *)param_1[uVar2 * 8 + 0x37] + 0x30))
              ((int *)param_1[uVar2 * 8 + 0x37],0,&local_4c,
               uVar11 * iVar6 + iVar1 * local_30 + param_4,iVar6,0);
  }
  if (local_24 < uVar8) {
LAB_100149ae:
    if (local_24 != uVar8) goto LAB_100149f8;
  }
  else {
    local_40 = param_1[8];
    local_4c = 0;
    local_44 = 0;
    if (local_28 == local_40) {
      local_3c = local_24 + 1;
    }
    else {
      local_3c = local_24;
    }
    local_38 = 1;
    local_48 = uVar8;
    (**(code **)(*(int *)param_1[uVar2 * 8 + 0x37] + 0x30))
              ((int *)param_1[uVar2 * 8 + 0x37],0,&local_4c,
               uVar8 * iVar6 + iVar1 * local_30 + param_4,iVar6,0);
    uVar8 = local_24;
    if (local_28 == param_1[8]) {
      uVar8 = local_24 + 1;
      goto LAB_100149ae;
    }
  }
  if (local_28 != 0) {
    local_3c = local_24 + 1;
    local_4c = 0;
    local_44 = 0;
    local_38 = 1;
    local_48 = uVar8;
    local_40 = local_28;
    (**(code **)(*(int *)param_1[uVar2 * 8 + 0x37] + 0x30))
              ((int *)param_1[uVar2 * 8 + 0x37],0,&local_4c,
               uVar8 * iVar6 + iVar1 * local_30 + param_4,iVar6,0);
  }
LAB_100149f8:
  (**(code **)(*(int *)param_1[uVar2 * 8 + 0x37] + 0x24))((int *)param_1[uVar2 * 8 + 0x37],0,0);
  return;
}

