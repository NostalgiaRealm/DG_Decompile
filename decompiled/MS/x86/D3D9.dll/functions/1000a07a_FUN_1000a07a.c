/*
 * FUN_1000a07a at 1000a07a
 * undefined4 __thiscall FUN_1000a07a(void * this, int param_1, int param_2)
 * Address ranges: 1000a07a-1000b499
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000a07a(void *this,int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  float *extraout_EAX;
  int iVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  bool bVar23;
  undefined1 auVar24 [10];
  uint uVar25;
  double dVar26;
  uint uVar37;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar36;
  uint uVar38;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar47;
  float fVar48;
  uint uVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar50;
  undefined1 auVar42 [16];
  float fVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar52;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  float fVar63;
  uint uVar64;
  float fVar65;
  uint uVar66;
  float fVar67;
  float fVar68;
  float fVar76;
  float fVar77;
  undefined1 auVar69 [16];
  float fVar78;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  uint uVar91;
  int aiStack_2b4 [32];
  undefined4 auStack_234 [32];
  uint auStack_1b4 [32];
  int iStack_134;
  float afStack_130 [32];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [16];
  float local_90 [4];
  undefined1 local_80 [16];
  uint local_70 [4];
  undefined1 local_60 [16];
  float *local_4c;
  undefined4 local_48;
  int local_44;
  float *local_40;
  float local_3c;
  float local_38;
  int local_34;
  byte local_2d;
  uint local_2c;
  char local_25;
  int local_24;
  void *local_20;
  float local_1c;
  float *local_18;
  byte local_11;
  
  local_20 = this;
  if ((DAT_100e39f4 == 0) && (uVar15 = FUN_10009e79(), DAT_100e39f4 == 0)) {
    uVar15 = uVar15 & 0xffffff00;
  }
  else {
    auVar82._4_4_ = (uint)local_90[1];
    auVar82._0_4_ = (uint)local_90[0];
    auVar82._8_4_ = (uint)local_90[2];
    auVar82._12_4_ = (uint)local_90[3];
    pfVar16 = (float *)0x0;
    auVar88._4_4_ = (uint)local_90[1];
    auVar88._0_4_ = (uint)local_90[0];
    auVar88._8_4_ = (uint)local_90[2];
    auVar88._12_4_ = (uint)local_90[3];
    auVar70._4_4_ = local_90[1];
    auVar70._0_4_ = local_90[0];
    auVar70._8_4_ = local_90[2];
    auVar70._12_4_ = local_90[3];
    local_40 = (float *)0x0;
    local_34 = 0;
    local_24 = 0;
    local_44 = 0;
    local_25 = '\0';
    local_18 = (float *)0x0;
    local_48 = 0x400;
    local_b0 = local_90[0];
    fStack_ac = local_90[1];
    fStack_a8 = local_90[2];
    fStack_a4 = local_90[3];
    uVar15 = _DAT_100dd930;
    uVar20 = uRam100dd934;
    uVar25 = uRam100dd938;
    uVar91 = uRam100dd93c;
    local_80 = auVar88;
    local_60 = auVar82;
    do {
      iVar17 = local_24;
      iVar22 = (int)local_18 * 0x14;
      bVar8 = *(byte *)(param_2 + iVar22);
      pfVar16 = (float *)CONCAT31((int3)((uint)pfVar16 >> 8),bVar8);
      if (bVar8 == 0xff) break;
      uVar36 = (uint)CONCAT11(bVar8 >> 7,bVar8);
      local_2d = bVar8 >> 7;
      local_70[1] = (int)*(float *)(param_1 + 0x4294);
      local_70[2] = (int)*(float *)(param_1 + 0x4298);
      local_70[0] = (int)*(float *)(param_1 + 0x4290);
      local_70[3] = (int)*(float *)(param_1 + 0x429c);
      if (local_34 == 0) {
        local_2c = 0;
      }
      else {
        local_2c = auStack_1b4[local_34];
      }
      if (-1 < (char)bVar8) {
        uVar9 = *(ushort *)(param_2 + 1 + iVar22);
        local_1c = (float)(uint)uVar9;
        if (uVar9 != 0xffff) {
          iVar19 = (uint)*(byte *)(param_2 + 0xd + iVar22) * 0xc;
          iVar19 = (local_70[*(int *)(&DAT_100d1768 + iVar19)] & *(uint *)(&DAT_100d1760 + iVar19) |
                   *(uint *)(&DAT_100d1764 + iVar19) & local_2c) +
                   (uint)*(ushort *)(param_2 + 1 + iVar22);
          if (((ushort)(uVar9 - 0x26) <= (ushort)local_48) && (0x3ff < iVar19 - 0x26U)) {
            iVar19 = 0x426;
          }
          bVar8 = *(byte *)(param_2 + 7 + iVar22);
          local_60 = *(undefined1 (*) [16])(param_1 + iVar19 * 0x10);
          uVar36 = local_60._12_4_;
          if (bVar8 != 0xe4) {
            uVar37 = local_60._0_4_;
            uVar38 = local_60._4_4_;
            uVar50 = local_60._8_4_;
            iVar19 = (uint)bVar8 * 0x40;
            puVar1 = (uint *)(iVar19 + 0x10 + DAT_100e39f4);
            auVar79._0_4_ = uVar38 & *puVar1;
            auVar79._4_4_ = uVar38 & puVar1[1];
            auVar79._8_4_ = uVar38 & puVar1[2];
            auVar79._12_4_ = uVar38 & puVar1[3];
            puVar1 = (uint *)(iVar19 + DAT_100e39f4);
            auVar27._0_4_ = uVar37 & *puVar1;
            auVar27._4_4_ = uVar37 & puVar1[1];
            auVar27._8_4_ = uVar37 & puVar1[2];
            auVar27._12_4_ = uVar37 & puVar1[3];
            puVar1 = (uint *)(iVar19 + 0x20 + DAT_100e39f4);
            auVar40._0_4_ = uVar50 & *puVar1;
            auVar40._4_4_ = uVar50 & puVar1[1];
            auVar40._8_4_ = uVar50 & puVar1[2];
            auVar40._12_4_ = uVar50 & puVar1[3];
            puVar1 = (uint *)(iVar19 + 0x30 + DAT_100e39f4);
            auVar53._0_4_ = uVar36 & *puVar1;
            auVar53._4_4_ = uVar36 & puVar1[1];
            auVar53._8_4_ = uVar36 & puVar1[2];
            auVar53._12_4_ = uVar36 & puVar1[3];
            local_60 = auVar79 | auVar27 | auVar40 | auVar53;
          }
          bVar8 = *(byte *)(param_2 + 10 + iVar22);
          if ((bVar8 & 2) != 0) {
            auVar80._0_4_ = local_60._0_4_ & _DAT_100dd8d0;
            auVar80._4_4_ = local_60._4_4_ & uRam100dd8d4;
            auVar80._8_4_ = local_60._8_4_ & uRam100dd8d8;
            auVar80._12_4_ = local_60._12_4_ & uRam100dd8dc;
            local_60 = auVar80;
          }
          auVar82 = local_60;
          if ((bVar8 & 1) != 0) {
            auVar82._0_4_ = local_60._0_4_ ^ _DAT_100dd8e0;
            auVar82._4_4_ = local_60._4_4_ ^ uRam100dd8e4;
            auVar82._8_4_ = local_60._8_4_ ^ uRam100dd8e8;
            auVar82._12_4_ = local_60._12_4_ ^ uRam100dd8ec;
            local_60 = auVar82;
          }
        }
        uVar9 = *(ushort *)(param_2 + 3 + iVar22);
        local_38 = (float)(uint)uVar9;
        if (uVar9 != 0xffff) {
          iVar19 = (uint)*(byte *)(param_2 + 0xe + iVar22) * 0xc;
          local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar19)] &
                            *(uint *)(&DAT_100d1760 + iVar19));
          iVar19 = (local_70[*(int *)(&DAT_100d1768 + iVar19)] & *(uint *)(&DAT_100d1760 + iVar19) |
                   *(uint *)(&DAT_100d1764 + iVar19) & local_2c) +
                   (uint)*(ushort *)(param_2 + 3 + iVar22);
          if (((ushort)(uVar9 - 0x26) <= (ushort)local_48) && (0x3ff < iVar19 - 0x26U)) {
            iVar19 = 0x426;
          }
          bVar8 = *(byte *)(param_2 + 8 + iVar22);
          local_80 = *(undefined1 (*) [16])(param_1 + iVar19 * 0x10);
          uVar36 = local_80._12_4_;
          if (bVar8 != 0xe4) {
            uVar37 = local_80._0_4_;
            uVar38 = local_80._4_4_;
            uVar50 = local_80._8_4_;
            iVar19 = (uint)bVar8 * 0x40;
            puVar1 = (uint *)(iVar19 + 0x10 + DAT_100e39f4);
            auVar85._0_4_ = uVar38 & *puVar1;
            auVar85._4_4_ = uVar38 & puVar1[1];
            auVar85._8_4_ = uVar38 & puVar1[2];
            auVar85._12_4_ = uVar38 & puVar1[3];
            puVar1 = (uint *)(iVar19 + DAT_100e39f4);
            auVar28._0_4_ = uVar37 & *puVar1;
            auVar28._4_4_ = uVar37 & puVar1[1];
            auVar28._8_4_ = uVar37 & puVar1[2];
            auVar28._12_4_ = uVar37 & puVar1[3];
            puVar1 = (uint *)(iVar19 + 0x20 + DAT_100e39f4);
            auVar41._0_4_ = uVar50 & *puVar1;
            auVar41._4_4_ = uVar50 & puVar1[1];
            auVar41._8_4_ = uVar50 & puVar1[2];
            auVar41._12_4_ = uVar50 & puVar1[3];
            puVar1 = (uint *)(iVar19 + 0x30 + DAT_100e39f4);
            local_80._0_4_ = uVar36 & *puVar1;
            local_80._4_4_ = uVar36 & puVar1[1];
            local_80._8_4_ = uVar36 & puVar1[2];
            local_80._12_4_ = uVar36 & puVar1[3];
            local_80 = auVar85 | auVar28 | auVar41 | local_80;
          }
          bVar8 = *(byte *)(param_2 + 0xb + iVar22);
          if ((bVar8 & 2) != 0) {
            auVar86._0_4_ = local_80._0_4_ & _DAT_100dd8d0;
            auVar86._4_4_ = local_80._4_4_ & uRam100dd8d4;
            auVar86._8_4_ = local_80._8_4_ & uRam100dd8d8;
            auVar86._12_4_ = local_80._12_4_ & uRam100dd8dc;
            local_80 = auVar86;
          }
          auVar88 = local_80;
          if ((bVar8 & 1) != 0) {
            auVar88._0_4_ = local_80._0_4_ ^ _DAT_100dd8e0;
            auVar88._4_4_ = local_80._4_4_ ^ uRam100dd8e4;
            auVar88._8_4_ = local_80._8_4_ ^ uRam100dd8e8;
            auVar88._12_4_ = local_80._12_4_ ^ uRam100dd8ec;
            local_80 = auVar88;
          }
        }
        uVar9 = *(ushort *)(param_2 + 5 + iVar22);
        local_38 = (float)(uint)uVar9;
        if (uVar9 != 0xffff) {
          iVar19 = (uint)*(byte *)(param_2 + 0xf + iVar22) * 0xc;
          local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar19)] &
                            *(uint *)(&DAT_100d1760 + iVar19));
          iVar19 = (local_70[*(int *)(&DAT_100d1768 + iVar19)] & *(uint *)(&DAT_100d1760 + iVar19) |
                   *(uint *)(&DAT_100d1764 + iVar19) & local_2c) +
                   (uint)*(ushort *)(param_2 + 5 + iVar22);
          if (((ushort)(uVar9 - 0x26) <= (ushort)local_48) && (0x3ff < iVar19 - 0x26U)) {
            iVar19 = 0x426;
          }
          bVar8 = *(byte *)(param_2 + 9 + iVar22);
          pfVar16 = (float *)(param_1 + iVar19 * 0x10);
          local_b0 = *pfVar16;
          fStack_ac = pfVar16[1];
          fStack_a8 = pfVar16[2];
          fStack_a4 = pfVar16[3];
          if (bVar8 != 0xe4) {
            iVar19 = (uint)bVar8 * 0x40;
            puVar2 = (uint *)(iVar19 + 0x10 + DAT_100e39f4);
            uVar64 = (uint)fStack_ac & puVar2[2];
            uVar66 = (uint)fStack_ac & puVar2[3];
            puVar1 = (uint *)(iVar19 + DAT_100e39f4);
            uVar36 = (uint)local_b0 & puVar1[1];
            uVar37 = (uint)local_b0 & puVar1[2];
            uVar38 = (uint)local_b0 & puVar1[3];
            puVar3 = (uint *)(iVar19 + 0x20 + DAT_100e39f4);
            uVar50 = (uint)fStack_a8 & puVar3[3];
            puVar4 = (uint *)(iVar19 + 0x30 + DAT_100e39f4);
            local_b0 = (float)((uint)fStack_ac & *puVar2 | (uint)local_b0 & *puVar1 |
                               (uint)fStack_a8 & *puVar3 | (uint)fStack_a4 & *puVar4);
            fStack_ac = (float)((uint)fStack_ac & puVar2[1] | uVar36 | (uint)fStack_a8 & puVar3[1] |
                               (uint)fStack_a4 & puVar4[1]);
            fStack_a8 = (float)(uVar64 | uVar37 | (uint)fStack_a8 & puVar3[2] |
                               (uint)fStack_a4 & puVar4[2]);
            fStack_a4 = (float)(uVar66 | uVar38 | uVar50 | (uint)fStack_a4 & puVar4[3]);
          }
          bVar8 = *(byte *)(param_2 + 0xc + iVar22);
          if ((bVar8 & 2) != 0) {
            local_b0 = (float)((uint)local_b0 & _DAT_100dd8d0);
            fStack_ac = (float)((uint)fStack_ac & uRam100dd8d4);
            fStack_a8 = (float)((uint)fStack_a8 & uRam100dd8d8);
            fStack_a4 = (float)((uint)fStack_a4 & uRam100dd8dc);
          }
          if ((bVar8 & 1) != 0) {
            local_b0 = (float)((uint)local_b0 ^ _DAT_100dd8e0);
            fStack_ac = (float)((uint)fStack_ac ^ uRam100dd8e4);
            fStack_a8 = (float)((uint)fStack_a8 ^ uRam100dd8e8);
            fStack_a4 = (float)((uint)fStack_a4 ^ uRam100dd8ec);
          }
        }
        uVar36 = (uint)*(byte *)(param_2 + iVar22);
      }
      pfVar16 = (float *)(uVar36 & 0x7f);
      fVar84 = auVar82._0_4_;
      fVar90 = auVar82._4_4_;
      fVar60 = auVar82._8_4_;
      fVar61 = auVar82._12_4_;
      fVar68 = auVar88._0_4_;
      fVar76 = auVar88._4_4_;
      fVar77 = auVar88._8_4_;
      fVar39 = auVar88._12_4_;
      if ((float *)0x19 < pfVar16) {
        if ((float *)0x5e < pfVar16) {
          if (pfVar16 == (float *)0x5f) {
            pfVar16 = (float *)0x0;
            auVar70 = _DAT_100d9750;
          }
          else {
            pfVar16 = pfVar16 + -0x18;
            if (pfVar16 == (float *)0x0) {
              if (*(char *)(param_2 + 1 + iVar22) == '\0') {
                pfVar16 = (float *)((*(uint *)(param_2 + 8 + iVar22) & 3) +
                                   (uint)*(ushort *)(param_2 + 0x10 + iVar22) * 4);
                bVar23 = *(int *)(param_1 + (int)pfVar16 * 4) == 0;
                goto LAB_1000afdf;
              }
              pfVar16 = (float *)((*(uint *)(param_2 + 8 + iVar22) & 3) +
                                 (uint)*(ushort *)(param_2 + 0x10 + iVar22) * 4);
              pfVar21 = *(float **)(param_1 + (int)pfVar16 * 4);
joined_r0x1000b3d0:
              if (pfVar21 == (float *)0x0) goto LAB_1000afe5;
            }
          }
          goto switchD_1000a439_caseD_2;
        }
        if (pfVar16 == (float *)0x5e) {
          pfVar16 = (float *)((uint)*(byte *)(param_2 + 9 + iVar22) * 0x10);
          fVar47 = pfVar16[0x403766c];
          fVar48 = pfVar16[0x403766d];
          fVar62 = pfVar16[0x403766e];
          auVar70._0_4_ =
               (float)(((uint)fVar48 & -(uint)(fVar68 == fVar84) |
                       (uint)fVar47 & -(uint)(fVar84 < fVar68)) ^ (uint)fVar62);
          auVar70._4_4_ =
               (float)(((uint)fVar48 & -(uint)(fVar76 == fVar90) |
                       (uint)fVar47 & -(uint)(fVar90 < fVar76)) ^ (uint)fVar62);
          auVar70._8_4_ =
               (float)(((uint)fVar48 & -(uint)(fVar77 == fVar60) |
                       (uint)fVar47 & -(uint)(fVar60 < fVar77)) ^ (uint)fVar62);
          auVar70._12_4_ =
               (float)(((uint)fVar48 & -(uint)(fVar39 == fVar61) |
                       (uint)fVar47 & -(uint)(fVar61 < fVar39)) ^ (uint)fVar62);
          goto switchD_1000a439_caseD_2;
        }
        if ((float *)0x26 < pfVar16) {
          if (pfVar16 < (float *)0x2d) {
            if (pfVar16 != (float *)0x2c) {
              if (pfVar16 != (float *)0x27) {
                if (pfVar16 == (float *)&DAT_00000028) {
                  bVar10 = *(float *)(param_1 +
                                     ((*(uint *)(param_2 + 8 + iVar22) & 3) +
                                     (uint)*(ushort *)(param_2 + 0x10 + iVar22) * 4) * 4) != 0.0;
                  pfVar16 = (float *)0x0;
                  bVar23 = !bVar10;
                  if (*(char *)(param_2 + 1 + iVar22) == '\0') {
                    bVar23 = bVar10;
                  }
                  bVar23 = !bVar23;
                }
                else {
                  if (pfVar16 != (float *)0x29) {
                    pfVar16 = (float *)((int)pfVar16 + -0x2a);
                    pfVar21 = pfVar16;
                    goto joined_r0x1000b3d0;
                  }
                  bVar8 = *(byte *)(param_2 + 8 + iVar22);
                  auVar82 = *(undefined1 (*) [16])
                             (param_1 + (uint)*(ushort *)(param_2 + 0x10 + iVar22) * 0x10);
                  uVar36 = auVar82._12_4_;
                  local_60 = auVar82;
                  if (bVar8 != 0xe4) {
                    uVar37 = auVar82._0_4_;
                    uVar38 = auVar82._4_4_;
                    uVar50 = auVar82._8_4_;
                    iVar17 = (uint)bVar8 * 0x40;
                    puVar1 = (uint *)(iVar17 + DAT_100e39f4);
                    auVar31._0_4_ = uVar37 & *puVar1;
                    auVar31._4_4_ = uVar37 & puVar1[1];
                    auVar31._8_4_ = uVar37 & puVar1[2];
                    auVar31._12_4_ = uVar37 & puVar1[3];
                    puVar1 = (uint *)(iVar17 + 0x20 + DAT_100e39f4);
                    auVar43._0_4_ = uVar50 & *puVar1;
                    auVar43._4_4_ = uVar50 & puVar1[1];
                    auVar43._8_4_ = uVar50 & puVar1[2];
                    auVar43._12_4_ = uVar50 & puVar1[3];
                    puVar1 = (uint *)(iVar17 + 0x30 + DAT_100e39f4);
                    auVar56._0_4_ = uVar36 & *puVar1;
                    auVar56._4_4_ = uVar36 & puVar1[1];
                    auVar56._8_4_ = uVar36 & puVar1[2];
                    auVar56._12_4_ = uVar36 & puVar1[3];
                    puVar1 = (uint *)(iVar17 + 0x10 + DAT_100e39f4);
                    auVar81._0_4_ = uVar38 & *puVar1;
                    auVar81._4_4_ = uVar38 & puVar1[1];
                    auVar81._8_4_ = uVar38 & puVar1[2];
                    auVar81._12_4_ = uVar38 & puVar1[3];
                    auVar82 = auVar81 | auVar31 | auVar43 | auVar56;
                    local_60 = auVar82;
                  }
                  local_11 = *(byte *)(param_2 + 0xc + iVar22);
                  auVar88 = *(undefined1 (*) [16])
                             (param_1 + (uint)*(ushort *)(param_2 + 0x12 + iVar22) * 0x10);
                  uVar36 = auVar88._12_4_;
                  local_80 = auVar88;
                  if (local_11 != 0xe4) {
                    uVar37 = auVar88._0_4_;
                    uVar38 = auVar88._4_4_;
                    uVar50 = auVar88._8_4_;
                    iVar17 = (uint)local_11 * 0x40;
                    puVar1 = (uint *)(iVar17 + DAT_100e39f4);
                    auVar32._0_4_ = uVar37 & *puVar1;
                    auVar32._4_4_ = uVar37 & puVar1[1];
                    auVar32._8_4_ = uVar37 & puVar1[2];
                    auVar32._12_4_ = uVar37 & puVar1[3];
                    puVar1 = (uint *)(iVar17 + 0x20 + DAT_100e39f4);
                    auVar44._0_4_ = uVar50 & *puVar1;
                    auVar44._4_4_ = uVar50 & puVar1[1];
                    auVar44._8_4_ = uVar50 & puVar1[2];
                    auVar44._12_4_ = uVar50 & puVar1[3];
                    puVar1 = (uint *)(iVar17 + 0x30 + DAT_100e39f4);
                    auVar57._0_4_ = uVar36 & *puVar1;
                    auVar57._4_4_ = uVar36 & puVar1[1];
                    auVar57._8_4_ = uVar36 & puVar1[2];
                    auVar57._12_4_ = uVar36 & puVar1[3];
                    puVar1 = (uint *)(iVar17 + 0x10 + DAT_100e39f4);
                    auVar87._0_4_ = uVar38 & *puVar1;
                    auVar87._4_4_ = uVar38 & puVar1[1];
                    auVar87._8_4_ = uVar38 & puVar1[2];
                    auVar87._12_4_ = uVar38 & puVar1[3];
                    auVar88 = auVar87 | auVar32 | auVar44 | auVar57;
                    local_80 = auVar88;
                  }
                  iVar17 = (uint)*(byte *)(param_2 + 2 + iVar22) * 0x10;
                  uVar36 = *(uint *)(&DAT_100dd9b0 + iVar17);
                  uVar37 = *(uint *)(iVar17 + 0x100dd9b4);
                  uVar38 = *(uint *)(iVar17 + 0x100dd9b8);
                  pfVar16 = (float *)(*(uint *)(param_2 + 8 + iVar22) & 3);
                  local_a0._4_4_ =
                       (uVar37 & -(uint)(auVar88._4_4_ == auVar82._4_4_) |
                       uVar36 & -(uint)(auVar82._4_4_ < auVar88._4_4_)) ^ uVar38;
                  local_a0._0_4_ =
                       (uVar37 & -(uint)(auVar88._0_4_ == auVar82._0_4_) |
                       uVar36 & -(uint)(auVar82._0_4_ < auVar88._0_4_)) ^ uVar38;
                  local_a0._8_4_ =
                       (uVar37 & -(uint)(auVar88._8_4_ == auVar82._8_4_) |
                       uVar36 & -(uint)(auVar82._8_4_ < auVar88._8_4_)) ^ uVar38;
                  local_a0._12_4_ =
                       (uVar37 & -(uint)(auVar88._12_4_ == auVar82._12_4_) |
                       uVar36 & -(uint)(auVar82._12_4_ < auVar88._12_4_)) ^ uVar38;
                  bVar23 = *(int *)(local_a0 + (int)pfVar16 * 4) == 0;
                  local_80 = auVar88;
                  local_60 = auVar82;
                }
                goto LAB_1000afdf;
              }
              pfVar16 = (float *)((&iStack_134)[local_24] + -1);
              (&iStack_134)[local_24] = (int)pfVar16;
              if (pfVar16 == (float *)0x0) {
                local_24 = local_24 + -1;
                goto switchD_1000a439_caseD_2;
              }
            }
            goto LAB_1000afe5;
          }
          if (pfVar16 == (float *)0x2d) {
            bVar8 = *(byte *)(param_2 + 8 + iVar22);
            auVar82 = *(undefined1 (*) [16])
                       (param_1 + (uint)*(ushort *)(param_2 + 0x10 + iVar22) * 0x10);
            uVar36 = auVar82._12_4_;
            local_60 = auVar82;
            if (bVar8 != 0xe4) {
              uVar37 = auVar82._0_4_;
              uVar38 = auVar82._4_4_;
              uVar50 = auVar82._8_4_;
              iVar17 = (uint)bVar8 * 0x40;
              puVar1 = (uint *)(iVar17 + DAT_100e39f4);
              auVar34._0_4_ = uVar37 & *puVar1;
              auVar34._4_4_ = uVar37 & puVar1[1];
              auVar34._8_4_ = uVar37 & puVar1[2];
              auVar34._12_4_ = uVar37 & puVar1[3];
              puVar1 = (uint *)(iVar17 + 0x20 + DAT_100e39f4);
              auVar45._0_4_ = uVar50 & *puVar1;
              auVar45._4_4_ = uVar50 & puVar1[1];
              auVar45._8_4_ = uVar50 & puVar1[2];
              auVar45._12_4_ = uVar50 & puVar1[3];
              puVar1 = (uint *)(iVar17 + 0x30 + DAT_100e39f4);
              auVar58._0_4_ = uVar36 & *puVar1;
              auVar58._4_4_ = uVar36 & puVar1[1];
              auVar58._8_4_ = uVar36 & puVar1[2];
              auVar58._12_4_ = uVar36 & puVar1[3];
              puVar1 = (uint *)(iVar17 + 0x10 + DAT_100e39f4);
              auVar83._0_4_ = uVar38 & *puVar1;
              auVar83._4_4_ = uVar38 & puVar1[1];
              auVar83._8_4_ = uVar38 & puVar1[2];
              auVar83._12_4_ = uVar38 & puVar1[3];
              auVar82 = auVar83 | auVar34 | auVar45 | auVar58;
              local_60 = auVar82;
            }
            local_11 = *(byte *)(param_2 + 0xc + iVar22);
            auVar88 = *(undefined1 (*) [16])
                       (param_1 + (uint)*(ushort *)(param_2 + 0x12 + iVar22) * 0x10);
            uVar36 = auVar88._12_4_;
            local_80 = auVar88;
            if (local_11 != 0xe4) {
              uVar37 = auVar88._0_4_;
              uVar38 = auVar88._4_4_;
              uVar50 = auVar88._8_4_;
              iVar17 = (uint)local_11 * 0x40;
              puVar1 = (uint *)(iVar17 + DAT_100e39f4);
              auVar35._0_4_ = uVar37 & *puVar1;
              auVar35._4_4_ = uVar37 & puVar1[1];
              auVar35._8_4_ = uVar37 & puVar1[2];
              auVar35._12_4_ = uVar37 & puVar1[3];
              puVar1 = (uint *)(iVar17 + 0x20 + DAT_100e39f4);
              auVar46._0_4_ = uVar50 & *puVar1;
              auVar46._4_4_ = uVar50 & puVar1[1];
              auVar46._8_4_ = uVar50 & puVar1[2];
              auVar46._12_4_ = uVar50 & puVar1[3];
              puVar1 = (uint *)(iVar17 + 0x30 + DAT_100e39f4);
              auVar59._0_4_ = uVar36 & *puVar1;
              auVar59._4_4_ = uVar36 & puVar1[1];
              auVar59._8_4_ = uVar36 & puVar1[2];
              auVar59._12_4_ = uVar36 & puVar1[3];
              puVar1 = (uint *)(iVar17 + 0x10 + DAT_100e39f4);
              auVar89._0_4_ = uVar38 & *puVar1;
              auVar89._4_4_ = uVar38 & puVar1[1];
              auVar89._8_4_ = uVar38 & puVar1[2];
              auVar89._12_4_ = uVar38 & puVar1[3];
              auVar88 = auVar89 | auVar35 | auVar46 | auVar59;
              local_80 = auVar88;
            }
            iVar17 = (uint)*(byte *)(param_2 + 2 + iVar22) * 0x10;
            uVar36 = *(uint *)(&DAT_100dd9b0 + iVar17);
            uVar37 = *(uint *)(iVar17 + 0x100dd9b4);
            uVar38 = *(uint *)(iVar17 + 0x100dd9b8);
            pfVar16 = (float *)(*(uint *)(param_2 + 8 + iVar22) & 3);
            local_90[0] = (float)((uVar37 & -(uint)(auVar88._0_4_ == auVar82._0_4_) |
                                  uVar36 & -(uint)(auVar82._0_4_ < auVar88._0_4_)) ^ uVar38);
            local_90[1] = (float)((uVar37 & -(uint)(auVar88._4_4_ == auVar82._4_4_) |
                                  uVar36 & -(uint)(auVar82._4_4_ < auVar88._4_4_)) ^ uVar38);
            local_90[2] = (float)((uVar37 & -(uint)(auVar88._8_4_ == auVar82._8_4_) |
                                  uVar36 & -(uint)(auVar82._8_4_ < auVar88._8_4_)) ^ uVar38);
            local_90[3] = (float)((uVar37 & -(uint)(auVar88._12_4_ == auVar82._12_4_) |
                                  uVar36 & -(uint)(auVar82._12_4_ < auVar88._12_4_)) ^ uVar38);
            bVar23 = local_90[(int)pfVar16] == 0.0;
            local_80 = auVar88;
            local_60 = auVar82;
LAB_1000afdf:
            if (!bVar23) goto LAB_1000afe5;
          }
          else {
            pfVar21 = (float *)0x0;
            if (pfVar16 == (float *)0x2e) goto LAB_1000b24c;
            if (pfVar16 == (float *)0x4e) {
              iVar17 = (int)fVar61;
              if (fVar61 < 0.0) {
                iVar17 = (int)fVar61 + -1;
              }
              fVar84 = (float)iVar17;
              uVar20 = (uint)ABS(fVar84);
              uVar15 = 0x400;
              if (uVar20 < 0x401) {
                uVar15 = uVar20;
              }
              fVar90 = *(float *)(*(int *)((int)local_20 + 0xd0c) + uVar15 * 4) *
                       *(float *)(*(int *)((int)local_20 + 0xd08) +
                                 (int)((ABS(fVar84) - (float)(int)uVar20) * 1024.0) * 4);
              auVar82 = rcpss(ZEXT416((uint)fVar90),ZEXT416((uint)fVar90));
              pfVar21 = (float *)(int)ABS(fVar61);
              uVar15 = auVar82._0_4_ & -(uint)(fVar84 < 0.0) | ~-(uint)(fVar84 < 0.0) & (uint)fVar90
              ;
              pfVar16 = (float *)0x400;
              if (pfVar21 < (float *)0x401) {
                pfVar16 = pfVar21;
              }
              fVar90 = *(float *)(*(int *)((int)local_20 + 0xd0c) + (int)pfVar16 * 4) *
                       *(float *)(*(int *)((int)local_20 + 0xd08) +
                                 (int)((ABS(fVar61) - (float)(int)pfVar21) * 1024.0) * 4);
              auVar82 = rcpss(ZEXT416((uint)fVar90),ZEXT416((uint)fVar90));
              uVar20 = auVar82._0_4_ & -(uint)(fVar61 < 0.0) | ~-(uint)(fVar61 < 0.0) & (uint)fVar90
              ;
              auVar75._4_4_ = uVar20;
              auVar75._0_4_ = uVar15;
              auVar75._8_4_ = uVar20;
              auVar75._12_4_ = 0x3f800000;
              auVar70._8_8_ = auVar75._8_8_;
              auVar70._4_4_ = fVar61 - fVar84;
              auVar70._0_4_ = (float)uVar15;
              auVar82 = local_60;
              auVar88 = local_80;
              uVar15 = _DAT_100dd930;
              uVar20 = uRam100dd934;
              uVar25 = uRam100dd938;
              uVar91 = uRam100dd93c;
            }
            else {
              pfVar16 = (float *)((int)pfVar16 + -0x4f);
              if (pfVar16 == (float *)0x0) {
                local_a0._0_8_ = 0;
                fVar90 = ABS(fVar61);
                iVar17 = ((uint)fVar84 >> 0x17) - 0x7f;
                bVar23 = fVar90 <= 0.0;
                local_3c = (float)((uint)fVar84 & 0x7fffff | 0x3f800000);
                uVar15 = (int)fVar90 >> 0x17;
                uVar13 = CONCAT44(fVar84,(float)((double)iVar17 +
                                                (double)(&DAT_100d97a0)[-(iVar17 >> 0x1f)])) &
                         0x7fffffffffffff;
                local_90[1] = (float)((uint)(uVar13 >> 0x20) | 0x3f800000);
                local_90[0] = (float)uVar13;
                local_90[2] = 0.0;
                local_90[3] = 1.0;
                bVar10 = fVar90 <= 0.0;
                if (0x7e < uVar15) {
                  local_a0._4_4_ = 0;
                  local_a0._0_4_ = (float)(int)(uVar15 - 0x7e);
                  fVar90 = fVar90 / *(float *)(*(int *)((int)local_20 + 0xd0c) + -0x1f8 + uVar15 * 4
                                              );
                }
                local_a0._8_8_ = 0;
                auVar27 = local_a0;
                iVar17 = 0;
                if (-1 < (int)(fVar90 * 1024.0)) {
                  iVar17 = (int)(fVar90 * 1024.0);
                }
                pfVar16 = *(float **)((int)local_20 + 0xd04);
                auVar33._0_4_ = -(uint)bVar23 & _DAT_100dd910;
                auVar33._4_4_ = -(uint)(ABS(fVar61) <= 0.0) & uRam100dd914;
                auVar33._8_4_ = -(uint)(ABS(fVar61) <= 0.0) & uRam100dd918;
                auVar33._12_4_ = -(uint)(ABS(fVar61) <= 0.0) & uRam100dd91c;
                auVar74._0_4_ = ~-(uint)bVar23 & (uint)local_90[0];
                auVar74._4_4_ = ~-(uint)(ABS(fVar61) <= 0.0) & (uint)local_90[1];
                auVar74._8_4_ =
                     ~-(uint)(ABS(fVar61) <= 0.0) &
                     (~-(uint)bVar10 & (uint)((float)local_a0._0_4_ + pfVar16[iVar17]) |
                     -(uint)bVar10 & 0xff800000);
                auVar74._12_4_ = ~-(uint)(ABS(fVar61) <= 0.0) & 0x3f800000;
                auVar70 = auVar74 | auVar33;
                uVar15 = _DAT_100dd930;
                uVar20 = uRam100dd934;
                uVar25 = uRam100dd938;
                uVar91 = uRam100dd93c;
                local_a0 = auVar27;
              }
            }
          }
          goto switchD_1000a439_caseD_2;
        }
        if (pfVar16 == (float *)0x26) {
          pfVar16 = (float *)(uint)*(byte *)(param_1 +
                                            (uint)*(ushort *)(param_2 + 0x10 + iVar22) * 0x10);
          if (pfVar16 == (float *)0x0) goto LAB_1000afe5;
          afStack_130[local_24] = (float)pfVar16;
          local_24 = local_24 + 1;
          goto switchD_1000a439_caseD_2;
        }
        pfVar16 = (float *)((int)pfVar16 + -0x1a);
        switch(pfVar16) {
        case (float *)0x0:
          bVar23 = *(float *)(param_1 +
                             ((*(uint *)(param_2 + 0xc + iVar22) & 3) +
                             (uint)*(ushort *)(param_2 + 0x12 + iVar22) * 4) * 4) != 0.0;
          pfVar16 = (float *)0x0;
          bVar10 = !bVar23;
          if (*(char *)(param_2 + 1 + iVar22) == '\0') {
            bVar10 = bVar23;
          }
          if (bVar10) {
            auStack_234[(int)((int)local_40 + 1)] = local_18;
            local_40 = (float *)((int)local_40 + 1);
            goto LAB_1000aaf4;
          }
          break;
        case (float *)0x1:
          pfVar16 = (float *)((uint)*(ushort *)(param_2 + 0x10 + iVar22) * 0x10);
          local_4c = pfVar16;
          local_3c = (float)(uint)*(byte *)(param_1 + (int)pfVar16);
          if (local_3c == 0.0) {
LAB_1000afe5:
            local_18 = *(float **)(param_2 + 4 + iVar22);
          }
          else {
            uVar36 = *(uint *)(param_1 + 4 + (int)pfVar16);
            local_24 = local_24 + 1;
            afStack_130[iVar17] = local_3c;
            auStack_1b4[local_34 + 1] = uVar36;
            local_34 = local_34 + 1;
            pfVar16 = *(float **)(param_1 + 8 + (int)local_4c);
            aiStack_2b4[local_44 + 1] = (int)pfVar16;
            local_44 = local_44 + 1;
          }
          break;
        case (float *)0x2:
          if (local_40 == (float *)0x0) {
            local_25 = '\x01';
            pfVar16 = (float *)0x0;
          }
          else {
            local_18 = (float *)auStack_234[(int)local_40];
            pfVar16 = (float *)((int)local_40 + -1);
            local_40 = pfVar16;
          }
          break;
        case (float *)0x3:
          auStack_1b4[local_34] = auStack_1b4[local_34] + aiStack_2b4[local_44];
          pfVar16 = (float *)((&iStack_134)[local_24] + -1);
          (&iStack_134)[local_24] = (int)pfVar16;
          if (pfVar16 != (float *)0x0) goto LAB_1000afe5;
          local_24 = local_24 + -1;
          local_34 = local_34 + -1;
          local_44 = local_44 + -1;
          break;
        case (float *)0x6:
          fVar84 = ABS(fVar84);
          bVar23 = fVar84 <= 0.0;
          fVar61 = 0.0;
          uVar15 = (int)fVar84 >> 0x17;
          if (0x7e < uVar15) {
            fVar61 = (float)(int)(uVar15 - 0x7e);
            fVar84 = fVar84 / *(float *)(*(int *)((int)local_20 + 0xd0c) + -0x1f8 + uVar15 * 4);
          }
          iVar17 = 0;
          if (-1 < (int)(fVar84 * 1024.0)) {
            iVar17 = (int)(fVar84 * 1024.0);
          }
          fVar68 = (float)(~-(uint)bVar23 &
                           (uint)(fVar61 + *(float *)(*(int *)((int)local_20 + 0xd04) + iVar17 * 4))
                          | -(uint)bVar23 & 0xff800000) * fVar68;
          fVar61 = ABS(fVar68);
          uVar20 = (uint)fVar61;
          uVar25 = -(uint)(fVar68 < 0.0);
          uVar15 = 0x400;
          if (uVar20 < 0x401) {
            uVar15 = uVar20;
          }
          pfVar16 = *(float **)((int)local_20 + 0xd0c);
          fVar61 = pfVar16[uVar15] *
                   *(float *)(*(int *)((int)local_20 + 0xd08) +
                             (int)((fVar61 - (float)(int)uVar20) * 1024.0) * 4);
          auVar70 = rcpss(ZEXT416((uint)fVar61),ZEXT416((uint)fVar61));
          auVar70._0_4_ = (float)(auVar70._0_4_ & uVar25 | ~uVar25 & (uint)fVar61);
          auVar70._4_4_ = auVar70._0_4_;
          auVar70._8_4_ = auVar70._0_4_;
          auVar70._12_4_ = auVar70._0_4_;
          uVar15 = _DAT_100dd930;
          uVar20 = uRam100dd934;
          uVar25 = uRam100dd938;
          uVar91 = uRam100dd93c;
          break;
        case (float *)0x7:
          auVar70._0_4_ = fVar76 * fVar84 - fVar68 * fVar90;
          auVar70._4_4_ = fVar68 * fVar60 - fVar77 * fVar84;
          auVar70._8_4_ = fVar77 * fVar90 - fVar76 * fVar60;
          auVar70._12_4_ = fVar39 * fVar61 - fVar39 * fVar61;
          break;
        case (float *)0x8:
          auVar30._0_8_ = CONCAT44(-(uint)(fVar90 < 0.0),-(uint)(fVar84 < 0.0)) & 0xbf800000bf800000
          ;
          auVar30._8_4_ = -(uint)(fVar60 < 0.0) & 0xbf800000;
          auVar30._12_4_ = -(uint)(fVar61 < 0.0) & 0xbf800000;
          auVar72._0_8_ = CONCAT44(-(uint)(0.0 < fVar90),-(uint)(0.0 < fVar84)) & 0x3f8000003f800000
          ;
          auVar72._8_4_ = -(uint)(0.0 < fVar60) & 0x3f800000;
          auVar72._12_4_ = -(uint)(0.0 < fVar61) & 0x3f800000;
          goto LAB_1000ab70;
        case (float *)0x9:
          auVar70._0_8_ = auVar82._0_8_ & 0x7fffffff7fffffff;
          auVar70._8_4_ = ABS(fVar60);
          auVar70._12_4_ = ABS(fVar61);
          break;
        case (float *)0xa:
          auVar55._0_4_ = fVar84 * fVar84 + fVar60 * fVar60 + fVar90 * fVar90;
          auVar55._4_4_ = auVar55._0_4_;
          auVar55._8_4_ = auVar55._0_4_;
          auVar55._12_4_ = auVar55._0_4_;
          auVar70 = divps(auVar82,auVar55);
          auVar72._0_4_ = auVar70._0_4_ & -(uint)(0.0 < auVar55._0_4_);
          auVar72._4_4_ = auVar70._4_4_ & -(uint)(0.0 < auVar55._0_4_);
          auVar72._8_4_ = auVar70._8_4_ & -(uint)(0.0 < auVar55._0_4_);
          auVar72._12_4_ = auVar70._12_4_ & -(uint)(0.0 < auVar55._0_4_);
          auVar30._0_4_ = ~-(uint)(0.0 < auVar55._0_4_) & uVar15;
          auVar30._4_4_ = ~-(uint)(0.0 < auVar55._0_4_) & uVar20;
          auVar30._8_4_ = ~-(uint)(0.0 < auVar55._0_4_) & uVar25;
          auVar30._12_4_ = ~-(uint)(0.0 < auVar55._0_4_) & uVar91;
LAB_1000ab70:
          auVar70 = auVar72 | auVar30;
          break;
        case (float *)0xb:
          auVar24 = FUN_100cfd0e(fVar84);
          local_3c = (float)(float10)auVar24;
          auVar24 = FUN_100cfd22((float)local_60._0_4_);
          local_4c = (float *)(float)(float10)auVar24;
          auVar24 = FUN_100cfd0e((float)local_60._0_4_);
          local_38 = (float)(float10)auVar24;
          auVar24 = FUN_100cfd22((float)local_60._0_4_);
          local_1c = (float)(float10)auVar24;
          auVar73._4_4_ = local_4c;
          auVar73._0_4_ = local_1c;
          auVar73._8_4_ = local_4c;
          auVar73._12_4_ = local_3c;
          auVar70._8_8_ = auVar73._8_8_;
          auVar70._4_4_ = local_38;
          auVar70._0_4_ = local_1c;
          pfVar16 = extraout_EAX;
          auVar82 = local_60;
          auVar88 = local_80;
          uVar15 = _DAT_100dd930;
          uVar20 = uRam100dd934;
          uVar25 = uRam100dd938;
          uVar91 = uRam100dd93c;
        }
        goto switchD_1000a439_caseD_2;
      }
      if (pfVar16 == (float *)0x19) {
        auStack_234[(int)((int)local_40 + 1)] = local_18;
        local_18 = (float *)((int)local_40 + 1);
        local_40 = local_18;
LAB_1000aaf4:
        pfVar16 = local_18;
        local_18 = (float *)(*(int *)(param_2 + 4 + iVar22) + -1);
        goto switchD_1000a439_caseD_2;
      }
      pfVar16 = (float *)((int)pfVar16 + -1);
      switch(pfVar16) {
      case (float *)0x0:
        pfVar16 = (float *)0x429;
        pfVar21 = pfVar16;
        auVar70 = auVar82;
        if (*(short *)(param_2 + 0x11 + iVar22) == 0x429) {
LAB_1000b24c:
          pfVar16 = pfVar21;
          auVar70._0_4_ = (float)(int)fVar84;
          auVar70._4_4_ = (float)(int)fVar90;
          auVar70._8_4_ = (float)(int)fVar60;
          auVar70._12_4_ = (float)(int)fVar61;
        }
        break;
      case (float *)0x1:
        auVar70._0_4_ = fVar68 + fVar84;
        auVar70._4_4_ = fVar76 + fVar90;
        auVar70._8_4_ = fVar77 + fVar60;
        auVar70._12_4_ = fVar39 + fVar61;
        break;
      case (float *)0x3:
        auVar71 = auVar88;
        goto LAB_1000a466;
      case (float *)0x4:
        auVar70._0_4_ = fVar68 * fVar84;
        auVar70._4_4_ = fVar76 * fVar90;
        auVar70._8_4_ = fVar77 * fVar60;
        auVar70._12_4_ = fVar39 * fVar61;
        break;
      case (float *)0x5:
        auVar70 = rcpss(auVar82,auVar82);
        fVar61 = auVar70._0_4_;
        goto LAB_1000a486;
      case (float *)0x6:
        auVar42._12_4_ = ABS(fVar61);
        auVar42._0_8_ = CONCAT44(fVar61,fVar61) & 0x7fffffff7fffffff;
        auVar42._8_4_ = auVar42._12_4_;
        auVar70 = rsqrtss(auVar42,auVar42);
        fVar61 = auVar70._0_4_;
LAB_1000a486:
        fVar84 = (float)(~-(uint)(ABS(fVar61) == _DAT_100dd920) & (uint)fVar61 |
                        -(uint)(ABS(fVar61) == _DAT_100dd920) & uVar15);
LAB_1000a49d:
        auVar70._4_4_ = fVar84;
        auVar70._0_4_ = fVar84;
        auVar70._8_4_ = fVar84;
        auVar70._12_4_ = fVar84;
        break;
      case (float *)0x7:
        fVar76 = fVar76 * fVar90;
        fVar84 = fVar68 * fVar84 + fVar77 * fVar60;
        goto LAB_1000a4ca;
      case (float *)0x8:
        fVar84 = fVar77 * fVar60 + fVar68 * fVar84;
        fVar76 = fVar39 * fVar61 + fVar76 * fVar90;
LAB_1000a4ca:
        fVar84 = fVar84 + fVar76;
        goto LAB_1000a49d;
      case (float *)0x9:
        auVar70 = minps(auVar82,auVar88);
        break;
      case (float *)0xa:
        auVar70 = maxps(auVar82,auVar88);
        break;
      case (float *)0xb:
        bVar23 = fVar84 < fVar68;
        bVar10 = fVar90 < fVar76;
        bVar11 = fVar60 < fVar77;
        bVar12 = fVar61 < fVar39;
        goto LAB_1000a506;
      case (float *)0xc:
        bVar23 = fVar68 <= fVar84;
        bVar10 = fVar76 <= fVar90;
        bVar11 = fVar77 <= fVar60;
        bVar12 = fVar39 <= fVar61;
LAB_1000a506:
        auVar70._0_8_ = CONCAT44(-(uint)bVar10,-(uint)bVar23) & 0x3f8000003f800000;
        auVar70._8_4_ = (float)(-(uint)bVar11 & 0x3f800000);
        auVar70._12_4_ = (float)(-(uint)bVar12 & 0x3f800000);
        break;
      case (float *)0xd:
        uVar37 = (uint)ABS(fVar61);
        uVar36 = 0x400;
        if (uVar37 < 0x401) {
          uVar36 = uVar37;
        }
        pfVar16 = *(float **)((int)local_20 + 0xd0c);
        fVar84 = pfVar16[uVar36] *
                 *(float *)(*(int *)((int)local_20 + 0xd08) +
                           (int)((ABS(fVar61) - (float)(int)uVar37) * 1024.0) * 4);
        auVar70 = rcpss(ZEXT416((uint)fVar84),ZEXT416((uint)fVar84));
        uVar36 = auVar70._0_4_ & -(uint)(fVar61 < 0.0) | ~-(uint)(fVar61 < 0.0) & (uint)fVar84;
        goto LAB_1000aa53;
      case (float *)0xe:
        fVar84 = 0.0;
        fVar61 = ABS(fVar61);
        bVar23 = fVar61 <= 0.0;
        uVar36 = (int)fVar61 >> 0x17;
        if (0x7e < uVar36) {
          fVar84 = (float)(int)(uVar36 - 0x7e);
          fVar61 = fVar61 / *(float *)(*(int *)((int)local_20 + 0xd0c) + -0x1f8 + uVar36 * 4);
        }
        iVar17 = 0;
        if (-1 < (int)(fVar61 * 1024.0)) {
          iVar17 = (int)(fVar61 * 1024.0);
        }
        pfVar16 = *(float **)((int)local_20 + 0xd04);
        uVar36 = ~-(uint)bVar23 & (uint)(fVar84 + pfVar16[iVar17]) | -(uint)bVar23 & 0xff800000;
LAB_1000aa53:
        auVar70._4_4_ = (float)uVar36;
        auVar70._0_4_ = (float)uVar36;
        auVar70._8_4_ = (float)uVar36;
        auVar70._12_4_ = (float)uVar36;
        break;
      case (float *)0xf:
        auVar29._4_4_ = -(uint)(0.0 < fVar90);
        auVar29._0_4_ = -(uint)(0.0 < fVar84);
        auVar29._8_4_ = -(uint)(0.0 < fVar60);
        auVar29._12_4_ = -(uint)(0.0 < fVar61);
        fVar61 = 0.0;
        pfVar16 = (float *)movmskps(pfVar16,auVar29);
        auVar70 = _DAT_100dd940;
        if (((uint)pfVar16 & 1) != 0) {
          local_a0 = _DAT_100dd940 | ZEXT416((uint)fVar84) << 0x20;
          auVar70 = local_a0;
          if (((uint)pfVar16 & 2) != 0) {
            auVar88 = maxps(_DAT_100dd960,auVar82);
            auVar88 = minps(_DAT_100dd950,auVar88);
            fVar84 = auVar88._12_4_;
            uVar36 = (uint)(fVar90 * 1024.0);
            pfVar16 = (float *)((uint)CONCAT21((short)((uint)pfVar16 >> 0x10),
                                               (fVar84 == 0.0) << 6 | NAN(fVar84) << 2 | 2U |
                                               fVar84 < 0.0) << 8);
            if (fVar84 == 0.0) {
              fVar61 = 1.0;
            }
            if (uVar36 != 0) {
              if ((0x3ff < uVar36) ||
                 (fVar84 = *(float *)(*(int *)((int)local_20 + 0xd04) + uVar36 * 4) * fVar84,
                 1024.0 <= ABS(fVar84))) {
                dVar26 = (double)fVar90;
                pfVar16 = (float *)FUN_100cf3b0();
                fVar61 = (float)dVar26;
                auVar82 = local_60;
                uVar15 = _DAT_100dd930;
                uVar20 = uRam100dd934;
                uVar25 = uRam100dd938;
                uVar91 = uRam100dd93c;
              }
              else {
                iVar17 = (int)fVar84;
                fVar61 = *(float *)(*(int *)((int)local_20 + 0xd08) +
                                   (int)((fVar84 - (float)iVar17) * 1024.0) * 4);
                pfVar16 = *(float **)((int)local_20 + 0xd0c);
                if (iVar17 < 0) {
                  pfVar16 = pfVar16 + -iVar17;
                  fVar61 = fVar61 / *pfVar16;
                }
                else {
                  fVar61 = fVar61 * pfVar16[iVar17];
                }
              }
            }
            auVar70 = local_a0 | ZEXT416((uint)fVar61) << 0x40;
            auVar88 = local_80;
          }
        }
        break;
      case (float *)0x10:
        auVar69._4_4_ = fVar76 * fVar90;
        auVar54._0_12_ = ZEXT812(0);
        auVar54._12_4_ = fVar39;
        auVar69._0_4_ = 0x3f800000;
        auVar69._8_4_ = fVar60;
        auVar69._12_4_ = 0;
        auVar70 = auVar69 | auVar54;
        break;
      case (float *)0x11:
        auVar71._0_4_ = fVar68 - local_b0;
        auVar71._4_4_ = fVar76 - fStack_ac;
        auVar71._8_4_ = fVar77 - fStack_a8;
        auVar71._12_4_ = fVar39 - fStack_a4;
LAB_1000a466:
        auVar70._0_4_ = auVar71._0_4_ * fVar84 + local_b0;
        auVar70._4_4_ = auVar71._4_4_ * fVar90 + fStack_ac;
        auVar70._8_4_ = auVar71._8_4_ * fVar60 + fStack_a8;
        auVar70._12_4_ = auVar71._12_4_ * fVar61 + fStack_a4;
        break;
      case (float *)0x12:
        auVar70._0_4_ = fVar84 - (float)(int)fVar84;
        auVar70._4_4_ = fVar90 - (float)(int)fVar90;
        auVar70._8_4_ = fVar60 - (float)(int)fVar60;
        auVar70._12_4_ = fVar61 - (float)(int)fVar61;
        break;
      case (float *)0x13:
        uVar36 = (uint)*(ushort *)(param_2 + 3 + iVar22);
        iVar17 = (uint)*(byte *)(param_2 + 0xe + iVar22) * 0xc;
        local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar17)] &
                           *(uint *)(&DAT_100d1760 + iVar17) |
                          *(uint *)(&DAT_100d1764 + iVar17) & local_2c);
        iVar17 = (int)local_1c + uVar36;
        pfVar16 = (float *)(uVar36 - 0x26);
        if ((ushort)pfVar16 < 0x401) {
          pfVar16 = (float *)0x426;
          if (0x3ff < iVar17 - 0x26U) {
            iVar17 = 0x426;
          }
        }
        pfVar21 = (float *)(param_1 + iVar17 * 0x10);
        pfVar7 = (float *)(param_1 + 0x10 + iVar17 * 0x10);
        pfVar6 = (float *)(param_1 + 0x20 + iVar17 * 0x10);
        pfVar5 = (float *)(param_1 + 0x30 + iVar17 * 0x10);
        fVar68 = *pfVar21 * fVar84;
        fVar76 = pfVar21[1] * fVar90;
        fVar77 = pfVar21[2] * fVar60;
        fVar78 = pfVar21[3] * fVar61;
        fVar39 = *pfVar7 * fVar84;
        fVar47 = pfVar7[1] * fVar90;
        fVar48 = pfVar7[2] * fVar60;
        fVar51 = pfVar7[3] * fVar61;
        fVar62 = *pfVar6 * fVar84;
        fVar63 = pfVar6[1] * fVar90;
        fVar65 = pfVar6[2] * fVar60;
        fVar67 = pfVar6[3] * fVar61;
        fVar84 = *pfVar5 * fVar84;
        fVar90 = pfVar5[1] * fVar90;
        fVar60 = pfVar5[2] * fVar60;
        fVar61 = pfVar5[3] * fVar61;
        goto LAB_1000a7d0;
      case (float *)0x14:
        uVar36 = (uint)*(ushort *)(param_2 + 3 + iVar22);
        iVar17 = (uint)*(byte *)(param_2 + 0xe + iVar22) * 0xc;
        local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar17)] &
                           *(uint *)(&DAT_100d1760 + iVar17) |
                          *(uint *)(&DAT_100d1764 + iVar17) & local_2c);
        iVar17 = (int)local_1c + uVar36;
        pfVar16 = (float *)(uVar36 - 0x26);
        if ((ushort)pfVar16 < 0x401) {
          pfVar16 = (float *)0x426;
          if (0x3ff < iVar17 - 0x26U) {
            iVar17 = 0x426;
          }
        }
        pfVar21 = (float *)(param_1 + iVar17 * 0x10);
        fVar68 = *pfVar21;
        fVar76 = pfVar21[1];
        fVar77 = pfVar21[2];
        pfVar7 = (float *)(param_1 + 0x10 + iVar17 * 0x10);
        fVar39 = *pfVar7;
        fVar47 = pfVar7[1];
        fVar48 = pfVar7[2];
        pfVar6 = (float *)(param_1 + 0x20 + iVar17 * 0x10);
        fVar62 = *pfVar6;
        fVar63 = pfVar6[1];
        fVar65 = pfVar6[2];
        fVar78 = pfVar21[3] * fVar61;
        fVar51 = pfVar7[3] * fVar61;
        fVar67 = pfVar6[3] * fVar61;
        goto LAB_1000a867;
      case (float *)0x15:
        uVar36 = (uint)*(ushort *)(param_2 + 3 + iVar22);
        iVar17 = (uint)*(byte *)(param_2 + 0xe + iVar22) * 0xc;
        local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar17)] &
                           *(uint *)(&DAT_100d1760 + iVar17) |
                          *(uint *)(&DAT_100d1764 + iVar17) & local_2c);
        iVar17 = (int)local_1c + uVar36;
        pfVar16 = (float *)(uVar36 - 0x26);
        if ((ushort)pfVar16 < 0x401) {
          pfVar16 = (float *)0x426;
          if (0x3ff < iVar17 - 0x26U) {
            iVar17 = 0x426;
          }
        }
        pfVar21 = (float *)(param_1 + iVar17 * 0x10);
        pfVar7 = (float *)(param_1 + 0x10 + iVar17 * 0x10);
        pfVar6 = (float *)(param_1 + 0x20 + iVar17 * 0x10);
        pfVar5 = (float *)(param_1 + 0x30 + iVar17 * 0x10);
        fVar68 = *pfVar21 * fVar84;
        fVar76 = pfVar21[1] * fVar90;
        fVar77 = pfVar21[2] * fVar60;
        fVar78 = pfVar21[3] * 0.0;
        fVar39 = *pfVar7 * fVar84;
        fVar47 = pfVar7[1] * fVar90;
        fVar48 = pfVar7[2] * fVar60;
        fVar51 = pfVar7[3] * 0.0;
        fVar62 = *pfVar6 * fVar84;
        fVar63 = pfVar6[1] * fVar90;
        fVar65 = pfVar6[2] * fVar60;
        fVar67 = pfVar6[3] * 0.0;
        fVar84 = *pfVar5 * fVar84;
        fVar90 = pfVar5[1] * fVar90;
        fVar60 = pfVar5[2] * fVar60;
        fVar61 = pfVar5[3] * 0.0;
        goto LAB_1000a7d0;
      case (float *)0x16:
        uVar36 = (uint)*(ushort *)(param_2 + 3 + iVar22);
        iVar17 = (uint)*(byte *)(param_2 + 0xe + iVar22) * 0xc;
        local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar17)] &
                           *(uint *)(&DAT_100d1760 + iVar17) |
                          *(uint *)(&DAT_100d1764 + iVar17) & local_2c);
        iVar17 = (int)local_1c + uVar36;
        pfVar16 = (float *)(uVar36 - 0x26);
        if ((ushort)pfVar16 < 0x401) {
          pfVar16 = (float *)0x426;
          if (0x3ff < iVar17 - 0x26U) {
            iVar17 = 0x426;
          }
        }
        pfVar21 = (float *)(param_1 + iVar17 * 0x10);
        fVar68 = *pfVar21;
        fVar76 = pfVar21[1];
        fVar77 = pfVar21[2];
        pfVar7 = (float *)(param_1 + 0x10 + iVar17 * 0x10);
        fVar39 = *pfVar7;
        fVar47 = pfVar7[1];
        fVar48 = pfVar7[2];
        pfVar6 = (float *)(param_1 + 0x20 + iVar17 * 0x10);
        fVar62 = *pfVar6;
        fVar63 = pfVar6[1];
        fVar65 = pfVar6[2];
        fVar78 = pfVar21[3] * 0.0;
        fVar51 = pfVar7[3] * 0.0;
        fVar67 = pfVar6[3] * 0.0;
LAB_1000a867:
        fVar77 = fVar77 * fVar60;
        fVar76 = fVar76 * fVar90;
        fVar68 = fVar68 * fVar84;
        fVar65 = fVar65 * fVar60;
        fVar63 = fVar63 * fVar90;
        fVar62 = fVar62 * fVar84;
        fVar48 = fVar48 * fVar60;
        fVar47 = fVar47 * fVar90;
        fVar39 = fVar39 * fVar84;
        fVar84 = 0.0;
        fVar90 = 0.0;
        fVar60 = 0.0;
        fVar61 = 0.0;
LAB_1000a7d0:
        auVar70._0_4_ = fVar78 + fVar76 + fVar77 + fVar68;
        auVar70._4_4_ = fVar51 + fVar47 + fVar48 + fVar39;
        auVar70._8_4_ = fVar67 + fVar63 + fVar65 + fVar62;
        auVar70._12_4_ = fVar61 + fVar90 + fVar60 + fVar84;
        break;
      case (float *)0x17:
        uVar36 = (uint)*(ushort *)(param_2 + 3 + iVar22);
        iVar17 = (uint)*(byte *)(param_2 + 0xe + iVar22) * 0xc;
        local_1c = (float)(local_70[*(int *)(&DAT_100d1768 + iVar17)] &
                           *(uint *)(&DAT_100d1760 + iVar17) |
                          *(uint *)(&DAT_100d1764 + iVar17) & local_2c);
        iVar17 = (int)local_1c + uVar36;
        pfVar16 = (float *)(uVar36 - 0x26);
        if ((ushort)pfVar16 < 0x401) {
          pfVar16 = (float *)0x426;
          if (0x3ff < iVar17 - 0x26U) {
            iVar17 = 0x426;
          }
        }
        pfVar21 = (float *)(param_1 + iVar17 * 0x10);
        pfVar7 = (float *)(param_1 + 0x10 + iVar17 * 0x10);
        auVar70._0_4_ =
             pfVar21[3] * 0.0 + pfVar21[1] * fVar90 + pfVar21[2] * fVar60 + *pfVar21 * fVar84;
        auVar70._4_4_ = pfVar7[3] * 0.0 + pfVar7[1] * fVar90 + pfVar7[2] * fVar60 + *pfVar7 * fVar84
        ;
        auVar70._8_4_ = auVar70._0_4_;
        auVar70._12_4_ = auVar70._0_4_;
      }
switchD_1000a439_caseD_2:
      if (local_2d == 0) {
        local_3c = (float)((int)local_18 * 0x14);
        uVar9 = *(ushort *)(param_2 + 0x11 + (int)local_3c);
        uVar15 = (uint)uVar9;
        if ((uVar9 & 0x8000) != 0) {
          uVar15 = (uVar15 & 0x7fff) + local_2c;
        }
        iVar17 = (uint)*(byte *)(param_2 + 0x10 + (int)local_3c) * 0x10;
        puVar1 = (uint *)(param_1 + uVar15 * 0x10);
        uVar20 = puVar1[1];
        uVar25 = puVar1[2];
        uVar91 = puVar1[3];
        uVar36 = *(uint *)(&DAT_100dd7d0 + iVar17);
        uVar37 = *(uint *)(iVar17 + 0x100dd7d4);
        uVar38 = *(uint *)(iVar17 + 0x100dd7d8);
        uVar50 = *(uint *)(iVar17 + 0x100dd7dc);
        bVar8 = *(byte *)(param_2 + 0x13 + (int)local_3c);
        pfVar16 = (float *)CONCAT31((int3)((uint)local_3c >> 8),bVar8);
        if (bVar8 != 0xc3) {
          uVar64 = *(uint *)(param_1 + 0x42a0);
          uVar66 = *(uint *)(param_1 + 0x42a4);
          uVar49 = *(uint *)(param_1 + 0x42a8);
          uVar52 = *(uint *)(param_1 + 0x42ac);
          uVar18 = (uint)bVar8;
          if (uVar18 < 0xab) {
            uVar14 = uVar49;
            if ((uVar18 == 0xaa) || (uVar14 = uVar64, uVar18 == 0)) {
LAB_1000b418:
              uVar64 = uVar14;
              pfVar16 = (float *)0x0;
              uVar66 = uVar64;
              uVar49 = uVar64;
              uVar52 = uVar64;
            }
            else {
              if (uVar18 == 2) {
LAB_1000b40b:
                pfVar16 = (float *)0x0;
                uVar18 = uVar64;
                goto LAB_1000b450;
              }
              uVar14 = uVar66;
              if (uVar18 == 0x55) goto LAB_1000b418;
              pfVar16 = (float *)(uVar18 - 0x57);
              uVar18 = uVar66;
              if (pfVar16 == (float *)0x0) goto LAB_1000b450;
            }
          }
          else {
            if (uVar18 == 0xac) {
              pfVar16 = (float *)0x0;
              uVar18 = uVar49;
            }
            else {
              if (uVar18 == 0xe6) goto LAB_1000b40b;
              uVar14 = uVar52;
              if (uVar18 == 0xff) goto LAB_1000b418;
              pfVar16 = (float *)(uVar18 - 0x101);
              uVar18 = uVar52;
              if (pfVar16 != (float *)0x0) goto LAB_1000b457;
            }
LAB_1000b450:
            uVar64 = uVar18 ^ 0xffffffff;
            uVar66 = uVar18 ^ 0xffffffff;
            uVar49 = uVar18 ^ 0xffffffff;
            uVar52 = uVar18 ^ 0xffffffff;
          }
LAB_1000b457:
          uVar36 = uVar36 & uVar64;
          uVar37 = uVar37 & uVar66;
          uVar38 = uVar38 & uVar49;
          uVar50 = uVar50 & uVar52;
        }
        puVar2 = (uint *)(param_1 + uVar15 * 0x10);
        *puVar2 = uVar36 & auVar70._0_4_ | ~uVar36 & *puVar1;
        puVar2[1] = uVar37 & auVar70._4_4_ | ~uVar37 & uVar20;
        puVar2[2] = uVar38 & auVar70._8_4_ | ~uVar38 & uVar25;
        puVar2[3] = uVar50 & auVar70._12_4_ | ~uVar50 & uVar91;
        uVar15 = _DAT_100dd930;
        uVar20 = uRam100dd934;
        uVar25 = uRam100dd938;
        uVar91 = uRam100dd93c;
      }
      local_18 = (float *)((int)local_18 + 1);
    } while (local_25 == '\0');
    uVar15 = CONCAT31((int3)((uint)pfVar16 >> 8),1);
  }
  return uVar15;
}

