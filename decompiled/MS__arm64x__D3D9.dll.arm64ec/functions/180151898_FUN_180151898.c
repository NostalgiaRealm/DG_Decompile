/*
 * FUN_180151898 at 180151898
 * undefined FUN_180151898(void)
 * Address ranges: 180151898-18015226f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180151898(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7,uint param_8,uint param_9,char param_10,char param_11)

{
  bool bVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  code *extraout_x11;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int local_18c;
  uint uStack_108;
  uint local_f8;
  uint uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x94);
  bVar20 = *(byte *)(param_1 + 0x766b);
  *(undefined1 *)(param_1 + 0x766b) = 0;
  uVar23 = *(uint *)(param_1 + 0x6940);
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar20;
  uVar10 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar11 = (0x1000 - *(int *)(param_1 + 0x90)) - iVar7;
  bVar12 = *(char *)(param_1 + 0x7661) == '\0';
  puVar5 = &DAT_180247548;
  if (bVar12) {
    puVar5 = &DAT_180247568;
  }
  puVar6 = &DAT_180247508;
  if (bVar12) {
    puVar6 = &DAT_180247528;
  }
  if ((*(char *)(param_1 + 0xeac) == '\0') ||
     (bVar12 = false, *(byte *)(*(longlong *)(param_3 + 0x38) + 0x4a6c) < 2)) {
    bVar12 = true;
  }
  if (*(float *)(param_1 + 0xea8) < 2.0) {
    bVar12 = false;
  }
  uVar8 = *(uint *)(param_1 + 0x696c);
  if ((uVar8 & 1) == 0) {
    uVar17 = *(uint *)(param_1 + 0x6968);
  }
  else {
    uVar17 = (uint)*(float *)(param_1 + 0x6f64);
  }
  bVar1 = false;
  uVar13 = *(uint *)(param_1 + 0x7650);
  if ((*(uint *)(param_1 + 0x7654) & 4) == 0) {
    uVar13 = 0;
  }
  uVar24 = (ulonglong)uVar13;
  if (param_2 - 4U < 3 && bVar12) {
    bVar12 = (uVar8 & 2) != 0;
    uVar15 = 0x100;
    if (bVar12) {
      uVar15 = 0x300;
    }
    if (((uVar8 >> 2 & 1) != 0) && (uVar15 = 0x500, bVar12)) {
      uVar15 = 0x700;
    }
    uVar24 = uVar15 | uVar24 | (ulonglong)(uVar8 & 1) << 0xb | (ulonglong)uVar17 << 0xc;
  }
  lVar18 = *(longlong *)(param_3 + 0x18);
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (uVar8 == 0) {
LAB_180151ac8:
    puVar14 = (ulonglong *)0x0;
  }
  else {
    uVar17 = 0;
    uVar13 = uVar8;
    do {
      uVar9 = uVar13 + uVar17 >> 1;
      uVar15 = (ulonglong)uVar9;
      uVar21 = *(ulonglong *)(*(longlong *)(lVar18 + 8) + uVar15 * 0x70);
      if (uVar21 <= uVar24) {
        if (uVar24 <= uVar21) break;
        uVar17 = uVar9 + 1;
        uVar15 = (ulonglong)(uVar9 + 1);
        uVar9 = uVar13;
      }
      uVar13 = uVar9;
    } while (uVar13 != uVar17);
    if (((uint)uVar15 == uVar8) ||
       (puVar2 = (ulonglong *)(*(longlong *)(lVar18 + 8) + uVar15 * 0x70), puVar14 = puVar2 + 2,
       *puVar2 != uVar24)) goto LAB_180151ac8;
  }
  if (puVar14 == (ulonglong *)0x0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_3,&local_a0,uVar24);
    plVar22 = *(longlong **)(param_3 + 0x18);
    uVar15 = 0;
    uVar8 = *(uint *)(plVar22 + 2);
    if (uVar8 != 0) {
      uVar17 = 0;
      uVar13 = uVar8;
      do {
        uVar9 = uVar13 + uVar17 >> 1;
        uVar15 = (ulonglong)uVar9;
        uVar21 = *(ulonglong *)(plVar22[1] + uVar15 * 0x70);
        if (uVar21 <= uVar24) {
          if (uVar24 <= uVar21) break;
          uVar17 = uVar9 + 1;
          uVar15 = (ulonglong)(uVar9 + 1);
          uVar9 = uVar13;
        }
        uVar13 = uVar9;
      } while (uVar13 != uVar17);
    }
    if (((uint)uVar15 == uVar8) ||
       (puVar14 = (ulonglong *)(plVar22[1] + uVar15 * 0x70), *puVar14 != uVar24)) {
      uVar17 = *(uint *)((longlong)plVar22 + 0x14);
      if (uVar17 == uVar8) {
        uVar8 = 0x10;
        if (uVar17 != 0) {
          uVar8 = uVar17 << 1;
        }
        lVar18 = FUN_1802229a8((ulonglong)uVar8 * 0x70);
        if (lVar18 != 0) {
          uVar21 = 0;
          if ((int)plVar22[2] != 0) {
            do {
              uVar17 = (int)uVar21 + 1;
              puVar3 = (undefined8 *)(plVar22[1] + uVar21 * 0x70);
              puVar4 = (undefined8 *)(lVar18 + uVar21 * 0x70);
              uVar26 = *puVar3;
              uVar29 = puVar3[3];
              uVar28 = puVar3[2];
              puVar4[1] = puVar3[1];
              *puVar4 = uVar26;
              puVar4[3] = uVar29;
              puVar4[2] = uVar28;
              uVar26 = puVar3[4];
              uVar29 = puVar3[7];
              uVar28 = puVar3[6];
              puVar4[5] = puVar3[5];
              puVar4[4] = uVar26;
              puVar4[7] = uVar29;
              puVar4[6] = uVar28;
              uVar26 = puVar3[8];
              uVar29 = puVar3[0xb];
              uVar28 = puVar3[10];
              puVar4[9] = puVar3[9];
              puVar4[8] = uVar26;
              puVar4[0xb] = uVar29;
              puVar4[10] = uVar28;
              uVar26 = puVar3[0xc];
              puVar4[0xd] = puVar3[0xd];
              puVar4[0xc] = uVar26;
              uVar21 = (ulonglong)uVar17;
            } while (uVar17 < *(uint *)(plVar22 + 2));
          }
          FUN_1802229d8(*plVar22);
          *plVar22 = lVar18;
          plVar22[1] = lVar18;
          *(uint *)((longlong)plVar22 + 0x14) = uVar8;
        }
      }
      uVar21 = (ulonglong)*(uint *)(plVar22 + 2);
      if (*(uint *)((longlong)plVar22 + 0x14) != *(uint *)(plVar22 + 2)) {
        while ((uint)uVar15 < (uint)uVar21) {
          uVar19 = (ulonglong)((uint)uVar21 - 1);
          puVar3 = (undefined8 *)(plVar22[1] + uVar21 * 0x70);
          puVar4 = (undefined8 *)(plVar22[1] + uVar19 * 0x70);
          uVar26 = *puVar4;
          uVar29 = puVar4[3];
          uVar28 = puVar4[2];
          puVar3[1] = puVar4[1];
          *puVar3 = uVar26;
          puVar3[3] = uVar29;
          puVar3[2] = uVar28;
          uVar26 = puVar4[4];
          uVar29 = puVar4[7];
          uVar28 = puVar4[6];
          puVar3[5] = puVar4[5];
          puVar3[4] = uVar26;
          puVar3[7] = uVar29;
          puVar3[6] = uVar28;
          uVar26 = puVar4[8];
          uVar29 = puVar4[0xb];
          uVar28 = puVar4[10];
          puVar3[9] = puVar4[9];
          puVar3[8] = uVar26;
          puVar3[0xb] = uVar29;
          puVar3[10] = uVar28;
          uVar26 = puVar4[0xc];
          puVar3[0xd] = puVar4[0xd];
          puVar3[0xc] = uVar26;
          uVar21 = uVar19;
        }
        *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
        lVar16 = uVar15 * 0x70;
        *(ulonglong *)(lVar16 + plVar22[1] + 8) = uVar24;
        lVar18 = lVar16 + plVar22[1];
        *(ulonglong *)(lVar18 + 0x18) = uStack_98;
        *(ulonglong *)(lVar18 + 0x10) = local_a0;
        *(ulonglong *)(lVar18 + 0x28) = uStack_88;
        *(ulonglong *)(lVar18 + 0x20) = uStack_90;
        *(ulonglong *)(lVar18 + 0x38) = uStack_78;
        *(ulonglong *)(lVar18 + 0x30) = local_80;
        *(ulonglong *)(lVar18 + 0x48) = uStack_68;
        *(ulonglong *)(lVar18 + 0x40) = uStack_70;
        *(ulonglong *)(lVar18 + 0x58) = uStack_58;
        *(ulonglong *)(lVar18 + 0x50) = local_60;
        *(ulonglong *)(lVar18 + 0x68) = uStack_48;
        *(ulonglong *)(lVar18 + 0x60) = uStack_50;
        *(ulonglong *)(plVar22[1] + lVar16) = uVar24;
      }
    }
    else {
      puVar14[3] = uStack_98;
      puVar14[2] = local_a0;
      puVar14[5] = uStack_88;
      puVar14[4] = uStack_90;
      puVar14[7] = uStack_78;
      puVar14[6] = local_80;
      puVar14[9] = uStack_68;
      puVar14[8] = uStack_70;
      puVar14[0xb] = uStack_58;
      puVar14[10] = local_60;
      puVar14[0xd] = uStack_48;
      puVar14[0xc] = uStack_50;
    }
    puVar14 = (ulonglong *)(plVar22[1] + uVar15 * 0x70 + 0x10);
  }
  uVar15 = puVar14[1];
  uVar24 = *puVar14;
  uVar30 = puVar14[3];
  uVar21 = puVar14[2];
  uVar31 = puVar14[5];
  uVar19 = puVar14[4];
  uStack_d8 = puVar14[7];
  local_e0 = puVar14[6];
  local_c8 = puVar14[9];
  uStack_d0 = puVar14[8];
  uStack_b8 = puVar14[0xb];
  local_c0 = puVar14[10];
  plVar22 = (longlong *)(param_3 + 0xb0);
  if (param_10 == '\0') {
    plVar22 = (longlong *)(param_3 + 0xa8);
  }
  lVar18 = *plVar22;
  if (param_2 == 1) {
    if (param_11 == '\0') {
      uVar23 = uVar23 & 0xfff3ffff;
      fVar27 = *(float *)(param_1 + 0x6f38);
      if (*(float *)(param_1 + 0x6f38) <= *(float *)(param_1 + 0x6f30)) {
        fVar27 = *(float *)(param_1 + 0x6f30);
      }
      fVar25 = *(float *)(param_1 + 0x6f34);
      if (fVar27 <= *(float *)(param_1 + 0x6f34)) {
        fVar25 = fVar27;
      }
      bVar1 = 0.1 < ABS(fVar25 - 1.0);
      if (ABS(fVar25 - 1.0) <= 0.1) goto LAB_180151dc0;
    }
    else {
      uVar23 = uVar23 & 0xfff00000 | uVar23 & 0x3ffff | 0x80000;
      bVar1 = true;
    }
    local_e0 = *(ulonglong *)(*(longlong *)(param_1 + 0xf6f8) + 0x120);
    uStack_d0 = uRam000000018022b238;
    uStack_d8 = _DAT_18022b230;
    local_c0 = uRam000000018022b248;
    local_c8 = _DAT_18022b240;
    uStack_b8 = DAT_18022b250;
  }
LAB_180151dc0:
  if ((((((*(char *)(param_1 + 0x7662) == '\0') && (*(int *)(param_1 + 0x102c) == param_6)) &&
        (*(int *)(param_1 + 0xfe8) == param_7)) &&
       ((*(longlong *)(param_1 + 0xffb8) == param_5 && (*(longlong *)(param_1 + 0xff38) == param_4))
       )) && ((*(ulonglong *)(param_1 + 0xf8f0) == uVar24 &&
              ((*(ulonglong *)(param_1 + 0xf910) == local_e0 && (*(int *)(param_1 + 0x763c) == 2))))
             )) &&
     ((((*(int *)(param_1 + 0xffc4) == *(int *)(puVar5 + (longlong)param_2 * 4) &&
        (iVar7 != 0) == (param_9 != 0)) && param_8 <= uVar10) && param_9 <= uVar11 &&
      ((*(longlong *)(param_1 + 0xf940) == lVar18 && (*(uint *)(param_1 + 0x6940) == uVar23)))))) {
    return;
  }
  iVar7 = param_7;
  if (param_4 != *(longlong *)(param_1 + 0xf718)) {
    iVar7 = 0;
  }
  FUN_18014e9a0(param_1,uVar10 < param_8,uVar11 < param_9,iVar7);
  local_18c = param_6;
  if (param_4 == *(longlong *)(param_1 + 0xf718)) {
    local_18c = *(int *)(param_1 + 0x7c);
  }
  if (*(char *)(param_1 + 0x7662) != '\0') {
    *(undefined1 *)(param_1 + 0xf689) = 1;
    *(byte *)(param_1 + 0xf684) = *(byte *)(param_1 + 0xf684) | 1;
  }
  if (*(int *)(param_1 + 0xfe8) != param_7) {
    *(int *)(param_1 + 0xfe8) = param_7;
    *(undefined1 *)(param_1 + 0xf68f) = 1;
  }
  if (*(longlong *)(param_1 + 0xff38) != param_4) {
    *(longlong *)(param_1 + 0xff38) = param_4;
    *(undefined1 *)(param_1 + 0xf68f) = 1;
  }
  if (*(int *)(param_1 + 0x102c) != local_18c) {
    *(int *)(param_1 + 0x102c) = local_18c;
    *(undefined1 *)(param_1 + 0xf68f) = 1;
  }
  if (*(longlong *)(param_1 + 0xffb8) != param_5) {
    *(longlong *)(param_1 + 0xffb8) = param_5;
    *(undefined1 *)(param_1 + 0xf690) = 1;
  }
  if (*(ulonglong *)(param_1 + 0xf910) != local_e0) {
    *(ulonglong *)(param_1 + 0xf910) = local_e0;
    if (local_e0 == 0) {
      *(undefined8 *)(param_1 + 0x10138) = 0;
      *(undefined8 *)(param_1 + 0x10130) = 0;
      *(undefined8 *)(param_1 + 0x10148) = 0;
      *(undefined8 *)(param_1 + 0x10140) = 0;
      *(undefined8 *)(param_1 + 0x10150) = 0;
    }
    else {
      *(byte *)(param_1 + 0x1018c) =
           *(uint *)(param_1 + 0x10150) < (uint)uStack_b8 | *(byte *)(param_1 + 0x1018c);
      *(byte *)(param_1 + 0x10190) =
           *(uint *)(param_1 + 0x10140) < (uint)local_c8 | *(byte *)(param_1 + 0x10190);
      *(ulonglong *)(param_1 + 0x10138) = uStack_d0;
      *(ulonglong *)(param_1 + 0x10130) = uStack_d8;
      *(ulonglong *)(param_1 + 0x10148) = local_c0;
      *(ulonglong *)(param_1 + 0x10140) = local_c8;
      *(ulonglong *)(param_1 + 0x10150) = uStack_b8;
    }
    *(bool *)(param_1 + 0x7668) = bVar1;
    *(undefined1 *)(param_1 + 0xf68d) = 1;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if (*(longlong *)(param_1 + 0xf940) != lVar18) {
    *(longlong *)(param_1 + 0xf940) = lVar18;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if (*(ulonglong *)(param_1 + 0xf8f0) != uVar24) {
    *(ulonglong *)(param_1 + 0xf8f0) = uVar24;
    *(undefined1 *)(param_1 + 0x10189) = 1;
    *(longlong *)(param_1 + 0xf8d0) = param_3;
    *(undefined1 *)(param_1 + 0xf6c2) = 1;
    uStack_e8 = (uint)uVar31;
    *(byte *)(param_1 + 0x1018c) =
         *(uint *)(param_1 + 0x10128) < uStack_e8 | *(byte *)(param_1 + 0x1018c);
    local_f8 = (uint)uVar30;
    *(byte *)(param_1 + 0x10190) =
         *(uint *)(param_1 + 0x10118) < local_f8 | *(byte *)(param_1 + 0x10190);
    *(ulonglong *)(param_1 + 0x10110) = uVar21;
    *(ulonglong *)(param_1 + 0x10108) = uVar15;
    *(ulonglong *)(param_1 + 0x10120) = uVar19;
    *(ulonglong *)(param_1 + 0x10118) = uVar30;
    *(ulonglong *)(param_1 + 0x10128) = uVar31;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) == '\0') goto LAB_180152158;
  if (*(char *)(param_1 + 0x1019a) == '\0') {
    uStack_108 = (uint)uVar15;
    if (((uStack_108 | (uint)uStack_d8) >> 4 & 1) == 0) goto LAB_180152140;
    bVar20 = 1;
  }
  else {
LAB_180152140:
    bVar20 = 0;
  }
  *(byte *)(param_1 + 0x1018e) = *(byte *)(param_1 + 0x1018e) | bVar20;
LAB_180152158:
  if ((*(int *)(param_1 + 0x763c) != 2) || (*(char *)(param_1 + 0x7662) != '\0')) {
    *(undefined4 *)(param_1 + 0x763c) = 2;
    *(undefined1 *)(param_1 + 0xf68e) = 1;
  }
  if (*(int *)(param_1 + 0xffc4) != *(int *)(puVar5 + (longlong)param_2 * 4)) {
    *(int *)(param_1 + 0xffc4) = *(int *)(puVar5 + (longlong)param_2 * 4);
    *(undefined1 *)(param_1 + 0x10188) = 1;
  }
  if (*(int *)(param_1 + 0xf94c) != *(int *)(puVar6 + (longlong)param_2 * 4)) {
    *(int *)(param_1 + 0xf94c) = *(int *)(puVar6 + (longlong)param_2 * 4);
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if (*(uint *)(param_1 + 0x6940) != uVar23) {
    *(uint *)(param_1 + 0x6940) = uVar23;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  bVar20 = *(byte *)(param_1 + 0x7662);
  *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar20;
  *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar20;
  *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar20;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar20;
  if (bVar20 != 0) {
    *(undefined1 *)(param_1 + 0x7662) = 0;
    FUN_180164290();
  }
  return;
}

