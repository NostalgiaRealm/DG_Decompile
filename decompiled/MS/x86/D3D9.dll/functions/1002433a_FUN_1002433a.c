/*
 * FUN_1002433a at 1002433a
 * undefined __thiscall FUN_1002433a(void * this, int * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 1002433a-10026de2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002433a(void *this,int *param_1,undefined4 param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  undefined1 (*pauVar25) [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 uVar28;
  int *piVar29;
  uint *puVar30;
  float *pfVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  char cVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float *pfVar43;
  int iVar44;
  uint uVar45;
  float fVar46;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar74;
  float fVar81;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 local_f0 [8];
  undefined8 uStack_e8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined1 local_a0 [4];
  float fStack_9c;
  undefined8 uStack_98;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined1 local_60 [4];
  float fStack_5c;
  undefined8 uStack_58;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  uint local_34;
  int *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  piVar29 = (int *)param_1[0x10];
  if (piVar29 == (int *)0x0) {
    piVar29 = (int *)((int)this + 0x2c);
    param_1[0x10] = (int)piVar29;
  }
  iVar23 = *piVar29;
  iVar24 = piVar29[1];
  dVar18 = (double)(&DAT_100d97a0)[-(iVar23 >> 0x1f)];
  dVar19 = (double)(&DAT_100d97a0)[-(iVar24 >> 0x1f)];
  fVar16 = (float)piVar29[4];
  iVar38 = param_1[0x12];
  fVar82 = (float)((double)(piVar29[2] + iVar23) +
                  (double)(&DAT_100d97a0)[-(piVar29[2] + iVar23 >> 0x1f)]);
  fVar67 = (float)((double)(piVar29[3] + iVar24) +
                  (double)(&DAT_100d97a0)[-(piVar29[3] + iVar24 >> 0x1f)]);
  fVar17 = (float)piVar29[5];
  auVar66._0_8_ = CONCAT44(*(undefined4 *)(iVar38 + 0x10),*(undefined4 *)(iVar38 + 8));
  auVar66._8_4_ = *(undefined4 *)(iVar38 + 0x18);
  auVar66._12_4_ = 0;
  auVar59._0_8_ = CONCAT44(*(undefined4 *)(iVar38 + 0x14),*(undefined4 *)(iVar38 + 0xc));
  auVar59._8_4_ = *(undefined4 *)(iVar38 + 0x1c);
  auVar59._12_4_ = 0;
  if (*(char *)((int)param_1 + 0x3a) == '\0') {
    if ((((char)param_1[0xf] != '\0') || (*(char *)((int)param_1 + 0x3b) != '\0')) &&
       (local_14 = 0, param_3 != 0)) {
      do {
        auVar85 = *(undefined1 (*) [16])(param_1[6] * local_14 + *param_1);
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          auVar96._4_4_ = -(uint)(auVar85._4_4_ < (float)((double)iVar24 + dVar19));
          auVar96._0_4_ = -(uint)(auVar85._0_4_ < (float)((double)iVar23 + dVar18));
          auVar96._8_4_ = -(uint)(auVar85._8_4_ < fVar16);
          auVar96._12_4_ = -(uint)(auVar85._12_4_ < 0.0);
          uVar45 = movmskps(param_1,auVar96);
          auVar60._4_4_ = -(uint)(fVar67 <= auVar85._4_4_);
          auVar60._0_4_ = -(uint)(fVar82 <= auVar85._0_4_);
          auVar60._8_4_ = -(uint)(fVar17 <= auVar85._8_4_);
          auVar60._12_4_ = -(uint)(0.0 <= auVar85._12_4_);
          uVar32 = movmskps(local_14,auVar60);
          uVar37 = *(uint *)(&DAT_100d1b98 + (((uVar32 & 2) * 2 | uVar45 & 3) * 2 | uVar32 & 1) * 4)
          ;
          *(uint *)param_1[0x12] = *(uint *)param_1[0x12] | uVar37;
          *(uint *)(param_1[0x12] + 4) = *(uint *)(param_1[0x12] + 4) & (uVar37 | 0x2a);
          uVar37 = *(uint *)(&DAT_100d1b84 + (((uVar32 & 7) >> 1 | uVar45 & 4) >> 1) * 4);
          *(uint *)param_1[0x12] = *(uint *)param_1[0x12] | uVar37;
          *(uint *)(param_1[0x12] + 4) = *(uint *)(param_1[0x12] + 4) & (uVar37 | 0x15);
        }
        local_14 = local_14 + 1;
        auVar66 = minps(auVar66,auVar85);
        auVar59 = maxps(auVar59,auVar85);
      } while (local_14 < param_3);
    }
    goto LAB_10026dab;
  }
  fVar62 = (float)piVar29[5];
  fVar46 = (float)piVar29[4];
  *(ulonglong *)(param_1 + 0x18) =
       CONCAT44((float)((double)piVar29[3] + (double)(&DAT_100d97a0)[-(piVar29[3] >> 0x1f)]) * -0.5,
                (float)((double)piVar29[2] + (double)(&DAT_100d97a0)[-(piVar29[2] >> 0x1f)]) * 0.5);
  param_1[0x1a] = (int)(fVar62 - fVar46);
  param_1[0x1b] = 0x3f800000;
  iVar34 = piVar29[1];
  dVar20 = (double)(&DAT_100d97a0)[-(iVar34 >> 0x1f)];
  iVar35 = piVar29[3];
  dVar21 = (double)(&DAT_100d97a0)[-(iVar35 >> 0x1f)];
  iVar33 = piVar29[4];
  param_1[0x1c] =
       (int)((float)((double)piVar29[2] + (double)(&DAT_100d97a0)[-(piVar29[2] >> 0x1f)]) * 0.5 +
            (float)((double)*piVar29 + (double)(&DAT_100d97a0)[-(*piVar29 >> 0x1f)]));
  param_1[0x1d] = (int)((float)((double)iVar35 + dVar21) * 0.5 + (float)((double)iVar34 + dVar20));
  param_1[0x1e] = iVar33;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar37 = *(uint *)((int)this + 0x690) & 0x3f;
  *(bool *)(param_1 + 0x48) = uVar37 != 0;
  if (*(char *)((int)param_1 + 0x3b) != '\0') {
    if (uVar37 == 0) {
      *(uint *)(iVar38 + 4) = *(uint *)(iVar38 + 4) & 0xfffff03f;
    }
    else {
      iVar38 = *(int *)((int)this + 0x3d4);
      iVar33 = *(int *)((int)this + 0x3d8);
      iVar34 = *(int *)((int)this + 0x3dc);
      param_1[0x28] = *(int *)((int)this + 0x3d0);
      param_1[0x29] = iVar38;
      param_1[0x2a] = iVar33;
      param_1[0x2b] = iVar34;
      iVar38 = *(int *)((int)this + 0x3e4);
      iVar33 = *(int *)((int)this + 1000);
      iVar34 = *(int *)((int)this + 0x3ec);
      param_1[0x2c] = *(int *)((int)this + 0x3e0);
      param_1[0x2d] = iVar38;
      param_1[0x2e] = iVar33;
      param_1[0x2f] = iVar34;
      iVar38 = *(int *)((int)this + 0x3f4);
      iVar33 = *(int *)((int)this + 0x3f8);
      iVar34 = *(int *)((int)this + 0x3fc);
      param_1[0x30] = *(int *)((int)this + 0x3f0);
      param_1[0x31] = iVar38;
      param_1[0x32] = iVar33;
      param_1[0x33] = iVar34;
      iVar38 = *(int *)((int)this + 0x404);
      iVar33 = *(int *)((int)this + 0x408);
      iVar34 = *(int *)((int)this + 0x40c);
      param_1[0x34] = *(int *)((int)this + 0x400);
      param_1[0x35] = iVar38;
      param_1[0x36] = iVar33;
      param_1[0x37] = iVar34;
      iVar38 = *(int *)((int)this + 0x414);
      iVar33 = *(int *)((int)this + 0x418);
      iVar34 = *(int *)((int)this + 0x41c);
      param_1[0x38] = *(int *)((int)this + 0x410);
      param_1[0x39] = iVar38;
      param_1[0x3a] = iVar33;
      param_1[0x3b] = iVar34;
      iVar38 = *(int *)((int)this + 0x424);
      iVar33 = *(int *)((int)this + 0x428);
      iVar34 = *(int *)((int)this + 0x42c);
      param_1[0x3c] = *(int *)((int)this + 0x420);
      param_1[0x3d] = iVar38;
      param_1[0x3e] = iVar33;
      param_1[0x3f] = iVar34;
    }
  }
  if ((param_1[0x13] != 0) || (uVar28 = 0, (char)param_1[0x48] != '\0')) {
    uVar28 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x121) = uVar28;
  *(bool *)((int)param_1 + 0x122) = param_1[1] != 0;
  local_18 = *(uint *)((int)this + 0x68c);
  if (local_18 == 0) {
LAB_10024649:
    if ((uint)param_1[0xc] <= local_18) {
      local_18 = param_1[0xc];
    }
    if (local_18 != 0) goto LAB_1002465a;
    if (param_1[0x11] == 0) {
      FUN_1001a780((int)this);
      param_1[0x11] = *(int *)((int)this + 0xd80) + 0x8600;
    }
  }
  else {
    if (local_18 == 0xff) {
      fVar62 = *(float *)((int)this + 0x6d8);
      param_1[0x40] = (int)fVar62;
      param_1[0x41] = (int)fVar62;
      param_1[0x42] = (int)fVar62;
      param_1[0x43] = (int)fVar62;
      fVar62 = 1.0 - fVar62;
      local_18 = 0x20;
      param_1[0x44] = (int)fVar62;
      param_1[0x45] = (int)fVar62;
      param_1[0x46] = (int)fVar62;
      param_1[0x47] = (int)fVar62;
    }
    else {
      if (local_18 != 0x100) goto LAB_10024649;
      local_18 = 0x10;
    }
LAB_1002465a:
    FUN_1001a6d4((int)this);
  }
  local_28 = param_1 + 0x11;
  if (local_18 == 0) {
    local_24 = 0;
    auVar85 = _local_50;
    if (param_3 != 0) {
      do {
        puVar30 = (uint *)(*param_1 + param_1[6] * local_24);
        if (*(byte *)(param_1 + 0xd) == 2) {
          auVar85._0_12_ = ZEXT812(0x3f800000);
          auVar85._12_4_ = 0;
          uStack_68._4_4_ = 1.0;
          uStack_68._0_4_ = (float)puVar30[2];
          local_70 = (undefined1  [8])*(undefined8 *)puVar30;
        }
        else {
          FUN_10026de3(puVar30,(uint)*(byte *)(param_1 + 0xd));
          _local_70 = auVar85;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          puVar30 = (uint *)(param_1[1] + param_1[7] * local_24);
          if (*(byte *)((int)param_1 + 0x35) == 2) {
            uStack_48._4_4_ = 1.0;
            uStack_48._0_4_ = (float)puVar30[2];
            local_50 = (undefined1  [8])*(undefined8 *)puVar30;
          }
          else {
            FUN_10026de3(puVar30,(uint)*(byte *)((int)param_1 + 0x35));
            _local_50 = auVar85;
          }
        }
        if (*(byte *)((int)param_1 + 0x39) != 5) {
          FUN_1002749d((float *)(param_1[10] * local_24 + param_1[5]),
                       (uint)*(byte *)((int)param_1 + 0x39));
        }
        local_c0 = 0.0;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        fVar62 = 0.0;
        fVar46 = 0.0;
        fVar61 = 0.0;
        fVar63 = 0.0;
        if (*(char *)((int)param_1 + 0x121) != '\0') {
          iVar38 = *(int *)((int)this + 0xd80);
          local_c0 = uStack_68._4_4_ * *(float *)(iVar38 + 0x28c) +
                     (float)local_70._4_4_ * *(float *)(iVar38 + 0x284) +
                     (float)uStack_68 * *(float *)(iVar38 + 0x288) +
                     (float)local_70._0_4_ * *(float *)(iVar38 + 0x280);
          fStack_bc = *(float *)(iVar38 + 0x29c) * uStack_68._4_4_ +
                      *(float *)(iVar38 + 0x294) * (float)local_70._4_4_ +
                      *(float *)(iVar38 + 0x298) * (float)uStack_68 +
                      *(float *)(iVar38 + 0x290) * (float)local_70._0_4_;
          fStack_b8 = *(float *)(iVar38 + 0x2ac) * uStack_68._4_4_ +
                      *(float *)(iVar38 + 0x2a4) * (float)local_70._4_4_ +
                      *(float *)(iVar38 + 0x2a8) * (float)uStack_68 +
                      *(float *)(iVar38 + 0x2a0) * (float)local_70._0_4_;
          fStack_b4 = *(float *)(iVar38 + 700) * uStack_68._4_4_ +
                      *(float *)(iVar38 + 0x2b4) * (float)local_70._4_4_ +
                      *(float *)(iVar38 + 0x2b8) * (float)uStack_68 +
                      *(float *)(iVar38 + 0x2b0) * (float)local_70._0_4_;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_1001a63e(this,10);
          iVar38 = *(int *)((int)this + 0xd80);
          fVar62 = uStack_48._4_4_ * *(float *)(iVar38 + 0x450c) +
                   (float)local_50._4_4_ * *(float *)(iVar38 + 0x4504) +
                   (float)uStack_48 * *(float *)(iVar38 + 0x4508) +
                   (float)local_50._0_4_ * *(float *)(iVar38 + 0x4500);
          fVar46 = *(float *)(iVar38 + 0x451c) * uStack_48._4_4_ +
                   *(float *)(iVar38 + 0x4514) * (float)local_50._4_4_ +
                   *(float *)(iVar38 + 0x4518) * (float)uStack_48 +
                   *(float *)(iVar38 + 0x4510) * (float)local_50._0_4_;
          fVar61 = *(float *)(iVar38 + 0x452c) * uStack_48._4_4_ +
                   *(float *)(iVar38 + 0x4524) * (float)local_50._4_4_ +
                   *(float *)(iVar38 + 0x4528) * (float)uStack_48 +
                   *(float *)(iVar38 + 0x4520) * (float)local_50._0_4_;
          fVar63 = *(float *)(iVar38 + 0x453c) * uStack_48._4_4_ +
                   *(float *)(iVar38 + 0x4534) * (float)local_50._4_4_ +
                   *(float *)(iVar38 + 0x4538) * (float)uStack_48 +
                   *(float *)(iVar38 + 0x4530) * (float)local_50._0_4_;
        }
        pfVar31 = (float *)*local_28;
        fVar99 = (float)uStack_68 * pfVar31[2] + (float)local_70._0_4_ * *pfVar31;
        fVar100 = pfVar31[6] * (float)uStack_68 + pfVar31[4] * (float)local_70._0_4_;
        fVar97 = pfVar31[10] * (float)uStack_68 + pfVar31[8] * (float)local_70._0_4_;
        fVar98 = pfVar31[0xe] * (float)uStack_68 + pfVar31[0xc] * (float)local_70._0_4_;
        auVar85._4_4_ = fVar100;
        auVar85._0_4_ = fVar99;
        auVar85._8_4_ = fVar97;
        auVar85._12_4_ = fVar98;
        auVar94._0_4_ = uStack_68._4_4_ * pfVar31[3] + (float)local_70._4_4_ * pfVar31[1] + fVar99;
        auVar94._4_4_ = pfVar31[7] * uStack_68._4_4_ + pfVar31[5] * (float)local_70._4_4_ + fVar100;
        auVar94._8_4_ = pfVar31[0xb] * uStack_68._4_4_ + pfVar31[9] * (float)local_70._4_4_ + fVar97
        ;
        auVar94._12_4_ =
             pfVar31[0xf] * uStack_68._4_4_ + pfVar31[0xd] * (float)local_70._4_4_ + fVar98;
        if (param_1[0x13] != 0) {
          pfVar31 = (float *)(local_24 * 0x20 + param_1[0x13]);
          *pfVar31 = local_c0;
          pfVar31[1] = fStack_bc;
          pfVar31[2] = fStack_b8;
          pfVar31[3] = fStack_b4;
          pfVar31 = (float *)((local_24 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar31 = fVar62;
          pfVar31[1] = fVar46;
          pfVar31[2] = fVar61;
          pfVar31[3] = fVar63;
        }
        pfVar31 = (float *)0x0;
        auVar106._4_4_ = auVar94._12_4_;
        auVar106._0_4_ = auVar94._12_4_;
        auVar106._8_4_ = auVar94._12_4_;
        auVar106._12_4_ = auVar94._12_4_;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar30 = (uint *)param_1[0x12];
          if ((char)param_1[0x48] != '\0') {
            pfVar31 = (float *)(param_1 + 0x28);
          }
          local_20 = 0;
          if (pfVar31 == (float *)0x0) {
            puVar30[1] = puVar30[1] & 0xfffff03f;
          }
          else {
            uVar37 = *(uint *)((int)this + 0x690);
            fVar62 = 0.0;
            fVar46 = 0.0;
            if ((uVar37 & 1) != 0) {
              fVar62 = pfVar31[2] * fStack_b8 + *pfVar31 * local_c0 +
                       pfVar31[3] * fStack_b4 + pfVar31[1] * fStack_bc;
            }
            fVar61 = 0.0;
            if ((uVar37 & 2) != 0) {
              fVar61 = pfVar31[0x1a] * fStack_b8 + pfVar31[0x18] * local_c0 +
                       pfVar31[0x1b] * fStack_b4 + pfVar31[0x19] * fStack_bc;
            }
            fVar63 = 0.0;
            if ((uVar37 & 4) != 0) {
              fVar63 = pfVar31[0x32] * fStack_b8 + pfVar31[0x30] * local_c0 +
                       pfVar31[0x33] * fStack_b4 + pfVar31[0x31] * fStack_bc;
            }
            fVar97 = 0.0;
            if ((uVar37 & 8) != 0) {
              fVar97 = pfVar31[0x4a] * fStack_b8 + pfVar31[0x48] * local_c0 +
                       pfVar31[0x4b] * fStack_b4 + pfVar31[0x49] * fStack_bc;
            }
            if ((uVar37 & 0x10) != 0) {
              fVar46 = pfVar31[0x62] * fStack_b8 + pfVar31[0x60] * local_c0 +
                       pfVar31[99] * fStack_b4 + pfVar31[0x61] * fStack_bc;
            }
            fVar98 = 0.0;
            if ((uVar37 & 0x20) != 0) {
              fVar98 = pfVar31[0x7a] * fStack_b8 + pfVar31[0x78] * local_c0 +
                       pfVar31[0x7b] * fStack_b4 + pfVar31[0x79] * fStack_bc;
            }
            auVar73._4_4_ = -(uint)(fVar61 < 0.0);
            auVar73._0_4_ = -(uint)(fVar62 < 0.0);
            auVar73._8_4_ = -(uint)(fVar63 < 0.0);
            auVar73._12_4_ = -(uint)(fVar97 < 0.0);
            auVar80._4_4_ = -(uint)(fVar98 < 0.0);
            auVar80._0_4_ = -(uint)(fVar46 < 0.0);
            auVar80._8_8_ = 0;
            uVar37 = movmskps(pfVar31,auVar73);
            uVar32 = movmskps(uVar37 & 0xf,auVar80);
            local_20 = *(uint *)(&DAT_100d1bd8 + (uVar32 & 3) * 4) |
                       *(uint *)(&DAT_100d1be8 + (uVar37 & 0xf) * 4);
            puVar30[1] = puVar30[1] &
                         (*(uint *)(&DAT_100d1bd8 + (uVar32 & 3) * 4) | 0x3ff) &
                         (*(uint *)(&DAT_100d1be8 + (uVar37 & 0xf) * 4) | 0xc3f);
          }
          auVar57._4_4_ = -(uint)(auVar94._0_4_ * 1.0 + auVar94._12_4_ < 0.0);
          auVar57._0_4_ = -(uint)(auVar94._0_4_ * -1.0 + auVar94._12_4_ < 0.0);
          auVar57._8_4_ = -(uint)(auVar94._4_4_ * -1.0 + auVar94._12_4_ < 0.0);
          auVar57._12_4_ = -(uint)(auVar94._4_4_ * 1.0 + auVar94._12_4_ < 0.0);
          uVar37 = movmskps(puVar30[1],auVar57);
          uVar37 = *(uint *)(&DAT_100d1b98 + (uVar37 & 0xf) * 4);
          uVar45 = (uVar37 | 0x30) & puVar30[1];
          puVar30[1] = uVar45;
          auVar85._4_4_ = -(uint)(auVar94._8_4_ * 1.0 < 0.0);
          auVar85._0_4_ = -(uint)(auVar94._8_4_ * -1.0 + auVar94._12_4_ < 0.0);
          auVar85._8_4_ = -(uint)(auVar94._8_4_ * -1.0 < 0.0);
          auVar85._12_4_ = -(uint)(auVar94._8_4_ * 1.0 < 0.0);
          uVar32 = movmskps(puVar30,auVar85);
          pfVar31 = (float *)(local_20 | uVar37 | *(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4));
          puVar30[1] = (*(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | 0xf) & uVar45;
          *puVar30 = *puVar30 | (uint)pfVar31;
        }
        if (*(char *)((int)param_1 + 0x3e) == '\0') {
          auVar95._0_4_ = auVar94._0_4_ + 0.0;
          auVar95._4_4_ = auVar94._4_4_ + 0.0;
          auVar95._8_4_ = auVar94._8_4_ + 0.0;
          auVar95._12_4_ = 0x3f800000;
          auVar96 = divps(auVar95,auVar106);
          auVar94._0_4_ = auVar96._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
          auVar94._4_4_ = auVar96._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
          auVar94._8_4_ = auVar96._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
          auVar94._12_4_ = auVar96._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
          if (local_24 == 0) {
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar94;
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar94;
          }
          else {
            auVar85 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar94);
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar85;
            auVar85 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar94);
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar85;
          }
        }
        pauVar25 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (pfVar31 == (float *)0x0)) {
            *pauVar25 = auVar94;
          }
          else {
            *(int *)(*pauVar25 + 0xc) = auVar94._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_3);
      goto LAB_10026c94;
    }
  }
  else if (local_18 == 1) {
    local_24 = 0;
    auVar56 = _local_50;
    if (param_3 != 0) {
      do {
        puVar30 = (uint *)(*param_1 + param_1[6] * local_24);
        if (*(byte *)(param_1 + 0xd) == 2) {
          auVar56._0_12_ = ZEXT812(0x3f800000);
          auVar56._12_4_ = 0;
          uStack_68._4_4_ = 1.0;
          uStack_68._0_4_ = (float)puVar30[2];
          local_70 = (undefined1  [8])*(undefined8 *)puVar30;
        }
        else {
          FUN_10026de3(puVar30,(uint)*(byte *)(param_1 + 0xd));
          _local_70 = auVar56;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          puVar30 = (uint *)(param_1[1] + param_1[7] * local_24);
          if (*(byte *)((int)param_1 + 0x35) == 2) {
            uStack_48._4_4_ = 1.0;
            uStack_48._0_4_ = (float)puVar30[2];
            local_50 = (undefined1  [8])*(undefined8 *)puVar30;
          }
          else {
            FUN_10026de3(puVar30,(uint)*(byte *)((int)param_1 + 0x35));
            _local_50 = auVar56;
          }
        }
        iVar38 = param_1[0xb];
        iVar33 = param_1[2];
        pfVar31 = (float *)(param_1[10] * local_24 + param_1[5]);
        if (*(byte *)((int)param_1 + 0x39) == 5) {
          fVar62 = *pfVar31;
        }
        else {
          fVar62 = FUN_1002749d(pfVar31,(uint)*(byte *)((int)param_1 + 0x39));
        }
        iVar40 = ((uint)fVar62 & 0xff) + 10;
        iVar35 = ((uint)fVar62 >> 8 & 0xff) + 10;
        local_c0 = 0.0;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        fVar62 = *(float *)(iVar33 + iVar38 * local_24);
        iVar34 = *(int *)((int)this + 0xd80);
        iVar42 = iVar35 * 0x40;
        pfVar31 = (float *)(iVar42 + iVar34);
        pfVar14 = (float *)(iVar42 + 0x10 + iVar34);
        pfVar15 = (float *)(iVar42 + 0x20 + iVar34);
        pfVar1 = (float *)(iVar42 + 0x30 + iVar34);
        iVar39 = iVar40 * 0x40;
        pfVar43 = (float *)(iVar39 + iVar34);
        pfVar2 = (float *)(iVar39 + 0x10 + iVar34);
        pfVar3 = (float *)(iVar39 + 0x30 + iVar34);
        pfVar4 = (float *)(iVar39 + 0x20 + iVar34);
        fVar46 = (pfVar31[3] * uStack_68._4_4_ + pfVar31[1] * (float)local_70._4_4_ +
                 pfVar31[2] * (float)uStack_68 + *pfVar31 * (float)local_70._0_4_) * (1.0 - fVar62)
                 + (pfVar43[3] * uStack_68._4_4_ + pfVar43[1] * (float)local_70._4_4_ +
                   pfVar43[2] * (float)uStack_68 + *pfVar43 * (float)local_70._0_4_) * fVar62;
        fVar61 = (pfVar14[3] * uStack_68._4_4_ + pfVar14[1] * (float)local_70._4_4_ +
                 pfVar14[2] * (float)uStack_68 + *pfVar14 * (float)local_70._0_4_) * (1.0 - fVar62)
                 + (pfVar2[3] * uStack_68._4_4_ + pfVar2[1] * (float)local_70._4_4_ +
                   pfVar2[2] * (float)uStack_68 + *pfVar2 * (float)local_70._0_4_) * fVar62;
        fVar63 = (pfVar15[3] * uStack_68._4_4_ + pfVar15[1] * (float)local_70._4_4_ +
                 pfVar15[2] * (float)uStack_68 + *pfVar15 * (float)local_70._0_4_) * (1.0 - fVar62)
                 + (pfVar4[3] * uStack_68._4_4_ + pfVar4[1] * (float)local_70._4_4_ +
                   pfVar4[2] * (float)uStack_68 + *pfVar4 * (float)local_70._0_4_) * fVar62;
        fVar62 = (pfVar1[3] * uStack_68._4_4_ + pfVar1[1] * (float)local_70._4_4_ +
                 pfVar1[2] * (float)uStack_68 + *pfVar1 * (float)local_70._0_4_) * (1.0 - fVar62) +
                 (pfVar3[3] * uStack_68._4_4_ + pfVar3[1] * (float)local_70._4_4_ +
                 pfVar3[2] * (float)uStack_68 + *pfVar3 * (float)local_70._0_4_) * fVar62;
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_1001a63e(this,iVar40);
          FUN_1001a63e(this,iVar35);
          fVar97 = *(float *)(iVar33 + iVar38 * local_24);
          iVar34 = *(int *)((int)this + 0xd80);
          pfVar31 = (float *)(iVar34 + 0x4280 + iVar42);
          pfVar43 = (float *)(iVar34 + 0x4290 + iVar42);
          pfVar14 = (float *)(iVar34 + 0x42a0 + iVar42);
          pfVar15 = (float *)(iVar34 + 0x42b0 + iVar42);
          pfVar1 = (float *)(iVar34 + 0x4280 + iVar39);
          pfVar2 = (float *)(iVar34 + 0x4290 + iVar39);
          pfVar3 = (float *)(iVar34 + 0x42a0 + iVar39);
          pfVar4 = (float *)(iVar34 + 0x42b0 + iVar39);
          local_c0 = (pfVar31[3] * uStack_48._4_4_ + pfVar31[1] * (float)local_50._4_4_ +
                     pfVar31[2] * (float)uStack_48 + *pfVar31 * (float)local_50._0_4_) *
                     (1.0 - fVar97) +
                     (pfVar1[3] * uStack_48._4_4_ + pfVar1[1] * (float)local_50._4_4_ +
                     pfVar1[2] * (float)uStack_48 + *pfVar1 * (float)local_50._0_4_) * fVar97;
          fStack_bc = (pfVar43[3] * uStack_48._4_4_ + pfVar43[1] * (float)local_50._4_4_ +
                      pfVar43[2] * (float)uStack_48 + *pfVar43 * (float)local_50._0_4_) *
                      (1.0 - fVar97) +
                      (pfVar2[3] * uStack_48._4_4_ + pfVar2[1] * (float)local_50._4_4_ +
                      pfVar2[2] * (float)uStack_48 + *pfVar2 * (float)local_50._0_4_) * fVar97;
          fStack_b8 = (pfVar14[3] * uStack_48._4_4_ + pfVar14[1] * (float)local_50._4_4_ +
                      pfVar14[2] * (float)uStack_48 + *pfVar14 * (float)local_50._0_4_) *
                      (1.0 - fVar97) +
                      (pfVar3[3] * uStack_48._4_4_ + pfVar3[1] * (float)local_50._4_4_ +
                      pfVar3[2] * (float)uStack_48 + *pfVar3 * (float)local_50._0_4_) * fVar97;
          fStack_b4 = (pfVar15[3] * uStack_48._4_4_ + pfVar15[1] * (float)local_50._4_4_ +
                      pfVar15[2] * (float)uStack_48 + *pfVar15 * (float)local_50._0_4_) *
                      (1.0 - fVar97) +
                      (pfVar4[3] * uStack_48._4_4_ + pfVar4[1] * (float)local_50._4_4_ +
                      pfVar4[2] * (float)uStack_48 + *pfVar4 * (float)local_50._0_4_) * fVar97;
        }
        fVar99 = *(float *)(iVar34 + 0x8588) * fVar63 + *(float *)(iVar34 + 0x8580) * fVar46;
        fVar100 = *(float *)(iVar34 + 0x8598) * fVar63 + *(float *)(iVar34 + 0x8590) * fVar46;
        fVar97 = *(float *)(iVar34 + 0x85a8) * fVar63 + *(float *)(iVar34 + 0x85a0) * fVar46;
        fVar98 = *(float *)(iVar34 + 0x85b8) * fVar63 + *(float *)(iVar34 + 0x85b0) * fVar46;
        auVar56._4_4_ = fVar100;
        auVar56._0_4_ = fVar99;
        auVar56._8_4_ = fVar97;
        auVar56._12_4_ = fVar98;
        auVar92._0_4_ =
             *(float *)(iVar34 + 0x858c) * fVar62 + *(float *)(iVar34 + 0x8584) * fVar61 + fVar99;
        auVar92._4_4_ =
             *(float *)(iVar34 + 0x859c) * fVar62 + *(float *)(iVar34 + 0x8594) * fVar61 + fVar100;
        auVar92._8_4_ =
             *(float *)(iVar34 + 0x85ac) * fVar62 + *(float *)(iVar34 + 0x85a4) * fVar61 + fVar97;
        auVar92._12_4_ =
             *(float *)(iVar34 + 0x85bc) * fVar62 + *(float *)(iVar34 + 0x85b4) * fVar61 + fVar98;
        if (param_1[0x13] != 0) {
          auVar56._4_4_ = fStack_bc;
          auVar56._0_4_ = local_c0;
          auVar56._8_4_ = fStack_b8;
          auVar56._12_4_ = fStack_b4;
          pfVar31 = (float *)(local_24 * 0x20 + param_1[0x13]);
          *pfVar31 = fVar46;
          pfVar31[1] = fVar61;
          pfVar31[2] = fVar63;
          pfVar31[3] = fVar62;
          *(undefined1 (*) [16])((local_24 * 0x20 | 0x10) + param_1[0x13]) = auVar56;
        }
        local_20 = 0;
        auVar105._4_4_ = auVar92._12_4_;
        auVar105._0_4_ = auVar92._12_4_;
        auVar105._8_4_ = auVar92._12_4_;
        auVar105._12_4_ = auVar92._12_4_;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar30 = (uint *)param_1[0x12];
          local_20 = 0;
          pfVar31 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar31 = (float *)(param_1 + 0x28);
          }
          if (pfVar31 == (float *)0x0) {
            puVar30[1] = puVar30[1] & 0xfffff03f;
            uVar37 = 0;
          }
          else {
            uVar37 = *(uint *)((int)this + 0x690);
            fVar97 = 0.0;
            fVar98 = 0.0;
            if ((uVar37 & 1) != 0) {
              fVar97 = fVar63 * pfVar31[2] + fVar46 * *pfVar31 +
                       fVar62 * pfVar31[3] + fVar61 * pfVar31[1];
            }
            fVar99 = 0.0;
            if ((uVar37 & 2) != 0) {
              fVar99 = pfVar31[0x1a] * fVar63 + pfVar31[0x18] * fVar46 +
                       pfVar31[0x1b] * fVar62 + pfVar31[0x19] * fVar61;
            }
            fVar100 = 0.0;
            if ((uVar37 & 4) != 0) {
              fVar100 = pfVar31[0x32] * fVar63 + pfVar31[0x30] * fVar46 +
                        pfVar31[0x33] * fVar62 + pfVar31[0x31] * fVar61;
            }
            fVar81 = 0.0;
            if ((uVar37 & 8) != 0) {
              fVar81 = pfVar31[0x4a] * fVar63 + pfVar31[0x48] * fVar46 +
                       pfVar31[0x4b] * fVar62 + pfVar31[0x49] * fVar61;
            }
            if ((uVar37 & 0x10) != 0) {
              fVar98 = pfVar31[0x62] * fVar63 + pfVar31[0x60] * fVar46 +
                       pfVar31[99] * fVar62 + pfVar31[0x61] * fVar61;
            }
            fVar64 = 0.0;
            if ((uVar37 & 0x20) != 0) {
              fVar64 = pfVar31[0x7a] * fVar63 + pfVar31[0x78] * fVar46 +
                       pfVar31[0x7b] * fVar62 + pfVar31[0x79] * fVar61;
            }
            auVar72._4_4_ = -(uint)(fVar99 < 0.0);
            auVar72._0_4_ = -(uint)(fVar97 < 0.0);
            auVar72._8_4_ = -(uint)(fVar100 < 0.0);
            auVar72._12_4_ = -(uint)(fVar81 < 0.0);
            auVar79._4_4_ = -(uint)(fVar64 < 0.0);
            auVar79._0_4_ = -(uint)(fVar98 < 0.0);
            auVar79._8_8_ = 0;
            uVar32 = movmskps(pfVar31,auVar72);
            uVar37 = movmskps(uVar32 & 0xf,auVar79);
            local_20 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) |
                       *(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4);
            uVar37 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) | 0x3ff;
            puVar30[1] = puVar30[1] &
                         (*(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4) | 0xc3f) & uVar37;
          }
          auVar55._4_4_ = -(uint)(auVar92._0_4_ * 1.0 + auVar92._12_4_ < 0.0);
          auVar55._0_4_ = -(uint)(auVar92._0_4_ * -1.0 + auVar92._12_4_ < 0.0);
          auVar55._8_4_ = -(uint)(auVar92._4_4_ * -1.0 + auVar92._12_4_ < 0.0);
          auVar55._12_4_ = -(uint)(auVar92._4_4_ * 1.0 + auVar92._12_4_ < 0.0);
          uVar37 = movmskps(uVar37,auVar55);
          uVar37 = *(uint *)(&DAT_100d1b98 + (uVar37 & 0xf) * 4);
          uVar45 = (uVar37 | 0x30) & puVar30[1];
          puVar30[1] = uVar45;
          auVar56._4_4_ = -(uint)(auVar92._8_4_ * 1.0 < 0.0);
          auVar56._0_4_ = -(uint)(auVar92._8_4_ * -1.0 + auVar92._12_4_ < 0.0);
          auVar56._8_4_ = -(uint)(auVar92._8_4_ * -1.0 < 0.0);
          auVar56._12_4_ = -(uint)(auVar92._8_4_ * 1.0 < 0.0);
          uVar32 = movmskps(puVar30,auVar56);
          local_20 = local_20 | *(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | uVar37;
          puVar30[1] = (*(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | 0xf) & uVar45;
          *puVar30 = *puVar30 | local_20;
        }
        if (*(char *)((int)param_1 + 0x3e) == '\0') {
          auVar93._0_4_ = auVar92._0_4_ + 0.0;
          auVar93._4_4_ = auVar92._4_4_ + 0.0;
          auVar93._8_4_ = auVar92._8_4_ + 0.0;
          auVar93._12_4_ = 0x3f800000;
          auVar85 = divps(auVar93,auVar105);
          auVar92._0_4_ = auVar85._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
          auVar92._4_4_ = auVar85._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
          auVar92._8_4_ = auVar85._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
          auVar92._12_4_ = auVar85._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
          if (local_24 == 0) {
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar92;
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar92;
          }
          else {
            auVar85 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar92);
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar85;
            auVar56 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar92);
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar56;
          }
        }
        pauVar25 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_20 == 0)) {
            *pauVar25 = auVar92;
          }
          else {
            *(int *)(*pauVar25 + 0xc) = auVar92._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_3);
      goto LAB_10026c94;
    }
  }
  else if (local_18 == 2) {
    local_24 = 0;
    auVar54 = _local_50;
    if (param_3 != 0) {
      do {
        puVar30 = (uint *)(*param_1 + param_1[6] * local_24);
        if (*(byte *)(param_1 + 0xd) == 2) {
          auVar54._0_12_ = ZEXT812(0x3f800000);
          auVar54._12_4_ = 0;
          uStack_68._4_4_ = 1.0;
          uStack_68._0_4_ = (float)puVar30[2];
          local_70 = (undefined1  [8])*(undefined8 *)puVar30;
        }
        else {
          FUN_10026de3(puVar30,(uint)*(byte *)(param_1 + 0xd));
          _local_70 = auVar54;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          puVar30 = (uint *)(param_1[1] + param_1[7] * local_24);
          if (*(byte *)((int)param_1 + 0x35) == 2) {
            uStack_48._4_4_ = 1.0;
            uStack_48._0_4_ = (float)puVar30[2];
            local_50 = (undefined1  [8])*(undefined8 *)puVar30;
          }
          else {
            FUN_10026de3(puVar30,(uint)*(byte *)((int)param_1 + 0x35));
            _local_50 = auVar54;
          }
        }
        pfVar31 = (float *)(param_1[2] + param_1[0xb] * local_24);
        pfVar43 = (float *)(param_1[10] * local_24 + param_1[5]);
        if (*(byte *)((int)param_1 + 0x39) == 5) {
          fVar62 = *pfVar43;
        }
        else {
          fVar62 = FUN_1002749d(pfVar43,(uint)*(byte *)((int)param_1 + 0x39));
        }
        uVar74 = 0;
        iVar38 = ((uint)fVar62 & 0xff) + 10;
        local_c0 = 0.0;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        iVar33 = ((uint)fVar62 >> 8 & 0xff) + 10;
        iVar34 = ((uint)fVar62 >> 0x10 & 0xff) + 10;
        if (*(byte *)((int)param_1 + 0x36) == 1) {
          uVar74 = *(undefined8 *)pfVar31;
        }
        else {
          FUN_1002710b((short *)pfVar31,(uint)*(byte *)((int)param_1 + 0x36));
        }
        iVar35 = *(int *)((int)this + 0xd80);
        fVar98 = (float)uVar74;
        fVar99 = (float)((ulonglong)uVar74 >> 0x20);
        iVar42 = iVar33 * 0x40;
        pfVar43 = (float *)(iVar42 + iVar35);
        pfVar1 = (float *)(iVar42 + 0x10 + iVar35);
        pfVar2 = (float *)(iVar42 + 0x20 + iVar35);
        pfVar3 = (float *)(iVar42 + 0x30 + iVar35);
        iVar39 = iVar34 * 0x40;
        pfVar14 = (float *)(iVar39 + iVar35);
        pfVar4 = (float *)(iVar39 + 0x10 + iVar35);
        pfVar5 = (float *)(iVar39 + 0x30 + iVar35);
        pfVar6 = (float *)(iVar39 + 0x20 + iVar35);
        iVar40 = iVar38 * 0x40;
        fVar62 = pfVar14[2] * (float)uStack_68 + *pfVar14 * (float)local_70._0_4_;
        fVar46 = pfVar4[2] * (float)uStack_68 + *pfVar4 * (float)local_70._0_4_;
        pfVar15 = (float *)(iVar40 + iVar35);
        pfVar7 = (float *)(iVar40 + 0x10 + iVar35);
        pfVar8 = (float *)(iVar40 + 0x30 + iVar35);
        pfVar9 = (float *)(iVar40 + 0x20 + iVar35);
        fVar61 = (pfVar43[3] * uStack_68._4_4_ + pfVar43[1] * (float)local_70._4_4_ +
                 pfVar43[2] * (float)uStack_68 + *pfVar43 * (float)local_70._0_4_) * fVar99 +
                 (uStack_68._4_4_ * pfVar15[3] + (float)local_70._4_4_ * pfVar15[1] +
                 (float)uStack_68 * pfVar15[2] + (float)local_70._0_4_ * *pfVar15) * fVar98 +
                 (pfVar14[3] * uStack_68._4_4_ + pfVar14[1] * (float)local_70._4_4_ + fVar62) *
                 ((1.0 - fVar98) - fVar99);
        fVar63 = (pfVar1[3] * uStack_68._4_4_ + pfVar1[1] * (float)local_70._4_4_ +
                 pfVar1[2] * (float)uStack_68 + *pfVar1 * (float)local_70._0_4_) * fVar99 +
                 (pfVar7[3] * uStack_68._4_4_ + pfVar7[1] * (float)local_70._4_4_ +
                 pfVar7[2] * (float)uStack_68 + *pfVar7 * (float)local_70._0_4_) * fVar98 +
                 (pfVar4[3] * uStack_68._4_4_ + pfVar4[1] * (float)local_70._4_4_ + fVar46) *
                 ((1.0 - fVar98) - fVar99);
        fVar97 = (pfVar2[3] * uStack_68._4_4_ + pfVar2[1] * (float)local_70._4_4_ +
                 pfVar2[2] * (float)uStack_68 + *pfVar2 * (float)local_70._0_4_) * fVar99 +
                 (pfVar9[3] * uStack_68._4_4_ + pfVar9[1] * (float)local_70._4_4_ +
                 pfVar9[2] * (float)uStack_68 + *pfVar9 * (float)local_70._0_4_) * fVar98 +
                 (pfVar6[3] * uStack_68._4_4_ + pfVar6[1] * (float)local_70._4_4_ +
                 pfVar6[2] * (float)uStack_68 + *pfVar6 * (float)local_70._0_4_) *
                 ((1.0 - fVar98) - fVar99);
        fVar98 = (pfVar3[3] * uStack_68._4_4_ + pfVar3[1] * (float)local_70._4_4_ +
                 pfVar3[2] * (float)uStack_68 + *pfVar3 * (float)local_70._0_4_) * fVar99 +
                 (pfVar8[3] * uStack_68._4_4_ + pfVar8[1] * (float)local_70._4_4_ +
                 pfVar8[2] * (float)uStack_68 + *pfVar8 * (float)local_70._0_4_) * fVar98 +
                 (pfVar5[3] * uStack_68._4_4_ + pfVar5[1] * (float)local_70._4_4_ +
                 pfVar5[2] * (float)uStack_68 + *pfVar5 * (float)local_70._0_4_) *
                 ((1.0 - fVar98) - fVar99);
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          bVar22 = *(byte *)((int)param_1 + 0x36);
          FUN_1001a63e(this,iVar38);
          FUN_1001a63e(this,iVar33);
          FUN_1001a63e(this,iVar34);
          if (bVar22 == 1) {
            fVar62 = *pfVar31;
            fVar46 = pfVar31[1];
          }
          else {
            FUN_1002710b((short *)pfVar31,(uint)bVar22);
          }
          iVar35 = *(int *)((int)this + 0xd80);
          pfVar31 = (float *)(iVar35 + 0x4290 + iVar42);
          pfVar43 = (float *)(iVar35 + 0x42a0 + iVar42);
          pfVar14 = (float *)(iVar35 + 0x42b0 + iVar42);
          pfVar15 = (float *)(iVar35 + 0x4280 + iVar42);
          pfVar1 = (float *)(iVar35 + 0x4280 + iVar39);
          pfVar2 = (float *)(iVar35 + 0x42a0 + iVar39);
          pfVar3 = (float *)(iVar35 + 0x4290 + iVar39);
          pfVar4 = (float *)(iVar35 + 0x42b0 + iVar39);
          pfVar5 = (float *)(iVar35 + 0x4280 + iVar40);
          pfVar6 = (float *)(iVar35 + 0x4290 + iVar40);
          pfVar7 = (float *)(iVar35 + 0x42a0 + iVar40);
          pfVar8 = (float *)(iVar35 + 0x42b0 + iVar40);
          local_c0 = (pfVar15[3] * uStack_48._4_4_ + pfVar15[1] * (float)local_50._4_4_ +
                     pfVar15[2] * (float)uStack_48 + *pfVar15 * (float)local_50._0_4_) * fVar46 +
                     (pfVar5[3] * uStack_48._4_4_ + pfVar5[1] * (float)local_50._4_4_ +
                     pfVar5[2] * (float)uStack_48 + *pfVar5 * (float)local_50._0_4_) * fVar62 +
                     (pfVar1[3] * uStack_48._4_4_ + pfVar1[1] * (float)local_50._4_4_ +
                     pfVar1[2] * (float)uStack_48 + *pfVar1 * (float)local_50._0_4_) *
                     ((1.0 - fVar62) - fVar46);
          fStack_bc = (pfVar31[3] * uStack_48._4_4_ + pfVar31[1] * (float)local_50._4_4_ +
                      pfVar31[2] * (float)uStack_48 + *pfVar31 * (float)local_50._0_4_) * fVar46 +
                      (pfVar6[3] * uStack_48._4_4_ + pfVar6[1] * (float)local_50._4_4_ +
                      pfVar6[2] * (float)uStack_48 + *pfVar6 * (float)local_50._0_4_) * fVar62 +
                      (pfVar3[3] * uStack_48._4_4_ + pfVar3[1] * (float)local_50._4_4_ +
                      pfVar3[2] * (float)uStack_48 + *pfVar3 * (float)local_50._0_4_) *
                      ((1.0 - fVar62) - fVar46);
          fStack_b8 = (pfVar43[3] * uStack_48._4_4_ + pfVar43[1] * (float)local_50._4_4_ +
                      pfVar43[2] * (float)uStack_48 + *pfVar43 * (float)local_50._0_4_) * fVar46 +
                      (pfVar7[3] * uStack_48._4_4_ + pfVar7[1] * (float)local_50._4_4_ +
                      pfVar7[2] * (float)uStack_48 + *pfVar7 * (float)local_50._0_4_) * fVar62 +
                      (pfVar2[3] * uStack_48._4_4_ + pfVar2[1] * (float)local_50._4_4_ +
                      pfVar2[2] * (float)uStack_48 + *pfVar2 * (float)local_50._0_4_) *
                      ((1.0 - fVar62) - fVar46);
          fStack_b4 = (pfVar14[3] * uStack_48._4_4_ + pfVar14[1] * (float)local_50._4_4_ +
                      pfVar14[2] * (float)uStack_48 + *pfVar14 * (float)local_50._0_4_) * fVar46 +
                      (pfVar8[3] * uStack_48._4_4_ + pfVar8[1] * (float)local_50._4_4_ +
                      pfVar8[2] * (float)uStack_48 + *pfVar8 * (float)local_50._0_4_) * fVar62 +
                      (pfVar4[3] * uStack_48._4_4_ + pfVar4[1] * (float)local_50._4_4_ +
                      pfVar4[2] * (float)uStack_48 + *pfVar4 * (float)local_50._0_4_) *
                      ((1.0 - fVar62) - fVar46);
        }
        fVar99 = *(float *)(iVar35 + 0x8588) * fVar97 + *(float *)(iVar35 + 0x8580) * fVar61;
        fVar100 = *(float *)(iVar35 + 0x8598) * fVar97 + *(float *)(iVar35 + 0x8590) * fVar61;
        fVar62 = *(float *)(iVar35 + 0x85a8) * fVar97 + *(float *)(iVar35 + 0x85a0) * fVar61;
        fVar46 = *(float *)(iVar35 + 0x85b8) * fVar97 + *(float *)(iVar35 + 0x85b0) * fVar61;
        auVar54._4_4_ = fVar100;
        auVar54._0_4_ = fVar99;
        auVar54._8_4_ = fVar62;
        auVar54._12_4_ = fVar46;
        auVar90._0_4_ =
             *(float *)(iVar35 + 0x858c) * fVar98 + *(float *)(iVar35 + 0x8584) * fVar63 + fVar99;
        auVar90._4_4_ =
             *(float *)(iVar35 + 0x859c) * fVar98 + *(float *)(iVar35 + 0x8594) * fVar63 + fVar100;
        auVar90._8_4_ =
             *(float *)(iVar35 + 0x85ac) * fVar98 + *(float *)(iVar35 + 0x85a4) * fVar63 + fVar62;
        auVar90._12_4_ =
             *(float *)(iVar35 + 0x85bc) * fVar98 + *(float *)(iVar35 + 0x85b4) * fVar63 + fVar46;
        if (param_1[0x13] != 0) {
          auVar54._4_4_ = fStack_bc;
          auVar54._0_4_ = local_c0;
          auVar54._8_4_ = fStack_b8;
          auVar54._12_4_ = fStack_b4;
          pfVar31 = (float *)(local_24 * 0x20 + param_1[0x13]);
          *pfVar31 = fVar61;
          pfVar31[1] = fVar63;
          pfVar31[2] = fVar97;
          pfVar31[3] = fVar98;
          *(undefined1 (*) [16])((local_24 * 0x20 | 0x10) + param_1[0x13]) = auVar54;
        }
        local_20 = 0;
        auVar104._4_4_ = auVar90._12_4_;
        auVar104._0_4_ = auVar90._12_4_;
        auVar104._8_4_ = auVar90._12_4_;
        auVar104._12_4_ = auVar90._12_4_;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar30 = (uint *)param_1[0x12];
          local_20 = 0;
          pfVar31 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar31 = (float *)(param_1 + 0x28);
          }
          if (pfVar31 == (float *)0x0) {
            puVar30[1] = puVar30[1] & 0xfffff03f;
            uVar37 = 0;
          }
          else {
            uVar37 = *(uint *)((int)this + 0x690);
            fVar62 = 0.0;
            fVar46 = 0.0;
            if ((uVar37 & 1) != 0) {
              fVar62 = pfVar31[2] * fVar97 + *pfVar31 * fVar61 +
                       pfVar31[3] * fVar98 + pfVar31[1] * fVar63;
            }
            fVar99 = 0.0;
            if ((uVar37 & 2) != 0) {
              fVar99 = pfVar31[0x1a] * fVar97 + pfVar31[0x18] * fVar61 +
                       pfVar31[0x1b] * fVar98 + pfVar31[0x19] * fVar63;
            }
            fVar100 = 0.0;
            if ((uVar37 & 4) != 0) {
              fVar100 = pfVar31[0x32] * fVar97 + pfVar31[0x30] * fVar61 +
                        pfVar31[0x33] * fVar98 + pfVar31[0x31] * fVar63;
            }
            fVar81 = 0.0;
            if ((uVar37 & 8) != 0) {
              fVar81 = pfVar31[0x4a] * fVar97 + pfVar31[0x48] * fVar61 +
                       pfVar31[0x4b] * fVar98 + pfVar31[0x49] * fVar63;
            }
            if ((uVar37 & 0x10) != 0) {
              fVar46 = pfVar31[0x62] * fVar97 + pfVar31[0x60] * fVar61 +
                       pfVar31[99] * fVar98 + pfVar31[0x61] * fVar63;
            }
            fVar64 = 0.0;
            if ((uVar37 & 0x20) != 0) {
              fVar64 = pfVar31[0x7a] * fVar97 + pfVar31[0x78] * fVar61 +
                       pfVar31[0x7b] * fVar98 + pfVar31[0x79] * fVar63;
            }
            auVar71._4_4_ = -(uint)(fVar99 < 0.0);
            auVar71._0_4_ = -(uint)(fVar62 < 0.0);
            auVar71._8_4_ = -(uint)(fVar100 < 0.0);
            auVar71._12_4_ = -(uint)(fVar81 < 0.0);
            auVar78._4_4_ = -(uint)(fVar64 < 0.0);
            auVar78._0_4_ = -(uint)(fVar46 < 0.0);
            auVar78._8_8_ = 0;
            uVar32 = movmskps(pfVar31,auVar71);
            uVar37 = movmskps(uVar32 & 0xf,auVar78);
            local_20 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) |
                       *(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4);
            uVar37 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) | 0x3ff;
            puVar30[1] = puVar30[1] &
                         (*(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4) | 0xc3f) & uVar37;
          }
          auVar53._4_4_ = -(uint)(auVar90._0_4_ * 1.0 + auVar90._12_4_ < 0.0);
          auVar53._0_4_ = -(uint)(auVar90._0_4_ * -1.0 + auVar90._12_4_ < 0.0);
          auVar53._8_4_ = -(uint)(auVar90._4_4_ * -1.0 + auVar90._12_4_ < 0.0);
          auVar53._12_4_ = -(uint)(auVar90._4_4_ * 1.0 + auVar90._12_4_ < 0.0);
          uVar37 = movmskps(uVar37,auVar53);
          uVar37 = *(uint *)(&DAT_100d1b98 + (uVar37 & 0xf) * 4);
          uVar45 = (uVar37 | 0x30) & puVar30[1];
          puVar30[1] = uVar45;
          auVar54._4_4_ = -(uint)(auVar90._8_4_ * 1.0 < 0.0);
          auVar54._0_4_ = -(uint)(auVar90._8_4_ * -1.0 + auVar90._12_4_ < 0.0);
          auVar54._8_4_ = -(uint)(auVar90._8_4_ * -1.0 < 0.0);
          auVar54._12_4_ = -(uint)(auVar90._8_4_ * 1.0 < 0.0);
          uVar32 = movmskps(puVar30,auVar54);
          local_20 = local_20 | *(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | uVar37;
          puVar30[1] = (*(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | 0xf) & uVar45;
          *puVar30 = *puVar30 | local_20;
        }
        if (*(char *)((int)param_1 + 0x3e) == '\0') {
          auVar54._4_4_ = auVar90._4_4_;
          auVar54._0_4_ = auVar90._0_4_;
          auVar54._8_4_ = auVar90._8_4_;
          auVar54._12_4_ = 0;
          auVar91._0_4_ = auVar90._0_4_ + 0.0;
          auVar91._4_4_ = auVar90._4_4_ + 0.0;
          auVar91._8_4_ = auVar90._8_4_ + 0.0;
          auVar91._12_4_ = 0x3f800000;
          auVar85 = divps(auVar91,auVar104);
          auVar90._0_4_ = auVar85._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
          auVar90._4_4_ = auVar85._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
          auVar90._8_4_ = auVar85._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
          auVar90._12_4_ = auVar85._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
          if (local_24 == 0) {
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar90;
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar90;
          }
          else {
            auVar85 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar90);
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar85;
            auVar54 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar90);
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar54;
          }
        }
        pauVar25 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_20 == 0)) {
            *pauVar25 = auVar90;
          }
          else {
            *(int *)(*pauVar25 + 0xc) = auVar90._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_3);
      goto LAB_10026c94;
    }
  }
  else if (local_18 == 3) {
    local_34 = 0;
    auVar52 = _local_60;
    if (param_3 != 0) {
      do {
        puVar30 = (uint *)(*param_1 + param_1[6] * local_34);
        if (*(byte *)(param_1 + 0xd) == 2) {
          auVar52._0_12_ = ZEXT812(0x3f800000);
          auVar52._12_4_ = 0;
          uStack_a8._4_4_ = 1.0;
          uStack_a8._0_4_ = (float)puVar30[2];
          local_b0 = (undefined1  [8])*(undefined8 *)puVar30;
        }
        else {
          FUN_10026de3(puVar30,(uint)*(byte *)(param_1 + 0xd));
          _local_b0 = auVar52;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          puVar30 = (uint *)(param_1[1] + param_1[7] * local_34);
          if (*(byte *)((int)param_1 + 0x35) == 2) {
            uStack_58._4_4_ = 1.0;
            uStack_58._0_4_ = (float)puVar30[2];
            _local_60 = *(undefined8 *)puVar30;
          }
          else {
            FUN_10026de3(puVar30,(uint)*(byte *)((int)param_1 + 0x35));
            _local_60 = auVar52;
          }
        }
        pfVar43 = (float *)(local_34 * param_1[0xb] + param_1[2]);
        pfVar31 = (float *)(param_1[10] * local_34 + param_1[5]);
        if (*(byte *)((int)param_1 + 0x39) == 5) {
          fVar62 = *pfVar31;
        }
        else {
          fVar62 = FUN_1002749d(pfVar31,(uint)*(byte *)((int)param_1 + 0x39));
        }
        fVar61 = 0.0;
        fVar63 = 0.0;
        fVar46 = 0.0;
        iVar33 = ((uint)fVar62 & 0xff) + 10;
        iVar34 = ((uint)fVar62 >> 8 & 0xff) + 10;
        iVar35 = ((uint)fVar62 >> 0x10 & 0xff) + 10;
        iVar38 = ((uint)fVar62 >> 0x18) + 10;
        if (*(byte *)((int)param_1 + 0x36) == 2) {
          fVar61 = *pfVar43;
          fVar63 = pfVar43[1];
          fVar46 = pfVar43[2];
        }
        else {
          FUN_10027222((uint *)pfVar43,(uint)*(byte *)((int)param_1 + 0x36));
        }
        iVar42 = *(int *)((int)this + 0xd80);
        iVar39 = iVar34 * 0x40;
        pfVar31 = (float *)(iVar42 + iVar39);
        pfVar2 = (float *)(iVar42 + 0x10 + iVar39);
        pfVar3 = (float *)(iVar42 + 0x20 + iVar39);
        pfVar4 = (float *)(iVar42 + 0x30 + iVar39);
        iVar40 = iVar35 * 0x40;
        pfVar5 = (float *)(iVar42 + 0x20 + iVar40);
        pfVar6 = (float *)(iVar42 + 0x10 + iVar40);
        pfVar7 = (float *)(iVar42 + 0x30 + iVar40);
        pfVar14 = (float *)(iVar42 + iVar40);
        iVar41 = iVar38 * 0x40;
        pfVar15 = (float *)(iVar42 + iVar41);
        pfVar8 = (float *)(iVar42 + 0x20 + iVar41);
        pfVar9 = (float *)(iVar42 + 0x10 + iVar41);
        pfVar10 = (float *)(iVar42 + 0x30 + iVar41);
        iVar44 = iVar33 * 0x40;
        pfVar1 = (float *)(iVar44 + iVar42);
        pfVar11 = (float *)(iVar44 + 0x10 + iVar42);
        pfVar12 = (float *)(iVar44 + 0x20 + iVar42);
        pfVar13 = (float *)(iVar44 + 0x30 + iVar42);
        fVar97 = (((1.0 - fVar61) - fVar63) - fVar46) *
                 (pfVar15[3] * uStack_a8._4_4_ + pfVar15[1] * (float)local_b0._4_4_ +
                 pfVar15[2] * (float)uStack_a8 + *pfVar15 * (float)local_b0._0_4_);
        fVar98 = (((1.0 - fVar61) - fVar63) - fVar46) *
                 (pfVar9[3] * uStack_a8._4_4_ + pfVar9[1] * (float)local_b0._4_4_ +
                 pfVar9[2] * (float)uStack_a8 + *pfVar9 * (float)local_b0._0_4_);
        fVar62 = (((1.0 - fVar61) - fVar63) - fVar46) *
                 (pfVar8[3] * uStack_a8._4_4_ + pfVar8[1] * (float)local_b0._4_4_ +
                 pfVar8[2] * (float)uStack_a8 + *pfVar8 * (float)local_b0._0_4_);
        fVar99 = (pfVar31[3] * uStack_a8._4_4_ + pfVar31[1] * (float)local_b0._4_4_ +
                 pfVar31[2] * (float)uStack_a8 + *pfVar31 * (float)local_b0._0_4_) * fVar63 +
                 (pfVar1[3] * uStack_a8._4_4_ + pfVar1[1] * (float)local_b0._4_4_ +
                 pfVar1[2] * (float)uStack_a8 + *pfVar1 * (float)local_b0._0_4_) * fVar61 +
                 (pfVar14[3] * uStack_a8._4_4_ + pfVar14[1] * (float)local_b0._4_4_ +
                 pfVar14[2] * (float)uStack_a8 + *pfVar14 * (float)local_b0._0_4_) * fVar46 + fVar97
        ;
        fVar100 = (pfVar2[3] * uStack_a8._4_4_ + pfVar2[1] * (float)local_b0._4_4_ +
                  pfVar2[2] * (float)uStack_a8 + *pfVar2 * (float)local_b0._0_4_) * fVar63 +
                  (pfVar11[3] * uStack_a8._4_4_ + pfVar11[1] * (float)local_b0._4_4_ +
                  pfVar11[2] * (float)uStack_a8 + *pfVar11 * (float)local_b0._0_4_) * fVar61 +
                  (pfVar6[3] * uStack_a8._4_4_ + pfVar6[1] * (float)local_b0._4_4_ +
                  pfVar6[2] * (float)uStack_a8 + *pfVar6 * (float)local_b0._0_4_) * fVar46 + fVar98;
        fVar81 = (pfVar3[3] * uStack_a8._4_4_ + pfVar3[1] * (float)local_b0._4_4_ +
                 pfVar3[2] * (float)uStack_a8 + *pfVar3 * (float)local_b0._0_4_) * fVar63 +
                 (pfVar12[3] * uStack_a8._4_4_ + pfVar12[1] * (float)local_b0._4_4_ +
                 pfVar12[2] * (float)uStack_a8 + *pfVar12 * (float)local_b0._0_4_) * fVar61 +
                 (pfVar5[3] * uStack_a8._4_4_ + pfVar5[1] * (float)local_b0._4_4_ +
                 pfVar5[2] * (float)uStack_a8 + *pfVar5 * (float)local_b0._0_4_) * fVar46 + fVar62;
        fVar46 = (pfVar4[3] * uStack_a8._4_4_ + pfVar4[1] * (float)local_b0._4_4_ +
                 pfVar4[2] * (float)uStack_a8 + *pfVar4 * (float)local_b0._0_4_) * fVar63 +
                 (pfVar13[3] * uStack_a8._4_4_ + pfVar13[1] * (float)local_b0._4_4_ +
                 pfVar13[2] * (float)uStack_a8 + *pfVar13 * (float)local_b0._0_4_) * fVar61 +
                 (pfVar7[3] * uStack_a8._4_4_ + pfVar7[1] * (float)local_b0._4_4_ +
                 pfVar7[2] * (float)uStack_a8 + *pfVar7 * (float)local_b0._0_4_) * fVar46 +
                 (((1.0 - fVar61) - fVar63) - fVar46) *
                 (pfVar10[3] * uStack_a8._4_4_ + pfVar10[1] * (float)local_b0._4_4_ +
                 pfVar10[2] * (float)uStack_a8 + *pfVar10 * (float)local_b0._0_4_);
        if (*(char *)((int)param_1 + 0x122) == '\0') {
          local_a0 = (undefined1  [4])0x0;
          fStack_9c = 0.0;
          uStack_98._0_4_ = 0.0;
          uStack_98._4_4_ = 0.0;
        }
        else {
          bVar22 = *(byte *)((int)param_1 + 0x36);
          FUN_1001a63e(this,iVar33);
          FUN_1001a63e(this,iVar34);
          FUN_1001a63e(this,iVar35);
          FUN_1001a63e(this,iVar38);
          if (bVar22 == 2) {
            fVar97 = *pfVar43;
            fVar98 = pfVar43[1];
            fVar62 = pfVar43[2];
          }
          else {
            FUN_10027222((uint *)pfVar43,(uint)bVar22);
          }
          iVar42 = *(int *)((int)this + 0xd80);
          pfVar31 = (float *)(iVar42 + 0x4280 + iVar39);
          pfVar43 = (float *)(iVar42 + 0x4290 + iVar39);
          pfVar14 = (float *)(iVar42 + 0x42b0 + iVar39);
          pfVar15 = (float *)(iVar42 + 0x42a0 + iVar39);
          pfVar1 = (float *)(iVar42 + 0x42a0 + iVar40);
          pfVar2 = (float *)(iVar42 + 0x4290 + iVar40);
          pfVar3 = (float *)(iVar42 + 0x42b0 + iVar40);
          pfVar4 = (float *)(iVar42 + 0x4280 + iVar40);
          pfVar5 = (float *)(iVar42 + 0x4280 + iVar41);
          pfVar6 = (float *)(iVar42 + 0x42a0 + iVar41);
          pfVar7 = (float *)(iVar42 + 0x4290 + iVar41);
          pfVar8 = (float *)(iVar42 + 0x42b0 + iVar41);
          pfVar9 = (float *)(iVar42 + 0x4280 + iVar44);
          pfVar10 = (float *)(iVar42 + 0x4290 + iVar44);
          pfVar11 = (float *)(iVar42 + 0x42a0 + iVar44);
          pfVar12 = (float *)(iVar42 + 0x42b0 + iVar44);
          local_a0 = (undefined1  [4])
                     ((uStack_58._4_4_ * pfVar31[3] + fStack_5c * pfVar31[1] +
                      (float)uStack_58 * pfVar31[2] + (float)local_60 * *pfVar31) * fVar98 +
                      (pfVar9[3] * uStack_58._4_4_ + pfVar9[1] * fStack_5c +
                      pfVar9[2] * (float)uStack_58 + *pfVar9 * (float)local_60) * fVar97 +
                      (uStack_58._4_4_ * pfVar4[3] + fStack_5c * pfVar4[1] +
                      (float)uStack_58 * pfVar4[2] + (float)local_60 * *pfVar4) * fVar62 +
                     (((1.0 - fVar97) - fVar98) - fVar62) *
                     (uStack_58._4_4_ * pfVar5[3] + fStack_5c * pfVar5[1] +
                     (float)uStack_58 * pfVar5[2] + (float)local_60 * *pfVar5));
          fStack_9c = (pfVar43[3] * uStack_58._4_4_ + pfVar43[1] * fStack_5c +
                      pfVar43[2] * (float)uStack_58 + *pfVar43 * (float)local_60) * fVar98 +
                      (pfVar10[3] * uStack_58._4_4_ + pfVar10[1] * fStack_5c +
                      pfVar10[2] * (float)uStack_58 + *pfVar10 * (float)local_60) * fVar97 +
                      (pfVar2[3] * uStack_58._4_4_ + pfVar2[1] * fStack_5c +
                      pfVar2[2] * (float)uStack_58 + *pfVar2 * (float)local_60) * fVar62 +
                      (((1.0 - fVar97) - fVar98) - fVar62) *
                      (pfVar7[3] * uStack_58._4_4_ + pfVar7[1] * fStack_5c +
                      pfVar7[2] * (float)uStack_58 + *pfVar7 * (float)local_60);
          uStack_98._0_4_ =
               (pfVar15[3] * uStack_58._4_4_ + pfVar15[1] * fStack_5c +
               pfVar15[2] * (float)uStack_58 + *pfVar15 * (float)local_60) * fVar98 +
               (pfVar11[3] * uStack_58._4_4_ + pfVar11[1] * fStack_5c +
               pfVar11[2] * (float)uStack_58 + *pfVar11 * (float)local_60) * fVar97 +
               (pfVar1[3] * uStack_58._4_4_ + pfVar1[1] * fStack_5c +
               pfVar1[2] * (float)uStack_58 + *pfVar1 * (float)local_60) * fVar62 +
               (((1.0 - fVar97) - fVar98) - fVar62) *
               (pfVar6[3] * uStack_58._4_4_ + pfVar6[1] * fStack_5c +
               pfVar6[2] * (float)uStack_58 + *pfVar6 * (float)local_60);
          uStack_98._4_4_ =
               (pfVar14[3] * uStack_58._4_4_ + pfVar14[1] * fStack_5c +
               pfVar14[2] * (float)uStack_58 + *pfVar14 * (float)local_60) * fVar98 +
               (pfVar12[3] * uStack_58._4_4_ + pfVar12[1] * fStack_5c +
               pfVar12[2] * (float)uStack_58 + *pfVar12 * (float)local_60) * fVar97 +
               (pfVar3[3] * uStack_58._4_4_ + pfVar3[1] * fStack_5c +
               pfVar3[2] * (float)uStack_58 + *pfVar3 * (float)local_60) * fVar62 +
               (((1.0 - fVar97) - fVar98) - fVar62) *
               (pfVar8[3] * uStack_58._4_4_ + pfVar8[1] * fStack_5c +
               pfVar8[2] * (float)uStack_58 + *pfVar8 * (float)local_60);
        }
        fVar63 = *(float *)(iVar42 + 0x8588) * fVar81 + *(float *)(iVar42 + 0x8580) * fVar99;
        fVar97 = *(float *)(iVar42 + 0x8598) * fVar81 + *(float *)(iVar42 + 0x8590) * fVar99;
        fVar62 = *(float *)(iVar42 + 0x85a8) * fVar81 + *(float *)(iVar42 + 0x85a0) * fVar99;
        fVar61 = *(float *)(iVar42 + 0x85b8) * fVar81 + *(float *)(iVar42 + 0x85b0) * fVar99;
        auVar52._4_4_ = fVar97;
        auVar52._0_4_ = fVar63;
        auVar52._8_4_ = fVar62;
        auVar52._12_4_ = fVar61;
        auVar88._0_4_ =
             *(float *)(iVar42 + 0x858c) * fVar46 + *(float *)(iVar42 + 0x8584) * fVar100 + fVar63;
        auVar88._4_4_ =
             *(float *)(iVar42 + 0x859c) * fVar46 + *(float *)(iVar42 + 0x8594) * fVar100 + fVar97;
        auVar88._8_4_ =
             *(float *)(iVar42 + 0x85ac) * fVar46 + *(float *)(iVar42 + 0x85a4) * fVar100 + fVar62;
        auVar88._12_4_ =
             *(float *)(iVar42 + 0x85bc) * fVar46 + *(float *)(iVar42 + 0x85b4) * fVar100 + fVar61;
        if (param_1[0x13] != 0) {
          pfVar31 = (float *)(local_34 * 0x20 + param_1[0x13]);
          *pfVar31 = fVar99;
          pfVar31[1] = fVar100;
          pfVar31[2] = fVar81;
          pfVar31[3] = fVar46;
          pfVar31 = (float *)((local_34 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar31 = (float)local_a0;
          pfVar31[1] = fStack_9c;
          pfVar31[2] = (float)uStack_98;
          pfVar31[3] = uStack_98._4_4_;
        }
        local_14 = 0;
        auVar103._4_4_ = auVar88._12_4_;
        auVar103._0_4_ = auVar88._12_4_;
        auVar103._8_4_ = auVar88._12_4_;
        auVar103._12_4_ = auVar88._12_4_;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar30 = (uint *)param_1[0x12];
          local_14 = 0;
          pfVar31 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar31 = (float *)(param_1 + 0x28);
          }
          if (pfVar31 == (float *)0x0) {
            puVar30[1] = puVar30[1] & 0xfffff03f;
            uVar37 = 0;
          }
          else {
            uVar37 = *(uint *)((int)this + 0x690);
            fVar62 = 0.0;
            fVar61 = 0.0;
            if ((uVar37 & 1) != 0) {
              fVar62 = pfVar31[2] * fVar81 + *pfVar31 * fVar99 +
                       pfVar31[3] * fVar46 + pfVar31[1] * fVar100;
            }
            fVar63 = 0.0;
            if ((uVar37 & 2) != 0) {
              fVar63 = pfVar31[0x1a] * fVar81 + pfVar31[0x18] * fVar99 +
                       pfVar31[0x1b] * fVar46 + pfVar31[0x19] * fVar100;
            }
            fVar97 = 0.0;
            if ((uVar37 & 4) != 0) {
              fVar97 = pfVar31[0x32] * fVar81 + pfVar31[0x30] * fVar99 +
                       pfVar31[0x33] * fVar46 + pfVar31[0x31] * fVar100;
            }
            fVar98 = 0.0;
            if ((uVar37 & 8) != 0) {
              fVar98 = pfVar31[0x4a] * fVar81 + pfVar31[0x48] * fVar99 +
                       pfVar31[0x4b] * fVar46 + pfVar31[0x49] * fVar100;
            }
            if ((uVar37 & 0x10) != 0) {
              fVar61 = pfVar31[0x62] * fVar81 + pfVar31[0x60] * fVar99 +
                       pfVar31[99] * fVar46 + pfVar31[0x61] * fVar100;
            }
            fVar64 = 0.0;
            if ((uVar37 & 0x20) != 0) {
              fVar64 = pfVar31[0x7a] * fVar81 + pfVar31[0x78] * fVar99 +
                       pfVar31[0x7b] * fVar46 + pfVar31[0x79] * fVar100;
            }
            auVar70._4_4_ = -(uint)(fVar63 < 0.0);
            auVar70._0_4_ = -(uint)(fVar62 < 0.0);
            auVar70._8_4_ = -(uint)(fVar97 < 0.0);
            auVar70._12_4_ = -(uint)(fVar98 < 0.0);
            auVar77._4_4_ = -(uint)(fVar64 < 0.0);
            auVar77._0_4_ = -(uint)(fVar61 < 0.0);
            auVar77._8_8_ = 0;
            uVar32 = movmskps(pfVar31,auVar70);
            uVar37 = movmskps(uVar32 & 0xf,auVar77);
            local_14 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) |
                       *(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4);
            uVar37 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) | 0x3ff;
            puVar30[1] = puVar30[1] &
                         (*(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4) | 0xc3f) & uVar37;
          }
          auVar51._4_4_ = -(uint)(auVar88._0_4_ * 1.0 + auVar88._12_4_ < 0.0);
          auVar51._0_4_ = -(uint)(auVar88._0_4_ * -1.0 + auVar88._12_4_ < 0.0);
          auVar51._8_4_ = -(uint)(auVar88._4_4_ * -1.0 + auVar88._12_4_ < 0.0);
          auVar51._12_4_ = -(uint)(auVar88._4_4_ * 1.0 + auVar88._12_4_ < 0.0);
          uVar37 = movmskps(uVar37,auVar51);
          uVar37 = *(uint *)(&DAT_100d1b98 + (uVar37 & 0xf) * 4);
          uVar45 = (uVar37 | 0x30) & puVar30[1];
          puVar30[1] = uVar45;
          auVar52._4_4_ = -(uint)(auVar88._8_4_ * 1.0 < 0.0);
          auVar52._0_4_ = -(uint)(auVar88._8_4_ * -1.0 + auVar88._12_4_ < 0.0);
          auVar52._8_4_ = -(uint)(auVar88._8_4_ * -1.0 < 0.0);
          auVar52._12_4_ = -(uint)(auVar88._8_4_ * 1.0 < 0.0);
          uVar32 = movmskps(puVar30,auVar52);
          local_14 = local_14 | *(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | uVar37;
          puVar30[1] = (*(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | 0xf) & uVar45;
          *puVar30 = *puVar30 | local_14;
        }
        if (*(char *)((int)param_1 + 0x3e) == '\0') {
          auVar89._0_4_ = auVar88._0_4_ + 0.0;
          auVar89._4_4_ = auVar88._4_4_ + 0.0;
          auVar89._8_4_ = auVar88._8_4_ + 0.0;
          auVar89._12_4_ = 0x3f800000;
          auVar85 = divps(auVar89,auVar103);
          auVar88._0_4_ = auVar85._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
          auVar88._4_4_ = auVar85._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
          auVar88._8_4_ = auVar85._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
          auVar88._12_4_ = auVar85._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
          if (local_34 == 0) {
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar88;
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar88;
          }
          else {
            auVar85 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar88);
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar85;
            auVar52 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar88);
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar52;
          }
        }
        pauVar25 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_14 == 0)) {
            *pauVar25 = auVar88;
          }
          else {
            *(int *)(*pauVar25 + 0xc) = auVar88._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_34 = local_34 + 1;
      } while (local_34 < param_3);
      goto LAB_10026c94;
    }
  }
  else if (local_18 == 0x10) {
    local_34 = 0;
    auVar50 = _local_60;
    if (param_3 != 0) {
      do {
        puVar30 = (uint *)(*param_1 + param_1[6] * local_34);
        if (*(byte *)(param_1 + 0xd) == 2) {
          auVar50._0_12_ = ZEXT812(0x3f800000);
          auVar50._12_4_ = 0;
          uStack_a8._4_4_ = 1.0;
          uStack_a8._0_4_ = (float)puVar30[2];
          local_b0 = (undefined1  [8])*(undefined8 *)puVar30;
        }
        else {
          FUN_10026de3(puVar30,(uint)*(byte *)(param_1 + 0xd));
          _local_b0 = auVar50;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          puVar30 = (uint *)(param_1[1] + param_1[7] * local_34);
          if (*(byte *)((int)param_1 + 0x35) == 2) {
            uStack_58._4_4_ = 1.0;
            uStack_58._0_4_ = (float)puVar30[2];
            _local_60 = *(undefined8 *)puVar30;
          }
          else {
            FUN_10026de3(puVar30,(uint)*(byte *)((int)param_1 + 0x35));
            _local_60 = auVar50;
          }
        }
        pfVar31 = (float *)(param_1[5] + param_1[10] * local_34);
        if (*(byte *)((int)param_1 + 0x39) == 5) {
          fVar62 = *pfVar31;
        }
        else {
          fVar62 = FUN_1002749d(pfVar31,(uint)*(byte *)((int)param_1 + 0x39));
        }
        _local_a0 = ZEXT816(0);
        fVar46 = 0.0;
        fVar61 = 0.0;
        fVar63 = 0.0;
        fVar97 = 0.0;
        if (*(char *)((int)param_1 + 0x121) != '\0') {
          pfVar31 = (float *)((((uint)fVar62 & 0xff) + 10) * 0x40 + *(int *)((int)this + 0xd80));
          fStack_9c = pfVar31[7] * uStack_a8._4_4_ + pfVar31[5] * (float)local_b0._4_4_ +
                      pfVar31[6] * (float)uStack_a8 + pfVar31[4] * (float)local_b0._0_4_;
          local_a0 = (undefined1  [4])
                     (uStack_a8._4_4_ * pfVar31[3] + (float)local_b0._4_4_ * pfVar31[1] +
                     (float)uStack_a8 * pfVar31[2] + (float)local_b0._0_4_ * *pfVar31);
          uStack_98._0_4_ =
               pfVar31[0xb] * uStack_a8._4_4_ + pfVar31[9] * (float)local_b0._4_4_ +
               pfVar31[10] * (float)uStack_a8 + pfVar31[8] * (float)local_b0._0_4_;
          uStack_98._4_4_ =
               pfVar31[0xf] * uStack_a8._4_4_ + pfVar31[0xd] * (float)local_b0._4_4_ +
               pfVar31[0xe] * (float)uStack_a8 + pfVar31[0xc] * (float)local_b0._0_4_;
        }
        iVar38 = ((uint)fVar62 & 0xff) + 10;
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_1001a63e(this,iVar38);
          iVar33 = *(int *)((int)this + 0xd80);
          iVar38 = iVar38 * 0x40;
          pfVar31 = (float *)(iVar33 + 0x4280 + iVar38);
          pfVar43 = (float *)(iVar33 + 0x4290 + iVar38);
          pfVar14 = (float *)(iVar33 + 0x42a0 + iVar38);
          pfVar15 = (float *)(iVar33 + 0x42b0 + iVar38);
          fVar46 = uStack_58._4_4_ * pfVar31[3] + fStack_5c * pfVar31[1] +
                   (float)uStack_58 * pfVar31[2] + (float)local_60 * *pfVar31;
          fVar61 = pfVar43[3] * uStack_58._4_4_ + pfVar43[1] * fStack_5c +
                   pfVar43[2] * (float)uStack_58 + *pfVar43 * (float)local_60;
          fVar63 = pfVar14[3] * uStack_58._4_4_ + pfVar14[1] * fStack_5c +
                   pfVar14[2] * (float)uStack_58 + *pfVar14 * (float)local_60;
          fVar97 = pfVar15[3] * uStack_58._4_4_ + pfVar15[1] * fStack_5c +
                   pfVar15[2] * (float)uStack_58 + *pfVar15 * (float)local_60;
        }
        pfVar31 = (float *)*local_28;
        fVar99 = pfVar31[2] * (float)uStack_a8 + *pfVar31 * (float)local_b0._0_4_;
        fVar100 = pfVar31[6] * (float)uStack_a8 + pfVar31[4] * (float)local_b0._0_4_;
        fVar62 = pfVar31[10] * (float)uStack_a8 + pfVar31[8] * (float)local_b0._0_4_;
        fVar98 = pfVar31[0xe] * (float)uStack_a8 + pfVar31[0xc] * (float)local_b0._0_4_;
        auVar50._4_4_ = fVar100;
        auVar50._0_4_ = fVar99;
        auVar50._8_4_ = fVar62;
        auVar50._12_4_ = fVar98;
        auVar86._0_4_ = pfVar31[3] * uStack_a8._4_4_ + pfVar31[1] * (float)local_b0._4_4_ + fVar99;
        auVar86._4_4_ = pfVar31[7] * uStack_a8._4_4_ + pfVar31[5] * (float)local_b0._4_4_ + fVar100;
        auVar86._8_4_ = pfVar31[0xb] * uStack_a8._4_4_ + pfVar31[9] * (float)local_b0._4_4_ + fVar62
        ;
        auVar86._12_4_ =
             pfVar31[0xf] * uStack_a8._4_4_ + pfVar31[0xd] * (float)local_b0._4_4_ + fVar98;
        if (param_1[0x13] != 0) {
          pfVar31 = (float *)(local_34 * 0x20 + param_1[0x13]);
          *pfVar31 = (float)local_a0;
          pfVar31[1] = fStack_9c;
          pfVar31[2] = (float)uStack_98;
          pfVar31[3] = uStack_98._4_4_;
          pfVar31 = (float *)((local_34 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar31 = fVar46;
          pfVar31[1] = fVar61;
          pfVar31[2] = fVar63;
          pfVar31[3] = fVar97;
        }
        local_1c = 0;
        auVar102._4_4_ = auVar86._12_4_;
        auVar102._0_4_ = auVar86._12_4_;
        auVar102._8_4_ = auVar86._12_4_;
        auVar102._12_4_ = auVar86._12_4_;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar30 = (uint *)param_1[0x12];
          local_1c = 0;
          pfVar31 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar31 = (float *)(param_1 + 0x28);
          }
          if (pfVar31 == (float *)0x0) {
            puVar30[1] = puVar30[1] & 0xfffff03f;
            uVar37 = 0;
          }
          else {
            uVar37 = *(uint *)((int)this + 0x690);
            fVar62 = 0.0;
            fVar46 = 0.0;
            if ((uVar37 & 1) != 0) {
              fVar62 = pfVar31[2] * (float)uStack_98 + *pfVar31 * (float)local_a0 +
                       pfVar31[3] * uStack_98._4_4_ + pfVar31[1] * fStack_9c;
            }
            fVar61 = 0.0;
            if ((uVar37 & 2) != 0) {
              fVar61 = pfVar31[0x1a] * (float)uStack_98 + pfVar31[0x18] * (float)local_a0 +
                       pfVar31[0x1b] * uStack_98._4_4_ + pfVar31[0x19] * fStack_9c;
            }
            fVar63 = 0.0;
            if ((uVar37 & 4) != 0) {
              fVar63 = pfVar31[0x32] * (float)uStack_98 + pfVar31[0x30] * (float)local_a0 +
                       pfVar31[0x33] * uStack_98._4_4_ + pfVar31[0x31] * fStack_9c;
            }
            fVar97 = 0.0;
            if ((uVar37 & 8) != 0) {
              fVar97 = pfVar31[0x4a] * (float)uStack_98 + pfVar31[0x48] * (float)local_a0 +
                       pfVar31[0x4b] * uStack_98._4_4_ + pfVar31[0x49] * fStack_9c;
            }
            if ((uVar37 & 0x10) != 0) {
              fVar46 = pfVar31[0x62] * (float)uStack_98 + pfVar31[0x60] * (float)local_a0 +
                       pfVar31[99] * uStack_98._4_4_ + pfVar31[0x61] * fStack_9c;
            }
            fVar98 = 0.0;
            if ((uVar37 & 0x20) != 0) {
              fVar98 = pfVar31[0x7a] * (float)uStack_98 + pfVar31[0x78] * (float)local_a0 +
                       pfVar31[0x7b] * uStack_98._4_4_ + pfVar31[0x79] * fStack_9c;
            }
            auVar69._4_4_ = -(uint)(fVar61 < 0.0);
            auVar69._0_4_ = -(uint)(fVar62 < 0.0);
            auVar69._8_4_ = -(uint)(fVar63 < 0.0);
            auVar69._12_4_ = -(uint)(fVar97 < 0.0);
            auVar76._4_4_ = -(uint)(fVar98 < 0.0);
            auVar76._0_4_ = -(uint)(fVar46 < 0.0);
            auVar76._8_8_ = 0;
            uVar32 = movmskps(pfVar31,auVar69);
            uVar37 = movmskps(uVar32 & 0xf,auVar76);
            local_1c = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) |
                       *(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4);
            uVar37 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) | 0x3ff;
            puVar30[1] = puVar30[1] &
                         (*(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4) | 0xc3f) & uVar37;
          }
          auVar49._4_4_ = -(uint)(auVar86._0_4_ * 1.0 + auVar86._12_4_ < 0.0);
          auVar49._0_4_ = -(uint)(auVar86._0_4_ * -1.0 + auVar86._12_4_ < 0.0);
          auVar49._8_4_ = -(uint)(auVar86._4_4_ * -1.0 + auVar86._12_4_ < 0.0);
          auVar49._12_4_ = -(uint)(auVar86._4_4_ * 1.0 + auVar86._12_4_ < 0.0);
          uVar37 = movmskps(uVar37,auVar49);
          uVar37 = *(uint *)(&DAT_100d1b98 + (uVar37 & 0xf) * 4);
          uVar45 = (uVar37 | 0x30) & puVar30[1];
          puVar30[1] = uVar45;
          auVar50._4_4_ = -(uint)(auVar86._8_4_ * 1.0 < 0.0);
          auVar50._0_4_ = -(uint)(auVar86._8_4_ * -1.0 + auVar86._12_4_ < 0.0);
          auVar50._8_4_ = -(uint)(auVar86._8_4_ * -1.0 < 0.0);
          auVar50._12_4_ = -(uint)(auVar86._8_4_ * 1.0 < 0.0);
          uVar32 = movmskps(puVar30,auVar50);
          local_1c = local_1c | *(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | uVar37;
          puVar30[1] = (*(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | 0xf) & uVar45;
          *puVar30 = *puVar30 | local_1c;
        }
        if (*(char *)((int)param_1 + 0x3e) == '\0') {
          auVar87._0_4_ = auVar86._0_4_ + 0.0;
          auVar87._4_4_ = auVar86._4_4_ + 0.0;
          auVar87._8_4_ = auVar86._8_4_ + 0.0;
          auVar87._12_4_ = 0x3f800000;
          auVar85 = divps(auVar87,auVar102);
          auVar86._0_4_ = auVar85._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
          auVar86._4_4_ = auVar85._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
          auVar86._8_4_ = auVar85._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
          auVar86._12_4_ = auVar85._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
          if (local_34 == 0) {
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar86;
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar86;
          }
          else {
            auVar85 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar86);
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar85;
            auVar50 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar86);
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar50;
          }
        }
        pauVar25 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_1c == 0)) {
            *pauVar25 = auVar86;
          }
          else {
            *(int *)(*pauVar25 + 0xc) = auVar86._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_34 = local_34 + 1;
      } while (local_34 < param_3);
      goto LAB_10026c94;
    }
  }
  else if (local_18 == 0x20) {
    local_18 = 0;
    auVar48 = auVar59;
    _local_f0 = auVar59;
    if (param_3 != 0) {
      do {
        puVar30 = (uint *)(*param_1 + param_1[6] * local_18);
        if (*(byte *)(param_1 + 0xd) == 2) {
          auVar48._0_12_ = ZEXT812(0x3f800000);
          auVar48._12_4_ = 0;
          uStack_98._4_4_ = 1.0;
          uStack_98._0_4_ = (float)puVar30[2];
          _local_a0 = *(undefined8 *)puVar30;
        }
        else {
          FUN_10026de3(puVar30,(uint)*(byte *)(param_1 + 0xd));
          _local_a0 = auVar48;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          puVar30 = (uint *)(param_1[1] + param_1[7] * local_18);
          if (*(byte *)((int)param_1 + 0x35) == 2) {
            uStack_e8._4_4_ = 1.0;
            uStack_e8._0_4_ = (float)puVar30[2];
            local_f0 = (undefined1  [8])*(undefined8 *)puVar30;
          }
          else {
            FUN_10026de3(puVar30,(uint)*(byte *)((int)param_1 + 0x35));
            _local_f0 = auVar48;
          }
        }
        if (*(byte *)((int)param_1 + 0x39) != 5) {
          FUN_1002749d((float *)(param_1[10] * local_18 + param_1[5]),
                       (uint)*(byte *)((int)param_1 + 0x39));
        }
        fVar46 = 0.0;
        fVar61 = 0.0;
        fVar62 = 0.0;
        fVar63 = 0.0;
        _local_b0 = ZEXT816(0);
        pfVar31 = (float *)(param_1[3] + param_1[8] * local_18);
        if (*(byte *)((int)param_1 + 0x37) == 2) {
          fVar62 = pfVar31[2];
          fVar46 = *pfVar31;
          fVar61 = pfVar31[1];
          fVar63 = 1.0;
        }
        else {
          FUN_10026de3((uint *)pfVar31,(uint)*(byte *)((int)param_1 + 0x37));
        }
        cVar36 = *(char *)((int)param_1 + 0x122);
        fVar46 = (float)param_1[0x40] * fVar46;
        fVar61 = (float)param_1[0x41] * fVar61;
        fVar62 = (float)param_1[0x42] * fVar62;
        fVar63 = (float)param_1[0x43] * fVar63;
        fVar97 = (float)param_1[0x44] * (float)local_a0 + fVar46;
        fVar98 = (float)param_1[0x45] * fStack_9c + fVar61;
        fVar99 = (float)param_1[0x46] * (float)uStack_98 + fVar62;
        fVar100 = (float)param_1[0x47] * uStack_98._4_4_ + fVar63;
        if (cVar36 != '\0') {
          pfVar31 = (float *)(param_1[4] + param_1[9] * local_18);
          if (*(byte *)(param_1 + 0xe) == 2) {
            fVar62 = pfVar31[2];
            fVar46 = *pfVar31;
            fVar61 = pfVar31[1];
            fVar63 = 1.0;
          }
          else {
            FUN_10026de3((uint *)pfVar31,(uint)*(byte *)(param_1 + 0xe));
            cVar36 = *(char *)((int)param_1 + 0x122);
          }
          local_f0._4_4_ =
               (float)param_1[0x45] * (float)local_f0._4_4_ + (float)param_1[0x41] * fVar61;
          local_f0._0_4_ =
               (float)param_1[0x44] * (float)local_f0._0_4_ + (float)param_1[0x40] * fVar46;
          uStack_e8._0_4_ = (float)param_1[0x46] * (float)uStack_e8 + (float)param_1[0x42] * fVar62;
          uStack_e8._4_4_ = (float)param_1[0x47] * uStack_e8._4_4_ + (float)param_1[0x43] * fVar63;
        }
        if (*(char *)((int)param_1 + 0x121) != '\0') {
          iVar38 = *(int *)((int)this + 0xd80);
          local_b0._4_4_ =
               *(float *)(iVar38 + 0x29c) * fVar100 + *(float *)(iVar38 + 0x294) * fVar98 +
               *(float *)(iVar38 + 0x298) * fVar99 + *(float *)(iVar38 + 0x290) * fVar97;
          local_b0._0_4_ =
               *(float *)(iVar38 + 0x28c) * fVar100 + *(float *)(iVar38 + 0x284) * fVar98 +
               *(float *)(iVar38 + 0x288) * fVar99 + *(float *)(iVar38 + 0x280) * fVar97;
          uStack_a8._0_4_ =
               *(float *)(iVar38 + 0x2ac) * fVar100 + *(float *)(iVar38 + 0x2a4) * fVar98 +
               *(float *)(iVar38 + 0x2a8) * fVar99 + *(float *)(iVar38 + 0x2a0) * fVar97;
          uStack_a8._4_4_ =
               *(float *)(iVar38 + 700) * fVar100 + *(float *)(iVar38 + 0x2b4) * fVar98 +
               *(float *)(iVar38 + 0x2b8) * fVar99 + *(float *)(iVar38 + 0x2b0) * fVar97;
        }
        if (cVar36 == '\0') {
          local_60 = (undefined1  [4])0x0;
          fStack_5c = 0.0;
          uStack_58._0_4_ = 0.0;
          uStack_58._4_4_ = 0.0;
        }
        else {
          FUN_1001a63e(this,10);
          iVar38 = *(int *)((int)this + 0xd80);
          local_60 = (undefined1  [4])
                     (uStack_e8._4_4_ * *(float *)(iVar38 + 0x450c) +
                      (float)local_f0._4_4_ * *(float *)(iVar38 + 0x4504) +
                     (float)uStack_e8 * *(float *)(iVar38 + 0x4508) +
                     (float)local_f0._0_4_ * *(float *)(iVar38 + 0x4500));
          fStack_5c = *(float *)(iVar38 + 0x451c) * uStack_e8._4_4_ +
                      *(float *)(iVar38 + 0x4514) * (float)local_f0._4_4_ +
                      *(float *)(iVar38 + 0x4518) * (float)uStack_e8 +
                      *(float *)(iVar38 + 0x4510) * (float)local_f0._0_4_;
          uStack_58._0_4_ =
               *(float *)(iVar38 + 0x452c) * uStack_e8._4_4_ +
               *(float *)(iVar38 + 0x4524) * (float)local_f0._4_4_ +
               *(float *)(iVar38 + 0x4528) * (float)uStack_e8 +
               *(float *)(iVar38 + 0x4520) * (float)local_f0._0_4_;
          uStack_58._4_4_ =
               *(float *)(iVar38 + 0x453c) * uStack_e8._4_4_ +
               *(float *)(iVar38 + 0x4534) * (float)local_f0._4_4_ +
               *(float *)(iVar38 + 0x4538) * (float)uStack_e8 +
               *(float *)(iVar38 + 0x4530) * (float)local_f0._0_4_;
        }
        pfVar31 = (float *)*local_28;
        fVar61 = fVar99 * pfVar31[2] + fVar97 * *pfVar31;
        fVar63 = pfVar31[6] * fVar99 + pfVar31[4] * fVar97;
        fVar62 = pfVar31[10] * fVar99 + pfVar31[8] * fVar97;
        fVar46 = pfVar31[0xe] * fVar99 + pfVar31[0xc] * fVar97;
        auVar48._4_4_ = fVar63;
        auVar48._0_4_ = fVar61;
        auVar48._8_4_ = fVar62;
        auVar48._12_4_ = fVar46;
        auVar83._0_4_ = fVar100 * pfVar31[3] + fVar98 * pfVar31[1] + fVar61;
        auVar83._4_4_ = pfVar31[7] * fVar100 + pfVar31[5] * fVar98 + fVar63;
        auVar83._8_4_ = pfVar31[0xb] * fVar100 + pfVar31[9] * fVar98 + fVar62;
        auVar83._12_4_ = pfVar31[0xf] * fVar100 + pfVar31[0xd] * fVar98 + fVar46;
        if (param_1[0x13] != 0) {
          pfVar31 = (float *)(local_18 * 0x20 + param_1[0x13]);
          *pfVar31 = (float)local_b0._0_4_;
          pfVar31[1] = (float)local_b0._4_4_;
          pfVar31[2] = (float)uStack_a8;
          pfVar31[3] = uStack_a8._4_4_;
          pfVar31 = (float *)((local_18 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar31 = (float)local_60;
          pfVar31[1] = fStack_5c;
          pfVar31[2] = (float)uStack_58;
          pfVar31[3] = uStack_58._4_4_;
        }
        local_34 = 0;
        auVar101._4_4_ = auVar83._12_4_;
        auVar101._0_4_ = auVar83._12_4_;
        auVar101._8_4_ = auVar83._12_4_;
        auVar101._12_4_ = auVar83._12_4_;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar30 = (uint *)param_1[0x12];
          local_34 = 0;
          pfVar31 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar31 = (float *)(param_1 + 0x28);
          }
          if (pfVar31 == (float *)0x0) {
            puVar30[1] = puVar30[1] & 0xfffff03f;
            uVar37 = 0;
          }
          else {
            uVar37 = *(uint *)((int)this + 0x690);
            fVar62 = 0.0;
            fVar46 = 0.0;
            if ((uVar37 & 1) != 0) {
              fVar62 = (float)uStack_a8 * pfVar31[2] + (float)local_b0._0_4_ * *pfVar31 +
                       uStack_a8._4_4_ * pfVar31[3] + (float)local_b0._4_4_ * pfVar31[1];
            }
            fVar61 = 0.0;
            if ((uVar37 & 2) != 0) {
              fVar61 = pfVar31[0x1a] * (float)uStack_a8 + pfVar31[0x18] * (float)local_b0._0_4_ +
                       pfVar31[0x1b] * uStack_a8._4_4_ + pfVar31[0x19] * (float)local_b0._4_4_;
            }
            fVar63 = 0.0;
            if ((uVar37 & 4) != 0) {
              fVar63 = pfVar31[0x32] * (float)uStack_a8 + pfVar31[0x30] * (float)local_b0._0_4_ +
                       pfVar31[0x33] * uStack_a8._4_4_ + pfVar31[0x31] * (float)local_b0._4_4_;
            }
            fVar97 = 0.0;
            if ((uVar37 & 8) != 0) {
              fVar97 = pfVar31[0x4a] * (float)uStack_a8 + pfVar31[0x48] * (float)local_b0._0_4_ +
                       pfVar31[0x4b] * uStack_a8._4_4_ + pfVar31[0x49] * (float)local_b0._4_4_;
            }
            if ((uVar37 & 0x10) != 0) {
              fVar46 = pfVar31[0x62] * (float)uStack_a8 + pfVar31[0x60] * (float)local_b0._0_4_ +
                       pfVar31[99] * uStack_a8._4_4_ + pfVar31[0x61] * (float)local_b0._4_4_;
            }
            fVar98 = 0.0;
            if ((uVar37 & 0x20) != 0) {
              fVar98 = pfVar31[0x7a] * (float)uStack_a8 + pfVar31[0x78] * (float)local_b0._0_4_ +
                       pfVar31[0x7b] * uStack_a8._4_4_ + pfVar31[0x79] * (float)local_b0._4_4_;
            }
            auVar68._4_4_ = -(uint)(fVar61 < 0.0);
            auVar68._0_4_ = -(uint)(fVar62 < 0.0);
            auVar68._8_4_ = -(uint)(fVar63 < 0.0);
            auVar68._12_4_ = -(uint)(fVar97 < 0.0);
            auVar75._4_4_ = -(uint)(fVar98 < 0.0);
            auVar75._0_4_ = -(uint)(fVar46 < 0.0);
            auVar75._8_8_ = 0;
            uVar32 = movmskps(pfVar31,auVar68);
            uVar37 = movmskps(uVar32 & 0xf,auVar75);
            local_34 = *(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4) |
                       *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4);
            uVar37 = *(uint *)(&DAT_100d1bd8 + (uVar37 & 3) * 4) | 0x3ff;
            puVar30[1] = puVar30[1] &
                         (*(uint *)(&DAT_100d1be8 + (uVar32 & 0xf) * 4) | 0xc3f) & uVar37;
          }
          auVar47._4_4_ = -(uint)(auVar83._0_4_ * 1.0 + auVar83._12_4_ < 0.0);
          auVar47._0_4_ = -(uint)(auVar83._0_4_ * -1.0 + auVar83._12_4_ < 0.0);
          auVar47._8_4_ = -(uint)(auVar83._4_4_ * -1.0 + auVar83._12_4_ < 0.0);
          auVar47._12_4_ = -(uint)(auVar83._4_4_ * 1.0 + auVar83._12_4_ < 0.0);
          uVar37 = movmskps(uVar37,auVar47);
          uVar37 = *(uint *)(&DAT_100d1b98 + (uVar37 & 0xf) * 4);
          uVar45 = (uVar37 | 0x30) & puVar30[1];
          puVar30[1] = uVar45;
          auVar48._4_4_ = -(uint)(auVar83._8_4_ * 1.0 < 0.0);
          auVar48._0_4_ = -(uint)(auVar83._8_4_ * -1.0 + auVar83._12_4_ < 0.0);
          auVar48._8_4_ = -(uint)(auVar83._8_4_ * -1.0 < 0.0);
          auVar48._12_4_ = -(uint)(auVar83._8_4_ * 1.0 < 0.0);
          uVar32 = movmskps(puVar30,auVar48);
          local_34 = local_34 | *(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | uVar37;
          puVar30[1] = (*(uint *)(&DAT_100d1b84 + (uVar32 & 3) * 4) | 0xf) & uVar45;
          *puVar30 = *puVar30 | local_34;
        }
        if (*(char *)((int)param_1 + 0x3e) == '\0') {
          auVar84._0_4_ = auVar83._0_4_ + 0.0;
          auVar84._4_4_ = auVar83._4_4_ + 0.0;
          auVar84._8_4_ = auVar83._8_4_ + 0.0;
          auVar84._12_4_ = 0x3f800000;
          auVar85 = divps(auVar84,auVar101);
          auVar83._0_4_ = auVar85._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
          auVar83._4_4_ = auVar85._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
          auVar83._8_4_ = auVar85._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
          auVar83._12_4_ = auVar85._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
          if (local_18 == 0) {
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar83;
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar83;
          }
          else {
            auVar85 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar83);
            *(undefined1 (*) [16])(param_1 + 0x20) = auVar85;
            auVar48 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar83);
            *(undefined1 (*) [16])(param_1 + 0x24) = auVar48;
          }
        }
        pauVar25 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_34 == 0)) {
            *pauVar25 = auVar83;
          }
          else {
            *(int *)(*pauVar25 + 0xc) = auVar83._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_18 = local_18 + 1;
      } while (local_18 < param_3);
      goto LAB_10026c94;
    }
  }
  else if (param_3 != 0) {
LAB_10026c94:
    auVar65._0_4_ = (float)param_1[0x20] + -0.5;
    auVar65._4_4_ = (float)param_1[0x21] + -0.5;
    auVar65._8_4_ = (float)param_1[0x22] + 0.0;
    auVar65._12_4_ = (float)param_1[0x23] + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar65;
    auVar58._0_4_ = (float)param_1[0x24] + 0.5;
    auVar58._4_4_ = (float)param_1[0x25] + 0.5;
    auVar58._8_4_ = (float)param_1[0x26] + 0.0;
    auVar58._12_4_ = (float)param_1[0x27] + 0.0;
    auVar66 = minps(auVar65,auVar66);
    *(undefined1 (*) [16])(param_1 + 0x24) = auVar58;
    auVar59 = maxps(auVar58,auVar59);
  }
  auVar27._4_4_ = (float)((double)iVar24 + dVar19);
  auVar27._0_4_ = (float)((double)iVar23 + dVar18);
  auVar27._8_4_ = fVar16;
  auVar27._12_4_ = 0;
  auVar66 = maxps(auVar66,auVar27);
  auVar26._4_4_ = fVar67;
  auVar26._0_4_ = fVar82;
  auVar26._8_4_ = fVar17;
  auVar26._12_4_ = 0;
  auVar59 = minps(auVar59,auVar26);
LAB_10026dab:
  if ((char)param_1[0xf] != '\0') {
    *(int *)(param_1[0x12] + 8) = (int)auVar66._0_8_;
    *(int *)(param_1[0x12] + 0x10) = (int)((ulonglong)auVar66._0_8_ >> 0x20);
    *(int *)(param_1[0x12] + 0xc) = (int)auVar59._0_8_;
    *(int *)(param_1[0x12] + 0x14) = (int)((ulonglong)auVar59._0_8_ >> 0x20);
  }
  return;
}

