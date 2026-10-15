/*
 * FUN_18013b478 at 18013b478
 * undefined FUN_18013b478(void)
 * Address ranges: 18013b478-18013bc43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013b478(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7,uint param_8,uint param_9,char param_10,char param_11)

{
  bool bVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  code *extraout_x11;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_d8;
  int local_cc;
  ulonglong local_50;
  ulonglong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x94);
  bVar9 = *(byte *)(param_1 + 0x766b);
  *(undefined1 *)(param_1 + 0x766b) = 0;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar9;
  uVar11 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar12 = (0x1000 - *(int *)(param_1 + 0x90)) - iVar7;
  puVar5 = &DAT_180247410;
  if (*(char *)(param_1 + 0x7661) == '\0') {
    puVar5 = &DAT_180247430;
  }
  local_d8 = *(uint *)(param_1 + 0x6940);
  if (*(int *)(param_1 + 0xf7e0) < 0xb000) {
    bVar13 = false;
  }
  else {
    if ((*(char *)(param_1 + 0xeac) == '\0') ||
       (bVar13 = false, *(byte *)(*(longlong *)(param_3 + 0x38) + 0x4a6c) < 2)) {
      bVar13 = true;
    }
    if (*(float *)(param_1 + 0xea8) < 2.0) {
      bVar13 = false;
    }
    bVar13 = param_2 - 4U < 3 && bVar13;
  }
  uVar8 = *(uint *)(param_1 + 0x696c);
  if ((uVar8 & 1) == 0) {
    uVar17 = *(uint *)(param_1 + 0x6968);
  }
  else {
    uVar17 = (uint)*(float *)(param_1 + 0x6f64);
  }
  bVar1 = false;
  uVar14 = *(uint *)(param_1 + 0x7650);
  if ((*(uint *)(param_1 + 0x7654) & 4) == 0) {
    uVar14 = 0;
  }
  uVar22 = (ulonglong)uVar14;
  if (bVar13) {
    bVar13 = (uVar8 & 2) != 0;
    uVar16 = 0x100;
    if (bVar13) {
      uVar16 = 0x300;
    }
    if (((uVar8 >> 2 & 1) != 0) && (uVar16 = 0x500, bVar13)) {
      uVar16 = 0x700;
    }
    uVar22 = uVar16 | uVar22 | (ulonglong)(uVar8 & 1) << 0xb | (ulonglong)uVar17 << 0xc;
  }
  lVar18 = *(longlong *)(param_3 + 0x18);
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (uVar8 == 0) {
LAB_18013b69c:
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_3,&local_50,uVar22);
    plVar20 = *(longlong **)(param_3 + 0x18);
    uVar16 = 0;
    uVar8 = *(uint *)(plVar20 + 2);
    if (uVar8 != 0) {
      uVar17 = 0;
      uVar14 = uVar8;
      do {
        uVar10 = uVar14 + uVar17 >> 1;
        uVar16 = (ulonglong)uVar10;
        uVar19 = *(ulonglong *)(plVar20[1] + uVar16 * 0x20);
        if (uVar19 <= uVar22) {
          if (uVar22 <= uVar19) break;
          uVar17 = uVar10 + 1;
          uVar16 = (ulonglong)(uVar10 + 1);
          uVar10 = uVar14;
        }
        uVar14 = uVar10;
      } while (uVar14 != uVar17);
    }
    uVar19 = uVar16 << 5;
    if (((uint)uVar16 == uVar8) ||
       (puVar2 = (ulonglong *)(plVar20[1] + uVar16 * 0x20), *puVar2 != uVar22)) {
      uVar17 = *(uint *)((longlong)plVar20 + 0x14);
      if (uVar17 == uVar8) {
        uVar8 = 0x10;
        if (uVar17 != 0) {
          uVar8 = uVar17 << 1;
        }
        lVar18 = FUN_1802229a8((ulonglong)uVar8 << 5);
        if (lVar18 != 0) {
          uVar15 = 0;
          if ((int)plVar20[2] != 0) {
            do {
              uVar17 = (int)uVar15 + 1;
              puVar3 = (undefined8 *)(plVar20[1] + uVar15 * 0x20);
              puVar4 = (undefined8 *)(lVar18 + uVar15 * 0x20);
              uVar24 = *puVar3;
              uVar27 = puVar3[3];
              uVar26 = puVar3[2];
              puVar4[1] = puVar3[1];
              *puVar4 = uVar24;
              puVar4[3] = uVar27;
              puVar4[2] = uVar26;
              uVar15 = (ulonglong)uVar17;
            } while (uVar17 < *(uint *)(plVar20 + 2));
          }
          FUN_1802229d8(*plVar20);
          *plVar20 = lVar18;
          plVar20[1] = lVar18;
          *(uint *)((longlong)plVar20 + 0x14) = uVar8;
        }
      }
      uVar15 = (ulonglong)*(uint *)(plVar20 + 2);
      if (*(uint *)((longlong)plVar20 + 0x14) != *(uint *)(plVar20 + 2)) {
        while ((uint)uVar16 < (uint)uVar15) {
          uVar19 = (ulonglong)((uint)uVar15 - 1);
          puVar3 = (undefined8 *)(plVar20[1] + uVar15 * 0x20);
          puVar4 = (undefined8 *)(plVar20[1] + uVar19 * 0x20);
          uVar24 = *puVar4;
          uVar27 = puVar4[3];
          uVar26 = puVar4[2];
          puVar3[1] = puVar4[1];
          *puVar3 = uVar24;
          puVar3[3] = uVar27;
          puVar3[2] = uVar26;
          uVar15 = uVar19;
        }
        uVar19 = uVar16 * 0x20;
        *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
        *(ulonglong *)(uVar19 + plVar20[1] + 8) = uVar22;
        lVar18 = plVar20[1];
        *(ulonglong *)(uVar19 + lVar18 + 0x18) = uStack_48;
        *(ulonglong *)(uVar19 + lVar18 + 0x10) = local_50;
        *(ulonglong *)(plVar20[1] + uVar19) = uVar22;
      }
    }
    else {
      puVar2[3] = uStack_48;
      puVar2[2] = local_50;
    }
    plVar20 = (longlong *)((uVar19 | 0x10) + plVar20[1]);
  }
  else {
    uVar17 = 0;
    uVar14 = uVar8;
    do {
      uVar10 = uVar14 + uVar17 >> 1;
      uVar16 = (ulonglong)uVar10;
      uVar19 = *(ulonglong *)(*(longlong *)(lVar18 + 8) + uVar16 * 0x20);
      if (uVar19 <= uVar22) {
        if (uVar22 <= uVar19) break;
        uVar17 = uVar10 + 1;
        uVar16 = (ulonglong)(uVar10 + 1);
        uVar10 = uVar14;
      }
      uVar14 = uVar10;
    } while (uVar14 != uVar17);
    if ((uint)uVar16 == uVar8) goto LAB_18013b69c;
    if ((*(ulonglong *)(uVar16 * 0x20 + *(longlong *)(lVar18 + 8)) != uVar22) ||
       (plVar20 = (longlong *)((uVar16 * 0x20 | 0x10) + *(longlong *)(lVar18 + 8)),
       plVar20 == (longlong *)0x0)) goto LAB_18013b69c;
  }
  lVar18 = *plVar20;
  lVar21 = plVar20[1];
  plVar20 = (longlong *)(param_3 + 0xb0);
  if (param_10 == '\0') {
    plVar20 = (longlong *)(param_3 + 0xa8);
  }
  lVar6 = *plVar20;
  if (param_2 == 1) {
    if (param_11 == '\0') {
      local_d8 = local_d8 & 0xfff3ffff;
      fVar25 = *(float *)(param_1 + 0x6f38);
      if (*(float *)(param_1 + 0x6f38) <= *(float *)(param_1 + 0x6f30)) {
        fVar25 = *(float *)(param_1 + 0x6f30);
      }
      fVar23 = *(float *)(param_1 + 0x6f34);
      if (fVar25 <= *(float *)(param_1 + 0x6f34)) {
        fVar23 = fVar25;
      }
      bVar1 = 0.1 < ABS(fVar23 - 1.0);
      if (!bVar1) goto LAB_18013b8e4;
    }
    else {
      local_d8 = local_d8 & 0xfff00000 | local_d8 & 0x3ffff | 0x80000;
      bVar1 = true;
    }
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1f0);
  }
LAB_18013b8e4:
  if ((((((*(char *)(param_1 + 0x7662) != '\0') || (*(int *)(param_1 + 0x102c) != param_6)) ||
        (*(int *)(param_1 + 0xfe8) != param_7)) ||
       ((*(longlong *)(param_1 + 0xfd58) != param_5 || (*(longlong *)(param_1 + 0xfcd8) != param_4))
       )) || ((*(longlong *)(param_1 + 0xfcc0) != lVar18 ||
              ((*(longlong *)(param_1 + 0xfcd0) != lVar21 || (*(int *)(param_1 + 0x763c) != 2))))))
     || ((((*(int *)(param_1 + 0xfd80) != *(int *)(puVar5 + (longlong)param_2 * 4) ||
           (iVar7 != 0) != (param_9 != 0)) || uVar11 < param_8) || uVar12 < param_9 ||
         ((*(longlong *)(param_1 + 0xfcb8) != lVar6 || (*(uint *)(param_1 + 0x6940) != local_d8)))))
     ) {
    iVar7 = param_7;
    if (param_4 != *(longlong *)(param_1 + 0xf718)) {
      iVar7 = 0;
    }
    FUN_180137af0(param_1,uVar11 < param_8,uVar12 < param_9,iVar7);
    local_cc = param_6;
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      local_cc = *(int *)(param_1 + 0x7c);
    }
    if (*(char *)(param_1 + 0x7662) != '\0') {
      *(undefined1 *)(param_1 + 0xf689) = 1;
      *(byte *)(param_1 + 0xf684) = *(byte *)(param_1 + 0xf684) | 1;
    }
    if (*(int *)(param_1 + 0xfe8) != param_7) {
      *(int *)(param_1 + 0xfe8) = param_7;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcd8) != param_4) {
      *(longlong *)(param_1 + 0xfcd8) = param_4;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(int *)(param_1 + 0x102c) != local_cc) {
      *(int *)(param_1 + 0x102c) = local_cc;
      *(undefined1 *)(param_1 + 0xf68f) = 1;
    }
    if (*(longlong *)(param_1 + 0xfd58) != param_5) {
      *(longlong *)(param_1 + 0xfd58) = param_5;
      *(undefined1 *)(param_1 + 0xf690) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcd0) != lVar21) {
      *(longlong *)(param_1 + 0xfcd0) = lVar21;
      *(bool *)(param_1 + 0x7668) = bVar1;
      *(undefined1 *)(param_1 + 0xf68d) = 1;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcb8) != lVar6) {
      *(longlong *)(param_1 + 0xfcb8) = lVar6;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcc0) != lVar18) {
      *(longlong *)(param_1 + 0xfcc0) = lVar18;
      *(undefined1 *)(param_1 + 0x10588) = 1;
      *(uint *)(param_1 + 0xfd84) = (uint)uVar22 & 0x3f;
      *(longlong *)(param_1 + 0xf7d0) = param_3;
      *(undefined1 *)(param_1 + 0xf6c2) = 1;
    }
    if ((*(int *)(param_1 + 0x763c) != 2) || (*(char *)(param_1 + 0x7662) != '\0')) {
      *(undefined4 *)(param_1 + 0x763c) = 2;
      *(undefined1 *)(param_1 + 0xf68e) = 1;
    }
    if (*(int *)(param_1 + 0xfd80) != *(int *)(puVar5 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xfd80) = *(int *)(puVar5 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(uint *)(param_1 + 0x6940) != local_d8) {
      *(uint *)(param_1 + 0x6940) = local_d8;
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    bVar9 = *(byte *)(param_1 + 0x7662);
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar9;
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar9;
    *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar9;
    *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar9;
    if (bVar9 != 0) {
      *(undefined1 *)(param_1 + 0x7662) = 0;
      FUN_180164290();
    }
  }
  return;
}

