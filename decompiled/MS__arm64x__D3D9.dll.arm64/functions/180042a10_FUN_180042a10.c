/*
 * FUN_180042a10 at 180042a10
 * undefined FUN_180042a10(void)
 * Address ranges: 180042a10-18004333f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180042a10(longlong param_1,int param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,int param_6,int param_7,uint param_8,uint param_9,char param_10,
                  char param_11)

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
  byte bVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  float fVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int local_198;
  uint uStack_118;
  uint local_108;
  uint uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  iVar7 = *(int *)(param_1 + 0x94);
  bVar19 = *(byte *)(param_1 + 0x766b);
  *(undefined1 *)(param_1 + 0x766b) = 0;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar19;
  uVar22 = *(uint *)(param_1 + 0x6940);
  uVar10 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar11 = (0x1000 - *(int *)(param_1 + 0x90)) - iVar7;
  bVar12 = *(char *)(param_1 + 0x7661) == '\0';
  puVar5 = &DAT_180249de8;
  if (bVar12) {
    puVar5 = &DAT_180249e08;
  }
  puVar6 = &DAT_180249dc8;
  if (bVar12) {
    puVar6 = &DAT_180249e28;
  }
  if ((*(char *)(param_1 + 0xeac) == '\0') || (bVar12 = false, *(byte *)(param_3[7] + 0x4a6c) < 2))
  {
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
  uVar23 = (ulonglong)uVar13;
  if (param_2 - 4U < 3 && bVar12) {
    bVar12 = (uVar8 & 2) != 0;
    uVar15 = 0x100;
    if (bVar12) {
      uVar15 = 0x300;
    }
    if (((uVar8 >> 2 & 1) != 0) && (uVar15 = 0x500, bVar12)) {
      uVar15 = 0x700;
    }
    uVar23 = uVar15 | uVar23 | (ulonglong)(uVar8 & 1) << 0xb | (ulonglong)uVar17 << 0xc;
  }
  lVar18 = param_3[3];
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (uVar8 == 0) {
LAB_180042c38:
    puVar14 = (ulonglong *)0x0;
  }
  else {
    uVar17 = 0;
    uVar13 = uVar8;
    do {
      uVar9 = uVar13 + uVar17 >> 1;
      uVar15 = (ulonglong)uVar9;
      uVar20 = *(ulonglong *)(*(longlong *)(lVar18 + 8) + uVar15 * 0x70);
      if (uVar20 <= uVar23) {
        if (uVar23 <= uVar20) break;
        uVar17 = uVar9 + 1;
        uVar15 = (ulonglong)(uVar9 + 1);
        uVar9 = uVar13;
      }
      uVar13 = uVar9;
    } while (uVar13 != uVar17);
    if (((uint)uVar15 == uVar8) ||
       (puVar2 = (ulonglong *)(*(longlong *)(lVar18 + 8) + uVar15 * 0x70), puVar14 = puVar2 + 2,
       *puVar2 != uVar23)) goto LAB_180042c38;
  }
  if (puVar14 == (ulonglong *)0x0) {
    (**(code **)*param_3)(param_3,&local_b0,uVar23);
    plVar21 = (longlong *)param_3[3];
    uVar15 = 0;
    uVar8 = *(uint *)(plVar21 + 2);
    if (uVar8 != 0) {
      uVar17 = 0;
      uVar13 = uVar8;
      do {
        uVar9 = uVar13 + uVar17 >> 1;
        uVar15 = (ulonglong)uVar9;
        uVar20 = *(ulonglong *)(plVar21[1] + uVar15 * 0x70);
        if (uVar20 <= uVar23) {
          if (uVar23 <= uVar20) break;
          uVar17 = uVar9 + 1;
          uVar15 = (ulonglong)(uVar9 + 1);
          uVar9 = uVar13;
        }
        uVar13 = uVar9;
      } while (uVar13 != uVar17);
    }
    if (((uint)uVar15 == uVar8) ||
       (puVar14 = (ulonglong *)(plVar21[1] + uVar15 * 0x70), *puVar14 != uVar23)) {
      uVar17 = *(uint *)((longlong)plVar21 + 0x14);
      if (uVar17 == uVar8) {
        uVar8 = 0x10;
        if (uVar17 != 0) {
          uVar8 = uVar17 << 1;
        }
        lVar18 = thunk_FUN_180102f80((ulonglong)uVar8 * 0x70);
        if (lVar18 != 0) {
          uVar20 = 0;
          if ((int)plVar21[2] != 0) {
            do {
              uVar17 = (int)uVar20 + 1;
              puVar3 = (undefined8 *)(plVar21[1] + uVar20 * 0x70);
              puVar4 = (undefined8 *)(lVar18 + uVar20 * 0x70);
              uVar29 = *puVar3;
              uVar26 = puVar3[3];
              uVar25 = puVar3[2];
              puVar4[1] = puVar3[1];
              *puVar4 = uVar29;
              puVar4[3] = uVar26;
              puVar4[2] = uVar25;
              uVar29 = puVar3[4];
              uVar26 = puVar3[7];
              uVar25 = puVar3[6];
              puVar4[5] = puVar3[5];
              puVar4[4] = uVar29;
              puVar4[7] = uVar26;
              puVar4[6] = uVar25;
              uVar29 = puVar3[8];
              uVar26 = puVar3[0xb];
              uVar25 = puVar3[10];
              puVar4[9] = puVar3[9];
              puVar4[8] = uVar29;
              puVar4[0xb] = uVar26;
              puVar4[10] = uVar25;
              uVar25 = puVar3[0xc];
              puVar4[0xd] = puVar3[0xd];
              puVar4[0xc] = uVar25;
              uVar20 = (ulonglong)uVar17;
            } while (uVar17 < *(uint *)(plVar21 + 2));
          }
          thunk_FUN_180102fc0(*plVar21);
          *plVar21 = lVar18;
          plVar21[1] = lVar18;
          *(uint *)((longlong)plVar21 + 0x14) = uVar8;
        }
      }
      uVar8 = *(uint *)(plVar21 + 2);
      uVar20 = (ulonglong)uVar8;
      if (*(uint *)((longlong)plVar21 + 0x14) != uVar8) {
        while ((uint)uVar15 < uVar8) {
          uVar8 = (int)uVar20 - 1;
          puVar3 = (undefined8 *)(plVar21[1] + uVar20 * 0x70);
          puVar4 = (undefined8 *)(plVar21[1] + (ulonglong)uVar8 * 0x70);
          uVar29 = *puVar4;
          uVar26 = puVar4[3];
          uVar25 = puVar4[2];
          puVar3[1] = puVar4[1];
          *puVar3 = uVar29;
          puVar3[3] = uVar26;
          puVar3[2] = uVar25;
          uVar29 = puVar4[4];
          uVar26 = puVar4[7];
          uVar25 = puVar4[6];
          puVar3[5] = puVar4[5];
          puVar3[4] = uVar29;
          puVar3[7] = uVar26;
          puVar3[6] = uVar25;
          uVar29 = puVar4[8];
          uVar26 = puVar4[0xb];
          uVar25 = puVar4[10];
          puVar3[9] = puVar4[9];
          puVar3[8] = uVar29;
          puVar3[0xb] = uVar26;
          puVar3[10] = uVar25;
          uVar25 = puVar4[0xc];
          puVar3[0xd] = puVar4[0xd];
          puVar3[0xc] = uVar25;
          uVar20 = (ulonglong)uVar8;
        }
        *(int *)(plVar21 + 2) = (int)plVar21[2] + 1;
        lVar16 = uVar15 * 0x70;
        *(ulonglong *)(lVar16 + plVar21[1] + 8) = uVar23;
        lVar18 = lVar16 + plVar21[1];
        *(ulonglong *)(lVar18 + 0x18) = uStack_a8;
        *(ulonglong *)(lVar18 + 0x10) = local_b0;
        *(ulonglong *)(lVar18 + 0x28) = uStack_98;
        *(ulonglong *)(lVar18 + 0x20) = uStack_a0;
        *(ulonglong *)(lVar18 + 0x38) = uStack_88;
        *(ulonglong *)(lVar18 + 0x30) = local_90;
        *(ulonglong *)(lVar18 + 0x48) = uStack_78;
        *(ulonglong *)(lVar18 + 0x40) = uStack_80;
        *(ulonglong *)(lVar18 + 0x58) = uStack_68;
        *(ulonglong *)(lVar18 + 0x50) = local_70;
        *(ulonglong *)(lVar18 + 0x68) = uStack_58;
        *(ulonglong *)(lVar18 + 0x60) = uStack_60;
        *(ulonglong *)(plVar21[1] + lVar16) = uVar23;
      }
    }
    else {
      puVar14[3] = uStack_a8;
      puVar14[2] = local_b0;
      puVar14[5] = uStack_98;
      puVar14[4] = uStack_a0;
      puVar14[7] = uStack_88;
      puVar14[6] = local_90;
      puVar14[9] = uStack_78;
      puVar14[8] = uStack_80;
      puVar14[0xb] = uStack_68;
      puVar14[10] = local_70;
      puVar14[0xd] = uStack_58;
      puVar14[0xc] = uStack_60;
    }
    puVar14 = (ulonglong *)(plVar21[1] + uVar15 * 0x70 + 0x10);
  }
  uVar31 = puVar14[1];
  uVar30 = *puVar14;
  uVar20 = puVar14[3];
  uVar23 = puVar14[2];
  uVar27 = puVar14[5];
  uVar15 = puVar14[4];
  uStack_e8 = puVar14[7];
  local_f0 = puVar14[6];
  local_d8 = puVar14[9];
  uStack_e0 = puVar14[8];
  uStack_c8 = puVar14[0xb];
  local_d0 = puVar14[10];
  plVar21 = param_3 + 0x16;
  if (param_10 == '\0') {
    plVar21 = param_3 + 0x15;
  }
  lVar18 = *plVar21;
  if (param_2 == 1) {
    if (param_11 == '\0') {
      uVar22 = uVar22 & 0xfff3ffff;
      fVar24 = *(float *)(param_1 + 0x6f38);
      if (*(float *)(param_1 + 0x6f38) <= *(float *)(param_1 + 0x6f30)) {
        fVar24 = *(float *)(param_1 + 0x6f30);
      }
      fVar28 = *(float *)(param_1 + 0x6f34);
      if (fVar24 <= *(float *)(param_1 + 0x6f34)) {
        fVar28 = fVar24;
      }
      bVar1 = 0.1 < ABS(fVar28 - 1.0);
      if (ABS(fVar28 - 1.0) <= 0.1) goto LAB_180042f18;
    }
    else {
      uVar22 = uVar22 & 0xfff00000 | uVar22 & 0x3ffff | 0x80000;
      bVar1 = true;
    }
    local_f0 = *(ulonglong *)(*(longlong *)(param_1 + 0xf6f8) + 0x120);
    uStack_e0 = uRam0000000180230cc8;
    uStack_e8 = _DAT_180230cc0;
    local_d0 = uRam0000000180230cd8;
    local_d8 = _DAT_180230cd0;
    uStack_c8 = DAT_180230ce0;
  }
LAB_180042f18:
  if ((((((*(char *)(param_1 + 0x7662) == '\0') && (*(int *)(param_1 + 0x102c) == param_6)) &&
        (*(int *)(param_1 + 0xfe8) == param_7)) &&
       ((*(longlong *)(param_1 + 0xffb8) == param_5 && (*(longlong *)(param_1 + 0xff38) == param_4))
       )) && ((*(ulonglong *)(param_1 + 0xf8f0) == uVar30 &&
              ((*(ulonglong *)(param_1 + 0xf910) == local_f0 && (*(int *)(param_1 + 0x763c) == 2))))
             )) &&
     ((((*(int *)(param_1 + 0xffc4) == *(int *)(puVar5 + (longlong)param_2 * 4) &&
        (iVar7 != 0) == (param_9 != 0)) && param_8 <= uVar10) && param_9 <= uVar11 &&
      ((*(longlong *)(param_1 + 0xf940) == lVar18 && (*(uint *)(param_1 + 0x6940) == uVar22)))))) {
    return;
  }
  iVar7 = param_7;
  if (param_4 != *(longlong *)(param_1 + 0xf718)) {
    iVar7 = 0;
  }
  FUN_18003feb0(param_1,uVar10 < param_8,uVar11 < param_9,iVar7);
  local_198 = param_6;
  if (param_4 == *(longlong *)(param_1 + 0xf718)) {
    local_198 = *(int *)(param_1 + 0x7c);
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
  if (*(int *)(param_1 + 0x102c) != local_198) {
    *(int *)(param_1 + 0x102c) = local_198;
    *(undefined1 *)(param_1 + 0xf68f) = 1;
  }
  if (*(longlong *)(param_1 + 0xffb8) != param_5) {
    *(longlong *)(param_1 + 0xffb8) = param_5;
    *(undefined1 *)(param_1 + 0xf690) = 1;
  }
  if (*(ulonglong *)(param_1 + 0xf910) != local_f0) {
    *(ulonglong *)(param_1 + 0xf910) = local_f0;
    if (local_f0 == 0) {
      *(undefined8 *)(param_1 + 0x10138) = 0;
      *(undefined8 *)(param_1 + 0x10130) = 0;
      *(undefined8 *)(param_1 + 0x10148) = 0;
      *(undefined8 *)(param_1 + 0x10140) = 0;
      *(undefined8 *)(param_1 + 0x10150) = 0;
    }
    else {
      *(byte *)(param_1 + 0x1018c) =
           *(uint *)(param_1 + 0x10150) < (uint)uStack_c8 | *(byte *)(param_1 + 0x1018c);
      *(byte *)(param_1 + 0x10190) =
           *(uint *)(param_1 + 0x10140) < (uint)local_d8 | *(byte *)(param_1 + 0x10190);
      *(ulonglong *)(param_1 + 0x10138) = uStack_e0;
      *(ulonglong *)(param_1 + 0x10130) = uStack_e8;
      *(ulonglong *)(param_1 + 0x10148) = local_d0;
      *(ulonglong *)(param_1 + 0x10140) = local_d8;
      *(ulonglong *)(param_1 + 0x10150) = uStack_c8;
    }
    *(undefined1 *)(param_1 + 0xf68d) = 1;
    *(bool *)(param_1 + 0x7668) = bVar1;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if (*(longlong *)(param_1 + 0xf940) != lVar18) {
    *(longlong *)(param_1 + 0xf940) = lVar18;
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if (*(ulonglong *)(param_1 + 0xf8f0) != uVar30) {
    *(ulonglong *)(param_1 + 0xf8f0) = uVar30;
    *(undefined1 *)(param_1 + 0x10189) = 1;
    *(undefined1 *)(param_1 + 0xf6c2) = 1;
    *(undefined8 **)(param_1 + 0xf8d0) = param_3;
    uStack_f8 = (uint)uVar27;
    *(byte *)(param_1 + 0x1018c) =
         *(uint *)(param_1 + 0x10128) < uStack_f8 | *(byte *)(param_1 + 0x1018c);
    local_108 = (uint)uVar20;
    *(byte *)(param_1 + 0x10190) =
         *(uint *)(param_1 + 0x10118) < local_108 | *(byte *)(param_1 + 0x10190);
    *(ulonglong *)(param_1 + 0x10110) = uVar23;
    *(ulonglong *)(param_1 + 0x10108) = uVar31;
    *(ulonglong *)(param_1 + 0x10120) = uVar15;
    *(ulonglong *)(param_1 + 0x10118) = uVar20;
    *(ulonglong *)(param_1 + 0x10128) = uVar27;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) == '\0') goto LAB_18004324c;
  if (*(char *)(param_1 + 0x1019a) == '\0') {
    uStack_118 = (uint)uVar31;
    if (((uStack_118 | (uint)uStack_e8) >> 4 & 1) == 0) goto LAB_180043238;
    bVar19 = 1;
  }
  else {
LAB_180043238:
    bVar19 = 0;
  }
  *(byte *)(param_1 + 0x1018e) = *(byte *)(param_1 + 0x1018e) | bVar19;
LAB_18004324c:
  if ((*(int *)(param_1 + 0x763c) != 2) || (*(char *)(param_1 + 0x7662) != '\0')) {
    *(undefined1 *)(param_1 + 0xf68e) = 1;
    *(undefined4 *)(param_1 + 0x763c) = 2;
  }
  if (*(int *)(param_1 + 0xffc4) != *(int *)(puVar5 + (longlong)param_2 * 4)) {
    *(int *)(param_1 + 0xffc4) = *(int *)(puVar5 + (longlong)param_2 * 4);
    *(undefined1 *)(param_1 + 0x10188) = 1;
  }
  if (*(int *)(param_1 + 0xf94c) != *(int *)(puVar6 + (longlong)param_2 * 4)) {
    *(int *)(param_1 + 0xf94c) = *(int *)(puVar6 + (longlong)param_2 * 4);
    *(undefined1 *)(param_1 + 0x10189) = 1;
  }
  if (*(uint *)(param_1 + 0x6940) != uVar22) {
    *(uint *)(param_1 + 0x6940) = uVar22;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  bVar19 = *(byte *)(param_1 + 0x7662);
  *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar19;
  *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar19;
  *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar19;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar19;
  if (bVar19 != 0) {
    *(undefined1 *)(param_1 + 0x7662) = 0;
    FUN_180054430(param_1);
  }
  return;
}

