/*
 * FUN_180038b30 at 180038b30
 * undefined __fastcall FUN_180038b30(longlong param_1, int param_2, ulonglong param_3, longlong param_4, longlong param_5, int param_6, uint param_7, uint param_8, uint param_9, byte param_10)
 * Address ranges: 180038b30-1800395fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038b30(longlong param_1,int param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  int param_6,uint param_7,uint param_8,uint param_9,byte param_10)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  char cVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  ulonglong local_68;
  ulonglong local_60;
  int local_58;
  undefined1 local_54;
  
  if (*(char *)(param_3 + 0x1c) == -1) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)(param_3 + 0x1d);
  }
  uVar14 = *(uint *)(param_1 + 0x764c);
  uVar16 = uVar14;
  if (uVar4 <= uVar14) {
    uVar16 = uVar4;
  }
  if (*(char *)(param_3 + 0x19) == '\0') {
    uVar4 = (uint)*(byte *)(param_3 + 0x1a);
  }
  else {
    uVar4 = 0;
  }
  bVar23 = *(char *)(param_3 + 0x41) != -0x60;
  uVar21 = 2;
  uVar15 = 3;
  if (bVar23) {
    uVar10 = 2;
  }
  else {
    uVar4 = (uint)*(byte *)(param_3 + 0x42) << 0x14 | uVar4;
    uVar10 = 3;
  }
  uVar7 = (uint)!bVar23;
  if (*(char *)(param_3 + 0x49) == -0x5f) {
    uVar4 = (uint)*(byte *)(param_3 + 0x4a) << 0x18 | uVar4;
    uVar7 = uVar10;
  }
  if (*(char *)(param_3 + 0x31) == '0') {
    uVar4 = (uint)*(byte *)(param_3 + 0x32) << 0xc | uVar4;
    uVar7 = uVar7 | 4;
  }
  if (*(char *)(param_3 + 0x51) == 'P') {
    uVar4 = (uint)*(byte *)(param_3 + 0x52) << 0x1c | uVar4;
    uVar7 = uVar7 | 8;
  }
  if (*(char *)(param_3 + 0x59) == 'Q') {
    uVar10 = (uint)*(byte *)(param_3 + 0x5a);
    uVar7 = uVar7 | 0x10;
  }
  else {
    uVar10 = 0;
  }
  if (*(char *)(param_3 + 0x61) == 'R') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x62) << 4;
    uVar7 = uVar7 | 0x20;
  }
  if (*(char *)(param_3 + 0x69) == 'S') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x6a) << 8;
    uVar7 = uVar7 | 0x40;
  }
  if (*(char *)(param_3 + 0x71) == 'T') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x72) << 0xc;
    uVar7 = uVar7 | 0x80;
  }
  if (*(char *)(param_3 + 0x79) == 'U') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x7a) << 0x10;
    uVar7 = uVar7 | 0x100;
  }
  if (*(char *)(param_3 + 0x81) == 'V') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x82) << 0x14;
    uVar7 = uVar7 | 0x200;
  }
  if (*(char *)(param_3 + 0x89) == 'W') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x8a) << 0x18;
    uVar7 = uVar7 | 0x400;
  }
  if (*(char *)(param_3 + 0x21) == '\x10') {
    uVar4 = uVar4 | (uint)*(byte *)(param_3 + 0x22) << 4;
    uVar7 = uVar7 | *(uint *)(&DAT_1801019c8 + (ulonglong)uVar16 * 4);
  }
  if (*(char *)(param_3 + 0x91) == '\x01') {
    uVar10 = uVar10 | (uint)*(byte *)(param_3 + 0x92) << 0x1c;
    uVar7 = uVar7 | 0x10000;
  }
  if (*(char *)(param_3 + 0x99) == '1') {
    uVar4 = uVar4 | (uint)*(byte *)(param_3 + 0x9a) << 4;
    uVar7 = uVar7 | 0x20000;
  }
  if ((*(int *)(param_1 + 0x6f20) == 0) || (uVar14 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x8000;
  }
  if (*(char *)(param_3 + 0x29) == ' ') {
    uVar4 = uVar4 | (uint)*(byte *)(param_3 + 0x2a) << 8;
    uVar7 = uVar16 | uVar7;
  }
  if (*(char *)(param_3 + 0x39) == '@') {
    uVar4 = uVar4 | (uint)*(byte *)(param_3 + 0x3a) << 0x10;
    uVar7 = uVar7 | 0x80000;
  }
  uVar16 = -(uint)(*(int *)(param_3 + 4) != 0) & 0x40000;
  uVar17 = uVar16 | uVar7;
  if (((*(int *)(param_1 + 0xf7e0) < 0xb000) || (2 < param_2 - 4U)) ||
     (*(float *)(param_1 + 0xea8) < 2.0)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if (((*(byte *)(param_1 + 0x696c) & 1) == 0) || (*(char *)(param_1 + 0xeac) != '\0')) {
    local_60 = (ulonglong)*(uint *)(param_1 + 0x6968);
  }
  else {
    local_60 = (ulonglong)*(float *)(param_1 + 0x6f64);
  }
  if (((*(uint *)(param_1 + 0x6ea4) == (uint)*(byte *)(param_3 + 0x4d)) &&
      (*(uint *)(param_1 + 0x6eb4) == (uint)*(byte *)(param_3 + 0x55))) &&
     ((*(uint *)(param_1 + 0x6ec4) == (uint)*(byte *)(param_3 + 0x5d) &&
      ((((*(uint *)(param_1 + 0x6ed4) == (uint)*(byte *)(param_3 + 0x65) &&
         (*(uint *)(param_1 + 0x6ee4) == (uint)*(byte *)(param_3 + 0x6d))) &&
        (*(uint *)(param_1 + 0x6ef4) == (uint)*(byte *)(param_3 + 0x75))) &&
       ((*(uint *)(param_1 + 0x6f04) == (uint)*(byte *)(param_3 + 0x7d) &&
        (*(uint *)(param_1 + 0x6f14) == (uint)*(byte *)(param_3 + 0x85))))))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
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
    if (((*(longlong *)(param_1 + 0xf7a8) == 0) && (*(char *)(param_1 + 0xa8) != '\0')) &&
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
    if (bVar23) {
      uVar21 = 7;
      uVar15 = 6;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (param_10 != 0) {
        uVar15 = uVar21;
      }
LAB_180038ea0:
      uVar21 = uVar15;
    }
    else if ((*(char *)(param_3 + 0x2c) == -1) || (param_10 == 0)) goto LAB_180038ea0;
    if ((((uVar7 & 0xf800) != 0) || (*(char *)(param_1 + 0x7664) != '\0')) || (uVar14 == 0xff)) {
      uVar21 = (ulonglong)((int)uVar21 + 8);
    }
  }
  *(ulonglong *)(param_1 + 0xfe0) = *(ulonglong *)(param_1 + 0xfe0) & 0xfff7ffffffffffff;
  if (*(char *)(param_1 + 0xf6c5) != '\0') {
    FUN_18005acb0(param_1);
  }
  lVar18 = 0;
  local_68 = 0;
  lVar22 = 0;
  if (bVar3) {
    *(uint *)(param_1 + 0xf7c) =
         ((((((uint)(*(byte *)(param_3 + 0x85) | *(byte *)(param_3 + 0x7d)) << 3 |
             (uint)*(byte *)(param_3 + 0x75)) << 3 | (uint)*(byte *)(param_3 + 0x6d)) << 3 |
           (uint)*(byte *)(param_3 + 0x65)) << 3 | (uint)*(byte *)(param_3 + 0x5d)) << 3 |
         (uint)*(byte *)(param_3 + 0x55)) << 3 | (uint)*(byte *)(param_3 + 0x4d);
  }
  iVar20 = (int)uVar21;
  if (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x168 + uVar21 * 8) == 0) {
    uVar8 = *(uint *)(param_1 + 0x696c);
    if (((uVar8 & 1) == 0) || (*(char *)(param_1 + 0xeac) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar12 = 0;
    if ((*(byte *)(param_1 + 0x7654) & 4) != 0) {
      uVar12 = *(uint *)(param_1 + 0x7650);
    }
    local_68 = (ulonglong)uVar12;
    if (bVar23) {
      uVar15 = 0x300;
      if ((uVar8 & 2) == 0) {
        uVar15 = 0x100;
      }
      if (((uVar8 & 4) != 0) && (uVar15 = 0x700, (uVar8 & 2) == 0)) {
        uVar15 = 0x500;
      }
      uVar5 = uVar15 | local_68 | 0x800;
      if (!bVar2) {
        uVar5 = uVar15 | local_68;
      }
      local_68 = (local_60 & 0xffffffff) << 0xc | uVar5;
    }
    if (*(longlong *)(param_1 + 0xf7a8) == 0) {
      uVar8 = 0;
      if (*(uint *)(param_1 + 0xf70) != 0) {
        for (; (*(uint *)(param_1 + 0xf70) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      bVar13 = 0;
      uVar15 = 0;
      if (uVar8 != 0) {
        do {
          if (((*(byte *)(param_1 + 0xf58 + uVar15) | 0x80) & *(byte *)(param_1 + 0xf68 + uVar15))
              != 0 || ((*(byte *)(param_1 + 0xf50 + uVar15) | 0x80) &
                      *(byte *)(param_1 + 0xf60 + uVar15)) != 0) {
            bVar13 = bVar13 | (&DAT_180102400)[uVar15];
          }
          uVar12 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar12;
        } while (uVar12 < uVar8);
      }
    }
    else {
      bVar13 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xf7a8) + 8) + 0x126c);
    }
    *(uint *)(param_1 + 0xfbc) = *(uint *)(param_1 + 0xfbc) & 0x7fd00000;
    uVar8 = 0;
    if (uVar14 == 0xff) {
      uVar8 = 0x200000;
    }
    *(uint *)(param_1 + 0xfbc) =
         *(uint *)(param_1 + 0xfbc) | uVar8 | (uint)param_10 << 0x1f | uVar16 | uVar7 & 0xfffff;
    *(ulonglong *)(param_1 + 0xfc0) = CONCAT44(uVar10,uVar4);
    plVar6 = (longlong *)
             FUN_18003efe8((undefined8 *)(param_1 + 0xf780),(uint *)(param_1 + 0xf78),local_68,
                           bVar13);
    if (plVar6 != (longlong *)0x0) {
      lVar18 = *plVar6;
      lVar22 = plVar6[1];
    }
  }
  if (((*(byte *)(param_1 + 0x7654) & 4) != 0) && ((uVar21 & 0xfffffff7) == 0)) {
    FUN_18005a780(param_1);
  }
  if (lVar18 == 0) {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x168 + uVar21 * 8);
    local_58 = iVar20;
  }
  else {
    local_58 = 0x10;
  }
  bVar23 = (iVar20 - 5U & 0xfffffff7) == 0;
  if (bVar23) {
    lVar11 = 0x1f8;
  }
  else {
    lVar11 = 0x1f0;
  }
  cVar1 = *(char *)(param_1 + 0x766b);
  *(bool *)(param_1 + 0x766b) = bVar23;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar23 != (bool)cVar1;
  local_60 = param_3;
  local_54 = uVar14 == 0xff;
  local_60 = FUN_18003a920((longlong *)(param_1 + 0xf750),(longlong *)&local_60);
  if ((param_2 == 1) &&
     (((*(char *)(param_1 + 0x7666) != '\0' && (*(int *)(param_3 + 4) != 0)) ||
      (*(char *)(param_1 + 0x7667) != '\0')))) {
    lVar22 = *(longlong *)(lVar11 + *(longlong *)(param_1 + 0xf6e0));
    cVar1 = '\x01';
  }
  else {
    cVar19 = '\0';
    cVar1 = '\0';
    if (lVar22 != 0) goto LAB_180039215;
  }
  cVar19 = cVar1;
  if (iVar20 == 6) {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x200);
  }
  else if (iVar20 == 7) {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x208);
  }
  else if (iVar20 == 0xe) {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x210);
  }
  else if (iVar20 == 0xf) {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x218);
  }
LAB_180039215:
  puVar9 = &DAT_18010f308;
  uVar4 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar14 = (0x1000 - *(int *)(param_1 + 0x90)) - *(int *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x7661) != '\0') {
    puVar9 = &DAT_18010f2e8;
  }
  if ((((((*(char *)(param_1 + 0x7662) != '\0') || (*(uint *)(param_1 + 0x6940) != uVar17)) ||
        ((bVar3 || ((*(int *)(param_1 + 0x102c) != param_6 ||
                    (*(uint *)(param_1 + 0xfe8) != param_7)))))) ||
       (*(longlong *)(param_1 + 0xfd58) != param_5)) ||
      ((((((*(longlong *)(param_1 + 0xfcd8) != param_4 ||
           (*(longlong *)(param_1 + 0xfcc0) != lVar18)) ||
          (*(longlong *)(param_1 + 0xfcd0) != lVar22)) ||
         ((*(char *)(param_1 + 0x7668) != cVar19 ||
          (*(int *)(param_1 + 0x763c) != *(int *)(param_3 + 4))))) ||
        (*(int *)(param_1 + 0xfd80) != *(int *)(puVar9 + (longlong)param_2 * 4))) ||
       (((*(int *)(param_1 + 0x94) != 0) != (param_9 != 0) || (uVar4 < param_8)))))) ||
     ((uVar14 < param_9 || (*(ulonglong *)(param_1 + 0xfcb8) != local_60)))) {
    uVar16 = 0;
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      uVar16 = param_7;
    }
    FUN_180038960(param_1,(ulonglong)(uVar4 < param_8),(ulonglong)(uVar14 < param_9),
                  (ulonglong)uVar16);
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      param_6 = *(int *)(param_1 + 0x7c);
    }
    if (*(char *)(param_1 + 0x7662) != '\0') {
      *(undefined1 *)(param_1 + 0xf689) = 1;
      *(uint *)(param_1 + 0xf684) = *(uint *)(param_1 + 0xf684) | 1;
    }
    if (bVar3) {
      *(uint *)(param_1 + 0x6ea4) = (uint)*(byte *)(param_3 + 0x4d);
      *(uint *)(param_1 + 0x6eb4) = (uint)*(byte *)(param_3 + 0x55);
      *(uint *)(param_1 + 0x6ec4) = (uint)*(byte *)(param_3 + 0x5d);
      *(uint *)(param_1 + 0x6ed4) = (uint)*(byte *)(param_3 + 0x65);
      *(uint *)(param_1 + 0x6ee4) = (uint)*(byte *)(param_3 + 0x6d);
      *(uint *)(param_1 + 0x6ef4) = (uint)*(byte *)(param_3 + 0x75);
      *(uint *)(param_1 + 0x6f04) = (uint)*(byte *)(param_3 + 0x7d);
      *(uint *)(param_1 + 0x6f14) = (uint)*(byte *)(param_3 + 0x85);
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    if (*(uint *)(param_1 + 0x6940) != uVar17) {
      *(uint *)(param_1 + 0x6940) = uVar17;
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    if (*(uint *)(param_1 + 0xfe8) != param_7) {
      *(uint *)(param_1 + 0xfe8) = param_7;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcd8) != param_4) {
      *(longlong *)(param_1 + 0xfcd8) = param_4;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(int *)(param_1 + 0x102c) != param_6) {
      *(int *)(param_1 + 0x102c) = param_6;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(longlong *)(param_1 + 0xfd58) != param_5) {
      *(longlong *)(param_1 + 0xfd58) = param_5;
      *(undefined1 *)(param_1 + 0xf690) = 1;
    }
    if (*(ulonglong *)(param_1 + 0xfcb8) != local_60) {
      *(ulonglong *)(param_1 + 0xfcb8) = local_60;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    lVar11 = *(longlong *)(param_1 + 0xfcd0);
    if (lVar11 != lVar22) {
      *(longlong *)(param_1 + 0xfcd0) = lVar22;
      *(undefined1 *)(param_1 + 0x10588) = 1;
      lVar11 = lVar22;
    }
    if (*(longlong *)(param_1 + 0xfcc0) != lVar18) {
      *(longlong *)(param_1 + 0xfcc0) = lVar18;
      if (((lVar11 == 0) || (lVar11 == *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1f0))) ||
         (lVar11 == *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1f8))) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      lVar22 = *(longlong *)(param_1 + 0xf6e0);
      uVar4 = (uint)local_68;
      if (((lVar18 == *(longlong *)(lVar22 + 0x188)) || (lVar18 == *(longlong *)(lVar22 + 0x180)))
         || ((lVar18 == *(longlong *)(lVar22 + 0x1c8) ||
             ((lVar18 == *(longlong *)(lVar22 + 0x1c0) || (bVar23)))))) {
        uVar4 = uVar4 | 0x3f;
      }
      *(undefined1 *)(param_1 + 0x10588) = 1;
      lVar18 = *(longlong *)(param_1 + 0xf7d0);
      *(uint *)(param_1 + 0xfd84) = uVar4 & 0x3f;
      *(undefined8 *)(param_1 + 0xf7d0) = 0;
      *(byte *)(param_1 + 0xf6c2) = *(byte *)(param_1 + 0xf6c2) | lVar18 != 0;
    }
    if ((*(int *)(param_1 + 0x763c) != *(int *)(param_3 + 4)) ||
       (*(char *)(param_1 + 0x7662) != '\0')) {
      *(int *)(param_1 + 0x763c) = *(int *)(param_3 + 4);
      *(undefined1 *)(param_1 + 0xf68e) = 1;
    }
    if (*(int *)(param_1 + 0xfd80) != *(int *)(puVar9 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xfd80) = *(int *)(puVar9 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(char *)(param_1 + 0x7668) != cVar19) {
      *(undefined1 *)(param_1 + 0xf68d) = 1;
      *(char *)(param_1 + 0x7668) = cVar19;
    }
    bVar13 = *(byte *)(param_1 + 0x7662);
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar13;
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar13;
    *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar13;
    *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar13;
    if (bVar13 != 0) {
      *(undefined1 *)(param_1 + 0x7662) = 0;
      FUN_18005a5c0(param_1);
    }
  }
  return;
}

