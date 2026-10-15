/*
 * FUN_10007310 at 10007310
 * undefined FUN_10007310(void)
 * Address ranges: 10007310-100076e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007310(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint local_9c;
  uint local_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    iVar9 = (*(code *)PTR_FUN_1009d160)();
    *(bool *)(param_1 + 0x970) = iVar9 != 0;
  }
  iVar9 = FUN_100076e8(param_1,param_2);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x14) != 0)) {
    FUN_100072b0(iVar9,param_2,*(int *)(iVar9 + 0x14));
  }
  puVar1 = (uint *)(param_1 + 0xe8);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_9c = ~*puVar1;
  local_50 = 0;
  uVar12 = (local_9c & 0xaaaaaaaa) >> 1 | (local_9c & 0x55555555) << 1;
  uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  local_90 = CONCAT44(param_3,param_2);
  uStack_88 = (ulonglong)param_4;
  local_98 = 0;
  for (uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10); (1 - (uVar12 >> 5) & 0xff) == 0;
      uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10)) {
    local_98 = local_98 + 0x20;
    if (0x3f < local_98) {
      local_70 = 0xffffffff;
      goto LAB_10007464;
    }
    uVar12 = 0;
    if (0x40 - local_98 < 0x20) {
      uVar12 = 0xffffffff;
    }
    local_9c = ~(uVar12 | puVar1[local_98 >> 5]);
    uVar12 = (local_9c & 0xaaaaaaaa) >> 1 | (local_9c & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  }
  pbVar8 = (byte *)((int)&local_9c + ((int)uVar12 >> 3));
  *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  local_70 = (ulonglong)(local_98 + uVar12);
LAB_10007464:
  pbVar8 = (byte *)((int)puVar1 + ((uint)(local_70 >> 3) & 3) + (int)(local_70 >> 5) * 4);
  *pbVar8 = *pbVar8 | (byte)(1 << (ulonglong)((uint)local_70 & 7));
  uVar10 = *(undefined4 *)(param_1 + 0xb8);
  iVar9 = *(int *)(param_1 + 0xc0) + DAT_1009e044 * (uint)local_70;
  uVar11 = FUN_1007a780(iVar9,PTR_DAT_1009e040);
  *(undefined4 *)(iVar9 + DAT_1009e04c) = uVar10;
  *(code **)(iVar9 + DAT_1009e048) = FUN_10007730;
  *(undefined4 *)(iVar9 + DAT_1009e050) = 0;
  uVar10 = FUN_100072b0(uVar11,param_2,iVar9);
  uStack_80 = CONCAT44(uVar10,(undefined4)uStack_80);
  uStack_78 = CONCAT44(uStack_78._4_4_,iVar9);
  iVar9 = (*(code *)PTR_FUN_1009d160)();
  piVar2 = (int *)(param_1 + 0xd0);
  puVar1 = (uint *)(param_1 + 0xd8);
  uVar12 = *puVar1;
  puVar3 = (uint *)(param_1 + 0xd4);
  uStack_68._0_6_ = CONCAT15(iVar9 == param_2,(undefined5)uStack_68);
  if (*puVar3 == uVar12) {
    uVar7 = uVar12 << 1;
    if (uVar12 == 0) {
      uVar7 = 0x10;
    }
    uVar10 = (undefined4)((ulonglong)uVar7 * 0x48);
    if ((ulonglong)uVar7 * 0x48 >> 0x20 != 0) {
      uVar10 = 0xffffffff;
    }
    iVar9 = FUN_1007a040(uVar10);
    if (iVar9 == 0) goto LAB_100075c0;
    FUN_1007a780(iVar9,*piVar2,((ulonglong)(*puVar1 * 9) & 0x1fffffff) << 3);
    FUN_1007a060(*piVar2);
    *piVar2 = iVar9;
    *puVar1 = uVar7;
  }
  puVar5 = (undefined8 *)(*piVar2 + *puVar3 * 0x48);
  puVar5[1] = uStack_88;
  *puVar5 = local_90;
  puVar5[3] = uStack_78;
  puVar5[2] = uStack_80;
  puVar5[5] = uStack_68;
  puVar5[4] = local_70;
  puVar5[7] = uStack_58;
  puVar5[6] = uStack_60;
  puVar5[8] = local_50;
  *puVar3 = *puVar3 + 1;
LAB_100075c0:
  if (*(uint *)(param_1 + 0xe0) != 0) {
    uVar12 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0xdc) + uVar12 * 0x10);
      if (*piVar2 == param_2) {
        iVar9 = piVar2[2];
        if (iVar9 != -1) {
          if (*(char *)(*(int *)(param_1 + 0xdc) + iVar9 * 0x10 + 0xc) == '\0') {
            uVar10 = (*(code *)PTR_FUN_1009d180)(param_2,0xfffffffc);
            puVar4 = (undefined4 *)(param_1 + 0xb4);
          }
          else {
            uVar10 = (*(code *)PTR_FUN_1009d184)();
            puVar4 = (undefined4 *)(param_1 + 0xb8);
          }
          uVar6 = *puVar4;
          iVar9 = *(int *)(param_1 + 0xbc) + iVar9 * DAT_1009e034;
          uVar11 = FUN_1007a780(iVar9,PTR_DAT_1009e030);
          *(undefined4 *)(iVar9 + DAT_1009e038) = uVar10;
          *(undefined4 *)(iVar9 + DAT_1009e03c) = uVar6;
          FUN_100072b0(uVar11,param_2,iVar9);
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0xe0));
  }
  (*(code *)PTR_FUN_1009d1ec)(param_2,0xaaaa,2000,0);
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
  return;
}

