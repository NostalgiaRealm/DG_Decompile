/*
 * FUN_10040e20 at 10040e20
 * undefined __thiscall FUN_10040e20(void * this, int param_1, undefined * param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 10040e20-10041e19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10040e20(void *this,int param_1,undefined *param_2,int param_3,int param_4,int param_5,
            uint param_6,uint param_7,uint param_8,byte param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  char local_161;
  uint local_160;
  undefined4 *local_154;
  uint local_150;
  uint local_128;
  undefined *local_124;
  undefined1 local_120;
  uint local_11c;
  undefined *local_118;
  uint local_114;
  undefined8 local_110;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  float local_b0 [8];
  undefined8 local_90;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined8 local_20;
  
  if (param_2[0x1c] == -1) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)(byte)param_2[0x1d];
  }
  uVar19 = *(uint *)((int)this + 0x762c);
  local_160 = 0;
  uVar21 = uVar19;
  if (uVar16 <= uVar19) {
    uVar21 = uVar16;
  }
  local_150 = 0;
  if (param_2[0x19] == '\0') {
    local_150 = (uint)(byte)param_2[0x1a];
  }
  if (param_2[0x41] == -0x60) {
    local_150 = (uint)(byte)param_2[0x42] << 0x14 | local_150;
  }
  local_114 = (uint)(param_2[0x41] == -0x60);
  if (param_2[0x49] == -0x5f) {
    local_150 = (uint)(byte)param_2[0x4a] << 0x18 | local_150;
    local_114 = local_114 | 2;
  }
  local_154 = (undefined4 *)local_150;
  if (param_2[0x31] == '0') {
    local_154 = (undefined4 *)((uint)(byte)param_2[0x32] << 0xc | local_150);
    local_114 = local_114 | 4;
  }
  if (param_2[0x51] == 'P') {
    local_154 = (undefined4 *)((uint)(byte)param_2[0x52] << 0x1c | (uint)local_154);
    local_114 = local_114 | 8;
  }
  if (param_2[0x59] == 'Q') {
    local_160 = (uint)(byte)param_2[0x5a];
    local_114 = local_114 | 0x10;
  }
  if (param_2[0x61] == 'R') {
    local_160 = local_160 | (uint)(byte)param_2[0x62] << 4;
    local_114 = local_114 | 0x20;
  }
  if (param_2[0x69] == 'S') {
    local_160 = local_160 | (uint)(byte)param_2[0x6a] << 8;
    local_114 = local_114 | 0x40;
  }
  if (param_2[0x71] == 'T') {
    local_160 = local_160 | (uint)(byte)param_2[0x72] << 0xc;
    local_114 = local_114 | 0x80;
  }
  if (param_2[0x79] == 'U') {
    local_160 = local_160 | (uint)(byte)param_2[0x7a] << 0x10;
    local_114 = local_114 | 0x100;
  }
  if (param_2[0x81] == 'V') {
    local_160 = local_160 | (uint)(byte)param_2[0x82] << 0x14;
    local_114 = local_114 | 0x200;
  }
  if (param_2[0x89] == 'W') {
    local_160 = local_160 | (uint)(byte)param_2[0x8a] << 0x18;
    local_114 = local_114 | 0x400;
  }
  if (param_2[0x21] == '\x10') {
    local_154 = (undefined4 *)((uint)local_154 | (uint)(byte)param_2[0x22] << 4);
    local_114 = local_114 | *(uint *)(&DAT_100d53dc + uVar21 * 4);
  }
  if (param_2[0x91] == '\x01') {
    local_160 = local_160 | (uint)(byte)param_2[0x92] << 0x1c;
    local_114 = local_114 | 0x10000;
  }
  if (param_2[0x99] == '1') {
    local_154 = (undefined4 *)((uint)local_154 | (uint)(byte)param_2[0x9a] << 4);
    local_114 = local_114 | 0x20000;
  }
  if ((*(int *)((int)this + 0x6f00) == 0) || (local_150 = 0x8000, uVar19 == 0)) {
    local_150 = 0;
  }
  if (param_2[0x29] == ' ') {
    local_154 = (undefined4 *)((uint)local_154 | (uint)(byte)param_2[0x2a] << 8);
    local_114 = local_114 | local_150;
  }
  if (param_2[0x39] == '@') {
    local_154 = (undefined4 *)((uint)local_154 | (uint)(byte)param_2[0x3a] << 0x10);
    local_114 = local_114 | 0x80000;
  }
  local_114 = -(uint)(*(int *)(param_2 + 4) != 0) & 0x40000 | local_114;
  if ((((param_1 != 4) && (param_1 != 5)) && (param_1 != 6)) ||
     (bVar13 = true, *(float *)((int)this + 0xe88) < 2.0)) {
    bVar13 = false;
  }
  local_124 = this;
  if (((*(byte *)((int)this + 0x694c) & 1) == 0) || (*(char *)((int)this + 0xe8c) != '\0')) {
    uVar16 = *(uint *)((int)this + 0x6948);
  }
  else {
    lVar29 = FUN_100d0ba0();
    uVar16 = (uint)lVar29;
  }
  uVar21 = 0;
  bVar12 = false;
  do {
    if (*(uint *)((int)this + uVar21 * 0x10 + 0x6e84) != (uint)(byte)param_2[uVar21 * 8 + 0x4d]) {
      bVar12 = true;
      break;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 < 8);
  if (*(int *)(param_2 + 4) == 0) {
    local_128 = 8;
    if (*(char *)((int)this + 0x7644) == '\0') {
      local_128 = 0;
    }
  }
  else {
    if (((*(byte *)((int)this + 0x7634) & 4) == 0) || (*(int *)((int)this + 0x7630) == 0)) {
      uVar21 = 0;
    }
    else {
      uVar21 = 2;
    }
    uVar22 = uVar21 + 2;
    uVar21 = uVar21 | 1;
    if (((*(int *)((int)this + 0xf750) == 0) && (*(char *)((int)this + 0x80) != '\0')) &&
       (*(char *)((int)this + 0x7640) == '\0')) {
      uVar8 = 0;
      if (*(uint *)((int)this + 0xf50) != 0) {
        for (; (*(uint *)((int)this + 0xf50) >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      if (uVar8 < 5) {
        uVar22 = 5;
      }
    }
    if (bVar13) {
      uVar22 = 7;
      uVar21 = 6;
    }
    if (*(char *)((int)this + 0xc) == '\0') {
      if (param_9 != 0) {
        uVar21 = uVar22;
      }
LAB_10041158:
      uVar22 = uVar21;
    }
    else if ((param_2[0x2c] == -1) || (param_9 == 0)) goto LAB_10041158;
    if (((local_114 & 0xf800) != 0) ||
       (bVar14 = uVar19 == 0xff, *(char *)((int)this + 0x7644) != '\0')) {
      bVar14 = true;
    }
    local_128 = uVar22 + 8;
    if (!bVar14) {
      local_128 = uVar22;
    }
  }
  *(uint *)((int)this + 0xfc4) = *(uint *)((int)this + 0xfc4) & 0xfff7ffff;
  *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
  if (*(char *)((int)this + 0xf6a5) != '\0') {
    FUN_1004f1b0((int)this);
  }
  FUN_100cfed0(&local_70,0,0x58);
  if (bVar12) {
    *(uint *)((int)this + 0xf5c) =
         ((((((uint)(byte)(param_2[0x85] | param_2[0x7d]) << 3 | (uint)(byte)param_2[0x75]) << 3 |
            (uint)(byte)param_2[0x6d]) << 3 | (uint)(byte)param_2[0x65]) << 3 |
          (uint)(byte)param_2[0x5d]) << 3 | (uint)(byte)param_2[0x55]) << 3 |
         (uint)(byte)param_2[0x4d];
  }
  if (*(int *)(*(int *)((int)this + 0xf6c4) + 0x4c + local_128 * 4) == 0) {
    uVar21 = *(uint *)((int)this + 0x694c);
    if (((uVar21 & 1) == 0) || (bVar14 = true, *(char *)((int)this + 0xe8c) != '\0')) {
      bVar14 = false;
    }
    local_11c = uVar21 & 4;
    local_118 = (undefined *)0;
    if ((*(byte *)((int)this + 0x7634) & 4) != 0) {
      local_118 = (undefined *)*(uint *)((int)this + 0x7630);
    }
    local_150 = 0;
    if (bVar13) {
      uVar22 = (uint)local_118 | 0x100;
      if ((uVar21 & 2) != 0) {
        uVar22 = (uint)local_118 | 0x300;
      }
      if (local_11c != 0) {
        uVar22 = uVar22 | 0x400;
      }
      if (bVar14) {
        uVar22 = uVar22 | 0x800;
      }
      local_150 = uVar16 >> 0x14;
      local_118 = (undefined *)(uVar22 | uVar16 << 0xc);
    }
    if (*(int *)((int)this + 0xf750) == 0) {
      bVar15 = FUN_1004f000((int)this);
    }
    else {
      bVar15 = *(byte *)(*(int *)(*(int *)((int)this + 0xf750) + 4) + 0x126c);
    }
    local_11c = 0x200000;
    uVar16 = 0;
    if (uVar19 == 0xff) {
      uVar16 = 0x200000;
    }
    *(undefined4 **)((int)this + 4000) = local_154;
    *(uint *)((int)this + 0xf9c) =
         *(uint *)((int)this + 0xf9c) & 0x7fd00000 | uVar16 | (uint)param_9 << 0x1f |
         local_114 & 0xfffff;
    *(uint *)((int)this + 0xfa4) = local_160;
    FUN_10038796((undefined4 *)((int)this + 0xf58),bVar15,(uint *)local_b0);
    local_11c = FUN_10038b2a((void *)((int)this + 0xf724),(int)local_b0);
    if (local_11c == *(uint *)((int)this + 0xf72c)) {
LAB_100413c1:
      local_154 = (undefined4 *)FUN_100cfd55(0x2d0);
      puVar24 = local_124;
      if (local_154 == (undefined4 *)0x0) goto LAB_10041669;
      uVar3 = *(undefined1 *)((int)this + 0xf720);
      uVar5 = *(undefined4 *)((int)this + 0xf71c);
      uVar6 = *(undefined4 *)((int)this + 0xf718);
      *local_154 = &PTR_D3DPERF_GetStatus_100d56e0;
      local_154[3] = 0;
      local_154[1] = 0;
      local_154[2] = 0;
      local_154[4] = &PTR_FUN_100d5e80;
      uVar9 = *(undefined4 *)((int)this + 0xf5c);
      uVar10 = *(undefined4 *)((int)this + 0xf60);
      uVar11 = *(undefined4 *)((int)this + 0xf64);
      local_154[6] = *(undefined4 *)((int)this + 0xf58);
      local_154[7] = uVar9;
      local_154[8] = uVar10;
      local_154[9] = uVar11;
      uVar9 = *(undefined4 *)((int)this + 0xf6c);
      uVar10 = *(undefined4 *)((int)this + 0xf70);
      uVar11 = *(undefined4 *)((int)this + 0xf74);
      local_154[10] = *(undefined4 *)((int)this + 0xf68);
      local_154[0xb] = uVar9;
      local_154[0xc] = uVar10;
      local_154[0xd] = uVar11;
      uVar9 = *(undefined4 *)((int)this + 0xf7c);
      uVar10 = *(undefined4 *)((int)this + 0xf80);
      uVar11 = *(undefined4 *)((int)this + 0xf84);
      local_154[0xe] = *(undefined4 *)((int)this + 0xf78);
      local_154[0xf] = uVar9;
      local_154[0x10] = uVar10;
      local_154[0x11] = uVar11;
      uVar9 = *(undefined4 *)((int)this + 0xf8c);
      uVar10 = *(undefined4 *)((int)this + 0xf90);
      uVar11 = *(undefined4 *)((int)this + 0xf94);
      local_154[0x12] = *(undefined4 *)((int)this + 0xf88);
      local_154[0x13] = uVar9;
      local_154[0x14] = uVar10;
      local_154[0x15] = uVar11;
      uVar9 = *(undefined4 *)((int)this + 0xf9c);
      uVar10 = *(undefined4 *)((int)this + 4000);
      uVar11 = *(undefined4 *)((int)this + 0xfa4);
      local_154[0x16] = *(undefined4 *)((int)this + 0xf98);
      local_154[0x17] = uVar9;
      local_154[0x18] = uVar10;
      local_154[0x19] = uVar11;
      *local_154 = &PTR_FUN_100d5a08;
      *(undefined1 *)(local_154 + 0xb3) = uVar3;
      local_154[0x1a] = 0;
      local_154[0x1b] = 0;
      local_154[0x1c] = 0;
      local_154[0x1d] = 0;
      local_154[1] = uVar6;
      local_154[2] = uVar5;
      local_154[3] = local_154 + 0x1a;
      uVar21 = FUN_10038b2a(local_124 + 0xf724,(int)local_b0);
      uVar16 = *(uint *)(puVar24 + 0xf72c);
      if (uVar21 == uVar16) {
LAB_100414ec:
        uVar22 = *(uint *)(puVar24 + 0xf730);
        if (uVar22 == uVar16) {
          if (uVar22 == 0) {
            iVar23 = 0x10;
          }
          else {
            iVar23 = uVar22 * 2;
          }
          iVar17 = FUN_100cfd89(iVar23 * 0x30);
          if (iVar17 != 0) {
            uVar16 = 0;
            if (*(int *)(puVar24 + 0xf72c) != 0) {
              do {
                iVar7 = *(int *)(puVar24 + 0xf728);
                uVar22 = uVar16 + 1;
                puVar1 = (undefined4 *)(iVar7 + uVar16 * 0x30);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar9 = puVar1[3];
                puVar2 = (undefined4 *)(iVar17 + uVar16 * 0x30);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar9;
                puVar1 = (undefined4 *)(iVar7 + 0x10 + uVar16 * 0x30);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar9 = puVar1[3];
                puVar2 = (undefined4 *)(iVar17 + 0x10 + uVar16 * 0x30);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar9;
                puVar1 = (undefined4 *)(iVar7 + 0x20 + uVar16 * 0x30);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar9 = puVar1[3];
                puVar2 = (undefined4 *)(iVar17 + 0x20 + uVar16 * 0x30);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar9;
                uVar16 = uVar22;
              } while (uVar22 < *(uint *)(puVar24 + 0xf72c));
            }
            thunk_FUN_100cfd6c(*(LPVOID *)(puVar24 + 0xf724));
            *(int *)(puVar24 + 0xf724) = iVar17;
            *(int *)(puVar24 + 0xf728) = iVar17;
            *(int *)(puVar24 + 0xf730) = iVar23;
          }
        }
        uVar16 = *(uint *)(puVar24 + 0xf72c);
        if (*(uint *)(puVar24 + 0xf730) != uVar16) {
          for (; uVar21 < uVar16; uVar16 = uVar16 - 1) {
            iVar23 = *(int *)(puVar24 + 0xf728);
            puVar2 = (undefined4 *)(iVar23 + -0x30 + uVar16 * 0x30);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar9 = puVar2[3];
            puVar1 = (undefined4 *)(iVar23 + uVar16 * 0x30);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar9;
            puVar1 = (undefined4 *)(iVar23 + -0x20 + uVar16 * 0x30);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)(iVar23 + 0x10 + uVar16 * 0x30);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar9;
            puVar1 = (undefined4 *)(iVar23 + -0x10 + uVar16 * 0x30);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)(iVar23 + 0x20 + uVar16 * 0x30);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar9;
          }
          *(int *)(puVar24 + 0xf72c) = *(int *)(puVar24 + 0xf72c) + 1;
          iVar23 = *(int *)(puVar24 + 0xf728);
          pfVar20 = (float *)(iVar23 + uVar21 * 0x30);
          *pfVar20 = local_b0[0];
          pfVar20[1] = local_b0[1];
          pfVar20[2] = local_b0[2];
          pfVar20[3] = local_b0[3];
          puVar1 = (undefined4 *)(iVar23 + 0x10 + uVar21 * 0x30);
          *puVar1 = local_b0[4];
          puVar1[1] = local_b0[5];
          puVar1[2] = local_b0[6];
          puVar1[3] = local_b0[7];
          *(undefined8 *)(iVar23 + 0x20 + uVar21 * 0x30) = local_90;
          *(undefined4 **)(*(int *)(puVar24 + 0xf728) + 0x28 + uVar21 * 0x30) = local_154;
        }
      }
      else {
        uVar16 = 0;
        iVar23 = uVar21 * 0x30 + *(int *)(puVar24 + 0xf728);
        do {
          if ((*(float *)(iVar23 + uVar16 * 8) != local_b0[uVar16 * 2]) ||
             (*(float *)(iVar23 + 4 + uVar16 * 8) != local_b0[uVar16 * 2 + 1])) {
            uVar16 = *(uint *)(puVar24 + 0xf72c);
            goto LAB_100414ec;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 5);
        *(undefined4 **)(*(int *)(puVar24 + 0xf728) + 0x28 + uVar21 * 0x30) = local_154;
      }
    }
    else {
      uVar16 = 0;
      iVar23 = local_11c * 0x30 + *(int *)((int)this + 0xf728);
      do {
        if ((*(float *)(iVar23 + uVar16 * 8) != local_b0[uVar16 * 2]) ||
           (*(float *)(iVar23 + 4 + uVar16 * 8) != local_b0[uVar16 * 2 + 1])) goto LAB_100413c1;
        uVar16 = uVar16 + 1;
      } while (uVar16 < 5);
      local_154 = (undefined4 *)(local_11c * 0x30 + *(int *)((int)this + 0xf728) + 0x28);
      if (local_154 == (undefined4 *)0x0) goto LAB_100413c1;
      local_154 = (undefined4 *)*local_154;
      puVar24 = this;
    }
    piVar18 = (int *)FUN_1004e247(local_154,(uint)local_118,local_150);
    this = puVar24;
    if (piVar18 == (int *)0x0) goto LAB_10041669;
    local_70 = *piVar18;
    iStack_6c = piVar18[1];
    iStack_68 = piVar18[2];
    iStack_64 = piVar18[3];
    local_f0 = piVar18[0x10];
    iStack_ec = piVar18[0x11];
    iStack_e8 = piVar18[0x12];
    iStack_e4 = piVar18[0x13];
    local_60 = piVar18[4];
    iStack_5c = piVar18[5];
    iStack_58 = piVar18[6];
    iStack_54 = piVar18[7];
    local_110 = *(undefined8 *)(piVar18 + 0x14);
    local_50 = piVar18[8];
    iStack_4c = piVar18[9];
    iStack_48 = piVar18[10];
    iStack_44 = piVar18[0xb];
    local_40 = piVar18[0xc];
    iStack_3c = piVar18[0xd];
    iStack_38 = piVar18[0xe];
    iStack_34 = piVar18[0xf];
  }
  else {
LAB_10041669:
    local_110 = local_20;
    local_f0 = local_30;
    iStack_ec = iStack_2c;
    iStack_e8 = iStack_28;
    iStack_e4 = iStack_24;
  }
  local_150 = local_70;
  if (local_70 == 0) {
    local_150 = *(int *)(*(int *)((int)this + 0xf6c4) + 0x4c + local_128 * 4);
    iVar23 = local_128 * 0x28;
    local_c0 = *(int *)(&UNK_100d1d58 + iVar23);
    iStack_bc = *(int *)(&UNK_100d1d5c + iVar23);
    iStack_b8 = *(int *)(&UNK_100d1d60 + iVar23);
    iStack_b4 = *(int *)(&UNK_100d1d64 + iVar23);
    iVar23 = local_128 * 0x28;
    local_d8 = *(undefined8 *)(&UNK_100d1d68 + local_128 * 0x28);
    local_d0 = *(int *)(&UNK_100d1d48 + iVar23);
    iStack_cc = *(int *)(&UNK_100d1d4c + iVar23);
    iStack_c8 = *(int *)(&UNK_100d1d50 + iVar23);
    iStack_c4 = *(int *)(&UNK_100d1d54 + iVar23);
  }
  else {
    local_d8 = CONCAT44(iStack_48,iStack_4c);
    local_c0 = iStack_5c;
    iStack_bc = iStack_58;
    iStack_b8 = iStack_54;
    iStack_b4 = local_50;
    local_d0 = iStack_6c;
    iStack_cc = iStack_68;
    iStack_c8 = iStack_64;
    iStack_c4 = local_60;
  }
  local_100 = local_40;
  iStack_fc = iStack_3c;
  iStack_f8 = iStack_38;
  iStack_f4 = iStack_34;
  if (((*(byte *)((int)this + 0x7634) & 4) != 0) &&
     (((local_128 == 0 || (local_128 == 8)) && (*(char *)((int)this + 0xf673) != '\0')))) {
    FUN_10028b1f((int)((int)this + 0x7584),(int)((int)this + 0x75c4),(int)local_b0);
    FUN_10028b85(local_b0,(undefined4 *)((int)this + 0x6b80),'\0');
    *(undefined1 *)((int)this + 0xf673) = 0;
    *(undefined1 *)((int)this + 0xf671) = 1;
  }
  if ((local_128 == 5) || (local_128 == 0xd)) {
    bVar15 = 1;
  }
  else {
    bVar15 = 0;
  }
  bVar4 = *(byte *)((int)this + 0x764b);
  *(byte *)((int)this + 0x764b) = bVar15;
  *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | bVar15 != bVar4;
  local_124 = param_2;
  local_120 = uVar19 == 0xff;
  iVar23 = FUN_10044060((undefined *)((int)this + 0xf708),(int *)&local_124);
  if ((param_1 == 1) &&
     (((*(char *)((int)this + 0x7646) != '\0' && (*(int *)(param_2 + 4) != 0)) ||
      (*(char *)((int)this + 0x7647) != '\0')))) {
    local_161 = '\x01';
    local_160 = *(int *)(*(int *)((int)this + 0xf6c4) + 0x90 + (uint)bVar15 * 4);
  }
  else {
    local_161 = '\0';
    local_160 = iStack_44;
    if (iStack_44 != 0) goto LAB_10041926;
    local_160 = 0;
  }
  switch(local_128) {
  case 6:
    local_100 = 1;
    iStack_fc = 0;
    iStack_f8 = 0;
    iStack_f4 = 0;
    local_160 = *(int *)(*(int *)((int)this + 0xf6c4) + 0x98);
    local_f0 = 0;
    iStack_ec = 0;
    iStack_e8 = 0x3f;
    iStack_e4 = 0;
    local_110 = 0;
    break;
  case 7:
    local_100 = 1;
    iStack_fc = 0;
    iStack_f8 = 0;
    iStack_f4 = 0;
    local_160 = *(int *)(*(int *)((int)this + 0xf6c4) + 0x9c);
    local_f0 = 0;
    iStack_ec = 0;
    iStack_e8 = 0x3f;
    iStack_e4 = 0;
    local_110 = 0;
    break;
  default:
    break;
  case 0xe:
    local_100 = 7;
    iStack_fc = 0;
    iStack_f8 = 0;
    iStack_f4 = 0;
    local_160 = *(int *)(*(int *)((int)this + 0xf6c4) + 0xa0);
    local_f0 = 0;
    iStack_ec = 0;
    iStack_e8 = 0x3f;
    iStack_e4 = 0;
    local_110 = 0;
    break;
  case 0xf:
    local_100 = 7;
    iStack_fc = 0;
    iStack_f8 = 0;
    iStack_f4 = 0;
    local_160 = *(int *)(*(int *)((int)this + 0xf6c4) + 0xa4);
    local_f0 = 0;
    iStack_ec = 0;
    iStack_e8 = 0x3f;
    iStack_e4 = 0;
    local_110 = 0;
  }
LAB_10041926:
  uVar16 = (0x1000 - *(int *)((int)this + 0x54)) - *(int *)((int)this + 0x50);
  local_11c = (0x1000 - *(int *)((int)this + 0x6c)) - *(int *)((int)this + 0x68);
  local_118 = &DAT_100dc25c;
  if (*(char *)((int)this + 0x7641) == '\0') {
    local_118 = &DAT_100dc278;
  }
  local_124 = &DAT_100dc240;
  puVar24 = &DAT_100dc224;
  if (*(char *)((int)this + 0x7641) == '\0') {
    puVar24 = &DAT_100dc240;
  }
  if ((((((((*(char *)((int)this + 0x7642) != '\0') || (*(uint *)((int)this + 0x6920) != local_114))
          || (bVar12)) ||
         ((*(int *)((int)this + 0x100c) != param_5 || (*(uint *)((int)this + 0xfc8) != param_6))))
        || (*(int *)((int)this + 0xfc10) != param_4)) ||
       ((*(int *)((int)this + 0xfbd0) != param_3 || (*(int *)((int)this + 0xf80c) != local_150))))
      || ((*(int *)((int)this + 0xf81c) != local_160 ||
          (((*(char *)((int)this + 0x7648) != local_161 ||
            (*(int *)((int)this + 0x761c) != *(int *)(param_2 + 4))) ||
           (*(int *)((int)this + 0xf83c) != *(int *)(puVar24 + param_1 * 4))))))) ||
     (((*(int *)((int)this + 0xfc18) != *(int *)(local_118 + param_1 * 4) ||
       ((*(int *)((int)this + 0x6c) != 0) != (param_8 != 0))) ||
      ((uVar16 < param_7 || ((local_11c < param_8 || (*(int *)((int)this + 0xf834) != iVar23))))))))
  {
    uVar19 = 0;
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      uVar19 = param_6;
    }
    FUN_10042220(this,uVar16 < param_7,local_11c < param_8,uVar19);
    if (param_3 == *(int *)((int)this + 0xf6d4)) {
      param_5 = *(int *)((int)this + 0x5c);
    }
    if (*(char *)((int)this + 0x7642) != '\0') {
      *(undefined1 *)((int)this + 0xf669) = 1;
      *(uint *)((int)this + 0xf664) = *(uint *)((int)this + 0xf664) | 1;
    }
    if (bVar12) {
      *(uint *)((int)this + 0x6e84) = (uint)(byte)param_2[0x4d];
      *(uint *)((int)this + 0x6e94) = (uint)(byte)param_2[0x55];
      *(uint *)((int)this + 0x6ea4) = (uint)(byte)param_2[0x5d];
      *(uint *)((int)this + 0x6eb4) = (uint)(byte)param_2[0x65];
      *(uint *)((int)this + 0x6ec4) = (uint)(byte)param_2[0x6d];
      *(uint *)((int)this + 0x6ed4) = (uint)(byte)param_2[0x75];
      *(uint *)((int)this + 0x6ee4) = (uint)(byte)param_2[0x7d];
      *(uint *)((int)this + 0x6ef4) = (uint)(byte)param_2[0x85];
      *(undefined1 *)((int)this + 0xf671) = 1;
    }
    if (*(uint *)((int)this + 0x6920) != local_114) {
      *(uint *)((int)this + 0x6920) = local_114;
      *(undefined1 *)((int)this + 0xf671) = 1;
    }
    if (*(uint *)((int)this + 0xfc8) != param_6) {
      *(uint *)((int)this + 0xfc8) = param_6;
      *(undefined1 *)((int)this + 0xf66f) = 1;
    }
    if (*(int *)((int)this + 0xfbd0) != param_3) {
      *(int *)((int)this + 0xfbd0) = param_3;
      *(undefined1 *)((int)this + 0xf66f) = 1;
    }
    if (*(int *)((int)this + 0x100c) != param_5) {
      *(int *)((int)this + 0x100c) = param_5;
      *(undefined1 *)((int)this + 0xf66f) = 1;
    }
    if (*(int *)((int)this + 0xfc10) != param_4) {
      *(int *)((int)this + 0xfc10) = param_4;
      *(undefined1 *)((int)this + 0xf670) = 1;
    }
    if (*(int *)((int)this + 0xf834) != iVar23) {
      *(int *)((int)this + 0xf834) = iVar23;
      *(undefined1 *)((int)this + 0xfd99) = 1;
    }
    if (*(int *)((int)this + 0xf81c) != local_160) {
      *(uint *)((int)this + 0xf81c) = local_160;
      if (local_160 == 0) {
        local_110 = 0;
        *(undefined4 *)((int)this + 0xfd40) = 0;
        *(undefined4 *)((int)this + 0xfd44) = 0;
        *(undefined4 *)((int)this + 0xfd48) = 0;
        *(undefined4 *)((int)this + 0xfd4c) = 0;
        *(undefined4 *)((int)this + 0xfd50) = 0;
        *(undefined4 *)((int)this + 0xfd54) = 0;
        *(undefined4 *)((int)this + 0xfd58) = 0;
        *(undefined4 *)((int)this + 0xfd5c) = 0;
      }
      else {
        *(int *)((int)this + 0xfd40) = local_100;
        *(int *)((int)this + 0xfd44) = iStack_fc;
        *(int *)((int)this + 0xfd48) = iStack_f8;
        *(int *)((int)this + 0xfd4c) = iStack_f4;
        *(int *)((int)this + 0xfd50) = local_f0;
        *(int *)((int)this + 0xfd54) = iStack_ec;
        *(int *)((int)this + 0xfd58) = iStack_e8;
        *(int *)((int)this + 0xfd5c) = iStack_e4;
      }
      *(undefined8 *)((int)this + 0xfd60) = local_110;
      *(undefined1 *)((int)this + 0xfd99) = 1;
    }
    if (*(int *)((int)this + 0xf80c) != local_150) {
      iVar23 = *(int *)((int)this + 0xf7f4);
      *(uint *)((int)this + 0xf80c) = local_150;
      *(int *)((int)this + 0xfd18) = local_d0;
      *(int *)((int)this + 0xfd1c) = iStack_cc;
      *(int *)((int)this + 0xfd20) = iStack_c8;
      *(int *)((int)this + 0xfd24) = iStack_c4;
      *(undefined4 *)((int)this + 0xf7f4) = 0;
      *(byte *)((int)this + 0xf6a2) = *(byte *)((int)this + 0xf6a2) | iVar23 != 0;
      *(undefined1 *)((int)this + 0xfd99) = 1;
      *(int *)((int)this + 0xfd28) = local_c0;
      *(int *)((int)this + 0xfd2c) = iStack_bc;
      *(int *)((int)this + 0xfd30) = iStack_b8;
      *(int *)((int)this + 0xfd34) = iStack_b4;
      *(undefined8 *)((int)this + 0xfd38) = local_d8;
    }
    if ((*(int *)((int)this + 0x761c) != *(int *)(param_2 + 4)) ||
       (*(char *)((int)this + 0x7642) != '\0')) {
      *(int *)((int)this + 0x761c) = *(int *)(param_2 + 4);
      *(undefined1 *)((int)this + 0xf66e) = 1;
    }
    if (*(int *)((int)this + 0xfc18) != *(int *)(local_118 + param_1 * 4)) {
      *(int *)((int)this + 0xfc18) = *(int *)(local_118 + param_1 * 4);
      *(undefined1 *)((int)this + 0xfd98) = 1;
    }
    if (*(int *)((int)this + 0xf83c) != *(int *)(puVar24 + param_1 * 4)) {
      *(int *)((int)this + 0xf83c) = *(int *)(puVar24 + param_1 * 4);
      *(undefined1 *)((int)this + 0xfd99) = 1;
    }
    if (*(char *)((int)this + 0x7648) != local_161) {
      *(undefined1 *)((int)this + 0xf66d) = 1;
      *(char *)((int)this + 0x7648) = local_161;
    }
    bVar15 = *(byte *)((int)this + 0x7642);
    *(byte *)((int)this + 0xf66c) = *(byte *)((int)this + 0xf66c) | bVar15;
    *(byte *)((int)this + 0xf66b) = *(byte *)((int)this + 0xf66b) | bVar15;
    *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | bVar15;
    *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | bVar15;
    if (bVar15 != 0) {
      iVar23 = 0xe90;
      if ((*(byte *)((int)this + 0x7634) & 1) == 0) {
        iVar23 = 0xea8;
      }
      pfVar20 = (float *)((int)this + iVar23);
      *(undefined1 *)((int)this + 0x7642) = 0;
      fVar28 = 2.0 / pfVar20[2];
      fVar26 = (*pfVar20 * -2.0) / pfVar20[2] - 1.0;
      fVar27 = -2.0 / pfVar20[3];
      fVar25 = (pfVar20[1] + pfVar20[1]) / pfVar20[3] + 1.0;
      if ((((fVar28 != *(float *)((int)this + 0x6930)) || (fVar27 != *(float *)((int)this + 0x6934))
           ) || (fVar26 != *(float *)((int)this + 0x6938))) ||
         (fVar25 != *(float *)((int)this + 0x693c))) {
        *(float *)((int)this + 0x6930) = fVar28;
        *(float *)((int)this + 0x6934) = fVar27;
        *(float *)((int)this + 0x6938) = fVar26;
        *(float *)((int)this + 0x693c) = fVar25;
        *(undefined1 *)((int)this + 0xf671) = 1;
      }
    }
  }
  return;
}

