/*
 * FUN_180048db0 at 180048db0
 * undefined __fastcall FUN_180048db0(longlong param_1, int param_2, undefined * param_3, longlong param_4, longlong param_5, int param_6, int param_7, uint param_8, uint param_9, byte param_10)
 * Address ranges: 180048db0-1800499cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048db0(longlong param_1,int param_2,undefined *param_3,longlong param_4,longlong param_5
                  ,int param_6,int param_7,uint param_8,uint param_9,byte param_10)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  longlong local_130;
  ulonglong local_128;
  undefined *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (param_3[0x1c] == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(byte)param_3[0x1d];
  }
  uVar13 = *(uint *)(param_1 + 0x764c);
  uVar16 = uVar13;
  if (uVar3 <= uVar13) {
    uVar16 = uVar3;
  }
  if (param_3[0x19] == '\0') {
    uVar3 = (uint)(byte)param_3[0x1a];
  }
  else {
    uVar3 = 0;
  }
  uVar21 = 2;
  uVar15 = 3;
  if (param_3[0x41] != -0x60) {
    uVar19 = 2;
  }
  else {
    uVar3 = (uint)(byte)param_3[0x42] << 0x14 | uVar3;
    uVar19 = 3;
  }
  uVar7 = (uint)(param_3[0x41] == -0x60);
  if (param_3[0x49] == -0x5f) {
    uVar3 = (uint)(byte)param_3[0x4a] << 0x18 | uVar3;
    uVar7 = uVar19;
  }
  if (param_3[0x31] == '0') {
    uVar3 = (uint)(byte)param_3[0x32] << 0xc | uVar3;
    uVar7 = uVar7 | 4;
  }
  if (param_3[0x51] == 'P') {
    uVar3 = (uint)(byte)param_3[0x52] << 0x1c | uVar3;
    uVar7 = uVar7 | 8;
  }
  if (param_3[0x59] == 'Q') {
    uVar19 = (uint)(byte)param_3[0x5a];
    uVar7 = uVar7 | 0x10;
  }
  else {
    uVar19 = 0;
  }
  if (param_3[0x61] == 'R') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x62] << 4;
    uVar7 = uVar7 | 0x20;
  }
  if (param_3[0x69] == 'S') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x6a] << 8;
    uVar7 = uVar7 | 0x40;
  }
  if (param_3[0x71] == 'T') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x72] << 0xc;
    uVar7 = uVar7 | 0x80;
  }
  if (param_3[0x79] == 'U') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x7a] << 0x10;
    uVar7 = uVar7 | 0x100;
  }
  if (param_3[0x81] == 'V') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x82] << 0x14;
    uVar7 = uVar7 | 0x200;
  }
  if (param_3[0x89] == 'W') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x8a] << 0x18;
    uVar7 = uVar7 | 0x400;
  }
  if (param_3[0x21] == '\x10') {
    uVar3 = uVar3 | (uint)(byte)param_3[0x22] << 4;
    uVar7 = uVar7 | *(uint *)(&DAT_1801019c8 + (ulonglong)uVar16 * 4);
  }
  if (param_3[0x91] == '\x01') {
    uVar19 = uVar19 | (uint)(byte)param_3[0x92] << 0x1c;
    uVar7 = uVar7 | 0x10000;
  }
  if (param_3[0x99] == '1') {
    uVar3 = uVar3 | (uint)(byte)param_3[0x9a] << 4;
    uVar7 = uVar7 | 0x20000;
  }
  if ((*(int *)(param_1 + 0x6f20) == 0) || (uVar13 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x8000;
  }
  if (param_3[0x29] == ' ') {
    uVar3 = uVar3 | (uint)(byte)param_3[0x2a] << 8;
    uVar7 = uVar16 | uVar7;
  }
  if (param_3[0x39] == '@') {
    uVar3 = uVar3 | (uint)(byte)param_3[0x3a] << 0x10;
    uVar7 = uVar7 | 0x80000;
  }
  uVar16 = -(uint)(*(int *)(param_3 + 4) != 0) & 0x40000;
  uVar17 = uVar16 | uVar7;
  if ((2 < param_2 - 4U) || (*(float *)(param_1 + 0xea8) < 2.0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if (((*(byte *)(param_1 + 0x696c) & 1) == 0) || (*(char *)(param_1 + 0xeac) != '\0')) {
    local_128 = (ulonglong)*(uint *)(param_1 + 0x6968);
  }
  else {
    local_128 = (ulonglong)*(float *)(param_1 + 0x6f64);
  }
  if (((((*(uint *)(param_1 + 0x6ea4) == (uint)(byte)param_3[0x4d]) &&
        (*(uint *)(param_1 + 0x6eb4) == (uint)(byte)param_3[0x55])) &&
       (*(uint *)(param_1 + 0x6ec4) == (uint)(byte)param_3[0x5d])) &&
      ((*(uint *)(param_1 + 0x6ed4) == (uint)(byte)param_3[0x65] &&
       (*(uint *)(param_1 + 0x6ee4) == (uint)(byte)param_3[0x6d])))) &&
     ((*(uint *)(param_1 + 0x6ef4) == (uint)(byte)param_3[0x75] &&
      ((*(uint *)(param_1 + 0x6f04) == (uint)(byte)param_3[0x7d] &&
       (*(uint *)(param_1 + 0x6f14) == (uint)(byte)param_3[0x85])))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar21 = 0;
    if (*(char *)(param_1 + 0x7664) != '\0') {
      uVar21 = 8;
    }
  }
  else {
    if (((*(byte *)(param_1 + 0x7654) & 4) == 0) || (*(int *)(param_1 + 0x7650) == 0)) {
      uVar15 = 1;
    }
    else {
      uVar21 = 4;
    }
    if (((*(longlong *)(param_1 + 0xf7e0) == 0) && (*(char *)(param_1 + 0xa8) != '\0')) &&
       (*(char *)(param_1 + 0x7660) == '\0')) {
      uVar8 = 0;
      if (*(uint *)(param_1 + 0xf70) != 0) {
        for (; (*(uint *)(param_1 + 0xf70) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      if (uVar8 < 5) {
        uVar21 = 5;
      }
    }
    if (bVar22) {
      uVar21 = 7;
      uVar15 = 6;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (param_10 != 0) {
        uVar15 = uVar21;
      }
LAB_180049123:
      uVar21 = uVar15;
    }
    else if ((param_3[0x2c] == -1) || (param_10 == 0)) goto LAB_180049123;
    if ((((uVar7 & 0xf800) != 0) || (*(char *)(param_1 + 0x7664) != '\0')) || (uVar13 == 0xff)) {
      uVar21 = (ulonglong)((int)uVar21 + 8);
    }
  }
  *(ulonglong *)(param_1 + 0xfe0) = *(ulonglong *)(param_1 + 0xfe0) & 0xfff7ffffffffffff;
  if (*(char *)(param_1 + 0xf6c5) != '\0') {
    FUN_18005acb0(param_1);
  }
  uVar23 = 0;
  uVar24 = 0;
  uVar27 = 0;
  uVar29 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (bVar2) {
    *(uint *)(param_1 + 0xf7c) =
         ((((((uint)(byte)(param_3[0x85] | param_3[0x7d]) << 3 | (uint)(byte)param_3[0x75]) << 3 |
            (uint)(byte)param_3[0x6d]) << 3 | (uint)(byte)param_3[0x65]) << 3 |
          (uint)(byte)param_3[0x5d]) << 3 | (uint)(byte)param_3[0x55]) << 3 |
         (uint)(byte)param_3[0x4d];
  }
  iVar20 = (int)uVar21;
  if (*(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x98 + uVar21 * 8) == 0) {
    uVar8 = *(uint *)(param_1 + 0x696c);
    if (((uVar8 & 1) == 0) || (*(char *)(param_1 + 0xeac) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar15 = 0;
    if ((*(byte *)(param_1 + 0x7654) & 4) != 0) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0x7650);
    }
    if (bVar22) {
      uVar9 = 0x300;
      if ((uVar8 & 2) == 0) {
        uVar9 = 0x100;
      }
      if (((uVar8 & 4) != 0) && (uVar9 = 0x700, (uVar8 & 2) == 0)) {
        uVar9 = 0x500;
      }
      uVar4 = uVar9 | uVar15 | 0x800;
      if (!bVar1) {
        uVar4 = uVar9 | uVar15;
      }
      uVar15 = (local_128 & 0xffffffff) << 0xc | uVar4;
    }
    if (*(longlong *)(param_1 + 0xf7e0) == 0) {
      uVar8 = 0;
      if (*(uint *)(param_1 + 0xf70) != 0) {
        for (; (*(uint *)(param_1 + 0xf70) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      bVar14 = 0;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          if (((*(byte *)(param_1 + 0xf58 + uVar9) | 0x80) & *(byte *)(param_1 + 0xf68 + uVar9)) !=
              0 || ((*(byte *)(param_1 + 0xf50 + uVar9) | 0x80) & *(byte *)(param_1 + 0xf60 + uVar9)
                   ) != 0) {
            bVar14 = bVar14 | (&DAT_180102400)[uVar9];
          }
          uVar12 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar12;
        } while (uVar12 < uVar8);
      }
    }
    else {
      bVar14 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xf7e0) + 8) + 0x126c);
    }
    *(uint *)(param_1 + 0xfbc) = *(uint *)(param_1 + 0xfbc) & 0x7fd00000;
    uVar8 = 0;
    if (uVar13 == 0xff) {
      uVar8 = 0x200000;
    }
    *(uint *)(param_1 + 0xfbc) =
         *(uint *)(param_1 + 0xfbc) | uVar8 | (uint)param_10 << 0x1f | uVar16 | uVar7 & 0xfffff;
    *(ulonglong *)(param_1 + 0xfc0) = CONCAT44(uVar19,uVar3);
    puVar5 = (undefined8 *)
             FUN_180058eac((undefined8 *)(param_1 + 0xf790),(uint *)(param_1 + 0xf78),uVar15,bVar14)
    ;
    if (puVar5 != (undefined8 *)0x0) {
      local_f8 = puVar5[2];
      uStack_f0 = puVar5[3];
      local_e8 = puVar5[4];
      uStack_e0 = puVar5[5];
      uVar23 = *(undefined4 *)puVar5;
      uVar24 = *(undefined4 *)((longlong)puVar5 + 4);
      local_108 = *puVar5;
      uStack_100 = *(undefined4 *)(puVar5 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      uVar27 = *(undefined4 *)(puVar5 + 6);
      uVar29 = *(undefined4 *)((longlong)puVar5 + 0x34);
      local_d8 = puVar5[6];
      uStack_d0 = puVar5[7];
      local_c8 = puVar5[8];
      uStack_c0 = puVar5[9];
      local_b8 = puVar5[10];
      uStack_b0 = puVar5[0xb];
    }
  }
  local_130 = CONCAT44(uVar24,uVar23);
  if (local_130 == 0) {
    local_130 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x98 + uVar21 * 8);
    lVar11 = uVar21 * 0x28;
    lVar6 = uVar21 * 0x28;
    uVar41 = (undefined4)*(undefined8 *)(&UNK_1800fe0e0 + uVar21 * 0x28);
    uVar42 = (undefined4)((ulonglong)*(undefined8 *)(&UNK_1800fe0e0 + uVar21 * 0x28) >> 0x20);
    uVar23 = *(undefined4 *)(&UNK_1800fe0c0 + lVar11);
    uVar24 = *(undefined4 *)(&UNK_1800fe0c4 + lVar11);
    uVar35 = *(undefined4 *)(&UNK_1800fe0c8 + lVar11);
    uVar36 = *(undefined4 *)(&UNK_1800fe0cc + lVar11);
    uVar37 = *(undefined4 *)(&UNK_1800fe0d0 + lVar6);
    uVar38 = *(undefined4 *)(&UNK_1800fe0d4 + lVar6);
    uVar39 = *(undefined4 *)(&UNK_1800fe0d8 + lVar6);
    uVar40 = *(undefined4 *)(&UNK_1800fe0dc + lVar6);
  }
  else {
    uVar41 = (undefined4)uStack_e0;
    uVar42 = (undefined4)((ulonglong)uStack_e0 >> 0x20);
    uVar23 = uStack_100;
    uVar24 = uStack_fc;
    uVar35 = (undefined4)local_f8;
    uVar36 = local_f8._4_4_;
    uVar37 = (undefined4)uStack_f0;
    uVar38 = uStack_f0._4_4_;
    uVar39 = (undefined4)local_e8;
    uVar40 = local_e8._4_4_;
  }
  if (((*(byte *)(param_1 + 0x7654) & 4) != 0) && ((uVar21 & 0xfffffff7) == 0)) {
    FUN_18005a780(param_1);
  }
  bVar22 = (iVar20 - 5U & 0xfffffff7) == 0;
  if (bVar22) {
    lVar11 = 0x128;
  }
  else {
    lVar11 = 0x120;
  }
  cVar18 = *(char *)(param_1 + 0x766b);
  *(bool *)(param_1 + 0x766b) = bVar22;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar22 != (bool)cVar18;
  local_118 = param_3;
  local_110 = uVar13 == 0xff;
  lVar6 = FUN_18004bd10((longlong *)(param_1 + 0xf778),(longlong *)&local_118);
  if ((param_2 == 1) &&
     (((*(char *)(param_1 + 0x7666) != '\0' && (*(int *)(param_3 + 4) != 0)) ||
      (*(char *)(param_1 + 0x7667) != '\0')))) {
    cVar18 = '\x01';
    lVar11 = *(longlong *)(lVar11 + *(longlong *)(param_1 + 0xf6f8));
LAB_1800494c7:
    if (iVar20 == 6) {
      uVar27 = 1;
      uVar29 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar28 = 0;
      uVar30 = 0;
      uVar31 = 0x3f;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x130);
      goto LAB_180049594;
    }
    if (iVar20 == 7) {
      uVar27 = 1;
      uVar29 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar28 = 0;
      uVar30 = 0;
      uVar31 = 0x3f;
      uVar32 = 0;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x138);
      uVar33 = 0;
      uVar34 = 0;
      goto LAB_180049594;
    }
    if (iVar20 == 0xe) {
      uVar27 = 7;
      uVar29 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar28 = 0;
      uVar30 = 0;
      uVar31 = 0x3f;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x140);
      goto LAB_180049594;
    }
    if (iVar20 == 0xf) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x148);
      uVar33 = 0;
      uVar34 = 0;
      uVar27 = 7;
      uVar29 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar28 = 0;
      uVar30 = 0;
      uVar31 = 0x3f;
      uVar32 = 0;
      goto LAB_180049594;
    }
  }
  else {
    cVar18 = '\0';
    lVar11 = CONCAT44(uVar29,uVar27);
    if (lVar11 == 0) goto LAB_1800494c7;
  }
  uVar33 = (undefined4)uStack_b0;
  uVar34 = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  uVar27 = (undefined4)uStack_d0;
  uVar29 = uStack_d0._4_4_;
  uVar25 = (undefined4)local_c8;
  uVar26 = local_c8._4_4_;
  uVar28 = (undefined4)uStack_c0;
  uVar30 = uStack_c0._4_4_;
  uVar31 = (undefined4)local_b8;
  uVar32 = local_b8._4_4_;
LAB_180049594:
  puVar10 = &DAT_18010f3e8;
  uVar13 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar3 = (0x1000 - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x94);
  bVar22 = *(char *)(param_1 + 0x7661) != '\0';
  if (bVar22) {
    puVar10 = &DAT_18010f3c8;
  }
  local_118 = &DAT_18010f3a8;
  if (bVar22) {
    local_118 = &DAT_18010f388;
  }
  if (((((*(char *)(param_1 + 0x7662) != '\0') || (*(uint *)(param_1 + 0x6940) != uVar17)) ||
       ((bVar2 || ((*(int *)(param_1 + 0x102c) != param_6 || (*(int *)(param_1 + 0xfe8) != param_7))
                  )))) ||
      ((*(longlong *)(param_1 + 0xffb8) != param_5 ||
       ((((*(longlong *)(param_1 + 0xff38) != param_4 ||
          (*(longlong *)(param_1 + 0xf8f0) != local_130)) ||
         (*(longlong *)(param_1 + 0xf910) != lVar11)) ||
        ((*(char *)(param_1 + 0x7668) != cVar18 ||
         (*(int *)(param_1 + 0x763c) != *(int *)(param_3 + 4))))))))) ||
     ((((*(int *)(param_1 + 0xf94c) != *(int *)(local_118 + (longlong)param_2 * 4) ||
        ((*(int *)(param_1 + 0xffc4) != *(int *)(puVar10 + (longlong)param_2 * 4) ||
         ((*(int *)(param_1 + 0x94) != 0) != (param_9 != 0))))) || (uVar13 < param_8)) ||
      ((uVar3 < param_9 || (*(longlong *)(param_1 + 0xf940) != lVar6)))))) {
    iVar20 = 0;
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      iVar20 = param_7;
    }
    FUN_180049b30(param_1,uVar13 < param_8,uVar3 < param_9,iVar20);
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      param_6 = *(int *)(param_1 + 0x7c);
    }
    if (*(char *)(param_1 + 0x7662) != '\0') {
      *(undefined1 *)(param_1 + 0xf689) = 1;
      *(uint *)(param_1 + 0xf684) = *(uint *)(param_1 + 0xf684) | 1;
    }
    if (bVar2) {
      *(uint *)(param_1 + 0x6ea4) = (uint)(byte)param_3[0x4d];
      *(uint *)(param_1 + 0x6eb4) = (uint)(byte)param_3[0x55];
      *(uint *)(param_1 + 0x6ec4) = (uint)(byte)param_3[0x5d];
      *(uint *)(param_1 + 0x6ed4) = (uint)(byte)param_3[0x65];
      *(uint *)(param_1 + 0x6ee4) = (uint)(byte)param_3[0x6d];
      *(uint *)(param_1 + 0x6ef4) = (uint)(byte)param_3[0x75];
      *(uint *)(param_1 + 0x6f04) = (uint)(byte)param_3[0x7d];
      *(uint *)(param_1 + 0x6f14) = (uint)(byte)param_3[0x85];
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    if (*(uint *)(param_1 + 0x6940) != uVar17) {
      *(uint *)(param_1 + 0x6940) = uVar17;
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    if (*(int *)(param_1 + 0xfe8) != param_7) {
      *(int *)(param_1 + 0xfe8) = param_7;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(longlong *)(param_1 + 0xff38) != param_4) {
      *(longlong *)(param_1 + 0xff38) = param_4;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(int *)(param_1 + 0x102c) != param_6) {
      *(int *)(param_1 + 0x102c) = param_6;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(longlong *)(param_1 + 0xffb8) != param_5) {
      *(longlong *)(param_1 + 0xffb8) = param_5;
      *(undefined1 *)(param_1 + 0xf690) = 1;
    }
    if (*(longlong *)(param_1 + 0xf940) != lVar6) {
      *(longlong *)(param_1 + 0xf940) = lVar6;
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if (*(longlong *)(param_1 + 0xf910) != lVar11) {
      *(longlong *)(param_1 + 0xf910) = lVar11;
      if (lVar11 == 0) {
        *(undefined8 *)(param_1 + 0x10130) = 0;
        *(undefined8 *)(param_1 + 0x10138) = 0;
        *(undefined8 *)(param_1 + 0x10140) = 0;
        *(undefined8 *)(param_1 + 0x10148) = 0;
        *(undefined8 *)(param_1 + 0x10150) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x10130) = uVar27;
        *(undefined4 *)(param_1 + 0x10134) = uVar29;
        *(undefined4 *)(param_1 + 0x10138) = uVar25;
        *(undefined4 *)(param_1 + 0x1013c) = uVar26;
        *(undefined4 *)(param_1 + 0x10140) = uVar28;
        *(undefined4 *)(param_1 + 0x10144) = uVar30;
        *(undefined4 *)(param_1 + 0x10148) = uVar31;
        *(undefined4 *)(param_1 + 0x1014c) = uVar32;
        *(ulonglong *)(param_1 + 0x10150) = CONCAT44(uVar34,uVar33);
      }
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if (*(longlong *)(param_1 + 0xf8f0) != local_130) {
      *(undefined4 *)(param_1 + 0x10108) = uVar23;
      *(undefined4 *)(param_1 + 0x1010c) = uVar24;
      *(undefined4 *)(param_1 + 0x10110) = uVar35;
      *(undefined4 *)(param_1 + 0x10114) = uVar36;
      *(longlong *)(param_1 + 0xf8f0) = local_130;
      *(byte *)(param_1 + 0xf6c2) =
           *(byte *)(param_1 + 0xf6c2) | *(longlong *)(param_1 + 0xf8d0) != 0;
      *(undefined4 *)(param_1 + 0x10118) = uVar37;
      *(undefined4 *)(param_1 + 0x1011c) = uVar38;
      *(undefined4 *)(param_1 + 0x10120) = uVar39;
      *(undefined4 *)(param_1 + 0x10124) = uVar40;
      *(undefined8 *)(param_1 + 0xf8d0) = 0;
      *(ulonglong *)(param_1 + 0x10128) = CONCAT44(uVar42,uVar41);
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if ((*(int *)(param_1 + 0x763c) != *(int *)(param_3 + 4)) ||
       (*(char *)(param_1 + 0x7662) != '\0')) {
      *(int *)(param_1 + 0x763c) = *(int *)(param_3 + 4);
      *(undefined1 *)(param_1 + 0xf68e) = 1;
    }
    if (*(int *)(param_1 + 0xffc4) != *(int *)(puVar10 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xffc4) = *(int *)(puVar10 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10188) = 1;
    }
    if (*(int *)(param_1 + 0xf94c) != *(int *)(local_118 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xf94c) = *(int *)(local_118 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if (*(char *)(param_1 + 0x7668) != cVar18) {
      *(undefined1 *)(param_1 + 0xf68d) = 1;
      *(char *)(param_1 + 0x7668) = cVar18;
    }
    bVar14 = *(byte *)(param_1 + 0x7662);
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar14;
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar14;
    *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar14;
    *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar14;
    if (bVar14 != 0) {
      *(undefined1 *)(param_1 + 0x7662) = 0;
      FUN_18005a5c0(param_1);
    }
  }
  return;
}

