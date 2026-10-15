/*
 * FUN_1008ec70 at 1008ec70
 * undefined FUN_1008ec70(void)
 * Address ranges: 1008ec70-1008f04b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008ec70(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint local_9c;
  uint local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  iVar7 = DAT_100be0c0;
  if (*(int *)(DAT_100be0c0 + 0xd4) == 0) {
    iVar8 = (*(code *)PTR_FUN_100ba1dc)();
    *(bool *)(iVar7 + 0x970) = iVar8 != 0;
  }
  iVar8 = FUN_1008f3b8(iVar7,param_2);
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x14) != 0)) {
    FUN_1008ec10(iVar8,param_2,*(int *)(iVar8 + 0x14));
  }
  puVar1 = (uint *)(iVar7 + 0xe8);
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
  local_90 = (ulonglong)param_2;
  uStack_88 = (ulonglong)param_4;
  local_98 = 0;
  for (uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10); (1 - (uVar12 >> 5) & 0xff) == 0;
      uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10)) {
    local_98 = local_98 + 0x20;
    if (0x3f < local_98) {
      local_70 = 0xffffffff;
      goto LAB_1008edc4;
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
  pbVar6 = (byte *)((int)&local_9c + ((int)uVar12 >> 3));
  *pbVar6 = *pbVar6 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  local_70 = (ulonglong)(local_98 + uVar12);
LAB_1008edc4:
  pbVar6 = (byte *)((int)puVar1 + ((uint)(local_70 >> 3) & 3) + (int)(local_70 >> 5) * 4);
  *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)((uint)local_70 & 7));
  uVar9 = *(undefined4 *)(iVar7 + 0xb8);
  iVar8 = *(int *)(iVar7 + 0xc0) + DAT_100bb044 * (uint)local_70;
  uVar11 = FUN_100917a0(iVar8,PTR_DAT_100bb040);
  *(undefined4 *)(iVar8 + DAT_100bb04c) = uVar9;
  *(code **)(iVar8 + DAT_100bb048) = FUN_1008f400;
  *(undefined4 *)(iVar8 + DAT_100bb050) = 0;
  uVar9 = FUN_1008ec10(uVar11,param_2,iVar8);
  uStack_80 = CONCAT44(uVar9,(undefined4)uStack_80);
  uStack_78 = CONCAT44(uStack_78._4_4_,iVar8);
  uVar10 = (*(code *)PTR_FUN_100ba1dc)();
  piVar2 = (int *)(iVar7 + 0xd0);
  puVar1 = (uint *)(iVar7 + 0xd8);
  uVar12 = *puVar1;
  puVar3 = (uint *)(iVar7 + 0xd4);
  uStack_68._0_6_ = CONCAT15(uVar10 == param_2,(undefined5)uStack_68);
  if (*puVar3 == uVar12) {
    uVar10 = uVar12 << 1;
    if (uVar12 == 0) {
      uVar10 = 0x10;
    }
    uVar9 = (undefined4)((ulonglong)uVar10 * 0x48);
    if ((ulonglong)uVar10 * 0x48 >> 0x20 != 0) {
      uVar9 = 0xffffffff;
    }
    iVar8 = FUN_100914b0(uVar9);
    if (iVar8 == 0) goto LAB_1008ef20;
    FUN_100917a0(iVar8,*piVar2,((ulonglong)(*puVar1 * 9) & 0x1fffffff) << 3);
    FUN_100914d0(*piVar2);
    *piVar2 = iVar8;
    *puVar1 = uVar10;
  }
  puVar4 = (ulonglong *)(*piVar2 + *puVar3 * 0x48);
  puVar4[1] = uStack_88;
  *puVar4 = local_90;
  puVar4[3] = uStack_78;
  puVar4[2] = uStack_80;
  puVar4[5] = uStack_68;
  puVar4[4] = local_70;
  puVar4[7] = uStack_58;
  puVar4[6] = uStack_60;
  puVar4[8] = local_50;
  *puVar3 = *puVar3 + 1;
LAB_1008ef20:
  if (*(uint *)(iVar7 + 0xe0) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (uint *)(*(int *)(iVar7 + 0xdc) + uVar12 * 0x10);
      if (*puVar1 == param_2) {
        uVar12 = puVar1[2];
        if (uVar12 != 0xffffffff) {
          if (*(char *)(*(int *)(iVar7 + 0xdc) + uVar12 * 0x10 + 0xc) == '\0') {
            uVar9 = (*(code *)PTR_FUN_100ba228)(param_2,0xfffffffc);
            iVar8 = 0xb4;
          }
          else {
            uVar9 = (*(code *)PTR_FUN_100ba22c)();
            iVar8 = 0xb8;
          }
          uVar5 = *(undefined4 *)(iVar7 + iVar8);
          iVar8 = *(int *)(iVar7 + 0xbc) + uVar12 * DAT_100bb034;
          uVar11 = FUN_100917a0(iVar8,PTR_DAT_100bb030);
          *(undefined4 *)(iVar8 + DAT_100bb038) = uVar9;
          *(undefined4 *)(iVar8 + DAT_100bb03c) = uVar5;
          FUN_1008ec10(uVar11,param_2,iVar8);
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(iVar7 + 0xe0));
  }
  (*(code *)PTR_FUN_100ba2c0)(param_2,0xaaaa,2000,0);
  *(int *)(iVar7 + 0xcc) = *(int *)(iVar7 + 0xcc) + 1;
  return;
}

