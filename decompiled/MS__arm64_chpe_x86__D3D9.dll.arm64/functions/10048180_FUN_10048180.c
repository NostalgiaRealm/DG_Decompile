/*
 * FUN_10048180 at 10048180
 * undefined FUN_10048180(void)
 * Address ranges: 10048180-10049bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048180(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,byte param_11)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  ulonglong *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined4 *puVar24;
  int iVar25;
  int *piVar26;
  byte *extraout_w1;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  char cVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint local_114;
  int local_110;
  int local_f8;
  uint local_e0;
  byte *local_c0;
  int local_b4;
  undefined8 local_a0;
  undefined1 local_98;
  uint *local_90;
  byte *local_8c;
  int local_88;
  int *local_84;
  ulonglong local_80;
  uint local_78;
  ulonglong local_70 [6];
  
  if ((char)param_3[7] == -1) {
    uVar27 = 0;
  }
  else {
    uVar27 = (uint)*(byte *)((int)param_3 + 0x1d);
  }
  uVar30 = *(uint *)(param_1 + 0x762c);
  if (uVar30 < uVar27) {
    uVar27 = uVar30;
  }
  if (*(char *)((int)param_3 + 0x19) == '\0') {
    local_114 = (uint)*(byte *)((int)param_3 + 0x1a);
  }
  else {
    local_114 = 0;
  }
  bVar20 = *(char *)((int)param_3 + 0x41) == -0x60;
  if (bVar20) {
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x42) << 0x14;
  }
  uVar32 = (uint)bVar20;
  if (*(char *)((int)param_3 + 0x49) == -0x5f) {
    uVar32 = uVar32 | 2;
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x4a) << 0x18;
  }
  if (*(char *)((int)param_3 + 0x31) == '0') {
    uVar32 = uVar32 | 4;
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x32) << 0xc;
  }
  if (*(char *)((int)param_3 + 0x51) == 'P') {
    uVar32 = uVar32 | 8;
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x52) << 0x1c;
  }
  if (*(char *)((int)param_3 + 0x59) == 'Q') {
    uVar34 = (uint)*(byte *)((int)param_3 + 0x5a);
    uVar32 = uVar32 | 0x10;
  }
  else {
    uVar34 = 0;
  }
  if (*(char *)((int)param_3 + 0x61) == 'R') {
    uVar32 = uVar32 | 0x20;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x62) << 4;
  }
  if (*(char *)((int)param_3 + 0x69) == 'S') {
    uVar32 = uVar32 | 0x40;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x6a) << 8;
  }
  if (*(char *)((int)param_3 + 0x71) == 'T') {
    uVar32 = uVar32 | 0x80;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x72) << 0xc;
  }
  if (*(char *)((int)param_3 + 0x79) == 'U') {
    uVar32 = uVar32 | 0x100;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x7a) << 0x10;
  }
  if (*(char *)((int)param_3 + 0x81) == 'V') {
    uVar32 = uVar32 | 0x200;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x82) << 0x14;
  }
  if (*(char *)((int)param_3 + 0x89) == 'W') {
    uVar32 = uVar32 | 0x400;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x8a) << 0x18;
  }
  if (*(char *)((int)param_3 + 0x21) == '\x10') {
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x22) << 4;
    uVar32 = *(uint *)(&DAT_10161468 + uVar27 * 4) | uVar32;
  }
  if (*(char *)((int)param_3 + 0x91) == '\x01') {
    uVar32 = uVar32 | 0x10000;
    uVar34 = uVar34 | (uint)*(byte *)((int)param_3 + 0x92) << 0x1c;
  }
  if (*(char *)((int)param_3 + 0x99) == '1') {
    uVar32 = uVar32 | 0x20000;
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x9a) << 4;
  }
  uVar27 = 0x8000;
  if (*(int *)(param_1 + 0x6f00) == 0 || uVar30 == 0) {
    uVar27 = 0;
  }
  if (*(char *)((int)param_3 + 0x29) == ' ') {
    uVar32 = uVar27 | uVar32;
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x2a) << 8;
  }
  if (*(char *)((int)param_3 + 0x39) == '@') {
    uVar32 = uVar32 | 0x80000;
    local_114 = local_114 | (uint)*(byte *)((int)param_3 + 0x3a) << 0x10;
  }
  local_90 = param_3 + 1;
  uVar27 = 0x40000;
  if (*local_90 == 0) {
    uVar27 = 0;
  }
  uVar14 = uVar27 | uVar32;
  bVar20 = uVar30 == 0xff;
  if (*(int *)(param_1 + 0xf748) < 0xb000) {
    bVar22 = false;
  }
  else if ((2 < param_2 - 4U) || (bVar22 = true, *(float *)(param_1 + 0xe88) < 2.0)) {
    bVar22 = false;
  }
  if (((*(uint *)(param_1 + 0x694c) & 1) == 0) || (*(char *)(param_1 + 0xe8c) != '\0')) {
    iVar28 = *(int *)(param_1 + 0x6948);
  }
  else {
    iVar28 = (int)*(float *)(param_1 + 0x6f44);
  }
  local_a0 = CONCAT44(local_a0._4_4_,iVar28);
  local_8c = (byte *)((int)param_3 + 0x4d);
  if ((((*(uint *)(param_1 + 0x6e84) == (uint)*local_8c) &&
       (*(uint *)(param_1 + 0x6e94) == (uint)*(byte *)((int)param_3 + 0x55))) &&
      (*(uint *)(param_1 + 0x6ea4) == (uint)*(byte *)((int)param_3 + 0x5d))) &&
     (((*(uint *)(param_1 + 0x6eb4) == (uint)*(byte *)((int)param_3 + 0x65) &&
       (*(uint *)(param_1 + 0x6ec4) == (uint)*(byte *)((int)param_3 + 0x6d))) &&
      ((*(uint *)(param_1 + 0x6ed4) == (uint)*(byte *)((int)param_3 + 0x75) &&
       ((*(uint *)(param_1 + 0x6ee4) == (uint)*(byte *)((int)param_3 + 0x7d) &&
        (*(uint *)(param_1 + 0x6ef4) == (uint)*(byte *)((int)param_3 + 0x85))))))))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (*local_90 == 0) {
    local_e0 = 0;
    if (*(char *)(param_1 + 0x7644) != '\0') {
      local_e0 = 8;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x7634) >> 2 & 1) == 0) || (*(int *)(param_1 + 0x7630) == 0)) {
      uVar29 = 1;
      local_e0 = 2;
    }
    else {
      uVar29 = 3;
      local_e0 = 4;
    }
    if ((((*(int *)(param_1 + 0xf72c) == 0) && (*(char *)(param_1 + 0x80) != '\0')) &&
        (*(char *)(param_1 + 0x7640) == '\0')) &&
       (uVar15 = (*(uint *)(param_1 + 0xf50) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(param_1 + 0xf50) & 0x55555555) << 1,
       uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2,
       uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4,
       uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) < 5)) {
      local_e0 = 5;
    }
    if (bVar22) {
      uVar29 = 6;
      local_e0 = 7;
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      bVar21 = param_11 == 0;
    }
    else {
      bVar21 = (char)param_3[0xb] == -1 || param_11 == 0;
    }
    if (bVar21) {
      local_e0 = uVar29;
    }
    if (((uVar32 & 0xf800) == 0) && (*(char *)(param_1 + 0x7644) == '\0')) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21 || bVar20) {
      local_e0 = local_e0 + 8;
    }
  }
  local_c0 = (byte *)((int)param_3 + 0x85);
  *(ulonglong *)(param_1 + 0xfc0) = *(ulonglong *)(param_1 + 0xfc0) & 0xfff7ffffffffffff;
  local_88 = param_5;
  local_78 = param_8;
  if (*(char *)(param_1 + 0xf6a5) != '\0') {
    FUN_10075170(param_1);
    local_c0 = extraout_w1;
  }
  local_f8 = 0;
  local_110 = 0;
  if (bVar16) {
    *(uint *)(param_1 + 0xf5c) =
         (uint)*local_8c |
         ((uint)*(byte *)((int)param_3 + 0x55) |
         ((uint)*(byte *)((int)param_3 + 0x5d) |
         ((uint)*(byte *)((int)param_3 + 0x65) |
         ((uint)*(byte *)((int)param_3 + 0x6d) |
         ((uint)*(byte *)((int)param_3 + 0x75) |
         (uint)(*local_c0 | *(byte *)((int)param_3 + 0x7d)) << 3) << 3) << 3) << 3) << 3) << 3;
  }
  piVar31 = (int *)(param_1 + 0xf6b8);
  if (*(int *)(*piVar31 + local_e0 * 4 + 0xd4) == 0) {
    uVar29 = *(uint *)(param_1 + 0x694c);
    if (((uVar29 & 1) == 0) || (*(char *)(param_1 + 0xe8c) != '\0')) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    uVar15 = *(uint *)(param_1 + 0x7630);
    if ((*(uint *)(param_1 + 0x7634) & 4) == 0) {
      uVar15 = 0;
    }
    local_80 = (ulonglong)uVar15;
    if (bVar22) {
      local_80 = local_80 | ((ulonglong)uVar29 & 2 | 1) << 8;
      if ((uVar29 >> 2 & 1) != 0) {
        local_80 = local_80 | 0x400;
      }
      if (bVar21) {
        local_80 = local_80 | 0x800;
      }
      local_80 = local_80 | (local_a0 & 0xffffffff) << 0xc;
    }
    local_a0 = local_80;
    if (*(int *)(param_1 + 0xf72c) == 0) {
      uVar23 = FUN_10074bd0(param_1);
    }
    else {
      uVar23 = (&DAT_0000126c)[*(int *)(*(int *)(param_1 + 0xf72c) + 4)];
    }
    uVar29 = 0x200000;
    if (uVar30 != 0xff) {
      uVar29 = 0;
    }
    *(uint *)(param_1 + 0xf9c) =
         uVar29 | (uint)param_11 << 0x1f | *(uint *)(param_1 + 0xf9c) & 0x7fd00000 |
         uVar27 | uVar32 & 0xfffff;
    *(ulonglong *)(param_1 + 4000) = CONCAT44(uVar34,local_114);
    FUN_100514c8((undefined8 *)(param_1 + 0xf58),uVar23,local_70);
    uVar19 = local_70[4];
    uVar18 = local_70[3];
    uVar17 = local_70[2];
    uVar33 = local_70[1];
    uVar35 = local_70[0];
    local_84 = (int *)(param_1 + 0xf71c);
    puVar1 = (uint *)(param_1 + 0xf724);
    uVar27 = *puVar1;
    if (uVar27 == 0) {
LAB_10048c9c:
      puVar24 = (undefined4 *)FUN_101321c0(0x2d0);
      piVar26 = local_84;
      if (puVar24 == (undefined4 *)0x0) goto LAB_10049144;
      uVar23 = *(undefined1 *)(param_1 + 0xf718);
      uVar10 = *(undefined4 *)(param_1 + 0xf714);
      uVar32 = 0;
      uVar11 = *(undefined4 *)(param_1 + 0xf710);
      *puVar24 = &PTR_D3DPERF_GetStatus_native_1015eb6c;
      *(undefined8 *)(puVar24 + 1) = 0;
      puVar24[4] = &PTR_FUN_1015ee44;
      puVar24[3] = 0;
      uVar39 = *(undefined8 *)(param_1 + 0xf58);
      uVar38 = *(undefined8 *)(param_1 + 0xf70);
      uVar37 = *(undefined8 *)(param_1 + 0xf68);
      *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(param_1 + 0xf60);
      *(undefined8 *)(puVar24 + 6) = uVar39;
      *(undefined8 *)(puVar24 + 0xc) = uVar38;
      *(undefined8 *)(puVar24 + 10) = uVar37;
      uVar39 = *(undefined8 *)(param_1 + 0xf78);
      uVar38 = *(undefined8 *)(param_1 + 0xf90);
      uVar37 = *(undefined8 *)(param_1 + 0xf88);
      *(undefined8 *)(puVar24 + 0x10) = *(undefined8 *)(param_1 + 0xf80);
      *(undefined8 *)(puVar24 + 0xe) = uVar39;
      *(undefined8 *)(puVar24 + 0x14) = uVar38;
      *(undefined8 *)(puVar24 + 0x12) = uVar37;
      uVar37 = *(undefined8 *)(param_1 + 0xf98);
      *(undefined8 *)(puVar24 + 0x18) = *(undefined8 *)(param_1 + 4000);
      *(undefined8 *)(puVar24 + 0x16) = uVar37;
      *puVar24 = &PTR_FUN_1015eb74;
      *(undefined8 *)(puVar24 + 0x1c) = 0;
      puVar24[1] = uVar11;
      *(undefined1 *)(puVar24 + 0xb3) = uVar23;
      *(undefined8 *)(puVar24 + 0x1a) = 0;
      puVar24[2] = uVar10;
      puVar24[3] = puVar24 + 0x1a;
      uVar27 = *puVar1;
      if (uVar27 != 0) {
        uVar34 = 0;
        uVar29 = uVar27;
        do {
          uVar32 = uVar29 + uVar34 >> 1;
          puVar13 = (ulonglong *)(local_84[1] + uVar32 * 0x30);
          iVar28 = 0;
          if (((((*puVar13 == uVar35) && (iVar28 = 1, puVar13[1] == uVar33)) &&
               (iVar28 = 2, puVar13[2] == uVar17)) &&
              ((iVar28 = 3, puVar13[3] == uVar18 && (iVar28 = 4, puVar13[4] == uVar19)))) ||
             (uVar15 = uVar32, puVar13[iVar28] <= local_70[iVar28])) {
            iVar28 = 0;
            if ((((*puVar13 == uVar35) && (iVar28 = 1, puVar13[1] == uVar33)) &&
                ((iVar28 = 2, puVar13[2] == uVar17 &&
                 ((iVar28 = 3, puVar13[3] == uVar18 && (iVar28 = 4, puVar13[4] == uVar19)))))) ||
               (local_70[iVar28] <= puVar13[iVar28])) break;
            uVar34 = uVar32 + 1;
            uVar32 = uVar34;
            uVar15 = uVar29;
          }
          uVar29 = uVar15;
        } while (uVar29 != uVar34);
      }
      if (uVar32 == uVar27) {
LAB_10048f08:
        piVar2 = local_84 + 1;
        uVar34 = local_84[3];
        if (uVar34 == uVar27) {
          iVar28 = 0x10;
          if (uVar34 != 0) {
            iVar28 = uVar34 << 1;
          }
          iVar25 = FUN_101322b0(iVar28 * 0x30);
          if (iVar25 != 0) {
            uVar27 = 0;
            if (*puVar1 != 0) {
              do {
                puVar6 = (undefined8 *)(*(int *)(param_1 + 0xf720) + uVar27 * 0x30);
                puVar8 = (undefined8 *)(iVar25 + uVar27 * 0x30);
                uVar27 = uVar27 + 1;
                uVar39 = *puVar6;
                uVar38 = puVar6[3];
                uVar37 = puVar6[2];
                puVar8[1] = puVar6[1];
                *puVar8 = uVar39;
                puVar8[3] = uVar38;
                puVar8[2] = uVar37;
                uVar37 = puVar6[4];
                puVar8[5] = puVar6[5];
                puVar8[4] = uVar37;
              } while (uVar27 < *(uint *)(param_1 + 0xf724));
            }
            FUN_101322d0(*piVar26);
            *piVar26 = iVar25;
            piVar26[1] = iVar25;
            piVar26[3] = iVar28;
          }
        }
        uVar27 = piVar26[2];
        if (piVar26[3] == uVar27) goto LAB_1004910c;
        piVar3 = piVar26 + 1;
        if (uVar32 < uVar27) {
          if (3 < uVar27 - uVar32) {
            piVar3 = (int *)(param_1 + 0xf720);
            do {
              iVar25 = uVar27 - 3;
              puVar6 = (undefined8 *)(*piVar3 + uVar27 * 0x30);
              puVar6[1] = puVar6[-5];
              *puVar6 = puVar6[-6];
              puVar6[3] = puVar6[-3];
              puVar6[2] = puVar6[-4];
              puVar6[5] = puVar6[-1];
              puVar6[4] = puVar6[-2];
              puVar6 = (undefined8 *)(*piVar3 + (uVar27 - 2) * 0x30);
              iVar28 = *piVar3 + uVar27 * 0x30;
              uVar39 = *puVar6;
              uVar38 = puVar6[3];
              uVar37 = puVar6[2];
              *(undefined8 *)(iVar28 + -0x28) = puVar6[1];
              *(undefined8 *)(iVar28 + -0x30) = uVar39;
              *(undefined8 *)(iVar28 + -0x18) = uVar38;
              *(undefined8 *)(iVar28 + -0x20) = uVar37;
              uVar37 = puVar6[4];
              *(undefined8 *)(iVar28 + -8) = puVar6[5];
              *(undefined8 *)(iVar28 + -0x10) = uVar37;
              puVar6 = (undefined8 *)(*piVar3 + iVar25 * 0x30);
              puVar8 = (undefined8 *)(*piVar3 + (uVar27 - 2) * 0x30);
              uVar39 = *puVar6;
              uVar38 = puVar6[3];
              uVar37 = puVar6[2];
              puVar8[1] = puVar6[1];
              *puVar8 = uVar39;
              puVar8[3] = uVar38;
              puVar8[2] = uVar37;
              uVar37 = puVar6[4];
              iVar28 = uVar27 - 4;
              uVar27 = uVar27 - 4;
              puVar8[5] = puVar6[5];
              puVar8[4] = uVar37;
              puVar6 = (undefined8 *)(*piVar3 + iVar28 * 0x30);
              puVar8 = (undefined8 *)(*piVar3 + iVar25 * 0x30);
              uVar39 = *puVar6;
              uVar38 = puVar6[3];
              uVar37 = puVar6[2];
              puVar8[1] = puVar6[1];
              *puVar8 = uVar39;
              puVar8[3] = uVar38;
              puVar8[2] = uVar37;
              uVar37 = puVar6[4];
              puVar8[5] = puVar6[5];
              puVar8[4] = uVar37;
            } while (uVar32 + 3 < uVar27);
          }
          piVar3 = piVar2;
          if (uVar32 < uVar27) {
            piVar3 = (int *)(param_1 + 0xf720);
            do {
              puVar6 = (undefined8 *)(*piVar3 + uVar27 * 0x30);
              uVar27 = uVar27 - 1;
              puVar6[1] = puVar6[-5];
              *puVar6 = puVar6[-6];
              puVar6[3] = puVar6[-3];
              puVar6[2] = puVar6[-4];
              puVar6[5] = puVar6[-1];
              puVar6[4] = puVar6[-2];
            } while (uVar32 < uVar27);
          }
        }
        *puVar1 = piVar26[2] + 1;
        puVar13 = (ulonglong *)(*piVar3 + uVar32 * 0x30);
        puVar13[1] = local_70[1];
        *puVar13 = local_70[0];
        puVar13[3] = local_70[3];
        puVar13[2] = local_70[2];
        puVar13[4] = local_70[4];
        iVar28 = *piVar3 + uVar32 * 0x30;
      }
      else {
        uVar34 = 0;
        do {
          if (*(ulonglong *)(local_84[1] + uVar32 * 0x30 + uVar34 * 8) != local_70[uVar34])
          goto LAB_10048f08;
          uVar34 = uVar34 + 1;
        } while (uVar34 < 5);
        iVar28 = local_84[1] + uVar32 * 0x30;
      }
      *(undefined4 **)(iVar28 + 0x28) = puVar24;
    }
    else {
      uVar32 = 0;
      uVar34 = uVar27;
      do {
        uVar29 = uVar34 + uVar32 >> 1;
        puVar13 = (ulonglong *)(*(int *)(param_1 + 0xf720) + uVar29 * 0x30);
        iVar28 = 0;
        if (((((*puVar13 == local_70[0]) && (iVar28 = 1, puVar13[1] == local_70[1])) &&
             (iVar28 = 2, puVar13[2] == local_70[2])) &&
            ((iVar28 = 3, puVar13[3] == local_70[3] && (iVar28 = 4, puVar13[4] == local_70[4])))) ||
           (uVar15 = uVar29, puVar13[iVar28] <= local_70[iVar28])) {
          iVar28 = 0;
          if ((((*puVar13 == local_70[0]) && (iVar28 = 1, puVar13[1] == local_70[1])) &&
              ((iVar28 = 2, puVar13[2] == local_70[2] &&
               ((iVar28 = 3, puVar13[3] == local_70[3] && (iVar28 = 4, puVar13[4] == local_70[4]))))
              )) || (local_70[iVar28] <= puVar13[iVar28])) break;
          uVar32 = uVar29 + 1;
          uVar29 = uVar32;
          uVar15 = uVar34;
        }
        uVar34 = uVar15;
      } while (uVar34 != uVar32);
      if (uVar29 == uVar27) goto LAB_10048c9c;
      uVar27 = 0;
      do {
        if (*(ulonglong *)(*(int *)(param_1 + 0xf720) + uVar29 * 0x30 + uVar27 * 8) !=
            local_70[uVar27]) goto LAB_10048c9c;
        uVar27 = uVar27 + 1;
      } while (uVar27 < 5);
      puVar24 = (undefined4 *)(*(int *)(param_1 + 0xf720) + uVar29 * 0x30 + 0x28);
      if (puVar24 == (undefined4 *)0x0) goto LAB_10048c9c;
      puVar24 = (undefined4 *)*puVar24;
    }
LAB_1004910c:
    piVar26 = (int *)FUN_10051200(puVar24,local_a0);
    if (piVar26 != (int *)0x0) {
      local_f8 = *piVar26;
      local_110 = piVar26[1];
    }
  }
  else {
    local_80 = 0;
  }
LAB_10049144:
  if (((*(uint *)(param_1 + 0x7634) >> 2 & 1) != 0) && ((local_e0 & 0xfffffff7) == 0)) {
    FUN_10074e40(param_1);
  }
  if (local_f8 == 0) {
    local_f8 = *(int *)(*piVar31 + local_e0 * 4 + 0xd4);
    uVar27 = local_e0;
  }
  else {
    uVar27 = 0x10;
  }
  uVar34 = 0;
  bVar22 = (local_e0 - 5 & 0xfffffff7) == 0;
  cVar36 = *(char *)(param_1 + 0x764b);
  *(bool *)(param_1 + 0x764b) = bVar22;
  *(byte *)(param_1 + 0xf668) = bVar22 != (bool)cVar36 | *(byte *)(param_1 + 0xf668);
  local_a0 = CONCAT44(uVar27,param_3);
  puVar1 = (uint *)(param_1 + 0xf6fc);
  uVar32 = *puVar1;
  uVar35 = 0x8000000000000000;
  if (uVar30 != 0xff) {
    uVar35 = 0;
  }
  uVar35 = uVar35 | (ulonglong)uVar27 << 0x20 | (ulonglong)*param_3;
  if (uVar32 != 0) {
    uVar27 = 0;
    uVar30 = uVar32;
    do {
      uVar34 = uVar30 + uVar27 >> 1;
      uVar33 = *(ulonglong *)(*(int *)(param_1 + 0xf6f4) + uVar34 * 0x18);
      uVar29 = uVar34;
      if (uVar33 <= uVar35) {
        if (uVar35 <= uVar33) break;
        uVar27 = uVar34 + 1;
        uVar34 = uVar27;
        uVar29 = uVar30;
      }
      uVar30 = uVar29;
    } while (uVar30 != uVar27);
  }
  local_98 = bVar20;
  if ((uVar34 == uVar32) || (*(ulonglong *)(uVar34 * 0x18 + *(int *)(param_1 + 0xf6f4)) != uVar35))
  {
    puVar4 = (uint *)(param_1 + 0xf6f8);
    uVar27 = *puVar4;
    if (uVar32 == uVar27) {
      uVar30 = uVar27 * 2;
      iVar28 = uVar27 * 0x30;
      if ((ulonglong)uVar30 * 0x18 >> 0x20 != 0) {
        iVar28 = -1;
      }
      iVar28 = FUN_101322b0(iVar28);
      if (iVar28 != 0) {
        iVar25 = iVar28;
        if (3 < uVar30) {
          puVar5 = (undefined8 *)(iVar28 + 8);
          puVar6 = (undefined8 *)(iVar28 + 0x20);
          puVar7 = (undefined8 *)(iVar28 + 0x38);
          puVar8 = (undefined8 *)(iVar28 + 0x50);
          do {
            *puVar5 = 0;
            *(undefined1 *)(puVar5 + 1) = 0;
            *puVar6 = 0;
            uVar30 = uVar30 - 4;
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar7 = 0;
            iVar25 = iVar25 + 0x60;
            *(undefined1 *)(puVar7 + 1) = 0;
            *puVar8 = 0;
            puVar5 = puVar5 + 0xc;
            *(undefined1 *)(puVar8 + 1) = 0;
            puVar6 = puVar6 + 0xc;
            puVar7 = puVar7 + 0xc;
            puVar8 = puVar8 + 0xc;
          } while (3 < uVar30);
        }
        if (uVar30 != 0) {
          puVar6 = (undefined8 *)(iVar25 + 8);
          do {
            *puVar6 = 0;
            *(undefined1 *)(puVar6 + 1) = 0;
            uVar30 = uVar30 - 1;
            puVar6 = puVar6 + 3;
          } while (uVar30 != 0);
        }
        uVar27 = 0;
        if (*puVar4 != 0) {
          do {
            puVar6 = (undefined8 *)(iVar28 + uVar27 * 0x18);
            puVar8 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + uVar27 * 0x18);
            uVar27 = uVar27 + 1;
            uVar37 = *puVar8;
            puVar6[1] = puVar8[1];
            *puVar6 = uVar37;
            puVar6[2] = puVar8[2];
          } while (uVar27 < *puVar4);
        }
        FUN_101322d0(*(undefined4 *)(param_1 + 0xf6f4));
        *(int *)(param_1 + 0xf6f4) = iVar28;
        *puVar4 = *puVar4 << 1;
      }
    }
    uVar27 = *puVar1;
    if (uVar34 < uVar27) {
      if (3 < uVar27 - uVar34) {
        do {
          puVar6 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + uVar27 * 0x18);
          puVar6[1] = puVar6[-2];
          *puVar6 = puVar6[-3];
          puVar6[2] = puVar6[-1];
          puVar6 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + (uVar27 - 2) * 0x18);
          iVar28 = *(int *)(param_1 + 0xf6f4) + uVar27 * 0x18;
          uVar37 = *puVar6;
          *(undefined8 *)(iVar28 + -0x10) = puVar6[1];
          *(undefined8 *)(iVar28 + -0x18) = uVar37;
          *(undefined8 *)(iVar28 + -8) = puVar6[2];
          iVar28 = uVar27 - 3;
          puVar6 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + iVar28 * 0x18);
          puVar8 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + (uVar27 - 2) * 0x18);
          uVar37 = *puVar6;
          puVar8[1] = puVar6[1];
          *puVar8 = uVar37;
          puVar8[2] = puVar6[2];
          iVar25 = uVar27 - 4;
          uVar27 = uVar27 - 4;
          puVar6 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + iVar25 * 0x18);
          puVar8 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + iVar28 * 0x18);
          uVar37 = *puVar6;
          puVar8[1] = puVar6[1];
          *puVar8 = uVar37;
          puVar8[2] = puVar6[2];
        } while (uVar34 + 3 < uVar27);
      }
      for (; uVar34 < uVar27; uVar27 = uVar27 - 1) {
        puVar6 = (undefined8 *)(*(int *)(param_1 + 0xf6f4) + uVar27 * 0x18);
        puVar6[1] = puVar6[-2];
        *puVar6 = puVar6[-3];
        puVar6[2] = puVar6[-1];
      }
    }
    FUN_1004be18(param_1 + 0xf6f4,uVar34,uVar35,&local_a0);
    *puVar1 = *puVar1 + 1;
  }
  iVar28 = *(int *)(*(int *)(param_1 + 0xf6f4) + uVar34 * 0x18 + 0x14);
  if ((param_2 == 1) &&
     (((*(char *)(param_1 + 0x7646) != '\0' && (*local_90 != 0)) ||
      (*(char *)(param_1 + 0x7647) != '\0')))) {
    local_110 = *(int *)(*piVar31 + (uint)bVar22 * 4 + 0x118);
    cVar36 = '\x01';
  }
  else {
    cVar36 = '\0';
    if (local_110 != 0) goto switchD_10049568_caseD_8;
    local_110 = 0;
    cVar36 = '\0';
  }
  switch(local_e0) {
  case 6:
    piVar31 = (int *)(*piVar31 + 0x120);
    break;
  case 7:
    piVar31 = (int *)(*piVar31 + 0x124);
    break;
  default:
    goto switchD_10049568_caseD_8;
  case 0xe:
    piVar31 = (int *)(*piVar31 + 0x128);
    break;
  case 0xf:
    piVar31 = (int *)(*piVar31 + 300);
  }
  local_110 = *piVar31;
switchD_10049568_caseD_8:
  uVar27 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar30 = (0x1000 - *(int *)(param_1 + 0x68)) - *(int *)(param_1 + 0x6c);
  puVar9 = &DAT_1016e210;
  if (*(char *)(param_1 + 0x7641) == '\0') {
    puVar9 = &DAT_1016e230;
  }
  if ((((*(char *)(param_1 + 0x7642) != '\0') || (*(uint *)(param_1 + 0x6920) != uVar14 || bVar16))
      || ((*(int *)(param_1 + 0x100c) != param_6 ||
          ((*(int *)(param_1 + 0xfc8) != param_7 || (*(int *)(param_1 + 0xfa18) != local_88)))))) ||
     ((*(int *)(param_1 + 0xf9d8) != param_4 ||
      ((((((*(int *)(param_1 + 0xf9cc) != local_f8 || (*(int *)(param_1 + 0xf9d4) != local_110)) ||
          (*(char *)(param_1 + 0x7648) != cVar36)) ||
         ((*(uint *)(param_1 + 0x761c) != *local_90 ||
          (*(int *)(param_1 + 0xfa2c) != *(int *)(puVar9 + param_2 * 4))))) ||
        (((*(int *)(param_1 + 0x6c) != 0) != (param_9 != 0) || uVar27 < local_78) ||
         uVar30 < param_9)) || (*(int *)(param_1 + 0xf9c8) != iVar28)))))) {
    iVar25 = param_7;
    if (param_4 != *(int *)(param_1 + 0xf6d4)) {
      iVar25 = 0;
    }
    FUN_10047f98(param_1,uVar27 < local_78,uVar30 < param_9,iVar25);
    local_b4 = param_6;
    if (param_4 == *(int *)(param_1 + 0xf6d4)) {
      local_b4 = *(int *)(param_1 + 0x5c);
    }
    if (*(char *)(param_1 + 0x7642) != '\0') {
      *(undefined1 *)(param_1 + 0xf669) = 1;
      *(byte *)(param_1 + 0xf664) = *(byte *)(param_1 + 0xf664) | 1;
    }
    if (bVar16) {
      *(uint *)(param_1 + 0x6e84) = (uint)*local_8c;
      *(uint *)(param_1 + 0x6e94) = (uint)*(byte *)((int)param_3 + 0x55);
      *(uint *)(param_1 + 0x6ea4) = (uint)*(byte *)((int)param_3 + 0x5d);
      *(uint *)(param_1 + 0x6eb4) = (uint)*(byte *)((int)param_3 + 0x65);
      *(uint *)(param_1 + 0x6ec4) = (uint)*(byte *)((int)param_3 + 0x6d);
      *(uint *)(param_1 + 0x6ed4) = (uint)*(byte *)((int)param_3 + 0x75);
      *(uint *)(param_1 + 0x6ee4) = (uint)*(byte *)((int)param_3 + 0x7d);
      *(uint *)(param_1 + 0x6ef4) = (uint)*local_c0;
      *(undefined1 *)(param_1 + 0xf671) = 1;
    }
    if (*(uint *)(param_1 + 0x6920) != uVar14) {
      *(uint *)(param_1 + 0x6920) = uVar14;
      *(undefined1 *)(param_1 + 0xf671) = 1;
    }
    if (*(int *)(param_1 + 0xfc8) != param_7) {
      *(int *)(param_1 + 0xfc8) = param_7;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0xf9d8) != param_4) {
      *(int *)(param_1 + 0xf9d8) = param_4;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0x100c) != local_b4) {
      *(int *)(param_1 + 0x100c) = local_b4;
      *(undefined1 *)(param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0xfa18) != local_88) {
      *(int *)(param_1 + 0xfa18) = local_88;
      *(undefined1 *)(param_1 + 0xf670) = 1;
    }
    if (*(int *)(param_1 + 0xf9c8) != iVar28) {
      *(int *)(param_1 + 0xf9c8) = iVar28;
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
    iVar28 = *(int *)(param_1 + 0xf9d4);
    if (iVar28 != local_110) {
      *(int *)(param_1 + 0xf9d4) = local_110;
      *(undefined1 *)(param_1 + 0x10230) = 1;
      iVar28 = local_110;
    }
    if (*(int *)(param_1 + 0xf9cc) != local_f8) {
      *(int *)(param_1 + 0xf9cc) = local_f8;
      if (((iVar28 == 0) || (iVar28 == *(int *)(*(int *)(param_1 + 0xf6b8) + 0x118))) ||
         (bVar20 = true, iVar28 == *(int *)(*(int *)(param_1 + 0xf6b8) + 0x11c))) {
        bVar20 = false;
      }
      iVar28 = *(int *)(param_1 + 0xf6b8);
      if ((((local_f8 == *(int *)(iVar28 + 0xe4)) || (local_f8 == *(int *)(iVar28 + 0xe0))) ||
          (local_f8 == *(int *)(iVar28 + 0x104))) ||
         (local_f8 == *(int *)(iVar28 + 0x100) || bVar20)) {
        local_80 = local_80 | 0x3f;
      }
      *(uint *)(param_1 + 0xfa30) = (uint)local_80 & 0x3f;
      iVar28 = *(int *)(param_1 + 0xf740);
      *(undefined4 *)(param_1 + 0xf740) = 0;
      *(byte *)(param_1 + 0xf6a2) = iVar28 != 0 | *(byte *)(param_1 + 0xf6a2);
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
    if ((*(uint *)(param_1 + 0x761c) != param_3[1]) || (*(char *)(param_1 + 0x7642) != '\0')) {
      *(uint *)(param_1 + 0x761c) = param_3[1];
      *(undefined1 *)(param_1 + 0xf66e) = 1;
    }
    if (*(int *)(param_1 + 0xfa2c) != *(int *)(puVar9 + param_2 * 4)) {
      *(int *)(param_1 + 0xfa2c) = *(int *)(puVar9 + param_2 * 4);
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
    if (*(char *)(param_1 + 0x7648) != cVar36) {
      *(char *)(param_1 + 0x7648) = cVar36;
      *(undefined1 *)(param_1 + 0xf66d) = 1;
    }
    bVar12 = *(byte *)(param_1 + 0x7642);
    *(byte *)(param_1 + 0xf66c) = bVar12 | *(byte *)(param_1 + 0xf66c);
    *(byte *)(param_1 + 0xf66b) = bVar12 | *(byte *)(param_1 + 0xf66b);
    *(byte *)(param_1 + 0xf66d) = bVar12 | *(byte *)(param_1 + 0xf66d);
    *(byte *)(param_1 + 0xf668) = *(byte *)(param_1 + 0xf668) | bVar12;
    if (bVar12 != 0) {
      *(undefined1 *)(param_1 + 0x7642) = 0;
      FUN_10074c68(param_1);
    }
  }
  return;
}

