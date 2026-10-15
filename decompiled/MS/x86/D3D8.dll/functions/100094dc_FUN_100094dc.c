/*
 * FUN_100094dc at 100094dc
 * uint __thiscall FUN_100094dc(void * this, int param_1, int param_2)
 * Address ranges: 100094dc-10009fd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100094dc(void *this,int param_1,int param_2)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  uint uVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  uint uVar58;
  uint uVar59;
  float fVar60;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_100bee30 == 0) && (uVar17 = FUN_100092d8(), DAT_100bee30 == 0)) {
    uVar17 = uVar17 & 0xffffff00;
  }
  else {
    iVar18 = 0;
    local_40 = _local_70;
    local_50 = _local_70;
    local_60 = (float)local_70._0_4_;
    fStack_5c = (float)local_70._4_4_;
    fStack_58 = fStack_68;
    fStack_54 = fStack_64;
    while( true ) {
      iVar21 = iVar18 * 0x14;
      bVar9 = *(byte *)(param_2 + iVar21);
      if (bVar9 == 0xff) break;
      iVar22 = (int)*(float *)(param_1 + 0x4290);
      if (-1 < (char)bVar9) {
        sVar11 = *(short *)(param_2 + 1 + iVar21);
        if (sVar11 != -1) {
          iVar19 = 0;
          if (*(char *)(param_2 + 0xd + iVar21) == '\x01') {
            iVar19 = iVar22;
          }
          iVar19 = (uint)*(ushort *)(param_2 + 1 + iVar21) + iVar19;
          if (((ushort)(sVar11 - 0x26U) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
            iVar19 = 0x426;
          }
          bVar10 = *(byte *)(param_2 + 7 + iVar21);
          auVar55 = *(undefined1 (*) [16])(param_1 + iVar19 * 0x10);
          uVar17 = auVar55._12_4_;
          if (bVar10 != 0xe4) {
            uVar28 = auVar55._0_4_;
            uVar29 = auVar55._4_4_;
            uVar36 = auVar55._8_4_;
            iVar19 = (uint)bVar10 * 0x40;
            puVar2 = (uint *)(iVar19 + 0x10 + DAT_100bee30);
            auVar54._0_4_ = uVar29 & *puVar2;
            auVar54._4_4_ = uVar29 & puVar2[1];
            auVar54._8_4_ = uVar29 & puVar2[2];
            auVar54._12_4_ = uVar29 & puVar2[3];
            puVar2 = (uint *)(iVar19 + DAT_100bee30);
            auVar24._0_4_ = uVar28 & *puVar2;
            auVar24._4_4_ = uVar28 & puVar2[1];
            auVar24._8_4_ = uVar28 & puVar2[2];
            auVar24._12_4_ = uVar28 & puVar2[3];
            puVar2 = (uint *)(iVar19 + 0x20 + DAT_100bee30);
            auVar31._0_4_ = uVar36 & *puVar2;
            auVar31._4_4_ = uVar36 & puVar2[1];
            auVar31._8_4_ = uVar36 & puVar2[2];
            auVar31._12_4_ = uVar36 & puVar2[3];
            puVar2 = (uint *)(iVar19 + 0x30 + DAT_100bee30);
            auVar55._0_4_ = uVar17 & *puVar2;
            auVar55._4_4_ = uVar17 & puVar2[1];
            auVar55._8_4_ = uVar17 & puVar2[2];
            auVar55._12_4_ = uVar17 & puVar2[3];
            auVar55 = auVar54 | auVar24 | auVar31 | auVar55;
          }
          bVar10 = *(byte *)(param_2 + 10 + iVar21);
          local_40 = auVar55;
          if ((bVar10 & 2) != 0) {
            local_40._0_4_ = auVar55._0_4_ & _DAT_100b9320;
            local_40._4_4_ = auVar55._4_4_ & uRam100b9324;
            local_40._8_4_ = auVar55._8_4_ & uRam100b9328;
            local_40._12_4_ = auVar55._12_4_ & uRam100b932c;
          }
          if ((bVar10 & 1) != 0) {
            auVar56._0_4_ = local_40._0_4_ ^ _DAT_100b9330;
            auVar56._4_4_ = local_40._4_4_ ^ uRam100b9334;
            auVar56._8_4_ = local_40._8_4_ ^ uRam100b9338;
            auVar56._12_4_ = local_40._12_4_ ^ uRam100b933c;
            local_40 = auVar56;
          }
        }
        sVar11 = *(short *)(param_2 + 3 + iVar21);
        if (sVar11 != -1) {
          iVar19 = 0;
          if (*(char *)(param_2 + 0xe + iVar21) == '\x01') {
            iVar19 = iVar22;
          }
          iVar19 = (uint)*(ushort *)(param_2 + 3 + iVar21) + iVar19;
          if (((ushort)(sVar11 - 0x26U) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
            iVar19 = 0x426;
          }
          bVar10 = *(byte *)(param_2 + 8 + iVar21);
          auVar42 = *(undefined1 (*) [16])(param_1 + iVar19 * 0x10);
          uVar17 = auVar42._12_4_;
          if (bVar10 != 0xe4) {
            uVar28 = auVar42._0_4_;
            uVar29 = auVar42._4_4_;
            uVar36 = auVar42._8_4_;
            iVar19 = (uint)bVar10 * 0x40;
            puVar2 = (uint *)(iVar19 + 0x10 + DAT_100bee30);
            auVar41._0_4_ = uVar29 & *puVar2;
            auVar41._4_4_ = uVar29 & puVar2[1];
            auVar41._8_4_ = uVar29 & puVar2[2];
            auVar41._12_4_ = uVar29 & puVar2[3];
            puVar2 = (uint *)(iVar19 + DAT_100bee30);
            auVar25._0_4_ = uVar28 & *puVar2;
            auVar25._4_4_ = uVar28 & puVar2[1];
            auVar25._8_4_ = uVar28 & puVar2[2];
            auVar25._12_4_ = uVar28 & puVar2[3];
            puVar2 = (uint *)(iVar19 + 0x20 + DAT_100bee30);
            auVar32._0_4_ = uVar36 & *puVar2;
            auVar32._4_4_ = uVar36 & puVar2[1];
            auVar32._8_4_ = uVar36 & puVar2[2];
            auVar32._12_4_ = uVar36 & puVar2[3];
            puVar2 = (uint *)(iVar19 + 0x30 + DAT_100bee30);
            auVar42._0_4_ = uVar17 & *puVar2;
            auVar42._4_4_ = uVar17 & puVar2[1];
            auVar42._8_4_ = uVar17 & puVar2[2];
            auVar42._12_4_ = uVar17 & puVar2[3];
            auVar42 = auVar41 | auVar25 | auVar32 | auVar42;
          }
          bVar10 = *(byte *)(param_2 + 0xb + iVar21);
          local_50 = auVar42;
          if ((bVar10 & 2) != 0) {
            local_50._0_4_ = auVar42._0_4_ & _DAT_100b9320;
            local_50._4_4_ = auVar42._4_4_ & uRam100b9324;
            local_50._8_4_ = auVar42._8_4_ & uRam100b9328;
            local_50._12_4_ = auVar42._12_4_ & uRam100b932c;
          }
          if ((bVar10 & 1) != 0) {
            auVar43._0_4_ = local_50._0_4_ ^ _DAT_100b9330;
            auVar43._4_4_ = local_50._4_4_ ^ uRam100b9334;
            auVar43._8_4_ = local_50._8_4_ ^ uRam100b9338;
            auVar43._12_4_ = local_50._12_4_ ^ uRam100b933c;
            local_50 = auVar43;
          }
        }
        uVar12 = *(ushort *)(param_2 + 5 + iVar21);
        if (uVar12 != 0xffff) {
          iVar19 = 0;
          if (*(char *)(param_2 + 0xf + iVar21) == '\x01') {
            iVar19 = iVar22;
          }
          iVar19 = (uint)uVar12 + iVar19;
          if (((ushort)(uVar12 - 0x26) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
            iVar19 = 0x426;
          }
          bVar10 = *(byte *)(param_2 + 9 + iVar21);
          pfVar1 = (float *)(param_1 + iVar19 * 0x10);
          local_60 = *pfVar1;
          fStack_5c = pfVar1[1];
          fStack_58 = pfVar1[2];
          fStack_54 = pfVar1[3];
          if (bVar10 != 0xe4) {
            iVar19 = (uint)bVar10 * 0x40;
            puVar3 = (uint *)(iVar19 + 0x10 + DAT_100bee30);
            uVar58 = (uint)fStack_5c & puVar3[2];
            uVar59 = (uint)fStack_5c & puVar3[3];
            puVar2 = (uint *)(iVar19 + DAT_100bee30);
            uVar17 = (uint)local_60 & puVar2[1];
            uVar28 = (uint)local_60 & puVar2[2];
            uVar29 = (uint)local_60 & puVar2[3];
            puVar4 = (uint *)(iVar19 + 0x20 + DAT_100bee30);
            uVar36 = (uint)fStack_58 & puVar4[3];
            puVar5 = (uint *)(iVar19 + 0x30 + DAT_100bee30);
            local_60 = (float)((uint)fStack_5c & *puVar3 | (uint)local_60 & *puVar2 |
                               (uint)fStack_58 & *puVar4 | (uint)fStack_54 & *puVar5);
            fStack_5c = (float)((uint)fStack_5c & puVar3[1] | uVar17 | (uint)fStack_58 & puVar4[1] |
                               (uint)fStack_54 & puVar5[1]);
            fStack_58 = (float)(uVar58 | uVar28 | (uint)fStack_58 & puVar4[2] |
                               (uint)fStack_54 & puVar5[2]);
            fStack_54 = (float)(uVar59 | uVar29 | uVar36 | (uint)fStack_54 & puVar5[3]);
          }
          bVar10 = *(byte *)(param_2 + 0xc + iVar21);
          if ((bVar10 & 2) != 0) {
            local_60 = (float)((uint)local_60 & _DAT_100b9320);
            fStack_5c = (float)((uint)fStack_5c & uRam100b9324);
            fStack_58 = (float)((uint)fStack_58 & uRam100b9328);
            fStack_54 = (float)((uint)fStack_54 & uRam100b932c);
          }
          if ((bVar10 & 1) != 0) {
            local_60 = (float)((uint)local_60 ^ _DAT_100b9330);
            fStack_5c = (float)((uint)fStack_5c ^ uRam100b9334);
            fStack_58 = (float)((uint)fStack_58 ^ uRam100b9338);
            fStack_54 = (float)((uint)fStack_54 ^ uRam100b933c);
          }
        }
      }
      uVar17 = bVar9 & 0x7f;
      fVar57 = local_40._0_4_;
      fVar53 = local_40._4_4_;
      fVar60 = local_40._8_4_;
      fVar39 = local_40._12_4_;
      if (0x4e < uVar17) {
        if (uVar17 == 0x4f) {
          fVar53 = ABS(fVar39);
          iVar22 = ((uint)fVar57 >> 0x17) - 0x7f;
          fVar60 = 0.0;
          bVar16 = fVar53 <= 0.0;
          uVar17 = (int)fVar53 >> 0x17;
          bVar13 = fVar53 <= 0.0;
          if (0x7e < uVar17) {
            fVar60 = (float)(int)(uVar17 - 0x7e);
            fVar53 = fVar53 / *(float *)(*(int *)((int)this + 0xa48) + -0x1f8 + uVar17 * 4);
          }
          auVar27._0_4_ = -(uint)bVar13 & _DAT_100b9360;
          auVar27._4_4_ = -(uint)(ABS(fVar39) <= 0.0) & uRam100b9364;
          auVar27._8_4_ = -(uint)(ABS(fVar39) <= 0.0) & uRam100b9368;
          auVar27._12_4_ = -(uint)(ABS(fVar39) <= 0.0) & uRam100b936c;
          iVar19 = 0;
          if (-1 < (int)(fVar53 * 1024.0)) {
            iVar19 = (int)(fVar53 * 1024.0);
          }
          auVar49._0_4_ =
               ~-(uint)bVar13 &
               (uint)(float)((double)iVar22 + (double)(&DAT_100b5ce0)[-(iVar22 >> 0x1f)]);
          auVar49._4_4_ = ~-(uint)(ABS(fVar39) <= 0.0) & ((uint)fVar57 & 0x7fffff | 0x3f800000);
          auVar49._8_4_ =
               ~-(uint)(ABS(fVar39) <= 0.0) &
               (~-(uint)bVar16 &
                (uint)(fVar60 + *(float *)(*(int *)((int)this + 0xa40) + iVar19 * 4)) |
               -(uint)bVar16 & 0xff800000);
          auVar49._12_4_ = ~-(uint)(ABS(fVar39) <= 0.0) & 0x3f800000;
          _local_70 = auVar49 | auVar27;
        }
        goto switchD_100097f0_caseD_2;
      }
      if (uVar17 == 0x4e) {
        iVar22 = (int)fVar39;
        if (fVar39 < 0.0) {
          iVar22 = (int)fVar39 + -1;
        }
        fVar57 = (float)iVar22;
        uVar28 = (uint)ABS(fVar57);
        uVar17 = 0x400;
        if (uVar28 < 0x401) {
          uVar17 = uVar28;
        }
        fVar53 = *(float *)(*(int *)((int)this + 0xa48) + uVar17 * 4) *
                 *(float *)(*(int *)((int)this + 0xa44) +
                           (int)((ABS(fVar57) - (float)(int)uVar28) * 1024.0) * 4);
        auVar55 = rcpss(ZEXT416((uint)fVar53),ZEXT416((uint)fVar53));
        uVar28 = (uint)ABS(fVar39);
        uVar29 = auVar55._0_4_ & -(uint)(fVar57 < 0.0) | ~-(uint)(fVar57 < 0.0) & (uint)fVar53;
        uVar17 = 0x400;
        if (uVar28 < 0x401) {
          uVar17 = uVar28;
        }
        fVar53 = *(float *)(*(int *)((int)this + 0xa48) + uVar17 * 4) *
                 *(float *)(*(int *)((int)this + 0xa44) +
                           (int)((ABS(fVar39) - (float)(int)uVar28) * 1024.0) * 4);
        auVar55 = rcpss(ZEXT416((uint)fVar53),ZEXT416((uint)fVar53));
        uVar17 = auVar55._0_4_ & -(uint)(fVar39 < 0.0) | ~-(uint)(fVar39 < 0.0) & (uint)fVar53;
        auVar48._4_4_ = uVar17;
        auVar48._0_4_ = uVar29;
        auVar48._8_4_ = uVar17;
        auVar48._12_4_ = 0x3f800000;
        register0x00001308 = auVar48._8_8_;
        local_70._4_4_ = fVar39 - fVar57;
        local_70._0_4_ = uVar29;
        goto switchD_100097f0_caseD_2;
      }
      fVar47 = local_50._0_4_;
      fVar50 = local_50._4_4_;
      fVar51 = local_50._8_4_;
      fVar30 = local_50._12_4_;
      switch(uVar17 - 1) {
      case 0:
        _local_70 = local_40;
        if (*(short *)(param_2 + 0x11 + iVar21) == 0x429) {
          local_70._0_4_ = (undefined4)(int)fVar57;
          local_70._4_4_ = (undefined4)(int)fVar53;
          fStack_68 = (float)(int)fVar60;
          fStack_64 = (float)(int)fVar39;
        }
        break;
      case 1:
        local_70._0_4_ = fVar47 + fVar57;
        local_70._4_4_ = fVar50 + fVar53;
        fStack_68 = fVar51 + fVar60;
        fStack_64 = fVar30 + fVar39;
        break;
      case 3:
        local_70._0_4_ = fVar47 * fVar57 + local_60;
        local_70._4_4_ = fVar50 * fVar53 + fStack_5c;
        fStack_68 = fVar51 * fVar60 + fStack_58;
        fStack_64 = fVar30 * fVar39 + fStack_54;
        break;
      case 4:
        local_70._0_4_ = fVar47 * fVar57;
        local_70._4_4_ = fVar50 * fVar53;
        fStack_68 = fVar51 * fVar60;
        fStack_64 = fVar30 * fVar39;
        break;
      case 5:
        auVar55 = rcpss(local_40,local_40);
        fVar57 = auVar55._0_4_;
        goto LAB_10009845;
      case 6:
        auVar33._12_4_ = ABS(fVar39);
        auVar33._0_8_ = CONCAT44(fVar39,fVar39) & 0x7fffffff7fffffff;
        auVar33._8_4_ = auVar33._12_4_;
        auVar55 = rsqrtss(auVar33,auVar33);
        fVar57 = auVar55._0_4_;
LAB_10009845:
        uVar28 = ~-(uint)(ABS(fVar57) == _DAT_100b9370) & (uint)fVar57;
        uVar17 = -(uint)(ABS(fVar57) == _DAT_100b9370) & _DAT_100b9380;
LAB_1000985d:
        fVar57 = (float)(uVar28 | uVar17);
LAB_10009860:
        local_70._4_4_ = fVar57;
        local_70._0_4_ = fVar57;
        fStack_68 = fVar57;
        fStack_64 = fVar57;
        break;
      case 7:
        fVar50 = fVar50 * fVar53;
        fVar57 = fVar47 * fVar57 + fVar51 * fVar60;
        goto LAB_1000988d;
      case 8:
        fVar57 = fVar51 * fVar60 + fVar47 * fVar57;
        fVar50 = fVar30 * fVar39 + fVar50 * fVar53;
LAB_1000988d:
        fVar57 = fVar57 + fVar50;
        goto LAB_10009860;
      case 9:
        _local_70 = minps(local_40,local_50);
        break;
      case 10:
        _local_70 = maxps(local_40,local_50);
        break;
      case 0xb:
        bVar13 = fVar57 < fVar47;
        bVar16 = fVar53 < fVar50;
        bVar14 = fVar60 < fVar51;
        bVar15 = fVar39 < fVar30;
        goto LAB_100098c9;
      case 0xc:
        bVar13 = fVar47 <= fVar57;
        bVar16 = fVar50 <= fVar53;
        bVar14 = fVar51 <= fVar60;
        bVar15 = fVar30 <= fVar39;
LAB_100098c9:
        local_70 = CONCAT44(-(uint)bVar16,-(uint)bVar13) & 0x3f8000003f800000;
        fStack_68 = (float)(-(uint)bVar14 & 0x3f800000);
        fStack_64 = (float)(-(uint)bVar15 & 0x3f800000);
        break;
      case 0xd:
        uVar28 = (uint)ABS(fVar39);
        uVar17 = 0x400;
        if (uVar28 < 0x401) {
          uVar17 = uVar28;
        }
        fVar57 = *(float *)(*(int *)((int)this + 0xa48) + uVar17 * 4) *
                 *(float *)(*(int *)((int)this + 0xa44) +
                           (int)((ABS(fVar39) - (float)(int)uVar28) * 1024.0) * 4);
        uVar17 = ~-(uint)(fVar39 < 0.0) & (uint)fVar57;
        auVar55 = rcpss(ZEXT416((uint)fVar57),ZEXT416((uint)fVar57));
        uVar28 = auVar55._0_4_ & -(uint)(fVar39 < 0.0);
        goto LAB_1000985d;
      case 0xe:
        fVar57 = 0.0;
        fVar39 = ABS(fVar39);
        bVar13 = fVar39 <= 0.0;
        uVar17 = (int)fVar39 >> 0x17;
        if (0x7e < uVar17) {
          fVar57 = (float)(int)(uVar17 - 0x7e);
          fVar39 = fVar39 / *(float *)(*(int *)((int)this + 0xa48) + -0x1f8 + uVar17 * 4);
        }
        iVar22 = 0;
        if (-1 < (int)(fVar39 * 1024.0)) {
          iVar22 = (int)(fVar39 * 1024.0);
        }
        fVar57 = (float)(~-(uint)bVar13 &
                         (uint)(fVar57 + *(float *)(*(int *)((int)this + 0xa40) + iVar22 * 4)) |
                        -(uint)bVar13 & 0xff800000);
        goto LAB_10009860;
      case 0xf:
        auVar26._4_4_ = -(uint)(0.0 < fVar53);
        auVar26._0_4_ = -(uint)(0.0 < fVar57);
        auVar26._8_4_ = -(uint)(0.0 < fVar60);
        auVar26._12_4_ = -(uint)(0.0 < fVar39);
        fVar39 = 0.0;
        uVar17 = movmskps(uVar17 - 1,auVar26);
        _local_70 = _DAT_100b9390;
        if (((uVar17 & 1) != 0) &&
           (_local_70 = _DAT_100b9390 | ZEXT416((uint)fVar57) << 0x20, (uVar17 & 2) != 0)) {
          auVar55 = maxps(_DAT_100b93b0,local_40);
          auVar55 = minps(_DAT_100b93a0,auVar55);
          uVar17 = (uint)(fVar53 * 1024.0);
          if (auVar55._12_4_ == 0.0) {
            fVar39 = 1.0;
          }
          if (uVar17 != 0) {
            if ((0x3ff < uVar17) ||
               (fVar57 = *(float *)(*(int *)((int)this + 0xa40) + uVar17 * 4) * auVar55._12_4_,
               1024.0 <= ABS(fVar57))) {
              dVar23 = (double)fVar53;
              FUN_100acad0();
              fVar39 = (float)dVar23;
            }
            else {
              iVar22 = (int)fVar57;
              iVar19 = (int)((fVar57 - (float)iVar22) * 1024.0);
              if (iVar22 < 0) {
                fVar39 = *(float *)(*(int *)((int)this + 0xa44) + iVar19 * 4) /
                         *(float *)(*(int *)((int)this + 0xa48) + iVar22 * -4);
              }
              else {
                fVar39 = *(float *)(*(int *)((int)this + 0xa44) + iVar19 * 4) *
                         *(float *)(*(int *)((int)this + 0xa48) + iVar22 * 4);
              }
            }
          }
          auVar38 = ZEXT416((uint)fVar39) << 0x40;
          goto LAB_10009a35;
        }
        break;
      case 0x10:
        local_70._4_4_ = fVar50 * fVar53;
        auVar38._0_12_ = ZEXT812(0);
        auVar38._12_4_ = fVar30;
        local_70._0_4_ = 0x3f800000;
        fStack_68 = fVar60;
        fStack_64 = 0.0;
LAB_10009a35:
        _local_70 = _local_70 | auVar38;
        break;
      case 0x12:
        local_70._0_4_ = fVar57 - (float)(int)fVar57;
        local_70._4_4_ = fVar53 - (float)(int)fVar53;
        fStack_68 = fVar60 - (float)(int)fVar60;
        fStack_64 = fVar39 - (float)(int)fVar39;
        break;
      case 0x13:
        iVar19 = 0;
        if (*(char *)(param_2 + 0xe + iVar21) == '\x01') {
          iVar19 = iVar22;
        }
        uVar12 = *(ushort *)(param_2 + 3 + iVar21);
        iVar19 = iVar19 + (uint)uVar12;
        if (((ushort)(uVar12 - 0x26) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
          iVar19 = 0x426;
        }
        pfVar1 = (float *)(param_1 + iVar19 * 0x10);
        pfVar8 = (float *)(param_1 + 0x10 + iVar19 * 0x10);
        pfVar7 = (float *)(param_1 + 0x20 + iVar19 * 0x10);
        pfVar6 = (float *)(param_1 + 0x30 + iVar19 * 0x10);
        fVar47 = *pfVar1 * fVar57;
        fVar50 = pfVar1[1] * fVar53;
        fVar51 = pfVar1[2] * fVar60;
        fVar52 = pfVar1[3] * fVar39;
        fVar30 = *pfVar8 * fVar57;
        fVar34 = pfVar8[1] * fVar53;
        fVar35 = pfVar8[2] * fVar60;
        fVar37 = pfVar8[3] * fVar39;
        fVar40 = *pfVar7 * fVar57;
        fVar44 = pfVar7[1] * fVar53;
        fVar45 = pfVar7[2] * fVar60;
        fVar46 = pfVar7[3] * fVar39;
        fVar57 = *pfVar6 * fVar57;
        fVar53 = pfVar6[1] * fVar53;
        fVar60 = pfVar6[2] * fVar60;
        fVar39 = pfVar6[3] * fVar39;
        goto LAB_10009adf;
      case 0x14:
        iVar19 = 0;
        if (*(char *)(param_2 + 0xe + iVar21) == '\x01') {
          iVar19 = iVar22;
        }
        uVar12 = *(ushort *)(param_2 + 3 + iVar21);
        iVar19 = iVar19 + (uint)uVar12;
        if (((ushort)(uVar12 - 0x26) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
          iVar19 = 0x426;
        }
        pfVar1 = (float *)(param_1 + iVar19 * 0x10);
        fVar47 = *pfVar1;
        fVar50 = pfVar1[1];
        fVar51 = pfVar1[2];
        pfVar8 = (float *)(param_1 + 0x10 + iVar19 * 0x10);
        fVar30 = *pfVar8;
        fVar34 = pfVar8[1];
        fVar35 = pfVar8[2];
        pfVar7 = (float *)(param_1 + 0x20 + iVar19 * 0x10);
        fVar40 = *pfVar7;
        fVar44 = pfVar7[1];
        fVar45 = pfVar7[2];
        fVar52 = pfVar1[3] * fVar39;
        fVar37 = pfVar8[3] * fVar39;
        fVar46 = pfVar7[3] * fVar39;
        goto LAB_10009b5f;
      case 0x15:
        iVar19 = 0;
        if (*(char *)(param_2 + 0xe + iVar21) == '\x01') {
          iVar19 = iVar22;
        }
        uVar12 = *(ushort *)(param_2 + 3 + iVar21);
        iVar19 = iVar19 + (uint)uVar12;
        if (((ushort)(uVar12 - 0x26) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
          iVar19 = 0x426;
        }
        pfVar1 = (float *)(param_1 + iVar19 * 0x10);
        pfVar8 = (float *)(param_1 + 0x10 + iVar19 * 0x10);
        pfVar7 = (float *)(param_1 + 0x20 + iVar19 * 0x10);
        pfVar6 = (float *)(param_1 + 0x30 + iVar19 * 0x10);
        fVar47 = *pfVar1 * fVar57;
        fVar50 = pfVar1[1] * fVar53;
        fVar51 = pfVar1[2] * fVar60;
        fVar52 = pfVar1[3] * 0.0;
        fVar30 = *pfVar8 * fVar57;
        fVar34 = pfVar8[1] * fVar53;
        fVar35 = pfVar8[2] * fVar60;
        fVar37 = pfVar8[3] * 0.0;
        fVar40 = *pfVar7 * fVar57;
        fVar44 = pfVar7[1] * fVar53;
        fVar45 = pfVar7[2] * fVar60;
        fVar46 = pfVar7[3] * 0.0;
        fVar57 = *pfVar6 * fVar57;
        fVar53 = pfVar6[1] * fVar53;
        fVar60 = pfVar6[2] * fVar60;
        fVar39 = pfVar6[3] * 0.0;
        goto LAB_10009adf;
      case 0x16:
        iVar19 = 0;
        if (*(char *)(param_2 + 0xe + iVar21) == '\x01') {
          iVar19 = iVar22;
        }
        uVar12 = *(ushort *)(param_2 + 3 + iVar21);
        iVar19 = iVar19 + (uint)uVar12;
        if (((ushort)(uVar12 - 0x26) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
          iVar19 = 0x426;
        }
        pfVar1 = (float *)(param_1 + iVar19 * 0x10);
        fVar47 = *pfVar1;
        fVar50 = pfVar1[1];
        fVar51 = pfVar1[2];
        pfVar8 = (float *)(param_1 + 0x10 + iVar19 * 0x10);
        fVar30 = *pfVar8;
        fVar34 = pfVar8[1];
        fVar35 = pfVar8[2];
        pfVar7 = (float *)(param_1 + 0x20 + iVar19 * 0x10);
        fVar40 = *pfVar7;
        fVar44 = pfVar7[1];
        fVar45 = pfVar7[2];
        fVar52 = pfVar1[3] * 0.0;
        fVar37 = pfVar8[3] * 0.0;
        fVar46 = pfVar7[3] * 0.0;
LAB_10009b5f:
        fVar51 = fVar51 * fVar60;
        fVar50 = fVar50 * fVar53;
        fVar47 = fVar47 * fVar57;
        fVar45 = fVar45 * fVar60;
        fVar44 = fVar44 * fVar53;
        fVar40 = fVar40 * fVar57;
        fVar35 = fVar35 * fVar60;
        fVar34 = fVar34 * fVar53;
        fVar30 = fVar30 * fVar57;
        fVar57 = 0.0;
        fVar53 = 0.0;
        fVar60 = 0.0;
        fVar39 = 0.0;
LAB_10009adf:
        local_70._0_4_ = fVar52 + fVar50 + fVar51 + fVar47;
        local_70._4_4_ = fVar37 + fVar34 + fVar35 + fVar30;
        fStack_68 = fVar46 + fVar44 + fVar45 + fVar40;
        fStack_64 = fVar39 + fVar53 + fVar60 + fVar57;
        break;
      case 0x17:
        iVar19 = 0;
        if (*(char *)(param_2 + 0xe + iVar21) == '\x01') {
          iVar19 = iVar22;
        }
        uVar12 = *(ushort *)(param_2 + 3 + iVar21);
        iVar19 = iVar19 + (uint)uVar12;
        if (((ushort)(uVar12 - 0x26) < 0x401) && (0x3ff < iVar19 - 0x26U)) {
          iVar19 = 0x426;
        }
        pfVar1 = (float *)(param_1 + iVar19 * 0x10);
        pfVar8 = (float *)(param_1 + 0x10 + iVar19 * 0x10);
        local_70._0_4_ =
             pfVar1[3] * 0.0 + pfVar1[1] * fVar53 + pfVar1[2] * fVar60 + *pfVar1 * fVar57;
        local_70._4_4_ =
             pfVar8[3] * 0.0 + pfVar8[1] * fVar53 + pfVar8[2] * fVar60 + *pfVar8 * fVar57;
        fStack_68 = (float)local_70._0_4_;
        fStack_64 = (float)local_70._0_4_;
      }
switchD_100097f0_caseD_2:
      if (-1 < (char)bVar9) {
        uVar20 = (uint)*(ushort *)(param_2 + 0x11 + iVar21);
        iVar21 = (uint)*(byte *)(param_2 + 0x10 + iVar21) * 0x10;
        uVar17 = *(uint *)(iVar21 + 0x100b9224);
        uVar28 = *(uint *)(iVar21 + 0x100b9228);
        uVar29 = *(uint *)(iVar21 + 0x100b922c);
        puVar2 = (uint *)(param_1 + uVar20 * 0x10);
        uVar36 = puVar2[1];
        uVar58 = puVar2[2];
        uVar59 = puVar2[3];
        puVar3 = (uint *)(param_1 + uVar20 * 0x10);
        *puVar3 = ~*(uint *)(&DAT_100b9220 + iVar21) & *puVar2 |
                  *(uint *)(&DAT_100b9220 + iVar21) & local_70._0_4_;
        puVar3[1] = ~uVar17 & uVar36 | uVar17 & local_70._4_4_;
        puVar3[2] = ~uVar28 & uVar58 | uVar28 & local_70._8_4_;
        puVar3[3] = ~uVar29 & uVar59 | uVar29 & local_70._12_4_;
      }
      iVar18 = iVar18 + 1;
    }
    uVar17 = CONCAT31((int3)((uint)iVar18 >> 8),1);
  }
  return uVar17;
}

