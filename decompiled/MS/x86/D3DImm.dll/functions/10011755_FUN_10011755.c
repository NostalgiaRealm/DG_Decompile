/*
 * FUN_10011755 at 10011755
 * undefined __thiscall FUN_10011755(void * this, int * param_1, int param_2, uint param_3)
 * Address ranges: 10011755-10013504
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011755(void *this,int *param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uVar16;
  int *piVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  uint local_20;
  int *local_1c;
  uint local_18;
  
  piVar17 = (int *)param_1[9];
  if (piVar17 == (int *)0x0) {
    piVar17 = (int *)((int)this + 0x2c);
    param_1[9] = (int)piVar17;
  }
  iVar8 = *piVar17;
  iVar9 = piVar17[1];
  dVar3 = (double)(&DAT_100601f0)[-(iVar8 >> 0x1f)];
  dVar4 = (double)(&DAT_100601f0)[-(iVar9 >> 0x1f)];
  fVar1 = (float)piVar17[4];
  iVar10 = param_1[0xb];
  fVar55 = (float)((double)(piVar17[2] + iVar8) +
                  (double)(&DAT_100601f0)[-(piVar17[2] + iVar8 >> 0x1f)]);
  fVar46 = (float)((double)(piVar17[3] + iVar9) +
                  (double)(&DAT_100601f0)[-(piVar17[3] + iVar9 >> 0x1f)]);
  fVar2 = (float)piVar17[5];
  auVar45._0_8_ = CONCAT44(*(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 8));
  auVar45._8_4_ = *(undefined4 *)(iVar10 + 0x18);
  auVar45._12_4_ = 0;
  auVar33._0_8_ = CONCAT44(*(undefined4 *)(iVar10 + 0x14),*(undefined4 *)(iVar10 + 0xc));
  auVar33._8_4_ = *(undefined4 *)(iVar10 + 0x1c);
  auVar33._12_4_ = 0;
  if (*(char *)((int)param_1 + 0x1f) == '\0') {
    piVar17 = param_1 + 8;
    if (((*(char *)((int)param_1 + 0x21) != '\0') || ((char)*piVar17 != '\0')) &&
       (local_18 = 0, param_3 != 0)) {
      do {
        uVar21 = local_18;
        if (param_2 != 0) {
          uVar21 = (uint)*(ushort *)(param_2 + local_18 * 2);
        }
        auVar58 = *(undefined1 (*) [16])(param_1[3] * uVar21 + *param_1);
        if ((char)*piVar17 != '\0') {
          auVar34._4_4_ = -(uint)(auVar58._4_4_ < (float)((double)iVar9 + dVar4));
          auVar34._0_4_ = -(uint)(auVar58._0_4_ < (float)((double)iVar8 + dVar3));
          auVar34._8_4_ = -(uint)(auVar58._8_4_ < fVar1);
          auVar34._12_4_ = -(uint)(auVar58._12_4_ < 0.0);
          uVar23 = movmskps(param_1,auVar34);
          auVar35._4_4_ = -(uint)(fVar46 <= auVar58._4_4_);
          auVar35._0_4_ = -(uint)(fVar55 <= auVar58._0_4_);
          auVar35._8_4_ = -(uint)(fVar2 <= auVar58._8_4_);
          auVar35._12_4_ = -(uint)(0.0 <= auVar58._12_4_);
          uVar20 = movmskps(piVar17,auVar35);
          uVar21 = *(uint *)(&DAT_1005d360 + (((uVar20 & 2) * 2 | uVar23 & 3) * 2 | uVar20 & 1) * 4)
          ;
          *(uint *)param_1[0xb] = *(uint *)param_1[0xb] | uVar21;
          *(uint *)(param_1[0xb] + 4) = *(uint *)(param_1[0xb] + 4) & (uVar21 | 0x2a);
          uVar21 = *(uint *)(&DAT_1005d34c + (((uVar20 & 7) >> 1 | uVar23 & 4) >> 1) * 4);
          *(uint *)param_1[0xb] = *(uint *)param_1[0xb] | uVar21;
          *(uint *)(param_1[0xb] + 4) = *(uint *)(param_1[0xb] + 4) & (uVar21 | 0x15);
        }
        local_18 = local_18 + 1;
        auVar45 = minps(auVar45,auVar58);
        auVar33 = maxps(auVar33,auVar58);
      } while (local_18 < param_3);
    }
    goto LAB_100134cd;
  }
  fVar72 = (float)piVar17[5];
  fVar63 = (float)piVar17[4];
  *(ulonglong *)(param_1 + 0x10) =
       CONCAT44((float)((double)piVar17[3] + (double)(&DAT_100601f0)[-(piVar17[3] >> 0x1f)]) * -0.5,
                (float)((double)piVar17[2] + (double)(&DAT_100601f0)[-(piVar17[2] >> 0x1f)]) * 0.5);
  param_1[0x12] = (int)(fVar72 - fVar63);
  param_1[0x13] = 0x3f800000;
  iVar18 = piVar17[1];
  dVar5 = (double)(&DAT_100601f0)[-(iVar18 >> 0x1f)];
  iVar11 = piVar17[3];
  dVar6 = (double)(&DAT_100601f0)[-(iVar11 >> 0x1f)];
  iVar22 = piVar17[4];
  param_1[0x14] =
       (int)((float)((double)piVar17[2] + (double)(&DAT_100601f0)[-(piVar17[2] >> 0x1f)]) * 0.5 +
            (float)((double)*piVar17 + (double)(&DAT_100601f0)[-(*piVar17 >> 0x1f)]));
  param_1[0x15] = (int)((float)((double)iVar11 + dVar6) * 0.5 + (float)((double)iVar18 + dVar5));
  param_1[0x16] = iVar22;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar21 = *(uint *)((int)this + 0x4f0) & 0x3f;
  *(bool *)(param_1 + 0x40) = uVar21 != 0;
  if ((char)param_1[8] != '\0') {
    if (uVar21 == 0) {
      *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) & 0xfffff03f;
    }
    else {
      iVar10 = *(int *)((int)this + 0x234);
      iVar22 = *(int *)((int)this + 0x238);
      iVar18 = *(int *)((int)this + 0x23c);
      param_1[0x20] = *(int *)((int)this + 0x230);
      param_1[0x21] = iVar10;
      param_1[0x22] = iVar22;
      param_1[0x23] = iVar18;
      iVar10 = *(int *)((int)this + 0x244);
      iVar22 = *(int *)((int)this + 0x248);
      iVar18 = *(int *)((int)this + 0x24c);
      param_1[0x24] = *(int *)((int)this + 0x240);
      param_1[0x25] = iVar10;
      param_1[0x26] = iVar22;
      param_1[0x27] = iVar18;
      iVar10 = *(int *)((int)this + 0x254);
      iVar22 = *(int *)((int)this + 600);
      iVar18 = *(int *)((int)this + 0x25c);
      param_1[0x28] = *(int *)((int)this + 0x250);
      param_1[0x29] = iVar10;
      param_1[0x2a] = iVar22;
      param_1[0x2b] = iVar18;
      iVar10 = *(int *)((int)this + 0x264);
      iVar22 = *(int *)((int)this + 0x268);
      iVar18 = *(int *)((int)this + 0x26c);
      param_1[0x2c] = *(int *)((int)this + 0x260);
      param_1[0x2d] = iVar10;
      param_1[0x2e] = iVar22;
      param_1[0x2f] = iVar18;
      iVar10 = *(int *)((int)this + 0x274);
      iVar22 = *(int *)((int)this + 0x278);
      iVar18 = *(int *)((int)this + 0x27c);
      param_1[0x30] = *(int *)((int)this + 0x270);
      param_1[0x31] = iVar10;
      param_1[0x32] = iVar22;
      param_1[0x33] = iVar18;
      iVar10 = *(int *)((int)this + 0x284);
      iVar22 = *(int *)((int)this + 0x288);
      iVar18 = *(int *)((int)this + 0x28c);
      param_1[0x34] = *(int *)((int)this + 0x280);
      param_1[0x35] = iVar10;
      param_1[0x36] = iVar22;
      param_1[0x37] = iVar18;
    }
  }
  if ((param_1[0xc] == 0) && ((char)param_1[0x40] == '\0')) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x101) = uVar16;
  *(bool *)((int)param_1 + 0x102) = param_1[1] != 0;
  uVar21 = *(uint *)((int)this + 0x4ec);
  if ((uint)param_1[6] <= *(uint *)((int)this + 0x4ec)) {
    uVar21 = param_1[6];
  }
  if (uVar21 == 0) {
    if (param_1[10] == 0) {
      FUN_10008c2c((int)this);
      param_1[10] = *(int *)((int)this + 0x9cc) + 0x800;
    }
  }
  else {
    FUN_10008b50((int)this);
  }
  local_1c = param_1 + 10;
  if (uVar21 == 0) {
    local_20 = 0;
    if (param_3 != 0) {
      local_80 = CONCAT44(fVar46,fVar55);
      fStack_74 = 0.0;
      fStack_78 = fVar2;
      do {
        uVar21 = local_20;
        if (param_2 != 0) {
          uVar21 = (uint)*(ushort *)(param_2 + local_20 * 2);
        }
        fVar72 = *(float *)(*param_1 + 8 + param_1[3] * uVar21);
        pfVar19 = (float *)(*param_1 + param_1[3] * uVar21);
        fVar63 = *pfVar19;
        fVar64 = pfVar19[1];
        if (*(char *)((int)param_1 + 0x102) != '\0') {
          fStack_78 = *(float *)(param_1[1] + 8 + param_1[4] * uVar21);
          local_80 = *(undefined8 *)(param_1[1] + param_1[4] * uVar21);
          fStack_74 = 1.0;
        }
        fVar65 = 0.0;
        fVar66 = 0.0;
        fVar56 = 0.0;
        fVar67 = 0.0;
        local_60._0_4_ = 0.0;
        local_60._4_4_ = 0.0;
        fStack_58 = 0.0;
        fStack_54 = 0.0;
        if (*(char *)((int)param_1 + 0x101) != '\0') {
          iVar10 = *(int *)((int)this + 0x9cc);
          local_60._0_4_ =
               *(float *)(iVar10 + 0x28c) * 1.0 + fVar64 * *(float *)(iVar10 + 0x284) +
               fVar72 * *(float *)(iVar10 + 0x288) + fVar63 * *(float *)(iVar10 + 0x280);
          local_60._4_4_ =
               *(float *)(iVar10 + 0x29c) * 1.0 + *(float *)(iVar10 + 0x294) * fVar64 +
               *(float *)(iVar10 + 0x298) * fVar72 + *(float *)(iVar10 + 0x290) * fVar63;
          fStack_58 = *(float *)(iVar10 + 0x2ac) * 1.0 + *(float *)(iVar10 + 0x2a4) * fVar64 +
                      *(float *)(iVar10 + 0x2a8) * fVar72 + *(float *)(iVar10 + 0x2a0) * fVar63;
          fStack_54 = *(float *)(iVar10 + 700) * 1.0 + *(float *)(iVar10 + 0x2b4) * fVar64 +
                      *(float *)(iVar10 + 0x2b8) * fVar72 + *(float *)(iVar10 + 0x2b0) * fVar63;
        }
        if (*(char *)((int)param_1 + 0x102) != '\0') {
          FUN_10008b06(this,10);
          iVar10 = *(int *)((int)this + 0x9cc);
          fVar65 = *(float *)(iVar10 + 0x60c) * fStack_74 +
                   *(float *)(iVar10 + 0x604) * local_80._4_4_ +
                   *(float *)(iVar10 + 0x608) * fStack_78 +
                   *(float *)(iVar10 + 0x600) * (float)local_80;
          fVar66 = *(float *)(iVar10 + 0x61c) * fStack_74 +
                   *(float *)(iVar10 + 0x614) * local_80._4_4_ +
                   *(float *)(iVar10 + 0x618) * fStack_78 +
                   *(float *)(iVar10 + 0x610) * (float)local_80;
          fVar56 = *(float *)(iVar10 + 0x62c) * fStack_74 +
                   *(float *)(iVar10 + 0x624) * local_80._4_4_ +
                   *(float *)(iVar10 + 0x628) * fStack_78 +
                   *(float *)(iVar10 + 0x620) * (float)local_80;
          fVar67 = *(float *)(iVar10 + 0x63c) * fStack_74 +
                   *(float *)(iVar10 + 0x634) * local_80._4_4_ +
                   *(float *)(iVar10 + 0x638) * fStack_78 +
                   *(float *)(iVar10 + 0x630) * (float)local_80;
        }
        pfVar19 = (float *)*local_1c;
        fVar70 = pfVar19[3] * 1.0 + fVar64 * pfVar19[1] + fVar72 * pfVar19[2] + fVar63 * *pfVar19;
        fVar71 = pfVar19[7] * 1.0 + pfVar19[5] * fVar64 + pfVar19[6] * fVar72 + pfVar19[4] * fVar63;
        fVar60 = pfVar19[0xb] * 1.0 + pfVar19[9] * fVar64 +
                 pfVar19[10] * fVar72 + pfVar19[8] * fVar63;
        fVar72 = pfVar19[0xf] * 1.0 + pfVar19[0xd] * fVar64 +
                 pfVar19[0xe] * fVar72 + pfVar19[0xc] * fVar63;
        if (param_1[0xc] != 0) {
          pfVar19 = (float *)(local_20 * 0x20 + param_1[0xc]);
          *pfVar19 = (float)local_60;
          pfVar19[1] = local_60._4_4_;
          pfVar19[2] = fStack_58;
          pfVar19[3] = fStack_54;
          pfVar19 = (float *)((local_20 * 0x20 | 0x10) + param_1[0xc]);
          *pfVar19 = fVar65;
          pfVar19[1] = fVar66;
          pfVar19[2] = fVar56;
          pfVar19[3] = fVar67;
        }
        local_18 = 0;
        auVar58._4_4_ = fVar72;
        auVar58._0_4_ = fVar72;
        auVar58._8_4_ = fVar72;
        auVar58._12_4_ = fVar72;
        if ((char)param_1[8] != '\0') {
          puVar12 = (uint *)param_1[0xb];
          local_18 = 0;
          pfVar19 = (float *)0x0;
          if ((char)param_1[0x40] != '\0') {
            pfVar19 = (float *)(param_1 + 0x20);
          }
          if (pfVar19 == (float *)0x0) {
            puVar12[1] = puVar12[1] & 0xfffff03f;
            uVar21 = 0;
          }
          else {
            uVar21 = *(uint *)((int)this + 0x4f0);
            fVar63 = 0.0;
            fVar64 = 0.0;
            if ((uVar21 & 1) != 0) {
              fVar63 = fStack_58 * pfVar19[2] + (float)local_60 * *pfVar19 +
                       fStack_54 * pfVar19[3] + local_60._4_4_ * pfVar19[1];
            }
            fVar65 = 0.0;
            if ((uVar21 & 2) != 0) {
              fVar65 = pfVar19[0x1a] * fStack_58 + pfVar19[0x18] * (float)local_60 +
                       pfVar19[0x1b] * fStack_54 + pfVar19[0x19] * local_60._4_4_;
            }
            fVar66 = 0.0;
            if ((uVar21 & 4) != 0) {
              fVar66 = pfVar19[0x32] * fStack_58 + pfVar19[0x30] * (float)local_60 +
                       pfVar19[0x33] * fStack_54 + pfVar19[0x31] * local_60._4_4_;
            }
            fVar56 = 0.0;
            if ((uVar21 & 8) != 0) {
              fVar56 = pfVar19[0x4a] * fStack_58 + pfVar19[0x48] * (float)local_60 +
                       pfVar19[0x4b] * fStack_54 + pfVar19[0x49] * local_60._4_4_;
            }
            if ((uVar21 & 0x10) != 0) {
              fVar64 = pfVar19[0x62] * fStack_58 + pfVar19[0x60] * (float)local_60 +
                       pfVar19[99] * fStack_54 + pfVar19[0x61] * local_60._4_4_;
            }
            fVar67 = 0.0;
            if ((uVar21 & 0x20) != 0) {
              fVar67 = pfVar19[0x7a] * fStack_58 + pfVar19[0x78] * (float)local_60 +
                       pfVar19[0x7b] * fStack_54 + pfVar19[0x79] * local_60._4_4_;
            }
            auVar50._4_4_ = -(uint)(fVar65 < 0.0);
            auVar50._0_4_ = -(uint)(fVar63 < 0.0);
            auVar50._8_4_ = -(uint)(fVar66 < 0.0);
            auVar50._12_4_ = -(uint)(fVar56 < 0.0);
            auVar54._4_4_ = -(uint)(fVar67 < 0.0);
            auVar54._0_4_ = -(uint)(fVar64 < 0.0);
            auVar54._8_8_ = 0;
            uVar20 = movmskps(pfVar19,auVar50);
            uVar21 = movmskps(uVar20 & 0xf,auVar54);
            local_18 = *(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4) |
                       *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4);
            uVar21 = *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4) | 0x3ff;
            puVar12[1] = puVar12[1] &
                         (*(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4) | 0xc3f) & uVar21;
          }
          auVar30._4_4_ = -(uint)(fVar70 * 1.0 + fVar72 < 0.0);
          auVar30._0_4_ = -(uint)(fVar70 * -1.0 + fVar72 < 0.0);
          auVar30._8_4_ = -(uint)(fVar71 * -1.0 + fVar72 < 0.0);
          auVar30._12_4_ = -(uint)(fVar71 * 1.0 + fVar72 < 0.0);
          uVar21 = movmskps(uVar21,auVar30);
          uVar21 = *(uint *)(&DAT_1005d360 + (uVar21 & 0xf) * 4);
          uVar23 = (uVar21 | 0x30) & puVar12[1];
          puVar12[1] = uVar23;
          auVar31._4_4_ = -(uint)(fVar60 * 1.0 < 0.0);
          auVar31._0_4_ = -(uint)(fVar60 * -1.0 + fVar72 < 0.0);
          auVar31._8_4_ = -(uint)(fVar60 * -1.0 < 0.0);
          auVar31._12_4_ = -(uint)(fVar60 * 1.0 < 0.0);
          uVar20 = movmskps(puVar12,auVar31);
          local_18 = local_18 | *(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | uVar21;
          puVar12[1] = (*(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | 0xf) & uVar23;
          *puVar12 = *puVar12 | local_18;
        }
        if (param_1[0xe] != 0) {
          *(float *)(param_1[0xe] + 4) = fVar70;
          *(float *)(param_1[0xe] + 8) = fVar71;
          *(float *)(param_1[0xe] + 0xc) = fVar60;
          *(uint *)param_1[0xe] = local_18;
          param_1[0xe] = param_1[0xe] + 0x10;
        }
        auVar42._0_4_ = fVar70 + 0.0;
        auVar42._4_4_ = fVar71 + 0.0;
        auVar42._8_4_ = fVar60 + 0.0;
        auVar42._12_4_ = 0x3f800000;
        auVar58 = divps(auVar42,auVar58);
        auVar43._0_4_ = auVar58._0_4_ * (float)param_1[0x10] + (float)param_1[0x14];
        auVar43._4_4_ = auVar58._4_4_ * (float)param_1[0x11] + (float)param_1[0x15];
        auVar43._8_4_ = auVar58._8_4_ * (float)param_1[0x12] + (float)param_1[0x16];
        auVar43._12_4_ = auVar58._12_4_ * (float)param_1[0x13] + (float)param_1[0x17];
        if (local_20 == 0) {
          *(undefined1 (*) [16])(param_1 + 0x1c) = auVar43;
          *(undefined1 (*) [16])(param_1 + 0x18) = auVar43;
        }
        else {
          auVar58 = minps(*(undefined1 (*) [16])(param_1 + 0x18),auVar43);
          *(undefined1 (*) [16])(param_1 + 0x18) = auVar58;
          auVar58 = maxps(*(undefined1 (*) [16])(param_1 + 0x1c),auVar43);
          *(undefined1 (*) [16])(param_1 + 0x1c) = auVar58;
        }
        pauVar13 = (undefined1 (*) [16])param_1[0xd];
        if (pauVar13 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x22) == '\0') || (local_18 == 0)) {
            *pauVar13 = auVar43;
          }
          else {
            *(float *)(*pauVar13 + 0xc) = auVar43._12_4_;
          }
          param_1[0xd] = param_1[0xd] + param_1[0xf];
        }
        local_20 = local_20 + 1;
      } while (local_20 < param_3);
      goto LAB_100133b3;
    }
  }
  else {
    fStack_58 = fVar2;
    if (uVar21 == 1) {
      local_1c = (int *)0x0;
      if (param_3 != 0) {
        local_60 = CONCAT44(fVar46,fVar55);
        fStack_54 = 0.0;
        do {
          piVar17 = local_1c;
          if (param_2 != 0) {
            piVar17 = (int *)(uint)*(ushort *)(param_2 + (int)local_1c * 2);
          }
          fVar72 = *(float *)(*param_1 + 8 + param_1[3] * (int)piVar17);
          uVar7 = *(undefined8 *)(*param_1 + param_1[3] * (int)piVar17);
          if (*(char *)((int)param_1 + 0x102) != '\0') {
            fStack_58 = *(float *)(param_1[1] + 8 + param_1[4] * (int)piVar17);
            local_60 = *(undefined8 *)(param_1[1] + param_1[4] * (int)piVar17);
            fStack_54 = 1.0;
          }
          iVar10 = param_1[5];
          fVar64 = (float)uVar7;
          fVar65 = (float)((ulonglong)uVar7 >> 0x20);
          iVar22 = param_1[2];
          local_80._0_4_ = 0.0;
          local_80._4_4_ = 0.0;
          fStack_78 = 0.0;
          fStack_74 = 0.0;
          fVar63 = *(float *)(iVar22 + iVar10 * (int)piVar17);
          iVar18 = *(int *)((int)this + 0x9cc);
          fVar66 = (*(float *)(iVar18 + 0x2cc) * 1.0 + fVar65 * *(float *)(iVar18 + 0x2c4) +
                   fVar72 * *(float *)(iVar18 + 0x2c8) + fVar64 * *(float *)(iVar18 + 0x2c0)) *
                   (1.0 - fVar63) +
                   (*(float *)(iVar18 + 0x28c) * 1.0 + fVar65 * *(float *)(iVar18 + 0x284) +
                   fVar72 * *(float *)(iVar18 + 0x288) + fVar64 * *(float *)(iVar18 + 0x280)) *
                   fVar63;
          fVar56 = (*(float *)(iVar18 + 0x2dc) * 1.0 + *(float *)(iVar18 + 0x2d4) * fVar65 +
                   *(float *)(iVar18 + 0x2d8) * fVar72 + *(float *)(iVar18 + 0x2d0) * fVar64) *
                   (1.0 - fVar63) +
                   (*(float *)(iVar18 + 0x29c) * 1.0 + *(float *)(iVar18 + 0x294) * fVar65 +
                   *(float *)(iVar18 + 0x298) * fVar72 + *(float *)(iVar18 + 0x290) * fVar64) *
                   fVar63;
          fVar67 = (*(float *)(iVar18 + 0x2ec) * 1.0 + *(float *)(iVar18 + 0x2e4) * fVar65 +
                   *(float *)(iVar18 + 0x2e8) * fVar72 + *(float *)(iVar18 + 0x2e0) * fVar64) *
                   (1.0 - fVar63) +
                   (*(float *)(iVar18 + 0x2ac) * 1.0 + *(float *)(iVar18 + 0x2a4) * fVar65 +
                   *(float *)(iVar18 + 0x2a8) * fVar72 + *(float *)(iVar18 + 0x2a0) * fVar64) *
                   fVar63;
          fVar72 = (*(float *)(iVar18 + 0x2fc) * 1.0 + *(float *)(iVar18 + 0x2f4) * fVar65 +
                   *(float *)(iVar18 + 0x2f8) * fVar72 + *(float *)(iVar18 + 0x2f0) * fVar64) *
                   (1.0 - fVar63) +
                   (*(float *)(iVar18 + 700) * 1.0 + *(float *)(iVar18 + 0x2b4) * fVar65 +
                   *(float *)(iVar18 + 0x2b8) * fVar72 + *(float *)(iVar18 + 0x2b0) * fVar64) *
                   fVar63;
          if (*(char *)((int)param_1 + 0x102) != '\0') {
            FUN_10008b06(this,10);
            FUN_10008b06(this,0xb);
            fVar63 = *(float *)(iVar22 + iVar10 * (int)piVar17);
            iVar18 = *(int *)((int)this + 0x9cc);
            local_80._0_4_ =
                 (fStack_54 * *(float *)(iVar18 + 0x64c) +
                  local_60._4_4_ * *(float *)(iVar18 + 0x644) +
                 fStack_58 * *(float *)(iVar18 + 0x648) +
                 (float)local_60 * *(float *)(iVar18 + 0x640)) * (1.0 - fVar63) +
                 (fStack_54 * *(float *)(iVar18 + 0x60c) +
                  local_60._4_4_ * *(float *)(iVar18 + 0x604) +
                 fStack_58 * *(float *)(iVar18 + 0x608) +
                 (float)local_60 * *(float *)(iVar18 + 0x600)) * fVar63;
            local_80._4_4_ =
                 (*(float *)(iVar18 + 0x65c) * fStack_54 +
                  *(float *)(iVar18 + 0x654) * local_60._4_4_ +
                 *(float *)(iVar18 + 0x658) * fStack_58 +
                 *(float *)(iVar18 + 0x650) * (float)local_60) * (1.0 - fVar63) +
                 (*(float *)(iVar18 + 0x61c) * fStack_54 +
                  *(float *)(iVar18 + 0x614) * local_60._4_4_ +
                 *(float *)(iVar18 + 0x618) * fStack_58 +
                 *(float *)(iVar18 + 0x610) * (float)local_60) * fVar63;
            fStack_78 = (*(float *)(iVar18 + 0x66c) * fStack_54 +
                         *(float *)(iVar18 + 0x664) * local_60._4_4_ +
                        *(float *)(iVar18 + 0x668) * fStack_58 +
                        *(float *)(iVar18 + 0x660) * (float)local_60) * (1.0 - fVar63) +
                        (*(float *)(iVar18 + 0x62c) * fStack_54 +
                         *(float *)(iVar18 + 0x624) * local_60._4_4_ +
                        *(float *)(iVar18 + 0x628) * fStack_58 +
                        *(float *)(iVar18 + 0x620) * (float)local_60) * fVar63;
            fStack_74 = (*(float *)(iVar18 + 0x67c) * fStack_54 +
                         *(float *)(iVar18 + 0x674) * local_60._4_4_ +
                        *(float *)(iVar18 + 0x678) * fStack_58 +
                        *(float *)(iVar18 + 0x670) * (float)local_60) * (1.0 - fVar63) +
                        (*(float *)(iVar18 + 0x63c) * fStack_54 +
                         *(float *)(iVar18 + 0x634) * local_60._4_4_ +
                        *(float *)(iVar18 + 0x638) * fStack_58 +
                        *(float *)(iVar18 + 0x630) * (float)local_60) * fVar63;
          }
          fVar63 = fVar72 * *(float *)(iVar18 + 0x78c) + fVar56 * *(float *)(iVar18 + 0x784) +
                   fVar67 * *(float *)(iVar18 + 0x788) + fVar66 * *(float *)(iVar18 + 0x780);
          fVar64 = *(float *)(iVar18 + 0x79c) * fVar72 + *(float *)(iVar18 + 0x794) * fVar56 +
                   *(float *)(iVar18 + 0x798) * fVar67 + *(float *)(iVar18 + 0x790) * fVar66;
          fVar65 = *(float *)(iVar18 + 0x7ac) * fVar72 + *(float *)(iVar18 + 0x7a4) * fVar56 +
                   *(float *)(iVar18 + 0x7a8) * fVar67 + *(float *)(iVar18 + 0x7a0) * fVar66;
          fVar70 = *(float *)(iVar18 + 0x7bc) * fVar72 + *(float *)(iVar18 + 0x7b4) * fVar56 +
                   *(float *)(iVar18 + 0x7b8) * fVar67 + *(float *)(iVar18 + 0x7b0) * fVar66;
          if (param_1[0xc] != 0) {
            pfVar19 = (float *)((int)local_1c * 0x20 + param_1[0xc]);
            *pfVar19 = fVar66;
            pfVar19[1] = fVar56;
            pfVar19[2] = fVar67;
            pfVar19[3] = fVar72;
            pfVar19 = (float *)(((int)local_1c * 0x20 | 0x10U) + param_1[0xc]);
            *pfVar19 = (float)local_80;
            pfVar19[1] = local_80._4_4_;
            pfVar19[2] = fStack_78;
            pfVar19[3] = fStack_74;
          }
          local_18 = 0;
          auVar69._4_4_ = fVar70;
          auVar69._0_4_ = fVar70;
          auVar69._8_4_ = fVar70;
          auVar69._12_4_ = fVar70;
          if ((char)param_1[8] != '\0') {
            puVar12 = (uint *)param_1[0xb];
            local_18 = 0;
            pfVar19 = (float *)0x0;
            if ((char)param_1[0x40] != '\0') {
              pfVar19 = (float *)(param_1 + 0x20);
            }
            if (pfVar19 == (float *)0x0) {
              puVar12[1] = puVar12[1] & 0xfffff03f;
              uVar21 = 0;
            }
            else {
              uVar21 = *(uint *)((int)this + 0x4f0);
              fVar71 = 0.0;
              fVar60 = 0.0;
              if ((uVar21 & 1) != 0) {
                fVar71 = pfVar19[2] * fVar67 + *pfVar19 * fVar66 +
                         pfVar19[3] * fVar72 + pfVar19[1] * fVar56;
              }
              fVar61 = 0.0;
              if ((uVar21 & 2) != 0) {
                fVar61 = pfVar19[0x1a] * fVar67 + pfVar19[0x18] * fVar66 +
                         pfVar19[0x1b] * fVar72 + pfVar19[0x19] * fVar56;
              }
              fVar62 = 0.0;
              if ((uVar21 & 4) != 0) {
                fVar62 = pfVar19[0x32] * fVar67 + pfVar19[0x30] * fVar66 +
                         pfVar19[0x33] * fVar72 + pfVar19[0x31] * fVar56;
              }
              fVar36 = 0.0;
              if ((uVar21 & 8) != 0) {
                fVar36 = pfVar19[0x4a] * fVar67 + pfVar19[0x48] * fVar66 +
                         pfVar19[0x4b] * fVar72 + pfVar19[0x49] * fVar56;
              }
              if ((uVar21 & 0x10) != 0) {
                fVar60 = pfVar19[0x62] * fVar67 + pfVar19[0x60] * fVar66 +
                         pfVar19[99] * fVar72 + pfVar19[0x61] * fVar56;
              }
              fVar37 = 0.0;
              if ((uVar21 & 0x20) != 0) {
                fVar37 = pfVar19[0x7a] * fVar67 + pfVar19[0x78] * fVar66 +
                         pfVar19[0x7b] * fVar72 + pfVar19[0x79] * fVar56;
              }
              auVar49._4_4_ = -(uint)(fVar61 < 0.0);
              auVar49._0_4_ = -(uint)(fVar71 < 0.0);
              auVar49._8_4_ = -(uint)(fVar62 < 0.0);
              auVar49._12_4_ = -(uint)(fVar36 < 0.0);
              auVar53._4_4_ = -(uint)(fVar37 < 0.0);
              auVar53._0_4_ = -(uint)(fVar60 < 0.0);
              auVar53._8_8_ = 0;
              uVar20 = movmskps(pfVar19,auVar49);
              uVar21 = movmskps(uVar20 & 0xf,auVar53);
              local_18 = *(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4) |
                         *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4);
              uVar21 = *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4) | 0x3ff;
              puVar12[1] = puVar12[1] &
                           (*(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4) | 0xc3f) & uVar21;
            }
            auVar28._4_4_ = -(uint)(fVar63 * 1.0 + fVar70 < 0.0);
            auVar28._0_4_ = -(uint)(fVar63 * -1.0 + fVar70 < 0.0);
            auVar28._8_4_ = -(uint)(fVar64 * -1.0 + fVar70 < 0.0);
            auVar28._12_4_ = -(uint)(fVar64 * 1.0 + fVar70 < 0.0);
            uVar21 = movmskps(uVar21,auVar28);
            uVar21 = *(uint *)(&DAT_1005d360 + (uVar21 & 0xf) * 4);
            uVar23 = (uVar21 | 0x30) & puVar12[1];
            puVar12[1] = uVar23;
            auVar29._4_4_ = -(uint)(fVar65 * 1.0 < 0.0);
            auVar29._0_4_ = -(uint)(fVar65 * -1.0 + fVar70 < 0.0);
            auVar29._8_4_ = -(uint)(fVar65 * -1.0 < 0.0);
            auVar29._12_4_ = -(uint)(fVar65 * 1.0 < 0.0);
            uVar20 = movmskps(puVar12,auVar29);
            local_18 = local_18 | *(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | uVar21;
            puVar12[1] = (*(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | 0xf) & uVar23;
            *puVar12 = *puVar12 | local_18;
          }
          if (param_1[0xe] != 0) {
            *(float *)(param_1[0xe] + 4) = fVar63;
            *(float *)(param_1[0xe] + 8) = fVar64;
            *(float *)(param_1[0xe] + 0xc) = fVar65;
            *(uint *)param_1[0xe] = local_18;
            param_1[0xe] = param_1[0xe] + 0x10;
          }
          auVar40._0_4_ = fVar63 + 0.0;
          auVar40._4_4_ = fVar64 + 0.0;
          auVar40._8_4_ = fVar65 + 0.0;
          auVar40._12_4_ = 0x3f800000;
          auVar58 = divps(auVar40,auVar69);
          auVar41._0_4_ = auVar58._0_4_ * (float)param_1[0x10] + (float)param_1[0x14];
          auVar41._4_4_ = auVar58._4_4_ * (float)param_1[0x11] + (float)param_1[0x15];
          auVar41._8_4_ = auVar58._8_4_ * (float)param_1[0x12] + (float)param_1[0x16];
          auVar41._12_4_ = auVar58._12_4_ * (float)param_1[0x13] + (float)param_1[0x17];
          if (local_1c == (int *)0x0) {
            *(undefined1 (*) [16])(param_1 + 0x1c) = auVar41;
            *(undefined1 (*) [16])(param_1 + 0x18) = auVar41;
          }
          else {
            auVar58 = minps(*(undefined1 (*) [16])(param_1 + 0x18),auVar41);
            *(undefined1 (*) [16])(param_1 + 0x18) = auVar58;
            auVar58 = maxps(*(undefined1 (*) [16])(param_1 + 0x1c),auVar41);
            *(undefined1 (*) [16])(param_1 + 0x1c) = auVar58;
          }
          pauVar13 = (undefined1 (*) [16])param_1[0xd];
          if (pauVar13 != (undefined1 (*) [16])0x0) {
            if ((*(char *)((int)param_1 + 0x22) == '\0') || (local_18 == 0)) {
              *pauVar13 = auVar41;
            }
            else {
              *(float *)(*pauVar13 + 0xc) = auVar41._12_4_;
            }
            param_1[0xd] = param_1[0xd] + param_1[0xf];
          }
          local_1c = (int *)((int)local_1c + 1);
        } while (local_1c < param_3);
        goto LAB_100133b3;
      }
    }
    else {
      local_60._0_4_ = fVar55;
      local_60._4_4_ = fVar46;
      if (uVar21 == 2) {
        local_1c = (int *)0x0;
        if (param_3 != 0) {
          fStack_54 = 0.0;
          do {
            piVar17 = local_1c;
            if (param_2 != 0) {
              piVar17 = (int *)(uint)*(ushort *)(param_2 + (int)local_1c * 2);
            }
            iVar10 = *param_1;
            iVar22 = param_1[3] * (int)piVar17;
            fVar72 = *(float *)(iVar10 + iVar22);
            fVar63 = *(float *)(iVar10 + 4 + iVar22);
            fVar64 = *(float *)(iVar10 + 8 + iVar22);
            if (*(char *)((int)param_1 + 0x102) != '\0') {
              iVar10 = param_1[1];
              iVar22 = param_1[4] * (int)piVar17;
              local_60._0_4_ = *(float *)(iVar10 + iVar22);
              local_60._4_4_ = *(float *)(iVar10 + 4 + iVar22);
              fStack_58 = *(float *)(iVar10 + 8 + iVar22);
              fStack_54 = 1.0;
            }
            iVar10 = param_1[2];
            iVar18 = param_1[5] * (int)piVar17;
            fVar65 = *(float *)(iVar10 + 4 + iVar18);
            fVar66 = *(float *)(iVar10 + iVar18);
            iVar22 = *(int *)((int)this + 0x9cc);
            fVar56 = (*(float *)(iVar22 + 0x2cc) * 1.0 + fVar63 * *(float *)(iVar22 + 0x2c4) +
                     fVar64 * *(float *)(iVar22 + 0x2c8) + fVar72 * *(float *)(iVar22 + 0x2c0)) *
                     fVar65 + (*(float *)(iVar22 + 0x28c) * 1.0 +
                               *(float *)(iVar22 + 0x284) * fVar63 +
                              *(float *)(iVar22 + 0x288) * fVar64 +
                              *(float *)(iVar22 + 0x280) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x30c) * 1.0 + *(float *)(iVar22 + 0x304) * fVar63 +
                     *(float *)(iVar22 + 0x308) * fVar64 + *(float *)(iVar22 + 0x300) * fVar72) *
                     ((1.0 - fVar66) - fVar65);
            fVar67 = (*(float *)(iVar22 + 0x2dc) * 1.0 + *(float *)(iVar22 + 0x2d4) * fVar63 +
                     *(float *)(iVar22 + 0x2d8) * fVar64 + *(float *)(iVar22 + 0x2d0) * fVar72) *
                     fVar65 + (*(float *)(iVar22 + 0x29c) * 1.0 +
                               *(float *)(iVar22 + 0x294) * fVar63 +
                              *(float *)(iVar22 + 0x298) * fVar64 +
                              *(float *)(iVar22 + 0x290) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x31c) * 1.0 + *(float *)(iVar22 + 0x314) * fVar63 +
                     *(float *)(iVar22 + 0x318) * fVar64 + *(float *)(iVar22 + 0x310) * fVar72) *
                     ((1.0 - fVar66) - fVar65);
            fVar70 = (*(float *)(iVar22 + 0x2ec) * 1.0 + *(float *)(iVar22 + 0x2e4) * fVar63 +
                     *(float *)(iVar22 + 0x2e8) * fVar64 + *(float *)(iVar22 + 0x2e0) * fVar72) *
                     fVar65 + (*(float *)(iVar22 + 0x2ac) * 1.0 +
                               *(float *)(iVar22 + 0x2a4) * fVar63 +
                              *(float *)(iVar22 + 0x2a8) * fVar64 +
                              *(float *)(iVar22 + 0x2a0) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x32c) * 1.0 + *(float *)(iVar22 + 0x324) * fVar63 +
                     *(float *)(iVar22 + 0x328) * fVar64 + *(float *)(iVar22 + 800) * fVar72) *
                     ((1.0 - fVar66) - fVar65);
            fVar72 = (*(float *)(iVar22 + 0x2fc) * 1.0 + *(float *)(iVar22 + 0x2f4) * fVar63 +
                     *(float *)(iVar22 + 0x2f8) * fVar64 + *(float *)(iVar22 + 0x2f0) * fVar72) *
                     fVar65 + (*(float *)(iVar22 + 700) * 1.0 + *(float *)(iVar22 + 0x2b4) * fVar63
                              + *(float *)(iVar22 + 0x2b8) * fVar64 +
                                *(float *)(iVar22 + 0x2b0) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x33c) * 1.0 + *(float *)(iVar22 + 0x334) * fVar63 +
                     *(float *)(iVar22 + 0x338) * fVar64 + *(float *)(iVar22 + 0x330) * fVar72) *
                     ((1.0 - fVar66) - fVar65);
            if (*(char *)((int)param_1 + 0x102) == '\0') {
              fVar63 = 0.0;
              fVar64 = 0.0;
              fVar65 = 0.0;
              fVar66 = 0.0;
            }
            else {
              FUN_10008b06(this,10);
              FUN_10008b06(this,0xb);
              FUN_10008b06(this,0xc);
              fVar66 = *(float *)(iVar10 + 4 + iVar18);
              fVar71 = *(float *)(iVar10 + iVar18);
              iVar22 = *(int *)((int)this + 0x9cc);
              fVar63 = (*(float *)(iVar22 + 0x60c) * fStack_54 +
                        *(float *)(iVar22 + 0x604) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x608) * fStack_58 +
                       *(float *)(iVar22 + 0x600) * (float)local_60) * fVar71 +
                       (*(float *)(iVar22 + 0x64c) * fStack_54 +
                        *(float *)(iVar22 + 0x644) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x648) * fStack_58 +
                       *(float *)(iVar22 + 0x640) * (float)local_60) * fVar66 +
                       (fStack_54 * *(float *)(iVar22 + 0x68c) +
                        local_60._4_4_ * *(float *)(iVar22 + 0x684) +
                       fStack_58 * *(float *)(iVar22 + 0x688) +
                       (float)local_60 * *(float *)(iVar22 + 0x680)) * ((1.0 - fVar71) - fVar66);
              fVar64 = (*(float *)(iVar22 + 0x61c) * fStack_54 +
                        *(float *)(iVar22 + 0x614) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x618) * fStack_58 +
                       *(float *)(iVar22 + 0x610) * (float)local_60) * fVar71 +
                       (*(float *)(iVar22 + 0x65c) * fStack_54 +
                        *(float *)(iVar22 + 0x654) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x658) * fStack_58 +
                       *(float *)(iVar22 + 0x650) * (float)local_60) * fVar66 +
                       (*(float *)(iVar22 + 0x69c) * fStack_54 +
                        *(float *)(iVar22 + 0x694) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x698) * fStack_58 +
                       *(float *)(iVar22 + 0x690) * (float)local_60) * ((1.0 - fVar71) - fVar66);
              fVar65 = (*(float *)(iVar22 + 0x62c) * fStack_54 +
                        *(float *)(iVar22 + 0x624) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x628) * fStack_58 +
                       *(float *)(iVar22 + 0x620) * (float)local_60) * fVar71 +
                       (*(float *)(iVar22 + 0x66c) * fStack_54 +
                        *(float *)(iVar22 + 0x664) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x668) * fStack_58 +
                       *(float *)(iVar22 + 0x660) * (float)local_60) * fVar66 +
                       (*(float *)(iVar22 + 0x6ac) * fStack_54 +
                        *(float *)(iVar22 + 0x6a4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6a8) * fStack_58 +
                       *(float *)(iVar22 + 0x6a0) * (float)local_60) * ((1.0 - fVar71) - fVar66);
              fVar66 = (*(float *)(iVar22 + 0x63c) * fStack_54 +
                        *(float *)(iVar22 + 0x634) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x638) * fStack_58 +
                       *(float *)(iVar22 + 0x630) * (float)local_60) * fVar71 +
                       (*(float *)(iVar22 + 0x67c) * fStack_54 +
                        *(float *)(iVar22 + 0x674) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x678) * fStack_58 +
                       *(float *)(iVar22 + 0x670) * (float)local_60) * fVar66 +
                       (*(float *)(iVar22 + 0x6bc) * fStack_54 +
                        *(float *)(iVar22 + 0x6b4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6b8) * fStack_58 +
                       *(float *)(iVar22 + 0x6b0) * (float)local_60) * ((1.0 - fVar71) - fVar66);
            }
            fVar71 = fVar72 * *(float *)(iVar22 + 0x78c) + fVar67 * *(float *)(iVar22 + 0x784) +
                     fVar70 * *(float *)(iVar22 + 0x788) + fVar56 * *(float *)(iVar22 + 0x780);
            fVar60 = *(float *)(iVar22 + 0x79c) * fVar72 + *(float *)(iVar22 + 0x794) * fVar67 +
                     *(float *)(iVar22 + 0x798) * fVar70 + *(float *)(iVar22 + 0x790) * fVar56;
            fVar61 = *(float *)(iVar22 + 0x7ac) * fVar72 + *(float *)(iVar22 + 0x7a4) * fVar67 +
                     *(float *)(iVar22 + 0x7a8) * fVar70 + *(float *)(iVar22 + 0x7a0) * fVar56;
            fVar62 = *(float *)(iVar22 + 0x7bc) * fVar72 + *(float *)(iVar22 + 0x7b4) * fVar67 +
                     *(float *)(iVar22 + 0x7b8) * fVar70 + *(float *)(iVar22 + 0x7b0) * fVar56;
            if (param_1[0xc] != 0) {
              pfVar19 = (float *)((int)local_1c * 0x20 + param_1[0xc]);
              *pfVar19 = fVar56;
              pfVar19[1] = fVar67;
              pfVar19[2] = fVar70;
              pfVar19[3] = fVar72;
              pfVar19 = (float *)(((int)local_1c * 0x20 | 0x10U) + param_1[0xc]);
              *pfVar19 = fVar63;
              pfVar19[1] = fVar64;
              pfVar19[2] = fVar65;
              pfVar19[3] = fVar66;
            }
            local_18 = 0;
            auVar68._4_4_ = fVar62;
            auVar68._0_4_ = fVar62;
            auVar68._8_4_ = fVar62;
            auVar68._12_4_ = fVar62;
            if ((char)param_1[8] != '\0') {
              puVar12 = (uint *)param_1[0xb];
              local_18 = 0;
              pfVar19 = (float *)0x0;
              if ((char)param_1[0x40] != '\0') {
                pfVar19 = (float *)(param_1 + 0x20);
              }
              if (pfVar19 == (float *)0x0) {
                puVar12[1] = puVar12[1] & 0xfffff03f;
                uVar21 = 0;
              }
              else {
                uVar21 = *(uint *)((int)this + 0x4f0);
                fVar63 = 0.0;
                fVar64 = 0.0;
                if ((uVar21 & 1) != 0) {
                  fVar63 = fVar70 * pfVar19[2] + fVar56 * *pfVar19 +
                           fVar72 * pfVar19[3] + fVar67 * pfVar19[1];
                }
                fVar65 = 0.0;
                if ((uVar21 & 2) != 0) {
                  fVar65 = pfVar19[0x1a] * fVar70 + pfVar19[0x18] * fVar56 +
                           pfVar19[0x1b] * fVar72 + pfVar19[0x19] * fVar67;
                }
                fVar66 = 0.0;
                if ((uVar21 & 4) != 0) {
                  fVar66 = pfVar19[0x32] * fVar70 + pfVar19[0x30] * fVar56 +
                           pfVar19[0x33] * fVar72 + pfVar19[0x31] * fVar67;
                }
                fVar36 = 0.0;
                if ((uVar21 & 8) != 0) {
                  fVar36 = pfVar19[0x4a] * fVar70 + pfVar19[0x48] * fVar56 +
                           pfVar19[0x4b] * fVar72 + pfVar19[0x49] * fVar67;
                }
                if ((uVar21 & 0x10) != 0) {
                  fVar64 = pfVar19[0x62] * fVar70 + pfVar19[0x60] * fVar56 +
                           pfVar19[99] * fVar72 + pfVar19[0x61] * fVar67;
                }
                fVar37 = 0.0;
                if ((uVar21 & 0x20) != 0) {
                  fVar37 = pfVar19[0x7a] * fVar70 + pfVar19[0x78] * fVar56 +
                           pfVar19[0x7b] * fVar72 + pfVar19[0x79] * fVar67;
                }
                auVar48._4_4_ = -(uint)(fVar65 < 0.0);
                auVar48._0_4_ = -(uint)(fVar63 < 0.0);
                auVar48._8_4_ = -(uint)(fVar66 < 0.0);
                auVar48._12_4_ = -(uint)(fVar36 < 0.0);
                auVar52._4_4_ = -(uint)(fVar37 < 0.0);
                auVar52._0_4_ = -(uint)(fVar64 < 0.0);
                auVar52._8_8_ = 0;
                uVar20 = movmskps(pfVar19,auVar48);
                uVar21 = movmskps(uVar20 & 0xf,auVar52);
                local_18 = *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4) |
                           *(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4);
                uVar21 = *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4) | 0x3ff;
                puVar12[1] = puVar12[1] &
                             (*(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4) | 0xc3f) & uVar21;
              }
              auVar26._4_4_ = -(uint)(fVar71 * 1.0 + fVar62 < 0.0);
              auVar26._0_4_ = -(uint)(fVar71 * -1.0 + fVar62 < 0.0);
              auVar26._8_4_ = -(uint)(fVar60 * -1.0 + fVar62 < 0.0);
              auVar26._12_4_ = -(uint)(fVar60 * 1.0 + fVar62 < 0.0);
              uVar21 = movmskps(uVar21,auVar26);
              uVar21 = *(uint *)(&DAT_1005d360 + (uVar21 & 0xf) * 4);
              uVar23 = (uVar21 | 0x30) & puVar12[1];
              puVar12[1] = uVar23;
              auVar27._4_4_ = -(uint)(fVar61 * 1.0 < 0.0);
              auVar27._0_4_ = -(uint)(fVar61 * -1.0 + fVar62 < 0.0);
              auVar27._8_4_ = -(uint)(fVar61 * -1.0 < 0.0);
              auVar27._12_4_ = -(uint)(fVar61 * 1.0 < 0.0);
              uVar20 = movmskps(puVar12,auVar27);
              local_18 = local_18 | *(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | uVar21;
              puVar12[1] = (*(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | 0xf) & uVar23;
              *puVar12 = *puVar12 | local_18;
            }
            if (param_1[0xe] != 0) {
              *(float *)(param_1[0xe] + 4) = fVar71;
              *(float *)(param_1[0xe] + 8) = fVar60;
              *(float *)(param_1[0xe] + 0xc) = fVar61;
              *(uint *)param_1[0xe] = local_18;
              param_1[0xe] = param_1[0xe] + 0x10;
            }
            auVar38._0_4_ = fVar71 + 0.0;
            auVar38._4_4_ = fVar60 + 0.0;
            auVar38._8_4_ = fVar61 + 0.0;
            auVar38._12_4_ = 0x3f800000;
            auVar58 = divps(auVar38,auVar68);
            auVar39._0_4_ = auVar58._0_4_ * (float)param_1[0x10] + (float)param_1[0x14];
            auVar39._4_4_ = auVar58._4_4_ * (float)param_1[0x11] + (float)param_1[0x15];
            auVar39._8_4_ = auVar58._8_4_ * (float)param_1[0x12] + (float)param_1[0x16];
            auVar39._12_4_ = auVar58._12_4_ * (float)param_1[0x13] + (float)param_1[0x17];
            if (local_1c == (int *)0x0) {
              *(undefined1 (*) [16])(param_1 + 0x1c) = auVar39;
              *(undefined1 (*) [16])(param_1 + 0x18) = auVar39;
            }
            else {
              auVar58 = minps(*(undefined1 (*) [16])(param_1 + 0x18),auVar39);
              *(undefined1 (*) [16])(param_1 + 0x18) = auVar58;
              auVar58 = maxps(*(undefined1 (*) [16])(param_1 + 0x1c),auVar39);
              *(undefined1 (*) [16])(param_1 + 0x1c) = auVar58;
            }
            pauVar13 = (undefined1 (*) [16])param_1[0xd];
            if (pauVar13 != (undefined1 (*) [16])0x0) {
              if ((*(char *)((int)param_1 + 0x22) == '\0') || (local_18 == 0)) {
                *pauVar13 = auVar39;
              }
              else {
                *(float *)(*pauVar13 + 0xc) = auVar39._12_4_;
              }
              param_1[0xd] = param_1[0xd] + param_1[0xf];
            }
            local_1c = (int *)((int)local_1c + 1);
          } while (local_1c < param_3);
          goto LAB_100133b3;
        }
      }
      else if (uVar21 == 3) {
        local_1c = (int *)0x0;
        if (param_3 != 0) {
          fStack_54 = 0.0;
          do {
            piVar17 = local_1c;
            if (param_2 != 0) {
              piVar17 = (int *)(uint)*(ushort *)(param_2 + (int)local_1c * 2);
            }
            iVar10 = *param_1;
            iVar22 = param_1[3] * (int)piVar17;
            fVar72 = *(float *)(iVar10 + iVar22);
            fVar63 = *(float *)(iVar10 + 4 + iVar22);
            fVar64 = *(float *)(iVar10 + 8 + iVar22);
            if (*(char *)((int)param_1 + 0x102) != '\0') {
              iVar10 = param_1[1];
              iVar22 = param_1[4] * (int)piVar17;
              local_60._0_4_ = *(float *)(iVar10 + iVar22);
              local_60._4_4_ = *(float *)(iVar10 + 4 + iVar22);
              fStack_58 = *(float *)(iVar10 + 8 + iVar22);
              fStack_54 = 1.0;
            }
            iVar10 = param_1[2];
            iVar18 = param_1[5] * (int)piVar17;
            fVar65 = *(float *)(iVar10 + 8 + iVar18);
            fVar66 = *(float *)(iVar10 + iVar18);
            fVar56 = *(float *)(iVar10 + 4 + iVar18);
            iVar22 = *(int *)((int)this + 0x9cc);
            fVar67 = (*(float *)(iVar22 + 0x2cc) * 1.0 + fVar63 * *(float *)(iVar22 + 0x2c4) +
                     fVar64 * *(float *)(iVar22 + 0x2c8) + fVar72 * *(float *)(iVar22 + 0x2c0)) *
                     fVar56 + (*(float *)(iVar22 + 0x28c) * 1.0 +
                               fVar63 * *(float *)(iVar22 + 0x284) +
                              fVar64 * *(float *)(iVar22 + 0x288) +
                              fVar72 * *(float *)(iVar22 + 0x280)) * fVar66 +
                     (*(float *)(iVar22 + 0x30c) * 1.0 + fVar63 * *(float *)(iVar22 + 0x304) +
                     fVar64 * *(float *)(iVar22 + 0x308) + fVar72 * *(float *)(iVar22 + 0x300)) *
                     fVar65 + (((1.0 - fVar66) - fVar56) - fVar65) *
                              (*(float *)(iVar22 + 0x34c) * 1.0 +
                               fVar63 * *(float *)(iVar22 + 0x344) +
                              fVar64 * *(float *)(iVar22 + 0x348) +
                              fVar72 * *(float *)(iVar22 + 0x340));
            fVar70 = (*(float *)(iVar22 + 0x2dc) * 1.0 + *(float *)(iVar22 + 0x2d4) * fVar63 +
                     *(float *)(iVar22 + 0x2d8) * fVar64 + *(float *)(iVar22 + 0x2d0) * fVar72) *
                     fVar56 + (*(float *)(iVar22 + 0x29c) * 1.0 +
                               *(float *)(iVar22 + 0x294) * fVar63 +
                              *(float *)(iVar22 + 0x298) * fVar64 +
                              *(float *)(iVar22 + 0x290) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x31c) * 1.0 + *(float *)(iVar22 + 0x314) * fVar63 +
                     *(float *)(iVar22 + 0x318) * fVar64 + *(float *)(iVar22 + 0x310) * fVar72) *
                     fVar65 + (((1.0 - fVar66) - fVar56) - fVar65) *
                              (*(float *)(iVar22 + 0x35c) * 1.0 +
                               *(float *)(iVar22 + 0x354) * fVar63 +
                              *(float *)(iVar22 + 0x358) * fVar64 +
                              *(float *)(iVar22 + 0x350) * fVar72);
            fVar71 = (*(float *)(iVar22 + 0x2ec) * 1.0 + *(float *)(iVar22 + 0x2e4) * fVar63 +
                     *(float *)(iVar22 + 0x2e8) * fVar64 + *(float *)(iVar22 + 0x2e0) * fVar72) *
                     fVar56 + (*(float *)(iVar22 + 0x2ac) * 1.0 +
                               *(float *)(iVar22 + 0x2a4) * fVar63 +
                              *(float *)(iVar22 + 0x2a8) * fVar64 +
                              *(float *)(iVar22 + 0x2a0) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x32c) * 1.0 + *(float *)(iVar22 + 0x324) * fVar63 +
                     *(float *)(iVar22 + 0x328) * fVar64 + *(float *)(iVar22 + 800) * fVar72) *
                     fVar65 + (((1.0 - fVar66) - fVar56) - fVar65) *
                              (*(float *)(iVar22 + 0x36c) * 1.0 +
                               *(float *)(iVar22 + 0x364) * fVar63 +
                              *(float *)(iVar22 + 0x368) * fVar64 +
                              *(float *)(iVar22 + 0x360) * fVar72);
            fVar72 = (*(float *)(iVar22 + 0x2fc) * 1.0 + *(float *)(iVar22 + 0x2f4) * fVar63 +
                     *(float *)(iVar22 + 0x2f8) * fVar64 + *(float *)(iVar22 + 0x2f0) * fVar72) *
                     fVar56 + (*(float *)(iVar22 + 700) * 1.0 + *(float *)(iVar22 + 0x2b4) * fVar63
                              + *(float *)(iVar22 + 0x2b8) * fVar64 +
                                *(float *)(iVar22 + 0x2b0) * fVar72) * fVar66 +
                     (*(float *)(iVar22 + 0x33c) * 1.0 + *(float *)(iVar22 + 0x334) * fVar63 +
                     *(float *)(iVar22 + 0x338) * fVar64 + *(float *)(iVar22 + 0x330) * fVar72) *
                     fVar65 + (((1.0 - fVar66) - fVar56) - fVar65) *
                              (*(float *)(iVar22 + 0x37c) * 1.0 +
                               *(float *)(iVar22 + 0x374) * fVar63 +
                              *(float *)(iVar22 + 0x378) * fVar64 +
                              *(float *)(iVar22 + 0x370) * fVar72);
            if (*(char *)((int)param_1 + 0x102) == '\0') {
              fVar63 = 0.0;
              fVar64 = 0.0;
              fVar65 = 0.0;
              fVar66 = 0.0;
            }
            else {
              FUN_10008b06(this,10);
              FUN_10008b06(this,0xb);
              FUN_10008b06(this,0xc);
              FUN_10008b06(this,0xd);
              fVar66 = *(float *)(iVar10 + 8 + iVar18);
              fVar56 = *(float *)(iVar10 + iVar18);
              fVar60 = *(float *)(iVar10 + 4 + iVar18);
              iVar22 = *(int *)((int)this + 0x9cc);
              fVar63 = (fStack_54 * *(float *)(iVar22 + 0x60c) +
                        local_60._4_4_ * *(float *)(iVar22 + 0x604) +
                       fStack_58 * *(float *)(iVar22 + 0x608) +
                       (float)local_60 * *(float *)(iVar22 + 0x600)) * fVar56 +
                       (fStack_54 * *(float *)(iVar22 + 0x64c) +
                        local_60._4_4_ * *(float *)(iVar22 + 0x644) +
                       fStack_58 * *(float *)(iVar22 + 0x648) +
                       (float)local_60 * *(float *)(iVar22 + 0x640)) * fVar60 +
                       (fStack_54 * *(float *)(iVar22 + 0x68c) +
                        local_60._4_4_ * *(float *)(iVar22 + 0x684) +
                       fStack_58 * *(float *)(iVar22 + 0x688) +
                       (float)local_60 * *(float *)(iVar22 + 0x680)) * fVar66 +
                       (((1.0 - fVar56) - fVar60) - fVar66) *
                       (fStack_54 * *(float *)(iVar22 + 0x6cc) +
                        local_60._4_4_ * *(float *)(iVar22 + 0x6c4) +
                       fStack_58 * *(float *)(iVar22 + 0x6c8) +
                       (float)local_60 * *(float *)(iVar22 + 0x6c0));
              fVar64 = (*(float *)(iVar22 + 0x61c) * fStack_54 +
                        *(float *)(iVar22 + 0x614) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x618) * fStack_58 +
                       *(float *)(iVar22 + 0x610) * (float)local_60) * fVar56 +
                       (*(float *)(iVar22 + 0x65c) * fStack_54 +
                        *(float *)(iVar22 + 0x654) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x658) * fStack_58 +
                       *(float *)(iVar22 + 0x650) * (float)local_60) * fVar60 +
                       (*(float *)(iVar22 + 0x69c) * fStack_54 +
                        *(float *)(iVar22 + 0x694) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x698) * fStack_58 +
                       *(float *)(iVar22 + 0x690) * (float)local_60) * fVar66 +
                       (((1.0 - fVar56) - fVar60) - fVar66) *
                       (*(float *)(iVar22 + 0x6dc) * fStack_54 +
                        *(float *)(iVar22 + 0x6d4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6d8) * fStack_58 +
                       *(float *)(iVar22 + 0x6d0) * (float)local_60);
              fVar65 = (*(float *)(iVar22 + 0x62c) * fStack_54 +
                        *(float *)(iVar22 + 0x624) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x628) * fStack_58 +
                       *(float *)(iVar22 + 0x620) * (float)local_60) * fVar56 +
                       (*(float *)(iVar22 + 0x66c) * fStack_54 +
                        *(float *)(iVar22 + 0x664) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x668) * fStack_58 +
                       *(float *)(iVar22 + 0x660) * (float)local_60) * fVar60 +
                       (*(float *)(iVar22 + 0x6ac) * fStack_54 +
                        *(float *)(iVar22 + 0x6a4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6a8) * fStack_58 +
                       *(float *)(iVar22 + 0x6a0) * (float)local_60) * fVar66 +
                       (((1.0 - fVar56) - fVar60) - fVar66) *
                       (*(float *)(iVar22 + 0x6ec) * fStack_54 +
                        *(float *)(iVar22 + 0x6e4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6e8) * fStack_58 +
                       *(float *)(iVar22 + 0x6e0) * (float)local_60);
              fVar66 = (*(float *)(iVar22 + 0x63c) * fStack_54 +
                        *(float *)(iVar22 + 0x634) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x638) * fStack_58 +
                       *(float *)(iVar22 + 0x630) * (float)local_60) * fVar56 +
                       (*(float *)(iVar22 + 0x67c) * fStack_54 +
                        *(float *)(iVar22 + 0x674) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x678) * fStack_58 +
                       *(float *)(iVar22 + 0x670) * (float)local_60) * fVar60 +
                       (*(float *)(iVar22 + 0x6bc) * fStack_54 +
                        *(float *)(iVar22 + 0x6b4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6b8) * fStack_58 +
                       *(float *)(iVar22 + 0x6b0) * (float)local_60) * fVar66 +
                       (((1.0 - fVar56) - fVar60) - fVar66) *
                       (*(float *)(iVar22 + 0x6fc) * fStack_54 +
                        *(float *)(iVar22 + 0x6f4) * local_60._4_4_ +
                       *(float *)(iVar22 + 0x6f8) * fStack_58 +
                       *(float *)(iVar22 + 0x6f0) * (float)local_60);
            }
            fVar56 = fVar72 * *(float *)(iVar22 + 0x78c) + fVar70 * *(float *)(iVar22 + 0x784) +
                     fVar71 * *(float *)(iVar22 + 0x788) + fVar67 * *(float *)(iVar22 + 0x780);
            fVar60 = *(float *)(iVar22 + 0x79c) * fVar72 + *(float *)(iVar22 + 0x794) * fVar70 +
                     *(float *)(iVar22 + 0x798) * fVar71 + *(float *)(iVar22 + 0x790) * fVar67;
            fVar61 = *(float *)(iVar22 + 0x7ac) * fVar72 + *(float *)(iVar22 + 0x7a4) * fVar70 +
                     *(float *)(iVar22 + 0x7a8) * fVar71 + *(float *)(iVar22 + 0x7a0) * fVar67;
            fVar62 = *(float *)(iVar22 + 0x7bc) * fVar72 + *(float *)(iVar22 + 0x7b4) * fVar70 +
                     *(float *)(iVar22 + 0x7b8) * fVar71 + *(float *)(iVar22 + 0x7b0) * fVar67;
            if (param_1[0xc] != 0) {
              pfVar19 = (float *)((int)local_1c * 0x20 + param_1[0xc]);
              *pfVar19 = fVar67;
              pfVar19[1] = fVar70;
              pfVar19[2] = fVar71;
              pfVar19[3] = fVar72;
              pfVar19 = (float *)(((int)local_1c * 0x20 | 0x10U) + param_1[0xc]);
              *pfVar19 = fVar63;
              pfVar19[1] = fVar64;
              pfVar19[2] = fVar65;
              pfVar19[3] = fVar66;
            }
            local_20 = 0;
            auVar73._4_4_ = fVar62;
            auVar73._0_4_ = fVar62;
            auVar73._8_4_ = fVar62;
            auVar73._12_4_ = fVar62;
            if ((char)param_1[8] != '\0') {
              puVar12 = (uint *)param_1[0xb];
              local_20 = 0;
              pfVar19 = (float *)0x0;
              if ((char)param_1[0x40] != '\0') {
                pfVar19 = (float *)(param_1 + 0x20);
              }
              if (pfVar19 == (float *)0x0) {
                puVar12[1] = puVar12[1] & 0xfffff03f;
                uVar21 = 0;
              }
              else {
                uVar21 = *(uint *)((int)this + 0x4f0);
                fVar63 = 0.0;
                fVar64 = 0.0;
                if ((uVar21 & 1) != 0) {
                  fVar63 = fVar71 * pfVar19[2] + fVar67 * *pfVar19 +
                           fVar72 * pfVar19[3] + fVar70 * pfVar19[1];
                }
                fVar65 = 0.0;
                if ((uVar21 & 2) != 0) {
                  fVar65 = pfVar19[0x1a] * fVar71 + pfVar19[0x18] * fVar67 +
                           pfVar19[0x1b] * fVar72 + pfVar19[0x19] * fVar70;
                }
                fVar66 = 0.0;
                if ((uVar21 & 4) != 0) {
                  fVar66 = pfVar19[0x32] * fVar71 + pfVar19[0x30] * fVar67 +
                           pfVar19[0x33] * fVar72 + pfVar19[0x31] * fVar70;
                }
                fVar36 = 0.0;
                if ((uVar21 & 8) != 0) {
                  fVar36 = pfVar19[0x4a] * fVar71 + pfVar19[0x48] * fVar67 +
                           pfVar19[0x4b] * fVar72 + pfVar19[0x49] * fVar70;
                }
                if ((uVar21 & 0x10) != 0) {
                  fVar64 = pfVar19[0x62] * fVar71 + pfVar19[0x60] * fVar67 +
                           pfVar19[99] * fVar72 + pfVar19[0x61] * fVar70;
                }
                fVar37 = 0.0;
                if ((uVar21 & 0x20) != 0) {
                  fVar37 = pfVar19[0x7a] * fVar71 + pfVar19[0x78] * fVar67 +
                           pfVar19[0x7b] * fVar72 + pfVar19[0x79] * fVar70;
                }
                auVar47._4_4_ = -(uint)(fVar65 < 0.0);
                auVar47._0_4_ = -(uint)(fVar63 < 0.0);
                auVar47._8_4_ = -(uint)(fVar66 < 0.0);
                auVar47._12_4_ = -(uint)(fVar36 < 0.0);
                auVar51._4_4_ = -(uint)(fVar37 < 0.0);
                auVar51._0_4_ = -(uint)(fVar64 < 0.0);
                auVar51._8_8_ = 0;
                uVar20 = movmskps(pfVar19,auVar47);
                uVar21 = movmskps(uVar20 & 0xf,auVar51);
                local_20 = *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4) |
                           *(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4);
                uVar21 = *(uint *)(&DAT_1005d3a0 + (uVar21 & 3) * 4) | 0x3ff;
                puVar12[1] = puVar12[1] &
                             (*(uint *)(&DAT_1005d3b0 + (uVar20 & 0xf) * 4) | 0xc3f) & uVar21;
              }
              auVar24._4_4_ = -(uint)(fVar56 * 1.0 + fVar62 < 0.0);
              auVar24._0_4_ = -(uint)(fVar56 * -1.0 + fVar62 < 0.0);
              auVar24._8_4_ = -(uint)(fVar60 * -1.0 + fVar62 < 0.0);
              auVar24._12_4_ = -(uint)(fVar60 * 1.0 + fVar62 < 0.0);
              uVar21 = movmskps(uVar21,auVar24);
              uVar21 = *(uint *)(&DAT_1005d360 + (uVar21 & 0xf) * 4);
              uVar23 = (uVar21 | 0x30) & puVar12[1];
              puVar12[1] = uVar23;
              auVar25._4_4_ = -(uint)(fVar61 * 1.0 < 0.0);
              auVar25._0_4_ = -(uint)(fVar61 * -1.0 + fVar62 < 0.0);
              auVar25._8_4_ = -(uint)(fVar61 * -1.0 < 0.0);
              auVar25._12_4_ = -(uint)(fVar61 * 1.0 < 0.0);
              uVar20 = movmskps(puVar12,auVar25);
              local_20 = local_20 | *(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | uVar21;
              puVar12[1] = (*(uint *)(&DAT_1005d34c + (uVar20 & 3) * 4) | 0xf) & uVar23;
              *puVar12 = *puVar12 | local_20;
            }
            if (param_1[0xe] != 0) {
              *(float *)(param_1[0xe] + 4) = fVar56;
              *(float *)(param_1[0xe] + 8) = fVar60;
              *(float *)(param_1[0xe] + 0xc) = fVar61;
              *(uint *)param_1[0xe] = local_20;
              param_1[0xe] = param_1[0xe] + 0x10;
            }
            auVar57._0_4_ = fVar56 + 0.0;
            auVar57._4_4_ = fVar60 + 0.0;
            auVar57._8_4_ = fVar61 + 0.0;
            auVar57._12_4_ = 0x3f800000;
            auVar58 = divps(auVar57,auVar73);
            auVar59._0_4_ = auVar58._0_4_ * (float)param_1[0x10] + (float)param_1[0x14];
            auVar59._4_4_ = auVar58._4_4_ * (float)param_1[0x11] + (float)param_1[0x15];
            auVar59._8_4_ = auVar58._8_4_ * (float)param_1[0x12] + (float)param_1[0x16];
            auVar59._12_4_ = auVar58._12_4_ * (float)param_1[0x13] + (float)param_1[0x17];
            if (local_1c == (int *)0x0) {
              *(undefined1 (*) [16])(param_1 + 0x1c) = auVar59;
              *(undefined1 (*) [16])(param_1 + 0x18) = auVar59;
            }
            else {
              auVar58 = minps(*(undefined1 (*) [16])(param_1 + 0x18),auVar59);
              *(undefined1 (*) [16])(param_1 + 0x18) = auVar58;
              auVar58 = maxps(*(undefined1 (*) [16])(param_1 + 0x1c),auVar59);
              *(undefined1 (*) [16])(param_1 + 0x1c) = auVar58;
            }
            pauVar13 = (undefined1 (*) [16])param_1[0xd];
            if (pauVar13 != (undefined1 (*) [16])0x0) {
              if ((*(char *)((int)param_1 + 0x22) == '\0') || (local_20 == 0)) {
                *pauVar13 = auVar59;
              }
              else {
                *(float *)(*pauVar13 + 0xc) = auVar59._12_4_;
              }
              param_1[0xd] = param_1[0xd] + param_1[0xf];
            }
            local_1c = (int *)((int)local_1c + 1);
          } while (local_1c < param_3);
          goto LAB_100133b3;
        }
      }
      else if (param_3 != 0) {
LAB_100133b3:
        auVar44._0_4_ = (float)param_1[0x18] + -0.5;
        auVar44._4_4_ = (float)param_1[0x19] + -0.5;
        auVar44._8_4_ = (float)param_1[0x1a] + 0.0;
        auVar44._12_4_ = (float)param_1[0x1b] + 0.0;
        *(undefined1 (*) [16])(param_1 + 0x18) = auVar44;
        auVar32._0_4_ = (float)param_1[0x1c] + 0.5;
        auVar32._4_4_ = (float)param_1[0x1d] + 0.5;
        auVar32._8_4_ = (float)param_1[0x1e] + 0.0;
        auVar32._12_4_ = (float)param_1[0x1f] + 0.0;
        auVar45 = minps(auVar44,auVar45);
        *(undefined1 (*) [16])(param_1 + 0x1c) = auVar32;
        auVar33 = maxps(auVar32,auVar33);
      }
    }
  }
  auVar14._4_4_ = (float)((double)iVar9 + dVar4);
  auVar14._0_4_ = (float)((double)iVar8 + dVar3);
  auVar14._8_4_ = fVar1;
  auVar14._12_4_ = 0;
  auVar45 = maxps(auVar45,auVar14);
  auVar15._4_4_ = fVar46;
  auVar15._0_4_ = fVar55;
  auVar15._8_4_ = fVar2;
  auVar15._12_4_ = 0;
  auVar33 = minps(auVar33,auVar15);
LAB_100134cd:
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    *(int *)(param_1[0xb] + 8) = (int)auVar45._0_8_;
    *(int *)(param_1[0xb] + 0x10) = (int)((ulonglong)auVar45._0_8_ >> 0x20);
    *(int *)(param_1[0xb] + 0xc) = (int)auVar33._0_8_;
    *(int *)(param_1[0xb] + 0x14) = (int)((ulonglong)auVar33._0_8_ >> 0x20);
  }
  return;
}

