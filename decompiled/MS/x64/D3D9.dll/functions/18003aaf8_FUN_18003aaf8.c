/*
 * FUN_18003aaf8 at 18003aaf8
 * undefined __fastcall FUN_18003aaf8(longlong param_1, int param_2, undefined8 * param_3, longlong param_4, longlong param_5, int param_6, uint param_7, uint param_8, uint param_9, char param_10, char param_11)
 * Address ranges: 18003aaf8-18003afb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003aaf8(longlong param_1,int param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,int param_6,uint param_7,uint param_8,uint param_9,char param_10,
                  char param_11)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  bool local_res8;
  
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | *(byte *)(param_1 + 0x766b);
  iVar2 = *(int *)(param_1 + 0x94);
  *(undefined1 *)(param_1 + 0x766b) = 0;
  uVar13 = *(uint *)(param_1 + 0x6940);
  uVar12 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar10 = (0x1000 - *(int *)(param_1 + 0x90)) - iVar2;
  puVar7 = &DAT_18010f308;
  if (*(char *)(param_1 + 0x7661) != '\0') {
    puVar7 = &DAT_18010f2e8;
  }
  if (*(int *)(param_1 + 0xf7e0) < 0xb000) {
LAB_18003abeb:
    bVar6 = false;
  }
  else {
    bVar5 = 2.0 <= *(float *)(param_1 + 0xea8);
    if ((*(char *)(param_1 + 0xeac) != '\0') && (1 < *(byte *)(param_3[7] + 0x4a6c))) {
      bVar5 = false;
    }
    if ((2 < param_2 - 4U) || (bVar6 = true, !bVar5)) goto LAB_18003abeb;
  }
  uVar3 = *(uint *)(param_1 + 0x696c);
  uVar14 = (ulonglong)uVar3;
  if ((uVar3 & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 0x6968);
  }
  else {
    uVar15 = (uint)(longlong)*(float *)(param_1 + 0x6f64);
  }
  local_res8 = false;
  uVar18 = (ulonglong)
           (-(uint)((*(uint *)(param_1 + 0x7654) & 4) != 0) & *(uint *)(param_1 + 0x7650));
  if (bVar6) {
    uVar11 = (-(ulonglong)((uVar3 & 2) != 0) & 0x200) + 0x100;
    if ((uVar3 & 4) != 0) {
      uVar11 = (-(ulonglong)((uVar3 & 2) != 0) & 0x200) + 0x500;
    }
    uVar8 = uVar11 | uVar18 | 0x800;
    if ((uVar3 & 1) == 0) {
      uVar8 = uVar11 | uVar18;
    }
    uVar18 = (ulonglong)uVar15 << 0xc | uVar8;
  }
  plVar9 = (longlong *)FUN_18003ecdc(param_3,uVar18);
  lVar17 = param_3[0x15];
  if (param_10 != '\0') {
    lVar17 = param_3[0x16];
  }
  lVar4 = *plVar9;
  lVar16 = plVar9[1];
  if (param_2 == 1) {
    if (param_11 == '\0') {
      uVar13 = uVar13 & 0xfff3ffff;
      fVar19 = *(float *)(param_1 + 0x6f38);
      if (*(float *)(param_1 + 0x6f38) <= *(float *)(param_1 + 0x6f30)) {
        fVar19 = *(float *)(param_1 + 0x6f30);
      }
      fVar20 = *(float *)(param_1 + 0x6f34);
      if (fVar19 <= *(float *)(param_1 + 0x6f34)) {
        fVar20 = fVar19;
      }
      fVar20 = fVar20 - 1.0;
      if (fVar20 < 0.0) {
        fVar20 = -fVar20;
      }
      local_res8 = 0.1 < fVar20;
      if (!local_res8) goto LAB_18003ad36;
    }
    else {
      local_res8 = true;
      uVar13 = uVar13 & 0xfffbffff | 0x80000;
    }
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1f0);
  }
LAB_18003ad36:
  if ((((((*(char *)(param_1 + 0x7662) != '\0') || (*(int *)(param_1 + 0x102c) != param_6)) ||
        (*(uint *)(param_1 + 0xfe8) != param_7)) ||
       ((*(longlong *)(param_1 + 0xfd58) != param_5 || (*(longlong *)(param_1 + 0xfcd8) != param_4))
       )) || ((*(longlong *)(param_1 + 0xfcc0) != lVar4 ||
              ((*(longlong *)(param_1 + 0xfcd0) != lVar16 || (*(int *)(param_1 + 0x763c) != 2))))))
     || ((*(int *)(param_1 + 0xfd80) != *(int *)(puVar7 + (longlong)param_2 * 4) ||
         (((((iVar2 != 0) != (param_9 != 0) || (uVar12 < param_8)) || (uVar10 < param_9)) ||
          ((*(longlong *)(param_1 + 0xfcb8) != lVar17 || (*(uint *)(param_1 + 0x6940) != uVar13)))))
         ))) {
    uVar11 = 0;
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      uVar11 = (ulonglong)param_7;
    }
    FUN_180038960(param_1,CONCAT71((int7)((ulonglong)lVar4 >> 8),uVar12 < param_8),
                  CONCAT71((int7)(uVar14 >> 8),uVar10 < param_9),uVar11);
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      param_6 = *(int *)(param_1 + 0x7c);
    }
    if (*(char *)(param_1 + 0x7662) != '\0') {
      *(undefined1 *)(param_1 + 0xf689) = 1;
      *(uint *)(param_1 + 0xf684) = *(uint *)(param_1 + 0xf684) | 1;
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
    if (*(longlong *)(param_1 + 0xfcd0) != lVar16) {
      *(bool *)(param_1 + 0x7668) = local_res8;
      *(longlong *)(param_1 + 0xfcd0) = lVar16;
      *(undefined1 *)(param_1 + 0xf68d) = 1;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcb8) != lVar17) {
      *(longlong *)(param_1 + 0xfcb8) = lVar17;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(longlong *)(param_1 + 0xfcc0) != lVar4) {
      *(longlong *)(param_1 + 0xfcc0) = lVar4;
      *(undefined8 **)(param_1 + 0xf7d0) = param_3;
      *(uint *)(param_1 + 0xfd84) = (uint)uVar18 & 0x3f;
      *(undefined1 *)(param_1 + 0x10588) = 1;
      *(undefined1 *)(param_1 + 0xf6c2) = 1;
    }
    if ((*(int *)(param_1 + 0x763c) != 2) || (*(char *)(param_1 + 0x7662) != '\0')) {
      *(undefined4 *)(param_1 + 0x763c) = 2;
      *(undefined1 *)(param_1 + 0xf68e) = 1;
    }
    if (*(int *)(param_1 + 0xfd80) != *(int *)(puVar7 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xfd80) = *(int *)(puVar7 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
    if (*(uint *)(param_1 + 0x6940) != uVar13) {
      *(uint *)(param_1 + 0x6940) = uVar13;
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    bVar1 = *(byte *)(param_1 + 0x7662);
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar1;
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar1;
    *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar1;
    *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar1;
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 0x7662) = 0;
      FUN_18005a5c0(param_1);
    }
  }
  return;
}

