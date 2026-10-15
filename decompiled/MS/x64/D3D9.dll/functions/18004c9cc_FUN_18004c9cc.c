/*
 * FUN_18004c9cc at 18004c9cc
 * undefined __fastcall FUN_18004c9cc(longlong param_1, int param_2, undefined8 * param_3, longlong param_4, longlong param_5, int param_6, int param_7, uint param_8, uint param_9, char param_10, char param_11)
 * Address ranges: 18004c9cc-18004d045
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c9cc(longlong param_1,int param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,int param_6,int param_7,uint param_8,uint param_9,char param_10,
                  char param_11)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool local_res8;
  uint local_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  longlong local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  longlong local_a8;
  uint local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | *(byte *)(param_1 + 0x766b);
  iVar13 = *(int *)(param_1 + 0x94);
  uVar11 = *(uint *)(param_1 + 0x6940);
  *(undefined1 *)(param_1 + 0x766b) = 0;
  uVar9 = (0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70);
  uVar5 = (0x1000 - *(int *)(param_1 + 0x90)) - iVar13;
  puVar6 = &DAT_18010f3e8;
  bVar16 = *(char *)(param_1 + 0x7661) != '\0';
  if (bVar16) {
    puVar6 = &DAT_18010f3c8;
  }
  puVar7 = &DAT_18010f3a8;
  if (bVar16) {
    puVar7 = &DAT_18010f388;
  }
  bVar16 = 2.0 <= *(float *)(param_1 + 0xea8);
  if ((*(char *)(param_1 + 0xeac) != '\0') && (1 < *(byte *)(param_3[7] + 0x4a6c))) {
    bVar16 = false;
  }
  if ((2 < param_2 - 4U) || (bVar2 = true, !bVar16)) {
    bVar2 = false;
  }
  uVar1 = *(uint *)(param_1 + 0x696c);
  if ((uVar1 & 1) == 0) {
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x6968);
  }
  else {
    uVar14 = (ulonglong)*(float *)(param_1 + 0x6f64);
  }
  local_res8 = false;
  uVar12 = (ulonglong)
           (-(uint)((*(uint *)(param_1 + 0x7654) & 4) != 0) & *(uint *)(param_1 + 0x7650));
  if (bVar2) {
    uVar8 = (-(ulonglong)((uVar1 & 2) != 0) & 0x200) + 0x100;
    if ((uVar1 & 4) != 0) {
      uVar8 = (-(ulonglong)((uVar1 & 2) != 0) & 0x200) + 0x500;
    }
    uVar4 = uVar8 | uVar12 | 0x800;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar8 | uVar12;
    }
    uVar12 = (uVar14 & 0xffffffff) << 0xc | uVar4;
  }
  FUN_180058054(param_3,&local_d8,uVar12);
  if (param_10 != '\0') {
    local_78 = local_70;
  }
  if (param_2 == 1) {
    if (param_11 == '\0') {
      uVar11 = uVar11 & 0xfff3ffff;
      fVar17 = *(float *)(param_1 + 0x6f38);
      if (*(float *)(param_1 + 0x6f38) <= *(float *)(param_1 + 0x6f30)) {
        fVar17 = *(float *)(param_1 + 0x6f30);
      }
      fVar18 = *(float *)(param_1 + 0x6f34);
      if (fVar17 <= *(float *)(param_1 + 0x6f34)) {
        fVar18 = fVar17;
      }
      fVar18 = fVar18 - 1.0;
      if (fVar18 < 0.0) {
        fVar18 = -fVar18;
      }
      local_res8 = 0.1 < fVar18;
      if (fVar18 <= 0.1) goto LAB_18004cc44;
    }
    else {
      local_res8 = true;
      uVar11 = uVar11 & 0xfffbffff | 0x80000;
    }
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    local_fc = 0;
    _param_10 = 1;
    local_100 = 0;
    local_f8 = 0;
    local_104 = 0;
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x120);
    uVar10 = 0;
  }
  else {
LAB_18004cc44:
    uVar21 = (undefined4)local_8c;
    uVar22 = (undefined4)((ulonglong)local_8c >> 0x20);
    uVar19 = (undefined4)local_9c;
    uVar20 = (undefined4)((ulonglong)local_9c >> 0x20);
    local_104 = local_80;
    local_f8 = local_84;
    local_100 = local_90;
    local_fc = local_94;
    _param_10 = local_a0;
    lVar15 = local_a8;
    uVar10 = local_7c;
  }
  if ((((((*(char *)(param_1 + 0x7662) != '\0') || (*(int *)(param_1 + 0x102c) != param_6)) ||
        (*(int *)(param_1 + 0xfe8) != param_7)) ||
       ((*(longlong *)(param_1 + 0xffb8) != param_5 || (*(longlong *)(param_1 + 0xff38) != param_4))
       )) || ((*(longlong *)(param_1 + 0xf8f0) != local_d8 ||
              ((*(longlong *)(param_1 + 0xf910) != lVar15 || (*(int *)(param_1 + 0x763c) != 2))))))
     || ((*(int *)(param_1 + 0xffc4) != *(int *)(puVar6 + (longlong)param_2 * 4) ||
         (((((iVar13 != 0) != (param_9 != 0) || (uVar9 < param_8)) || (uVar5 < param_9)) ||
          ((*(longlong *)(param_1 + 0xf940) != local_78 || (*(uint *)(param_1 + 0x6940) != uVar11)))
          ))))) {
    iVar13 = 0;
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      iVar13 = param_7;
    }
    FUN_180049b30(param_1,uVar9 < param_8,uVar5 < param_9,iVar13);
    if (param_4 == *(longlong *)(param_1 + 0xf718)) {
      param_6 = *(int *)(param_1 + 0x7c);
    }
    if (*(char *)(param_1 + 0x7662) != '\0') {
      *(undefined1 *)(param_1 + 0xf689) = 1;
      *(uint *)(param_1 + 0xf684) = *(uint *)(param_1 + 0xf684) | 1;
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
    if (*(longlong *)(param_1 + 0xf910) != lVar15) {
      *(longlong *)(param_1 + 0xf910) = lVar15;
      if (lVar15 == 0) {
        *(undefined8 *)(param_1 + 0x10130) = 0;
        *(undefined8 *)(param_1 + 0x10138) = 0;
        *(undefined8 *)(param_1 + 0x10140) = 0;
        *(undefined8 *)(param_1 + 0x10148) = 0;
        *(undefined8 *)(param_1 + 0x10150) = 0;
      }
      else {
        *(ulonglong *)(param_1 + 0x10134) = CONCAT44(uVar20,uVar19);
        *(byte *)(param_1 + 0x1018c) =
             *(byte *)(param_1 + 0x1018c) | *(uint *)(param_1 + 0x10150) < local_104;
        *(ulonglong *)(param_1 + 0x10144) = CONCAT44(uVar22,uVar21);
        *(uint *)(param_1 + 0x10130) = _param_10;
        *(byte *)(param_1 + 0x10190) =
             *(byte *)(param_1 + 0x10190) | *(uint *)(param_1 + 0x10140) < local_100;
        *(undefined4 *)(param_1 + 0x1013c) = local_fc;
        *(undefined4 *)(param_1 + 0x1014c) = local_f8;
        *(uint *)(param_1 + 0x10140) = local_100;
        *(uint *)(param_1 + 0x10150) = local_104;
        *(undefined4 *)(param_1 + 0x10154) = uVar10;
      }
      *(bool *)(param_1 + 0x7668) = local_res8;
      *(undefined1 *)(param_1 + 0xf68d) = 1;
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if (*(longlong *)(param_1 + 0xf940) != local_78) {
      *(longlong *)(param_1 + 0xf940) = local_78;
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if (*(longlong *)(param_1 + 0xf8f0) != local_d8) {
      *(longlong *)(param_1 + 0xf8f0) = local_d8;
      *(undefined8 **)(param_1 + 0xf8d0) = param_3;
      *(byte *)(param_1 + 0x1018c) =
           *(byte *)(param_1 + 0x1018c) | *(uint *)(param_1 + 0x10128) < local_b0;
      *(undefined8 *)(param_1 + 0x1010c) = local_cc;
      *(byte *)(param_1 + 0x10190) =
           *(byte *)(param_1 + 0x10190) | *(uint *)(param_1 + 0x10118) < local_c0;
      *(undefined4 *)(param_1 + 0x10114) = local_c4;
      *(undefined8 *)(param_1 + 0x1011c) = local_bc;
      *(undefined4 *)(param_1 + 0x10124) = local_b4;
      *(undefined4 *)(param_1 + 0x1012c) = local_ac;
      *(undefined1 *)(param_1 + 0x10189) = 1;
      *(undefined1 *)(param_1 + 0xf6c2) = 1;
      *(uint *)(param_1 + 0x10108) = local_d0;
      *(uint *)(param_1 + 0x10118) = local_c0;
      *(uint *)(param_1 + 0x10128) = local_b0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) != '\0') {
      if ((*(char *)(param_1 + 0x1019a) != '\0') ||
         (bVar3 = 1, ((local_d0 | _param_10) & 0x10) == 0)) {
        bVar3 = 0;
      }
      *(byte *)(param_1 + 0x1018e) = *(byte *)(param_1 + 0x1018e) | bVar3;
    }
    if ((*(int *)(param_1 + 0x763c) != 2) || (*(char *)(param_1 + 0x7662) != '\0')) {
      *(undefined4 *)(param_1 + 0x763c) = 2;
      *(undefined1 *)(param_1 + 0xf68e) = 1;
    }
    if (*(int *)(param_1 + 0xffc4) != *(int *)(puVar6 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xffc4) = *(int *)(puVar6 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10188) = 1;
    }
    if (*(int *)(param_1 + 0xf94c) != *(int *)(puVar7 + (longlong)param_2 * 4)) {
      *(int *)(param_1 + 0xf94c) = *(int *)(puVar7 + (longlong)param_2 * 4);
      *(undefined1 *)(param_1 + 0x10189) = 1;
    }
    if (*(uint *)(param_1 + 0x6940) != uVar11) {
      *(uint *)(param_1 + 0x6940) = uVar11;
      *(undefined1 *)(param_1 + 0xf691) = 1;
    }
    bVar3 = *(byte *)(param_1 + 0x7662);
    *(byte *)(param_1 + 0xf68c) = *(byte *)(param_1 + 0xf68c) | bVar3;
    *(byte *)(param_1 + 0xf68b) = *(byte *)(param_1 + 0xf68b) | bVar3;
    *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | bVar3;
    *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar3;
    if (bVar3 != 0) {
      *(undefined1 *)(param_1 + 0x7662) = 0;
      FUN_18005a5c0(param_1);
    }
  }
  return;
}

