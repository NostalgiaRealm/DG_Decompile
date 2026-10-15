/*
 * FUN_1001e9d3 at 1001e9d3
 * undefined __thiscall FUN_1001e9d3(void * this, int * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 1001e9d3-100211d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e9d3(void *this,int *param_1,undefined4 param_2,uint param_3)

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
  undefined8 uVar22;
  undefined8 uVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 uVar31;
  int *piVar32;
  float *pfVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  uint uVar47;
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
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  float fVar99;
  float fVar100;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_e4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  int *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  piVar32 = (int *)param_1[0x10];
  if (piVar32 == (int *)0x0) {
    piVar32 = (int *)((int)this + 0x2c);
    param_1[0x10] = (int)piVar32;
  }
  iVar25 = *piVar32;
  iVar26 = piVar32[1];
  dVar18 = (double)(&DAT_100b5ce0)[-(iVar25 >> 0x1f)];
  dVar19 = (double)(&DAT_100b5ce0)[-(iVar26 >> 0x1f)];
  fVar16 = (float)piVar32[4];
  iVar41 = param_1[0x12];
  fVar91 = (float)((double)(piVar32[2] + iVar25) +
                  (double)(&DAT_100b5ce0)[-(piVar32[2] + iVar25 >> 0x1f)]);
  fVar101 = *(float *)(iVar41 + 0xc);
  fVar77 = (float)((double)(piVar32[3] + iVar26) +
                  (double)(&DAT_100b5ce0)[-(piVar32[3] + iVar26 >> 0x1f)]);
  fVar17 = (float)piVar32[5];
  fVar103 = *(float *)(iVar41 + 0x1c);
  auVar76._0_8_ = CONCAT44(*(undefined4 *)(iVar41 + 0x10),*(undefined4 *)(iVar41 + 8));
  auVar76._8_4_ = *(undefined4 *)(iVar41 + 0x18);
  auVar76._12_4_ = 0;
  fVar102 = *(float *)(iVar41 + 0x14);
  auVar61._0_8_ = CONCAT44(fVar102,fVar101);
  auVar61._8_4_ = fVar103;
  auVar61._12_4_ = 0;
  if (*(char *)((int)param_1 + 0x3a) == '\0') {
    if ((((char)param_1[0xf] != '\0') || (*(char *)((int)param_1 + 0x3b) != '\0')) &&
       (local_18 = 0, param_3 != 0)) {
      do {
        auVar69 = *(undefined1 (*) [16])(param_1[6] * local_18 + *param_1);
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          auVar62._4_4_ = -(uint)(auVar69._4_4_ < (float)((double)iVar26 + dVar19));
          auVar62._0_4_ = -(uint)(auVar69._0_4_ < (float)((double)iVar25 + dVar18));
          auVar62._8_4_ = -(uint)(auVar69._8_4_ < fVar16);
          auVar62._12_4_ = -(uint)(auVar69._12_4_ < 0.0);
          uVar47 = movmskps(param_1,auVar62);
          auVar63._4_4_ = -(uint)(fVar77 <= auVar69._4_4_);
          auVar63._0_4_ = -(uint)(fVar91 <= auVar69._0_4_);
          auVar63._8_4_ = -(uint)(fVar17 <= auVar69._8_4_);
          auVar63._12_4_ = -(uint)(0.0 <= auVar69._12_4_);
          uVar34 = movmskps(local_18,auVar63);
          uVar40 = *(uint *)(&DAT_100afa58 + (((uVar34 & 2) * 2 | uVar47 & 3) * 2 | uVar34 & 1) * 4)
          ;
          *(uint *)param_1[0x12] = *(uint *)param_1[0x12] | uVar40;
          *(uint *)(param_1[0x12] + 4) = *(uint *)(param_1[0x12] + 4) & (uVar40 | 0x2a);
          uVar40 = *(uint *)(&DAT_100afa44 + (((uVar34 & 7) >> 1 | uVar47 & 4) >> 1) * 4);
          *(uint *)param_1[0x12] = *(uint *)param_1[0x12] | uVar40;
          *(uint *)(param_1[0x12] + 4) = *(uint *)(param_1[0x12] + 4) & (uVar40 | 0x15);
        }
        local_18 = local_18 + 1;
        auVar76 = minps(auVar76,auVar69);
        auVar61 = maxps(auVar61,auVar69);
      } while (local_18 < param_3);
    }
    goto LAB_100211a0;
  }
  fVar104 = (float)piVar32[5];
  fVar109 = (float)piVar32[4];
  *(ulonglong *)(param_1 + 0x18) =
       CONCAT44((float)((double)piVar32[3] + (double)(&DAT_100b5ce0)[-(piVar32[3] >> 0x1f)]) * -0.5,
                (float)((double)piVar32[2] + (double)(&DAT_100b5ce0)[-(piVar32[2] >> 0x1f)]) * 0.5);
  param_1[0x1a] = (int)(fVar104 - fVar109);
  param_1[0x1b] = 0x3f800000;
  iVar39 = piVar32[1];
  dVar20 = (double)(&DAT_100b5ce0)[-(iVar39 >> 0x1f)];
  iVar35 = piVar32[3];
  dVar21 = (double)(&DAT_100b5ce0)[-(iVar35 >> 0x1f)];
  iVar42 = piVar32[4];
  param_1[0x1c] =
       (int)((float)((double)piVar32[2] + (double)(&DAT_100b5ce0)[-(piVar32[2] >> 0x1f)]) * 0.5 +
            (float)((double)*piVar32 + (double)(&DAT_100b5ce0)[-(*piVar32 >> 0x1f)]));
  param_1[0x1d] = (int)((float)((double)iVar35 + dVar21) * 0.5 + (float)((double)iVar39 + dVar20));
  param_1[0x1e] = iVar42;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar40 = *(uint *)((int)this + 0x4ec) & 0x3f;
  *(bool *)(param_1 + 0x48) = uVar40 != 0;
  if (*(char *)((int)param_1 + 0x3b) != '\0') {
    if (uVar40 == 0) {
      *(uint *)(iVar41 + 4) = *(uint *)(iVar41 + 4) & 0xfffff03f;
    }
    else {
      iVar41 = *(int *)((int)this + 0x230);
      iVar42 = *(int *)((int)this + 0x234);
      iVar39 = *(int *)((int)this + 0x238);
      param_1[0x28] = *(int *)((int)this + 0x22c);
      param_1[0x29] = iVar41;
      param_1[0x2a] = iVar42;
      param_1[0x2b] = iVar39;
      iVar41 = *(int *)((int)this + 0x240);
      iVar42 = *(int *)((int)this + 0x244);
      iVar39 = *(int *)((int)this + 0x248);
      param_1[0x2c] = *(int *)((int)this + 0x23c);
      param_1[0x2d] = iVar41;
      param_1[0x2e] = iVar42;
      param_1[0x2f] = iVar39;
      iVar41 = *(int *)((int)this + 0x250);
      iVar42 = *(int *)((int)this + 0x254);
      iVar39 = *(int *)((int)this + 600);
      param_1[0x30] = *(int *)((int)this + 0x24c);
      param_1[0x31] = iVar41;
      param_1[0x32] = iVar42;
      param_1[0x33] = iVar39;
      iVar41 = *(int *)((int)this + 0x260);
      iVar42 = *(int *)((int)this + 0x264);
      iVar39 = *(int *)((int)this + 0x268);
      param_1[0x34] = *(int *)((int)this + 0x25c);
      param_1[0x35] = iVar41;
      param_1[0x36] = iVar42;
      param_1[0x37] = iVar39;
      iVar41 = *(int *)((int)this + 0x270);
      iVar42 = *(int *)((int)this + 0x274);
      iVar39 = *(int *)((int)this + 0x278);
      param_1[0x38] = *(int *)((int)this + 0x26c);
      param_1[0x39] = iVar41;
      param_1[0x3a] = iVar42;
      param_1[0x3b] = iVar39;
      iVar41 = *(int *)((int)this + 0x280);
      iVar42 = *(int *)((int)this + 0x284);
      iVar39 = *(int *)((int)this + 0x288);
      param_1[0x3c] = *(int *)((int)this + 0x27c);
      param_1[0x3d] = iVar41;
      param_1[0x3e] = iVar42;
      param_1[0x3f] = iVar39;
    }
  }
  if ((param_1[0x13] != 0) || (uVar31 = 0, (char)param_1[0x48] != '\0')) {
    uVar31 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x121) = uVar31;
  *(bool *)((int)param_1 + 0x122) = param_1[1] != 0;
  local_1c = *(uint *)((int)this + 0x4e8);
  if (local_1c == 0) {
LAB_1001ecff:
    if ((uint)param_1[0xc] <= local_1c) {
      local_1c = param_1[0xc];
    }
    if (local_1c != 0) goto LAB_1001ed10;
    if (param_1[0x11] == 0) {
      FUN_10016740((int)this);
      param_1[0x11] = *(int *)((int)this + 0xabc) + 0x8600;
    }
  }
  else {
    if (local_1c == 0xff) {
      fVar104 = *(float *)((int)this + 0x534);
      param_1[0x40] = (int)fVar104;
      param_1[0x41] = (int)fVar104;
      param_1[0x42] = (int)fVar104;
      param_1[0x43] = (int)fVar104;
      fVar104 = 1.0 - fVar104;
      local_1c = 0x20;
      param_1[0x44] = (int)fVar104;
      param_1[0x45] = (int)fVar104;
      param_1[0x46] = (int)fVar104;
      param_1[0x47] = (int)fVar104;
    }
    else {
      if (local_1c != 0x100) goto LAB_1001ecff;
      local_1c = 0x10;
    }
LAB_1001ed10:
    FUN_10016694((int)this);
  }
  local_30 = param_1 + 0x11;
  if (local_1c == 0) {
    local_24 = 0;
    if (param_3 != 0) {
      do {
        fVar101 = *(float *)(*param_1 + 8 + param_1[6] * local_24);
        pfVar33 = (float *)(*param_1 + param_1[6] * local_24);
        fVar103 = *pfVar33;
        fVar102 = pfVar33[1];
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          fStack_58 = *(float *)(param_1[1] + 8 + param_1[7] * local_24);
          local_60 = *(undefined8 *)(param_1[1] + param_1[7] * local_24);
          fStack_54 = 1.0;
        }
        fVar104 = 0.0;
        fVar109 = 0.0;
        fVar110 = 0.0;
        fVar111 = 0.0;
        local_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        fStack_84 = 0.0;
        if (*(char *)((int)param_1 + 0x121) != '\0') {
          iVar41 = *(int *)((int)this + 0xabc);
          local_90 = *(float *)(iVar41 + 0x28c) * 1.0 + *(float *)(iVar41 + 0x284) * fVar102 +
                     *(float *)(iVar41 + 0x288) * fVar101 + *(float *)(iVar41 + 0x280) * fVar103;
          fStack_8c = *(float *)(iVar41 + 0x29c) * 1.0 + *(float *)(iVar41 + 0x294) * fVar102 +
                      *(float *)(iVar41 + 0x298) * fVar101 + *(float *)(iVar41 + 0x290) * fVar103;
          fStack_88 = *(float *)(iVar41 + 0x2ac) * 1.0 + *(float *)(iVar41 + 0x2a4) * fVar102 +
                      *(float *)(iVar41 + 0x2a8) * fVar101 + *(float *)(iVar41 + 0x2a0) * fVar103;
          fStack_84 = *(float *)(iVar41 + 700) * 1.0 + *(float *)(iVar41 + 0x2b4) * fVar102 +
                      *(float *)(iVar41 + 0x2b8) * fVar101 + *(float *)(iVar41 + 0x2b0) * fVar103;
        }
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_100165fe(this,10);
          iVar41 = *(int *)((int)this + 0xabc);
          fVar104 = *(float *)(iVar41 + 0x450c) * fStack_54 +
                    *(float *)(iVar41 + 0x4504) * local_60._4_4_ +
                    *(float *)(iVar41 + 0x4508) * fStack_58 +
                    *(float *)(iVar41 + 0x4500) * (float)local_60;
          fVar109 = *(float *)(iVar41 + 0x451c) * fStack_54 +
                    *(float *)(iVar41 + 0x4514) * local_60._4_4_ +
                    *(float *)(iVar41 + 0x4518) * fStack_58 +
                    *(float *)(iVar41 + 0x4510) * (float)local_60;
          fVar110 = *(float *)(iVar41 + 0x452c) * fStack_54 +
                    *(float *)(iVar41 + 0x4524) * local_60._4_4_ +
                    *(float *)(iVar41 + 0x4528) * fStack_58 +
                    *(float *)(iVar41 + 0x4520) * (float)local_60;
          fVar111 = *(float *)(iVar41 + 0x453c) * fStack_54 +
                    *(float *)(iVar41 + 0x4534) * local_60._4_4_ +
                    *(float *)(iVar41 + 0x4538) * fStack_58 +
                    *(float *)(iVar41 + 0x4530) * (float)local_60;
        }
        pfVar33 = (float *)*local_30;
        fVar92 = pfVar33[3] * 1.0 + fVar102 * pfVar33[1] + fVar101 * pfVar33[2] + fVar103 * *pfVar33
        ;
        fVar99 = pfVar33[7] * 1.0 + pfVar33[5] * fVar102 +
                 pfVar33[6] * fVar101 + pfVar33[4] * fVar103;
        fVar100 = pfVar33[0xb] * 1.0 + pfVar33[9] * fVar102 +
                  pfVar33[10] * fVar101 + pfVar33[8] * fVar103;
        fVar101 = pfVar33[0xf] * 1.0 + pfVar33[0xd] * fVar102 +
                  pfVar33[0xe] * fVar101 + pfVar33[0xc] * fVar103;
        if (param_1[0x13] != 0) {
          pfVar33 = (float *)(local_24 * 0x20 + param_1[0x13]);
          *pfVar33 = local_90;
          pfVar33[1] = fStack_8c;
          pfVar33[2] = fStack_88;
          pfVar33[3] = fStack_84;
          pfVar33 = (float *)((local_24 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar33 = fVar104;
          pfVar33[1] = fVar109;
          pfVar33[2] = fVar110;
          pfVar33[3] = fVar111;
        }
        local_20 = 0;
        auVar69._4_4_ = fVar101;
        auVar69._0_4_ = fVar101;
        auVar69._8_4_ = fVar101;
        auVar69._12_4_ = fVar101;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar27 = (uint *)param_1[0x12];
          local_20 = 0;
          pfVar33 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar33 = (float *)(param_1 + 0x28);
          }
          if (pfVar33 == (float *)0x0) {
            puVar27[1] = puVar27[1] & 0xfffff03f;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((int)this + 0x4ec);
            fVar103 = 0.0;
            fVar102 = 0.0;
            if ((uVar40 & 1) != 0) {
              fVar103 = pfVar33[2] * fStack_88 + *pfVar33 * local_90 +
                        pfVar33[3] * fStack_84 + pfVar33[1] * fStack_8c;
            }
            fVar104 = 0.0;
            if ((uVar40 & 2) != 0) {
              fVar104 = pfVar33[0x1a] * fStack_88 + pfVar33[0x18] * local_90 +
                        pfVar33[0x1b] * fStack_84 + pfVar33[0x19] * fStack_8c;
            }
            fVar109 = 0.0;
            if ((uVar40 & 4) != 0) {
              fVar109 = pfVar33[0x32] * fStack_88 + pfVar33[0x30] * local_90 +
                        pfVar33[0x33] * fStack_84 + pfVar33[0x31] * fStack_8c;
            }
            fVar110 = 0.0;
            if ((uVar40 & 8) != 0) {
              fVar110 = pfVar33[0x4a] * fStack_88 + pfVar33[0x48] * local_90 +
                        pfVar33[0x4b] * fStack_84 + pfVar33[0x49] * fStack_8c;
            }
            if ((uVar40 & 0x10) != 0) {
              fVar102 = pfVar33[0x62] * fStack_88 + pfVar33[0x60] * local_90 +
                        pfVar33[99] * fStack_84 + pfVar33[0x61] * fStack_8c;
            }
            fVar111 = 0.0;
            if ((uVar40 & 0x20) != 0) {
              fVar111 = pfVar33[0x7a] * fStack_88 + pfVar33[0x78] * local_90 +
                        pfVar33[0x7b] * fStack_84 + pfVar33[0x79] * fStack_8c;
            }
            auVar84._4_4_ = -(uint)(fVar104 < 0.0);
            auVar84._0_4_ = -(uint)(fVar103 < 0.0);
            auVar84._8_4_ = -(uint)(fVar109 < 0.0);
            auVar84._12_4_ = -(uint)(fVar110 < 0.0);
            auVar90._4_4_ = -(uint)(fVar111 < 0.0);
            auVar90._0_4_ = -(uint)(fVar102 < 0.0);
            auVar90._8_8_ = 0;
            uVar34 = movmskps(pfVar33,auVar84);
            uVar40 = movmskps(uVar34 & 0xf,auVar90);
            local_20 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) |
                       *(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4);
            uVar40 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) | 0x3ff;
            puVar27[1] = puVar27[1] &
                         (*(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) | 0xc3f) & uVar40;
          }
          auVar58._4_4_ = -(uint)(fVar92 * 1.0 + fVar101 < 0.0);
          auVar58._0_4_ = -(uint)(fVar92 * -1.0 + fVar101 < 0.0);
          auVar58._8_4_ = -(uint)(fVar99 * -1.0 + fVar101 < 0.0);
          auVar58._12_4_ = -(uint)(fVar99 * 1.0 + fVar101 < 0.0);
          uVar40 = movmskps(uVar40,auVar58);
          uVar40 = *(uint *)(&DAT_100afa58 + (uVar40 & 0xf) * 4);
          uVar47 = (uVar40 | 0x30) & puVar27[1];
          puVar27[1] = uVar47;
          auVar59._4_4_ = -(uint)(fVar100 * 1.0 < 0.0);
          auVar59._0_4_ = -(uint)(fVar100 * -1.0 + fVar101 < 0.0);
          auVar59._8_4_ = -(uint)(fVar100 * -1.0 < 0.0);
          auVar59._12_4_ = -(uint)(fVar100 * 1.0 < 0.0);
          uVar34 = movmskps(puVar27,auVar59);
          local_20 = local_20 | *(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | uVar40;
          puVar27[1] = (*(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | 0xf) & uVar47;
          *puVar27 = *puVar27 | local_20;
        }
        auVar73._0_4_ = fVar92 + 0.0;
        auVar73._4_4_ = fVar99 + 0.0;
        auVar73._8_4_ = fVar100 + 0.0;
        auVar73._12_4_ = 0x3f800000;
        auVar69 = divps(auVar73,auVar69);
        auVar74._0_4_ = auVar69._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
        auVar74._4_4_ = auVar69._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
        auVar74._8_4_ = auVar69._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
        auVar74._12_4_ = auVar69._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
        if (local_24 == 0) {
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar74;
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar74;
        }
        else {
          auVar69 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar74);
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar69;
          auVar69 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar74);
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar69;
        }
        pauVar28 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_20 == 0)) {
            *pauVar28 = auVar74;
          }
          else {
            *(float *)(*pauVar28 + 0xc) = auVar74._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_3);
      goto LAB_10021089;
    }
  }
  else if (local_1c == 1) {
    local_24 = 0;
    if (param_3 != 0) {
      do {
        fVar101 = *(float *)(*param_1 + 8 + param_1[6] * local_24);
        uVar22 = *(undefined8 *)(*param_1 + param_1[6] * local_24);
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          fStack_58 = *(float *)(param_1[1] + 8 + param_1[7] * local_24);
          local_60 = *(undefined8 *)(param_1[1] + param_1[7] * local_24);
          fStack_54 = 1.0;
        }
        fVar102 = (float)uVar22;
        fVar104 = (float)((ulonglong)uVar22 >> 0x20);
        local_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        fStack_84 = 0.0;
        uVar40 = *(uint *)(param_1[10] * local_24 + param_1[5]);
        iVar35 = (uVar40 & 0xff) + 10;
        iVar41 = param_1[2];
        iVar36 = (uVar40 >> 8 & 0xff) + 10;
        iVar42 = param_1[0xb];
        fVar103 = *(float *)(iVar41 + iVar42 * local_24);
        iVar39 = *(int *)((int)this + 0xabc);
        iVar37 = iVar36 * 0x40;
        pfVar33 = (float *)(iVar39 + iVar37);
        pfVar14 = (float *)(iVar39 + 0x10 + iVar37);
        pfVar15 = (float *)(iVar39 + 0x20 + iVar37);
        pfVar1 = (float *)(iVar39 + 0x30 + iVar37);
        iVar38 = iVar35 * 0x40;
        pfVar13 = (float *)(iVar38 + iVar39);
        pfVar2 = (float *)(iVar38 + 0x10 + iVar39);
        pfVar3 = (float *)(iVar38 + 0x30 + iVar39);
        pfVar4 = (float *)(iVar38 + 0x20 + iVar39);
        fVar109 = (pfVar33[3] * 1.0 + fVar104 * pfVar33[1] +
                  fVar101 * pfVar33[2] + fVar102 * *pfVar33) * (1.0 - fVar103) +
                  (fVar104 * pfVar13[1] + pfVar13[3] * 1.0 +
                  fVar102 * *pfVar13 + fVar101 * pfVar13[2]) * fVar103;
        fVar110 = (pfVar14[3] * 1.0 + pfVar14[1] * fVar104 +
                  pfVar14[2] * fVar101 + *pfVar14 * fVar102) * (1.0 - fVar103) +
                  (pfVar2[1] * fVar104 + pfVar2[3] * 1.0 + *pfVar2 * fVar102 + pfVar2[2] * fVar101)
                  * fVar103;
        fVar111 = (pfVar15[3] * 1.0 + pfVar15[1] * fVar104 +
                  pfVar15[2] * fVar101 + *pfVar15 * fVar102) * (1.0 - fVar103) +
                  (pfVar4[3] * 1.0 + pfVar4[1] * fVar104 + pfVar4[2] * fVar101 + *pfVar4 * fVar102)
                  * fVar103;
        fVar101 = (pfVar1[3] * 1.0 + pfVar1[1] * fVar104 + pfVar1[2] * fVar101 + *pfVar1 * fVar102)
                  * (1.0 - fVar103) +
                  (pfVar3[3] * 1.0 + pfVar3[1] * fVar104 + pfVar3[2] * fVar101 + *pfVar3 * fVar102)
                  * fVar103;
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_100165fe(this,iVar35);
          FUN_100165fe(this,iVar36);
          fVar103 = *(float *)(iVar41 + iVar42 * local_24);
          iVar39 = *(int *)((int)this + 0xabc);
          pfVar33 = (float *)(iVar39 + 0x4280 + iVar37);
          pfVar13 = (float *)(iVar39 + 0x4290 + iVar37);
          pfVar14 = (float *)(iVar39 + 0x42a0 + iVar37);
          pfVar15 = (float *)(iVar39 + 0x42b0 + iVar37);
          pfVar1 = (float *)(iVar39 + 0x4280 + iVar38);
          pfVar2 = (float *)(iVar39 + 0x4290 + iVar38);
          pfVar3 = (float *)(iVar39 + 0x42a0 + iVar38);
          pfVar4 = (float *)(iVar39 + 0x42b0 + iVar38);
          local_90 = (pfVar33[3] * fStack_54 + pfVar33[1] * local_60._4_4_ +
                     pfVar33[2] * fStack_58 + *pfVar33 * (float)local_60) * (1.0 - fVar103) +
                     (pfVar1[3] * fStack_54 + pfVar1[1] * local_60._4_4_ +
                     pfVar1[2] * fStack_58 + *pfVar1 * (float)local_60) * fVar103;
          fStack_8c = (pfVar13[3] * fStack_54 + pfVar13[1] * local_60._4_4_ +
                      pfVar13[2] * fStack_58 + *pfVar13 * (float)local_60) * (1.0 - fVar103) +
                      (pfVar2[3] * fStack_54 + pfVar2[1] * local_60._4_4_ +
                      pfVar2[2] * fStack_58 + *pfVar2 * (float)local_60) * fVar103;
          fStack_88 = (pfVar14[3] * fStack_54 + pfVar14[1] * local_60._4_4_ +
                      pfVar14[2] * fStack_58 + *pfVar14 * (float)local_60) * (1.0 - fVar103) +
                      (pfVar3[3] * fStack_54 + pfVar3[1] * local_60._4_4_ +
                      pfVar3[2] * fStack_58 + *pfVar3 * (float)local_60) * fVar103;
          fStack_84 = (pfVar15[3] * fStack_54 + pfVar15[1] * local_60._4_4_ +
                      pfVar15[2] * fStack_58 + *pfVar15 * (float)local_60) * (1.0 - fVar103) +
                      (pfVar4[3] * fStack_54 + pfVar4[1] * local_60._4_4_ +
                      pfVar4[2] * fStack_58 + *pfVar4 * (float)local_60) * fVar103;
        }
        fVar103 = *(float *)(iVar39 + 0x858c) * fVar101 + *(float *)(iVar39 + 0x8584) * fVar110 +
                  *(float *)(iVar39 + 0x8588) * fVar111 + *(float *)(iVar39 + 0x8580) * fVar109;
        fVar102 = *(float *)(iVar39 + 0x859c) * fVar101 + *(float *)(iVar39 + 0x8594) * fVar110 +
                  *(float *)(iVar39 + 0x8598) * fVar111 + *(float *)(iVar39 + 0x8590) * fVar109;
        fVar104 = *(float *)(iVar39 + 0x85ac) * fVar101 + *(float *)(iVar39 + 0x85a4) * fVar110 +
                  *(float *)(iVar39 + 0x85a8) * fVar111 + *(float *)(iVar39 + 0x85a0) * fVar109;
        fVar92 = *(float *)(iVar39 + 0x85bc) * fVar101 + *(float *)(iVar39 + 0x85b4) * fVar110 +
                 *(float *)(iVar39 + 0x85b8) * fVar111 + *(float *)(iVar39 + 0x85b0) * fVar109;
        if (param_1[0x13] != 0) {
          pfVar33 = (float *)(local_24 * 0x20 + param_1[0x13]);
          *pfVar33 = fVar109;
          pfVar33[1] = fVar110;
          pfVar33[2] = fVar111;
          pfVar33[3] = fVar101;
          pfVar33 = (float *)((local_24 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar33 = local_90;
          pfVar33[1] = fStack_8c;
          pfVar33[2] = fStack_88;
          pfVar33[3] = fStack_84;
        }
        local_20 = 0;
        auVar108._4_4_ = fVar92;
        auVar108._0_4_ = fVar92;
        auVar108._8_4_ = fVar92;
        auVar108._12_4_ = fVar92;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar27 = (uint *)param_1[0x12];
          local_20 = 0;
          pfVar33 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar33 = (float *)(param_1 + 0x28);
          }
          if (pfVar33 == (float *)0x0) {
            puVar27[1] = puVar27[1] & 0xfffff03f;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((int)this + 0x4ec);
            fVar99 = 0.0;
            fVar100 = 0.0;
            if ((uVar40 & 1) != 0) {
              fVar99 = fVar111 * pfVar33[2] + fVar109 * *pfVar33 +
                       fVar101 * pfVar33[3] + fVar110 * pfVar33[1];
            }
            fVar64 = 0.0;
            if ((uVar40 & 2) != 0) {
              fVar64 = pfVar33[0x1a] * fVar111 + pfVar33[0x18] * fVar109 +
                       pfVar33[0x1b] * fVar101 + pfVar33[0x19] * fVar110;
            }
            fVar65 = 0.0;
            if ((uVar40 & 4) != 0) {
              fVar65 = pfVar33[0x32] * fVar111 + pfVar33[0x30] * fVar109 +
                       pfVar33[0x33] * fVar101 + pfVar33[0x31] * fVar110;
            }
            fVar66 = 0.0;
            if ((uVar40 & 8) != 0) {
              fVar66 = pfVar33[0x4a] * fVar111 + pfVar33[0x48] * fVar109 +
                       pfVar33[0x4b] * fVar101 + pfVar33[0x49] * fVar110;
            }
            if ((uVar40 & 0x10) != 0) {
              fVar100 = pfVar33[0x62] * fVar111 + pfVar33[0x60] * fVar109 +
                        pfVar33[99] * fVar101 + pfVar33[0x61] * fVar110;
            }
            fVar67 = 0.0;
            if ((uVar40 & 0x20) != 0) {
              fVar67 = pfVar33[0x7a] * fVar111 + pfVar33[0x78] * fVar109 +
                       pfVar33[0x7b] * fVar101 + pfVar33[0x79] * fVar110;
            }
            auVar83._4_4_ = -(uint)(fVar64 < 0.0);
            auVar83._0_4_ = -(uint)(fVar99 < 0.0);
            auVar83._8_4_ = -(uint)(fVar65 < 0.0);
            auVar83._12_4_ = -(uint)(fVar66 < 0.0);
            auVar89._4_4_ = -(uint)(fVar67 < 0.0);
            auVar89._0_4_ = -(uint)(fVar100 < 0.0);
            auVar89._8_8_ = 0;
            uVar34 = movmskps(pfVar33,auVar83);
            uVar40 = movmskps(uVar34 & 0xf,auVar89);
            local_20 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) |
                       *(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4);
            uVar40 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) | 0x3ff;
            puVar27[1] = puVar27[1] &
                         (*(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) | 0xc3f) & uVar40;
          }
          auVar56._4_4_ = -(uint)(fVar103 * 1.0 + fVar92 < 0.0);
          auVar56._0_4_ = -(uint)(fVar103 * -1.0 + fVar92 < 0.0);
          auVar56._8_4_ = -(uint)(fVar102 * -1.0 + fVar92 < 0.0);
          auVar56._12_4_ = -(uint)(fVar102 * 1.0 + fVar92 < 0.0);
          uVar40 = movmskps(uVar40,auVar56);
          uVar40 = *(uint *)(&DAT_100afa58 + (uVar40 & 0xf) * 4);
          uVar47 = (uVar40 | 0x30) & puVar27[1];
          puVar27[1] = uVar47;
          auVar57._4_4_ = -(uint)(fVar104 * 1.0 < 0.0);
          auVar57._0_4_ = -(uint)(fVar104 * -1.0 + fVar92 < 0.0);
          auVar57._8_4_ = -(uint)(fVar104 * -1.0 < 0.0);
          auVar57._12_4_ = -(uint)(fVar104 * 1.0 < 0.0);
          uVar34 = movmskps(puVar27,auVar57);
          local_20 = local_20 | *(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | uVar40;
          puVar27[1] = (*(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | 0xf) & uVar47;
          *puVar27 = *puVar27 | local_20;
        }
        auVar71._0_4_ = fVar103 + 0.0;
        auVar71._4_4_ = fVar102 + 0.0;
        auVar71._8_4_ = fVar104 + 0.0;
        auVar71._12_4_ = 0x3f800000;
        auVar69 = divps(auVar71,auVar108);
        auVar72._0_4_ = auVar69._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
        auVar72._4_4_ = auVar69._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
        auVar72._8_4_ = auVar69._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
        auVar72._12_4_ = auVar69._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
        if (local_24 == 0) {
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar72;
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar72;
        }
        else {
          auVar69 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar72);
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar69;
          auVar69 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar72);
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar69;
        }
        pauVar28 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_20 == 0)) {
            *pauVar28 = auVar72;
          }
          else {
            *(float *)(*pauVar28 + 0xc) = auVar72._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_3);
      goto LAB_10021089;
    }
  }
  else if (local_1c == 2) {
    local_24 = 0;
    if (param_3 != 0) {
      do {
        iVar41 = *param_1;
        iVar42 = param_1[6] * local_24;
        fVar101 = *(float *)(iVar41 + iVar42);
        fVar103 = *(float *)(iVar41 + 4 + iVar42);
        fVar102 = *(float *)(iVar41 + 8 + iVar42);
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          iVar41 = param_1[1];
          iVar42 = param_1[7] * local_24;
          local_60._0_4_ = *(float *)(iVar41 + iVar42);
          local_60._4_4_ = *(float *)(iVar41 + 4 + iVar42);
          fStack_58 = *(float *)(iVar41 + 8 + iVar42);
          fStack_54 = 1.0;
        }
        local_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        fStack_84 = 0.0;
        uVar40 = *(uint *)(param_1[10] * local_24 + param_1[5]);
        iVar39 = (uVar40 & 0xff) + 10;
        iVar35 = (uVar40 >> 8 & 0xff) + 10;
        iVar41 = param_1[2];
        iVar36 = (uVar40 >> 0x10 & 0xff) + 10;
        iVar37 = param_1[0xb] * local_24;
        fVar104 = *(float *)(iVar41 + iVar37);
        fVar109 = *(float *)(iVar41 + 4 + iVar37);
        iVar42 = *(int *)((int)this + 0xabc);
        iVar38 = iVar35 * 0x40;
        pfVar33 = (float *)(iVar38 + iVar42);
        pfVar15 = (float *)(iVar38 + 0x10 + iVar42);
        pfVar1 = (float *)(iVar38 + 0x20 + iVar42);
        pfVar2 = (float *)(iVar38 + 0x30 + iVar42);
        iVar43 = iVar36 * 0x40;
        pfVar13 = (float *)(iVar43 + iVar42);
        pfVar3 = (float *)(iVar43 + 0x10 + iVar42);
        pfVar4 = (float *)(iVar43 + 0x20 + iVar42);
        pfVar5 = (float *)(iVar43 + 0x30 + iVar42);
        iVar44 = iVar39 * 0x40;
        pfVar14 = (float *)(iVar44 + iVar42);
        pfVar6 = (float *)(iVar44 + 0x10 + iVar42);
        pfVar7 = (float *)(iVar44 + 0x20 + iVar42);
        pfVar8 = (float *)(iVar44 + 0x30 + iVar42);
        fVar110 = (pfVar33[3] * 1.0 + pfVar33[1] * fVar103 +
                  pfVar33[2] * fVar102 + *pfVar33 * fVar101) * fVar109 +
                  (pfVar14[3] * 1.0 + fVar103 * pfVar14[1] +
                  fVar102 * pfVar14[2] + fVar101 * *pfVar14) * fVar104 +
                  (pfVar13[3] * 1.0 + pfVar13[1] * fVar103 +
                  pfVar13[2] * fVar102 + *pfVar13 * fVar101) * ((1.0 - fVar104) - fVar109);
        fVar111 = (pfVar15[3] * 1.0 + pfVar15[1] * fVar103 +
                  pfVar15[2] * fVar102 + *pfVar15 * fVar101) * fVar109 +
                  (pfVar6[3] * 1.0 + pfVar6[1] * fVar103 + pfVar6[2] * fVar102 + *pfVar6 * fVar101)
                  * fVar104 +
                  (pfVar3[3] * 1.0 + pfVar3[1] * fVar103 + pfVar3[2] * fVar102 + *pfVar3 * fVar101)
                  * ((1.0 - fVar104) - fVar109);
        fVar92 = (pfVar1[3] * 1.0 + pfVar1[1] * fVar103 + pfVar1[2] * fVar102 + *pfVar1 * fVar101) *
                 fVar109 + (pfVar7[3] * 1.0 + pfVar7[1] * fVar103 +
                           pfVar7[2] * fVar102 + *pfVar7 * fVar101) * fVar104 +
                 (pfVar4[3] * 1.0 + pfVar4[1] * fVar103 + pfVar4[2] * fVar102 + *pfVar4 * fVar101) *
                 ((1.0 - fVar104) - fVar109);
        fVar101 = (pfVar2[3] * 1.0 + pfVar2[1] * fVar103 + pfVar2[2] * fVar102 + *pfVar2 * fVar101)
                  * fVar109 +
                  (pfVar8[3] * 1.0 + pfVar8[1] * fVar103 + pfVar8[2] * fVar102 + *pfVar8 * fVar101)
                  * fVar104 +
                  (pfVar5[3] * 1.0 + pfVar5[1] * fVar103 + pfVar5[2] * fVar102 + *pfVar5 * fVar101)
                  * ((1.0 - fVar104) - fVar109);
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_100165fe(this,iVar39);
          FUN_100165fe(this,iVar35);
          FUN_100165fe(this,iVar36);
          fVar103 = *(float *)(iVar41 + 4 + iVar37);
          fVar102 = *(float *)(iVar41 + iVar37);
          iVar42 = *(int *)((int)this + 0xabc);
          pfVar33 = (float *)(iVar42 + 0x4290 + iVar38);
          pfVar13 = (float *)(iVar42 + 0x42a0 + iVar38);
          pfVar14 = (float *)(iVar42 + 0x42b0 + iVar38);
          pfVar15 = (float *)(iVar42 + 0x4280 + iVar38);
          pfVar1 = (float *)(iVar42 + 0x4280 + iVar43);
          pfVar2 = (float *)(iVar42 + 0x42a0 + iVar43);
          pfVar3 = (float *)(iVar42 + 0x4290 + iVar43);
          pfVar4 = (float *)(iVar42 + 0x42b0 + iVar43);
          pfVar5 = (float *)(iVar42 + 0x4280 + iVar44);
          pfVar6 = (float *)(iVar42 + 0x4290 + iVar44);
          pfVar7 = (float *)(iVar42 + 0x42a0 + iVar44);
          pfVar8 = (float *)(iVar42 + 0x42b0 + iVar44);
          local_90 = (fStack_54 * pfVar15[3] + local_60._4_4_ * pfVar15[1] +
                     fStack_58 * pfVar15[2] + (float)local_60 * *pfVar15) * fVar103 +
                     (pfVar5[3] * fStack_54 + pfVar5[1] * local_60._4_4_ +
                     pfVar5[2] * fStack_58 + *pfVar5 * (float)local_60) * fVar102 +
                     (pfVar1[3] * fStack_54 + pfVar1[1] * local_60._4_4_ +
                     pfVar1[2] * fStack_58 + *pfVar1 * (float)local_60) *
                     ((1.0 - fVar102) - fVar103);
          fStack_8c = (pfVar33[3] * fStack_54 + pfVar33[1] * local_60._4_4_ +
                      pfVar33[2] * fStack_58 + *pfVar33 * (float)local_60) * fVar103 +
                      (pfVar6[3] * fStack_54 + pfVar6[1] * local_60._4_4_ +
                      pfVar6[2] * fStack_58 + *pfVar6 * (float)local_60) * fVar102 +
                      (pfVar3[3] * fStack_54 + pfVar3[1] * local_60._4_4_ +
                      pfVar3[2] * fStack_58 + *pfVar3 * (float)local_60) *
                      ((1.0 - fVar102) - fVar103);
          fStack_88 = (pfVar13[3] * fStack_54 + pfVar13[1] * local_60._4_4_ +
                      pfVar13[2] * fStack_58 + *pfVar13 * (float)local_60) * fVar103 +
                      (pfVar7[3] * fStack_54 + pfVar7[1] * local_60._4_4_ +
                      pfVar7[2] * fStack_58 + *pfVar7 * (float)local_60) * fVar102 +
                      (pfVar2[3] * fStack_54 + pfVar2[1] * local_60._4_4_ +
                      pfVar2[2] * fStack_58 + *pfVar2 * (float)local_60) *
                      ((1.0 - fVar102) - fVar103);
          fStack_84 = (pfVar14[3] * fStack_54 + pfVar14[1] * local_60._4_4_ +
                      pfVar14[2] * fStack_58 + *pfVar14 * (float)local_60) * fVar103 +
                      (pfVar8[3] * fStack_54 + pfVar8[1] * local_60._4_4_ +
                      pfVar8[2] * fStack_58 + *pfVar8 * (float)local_60) * fVar102 +
                      (pfVar4[3] * fStack_54 + pfVar4[1] * local_60._4_4_ +
                      pfVar4[2] * fStack_58 + *pfVar4 * (float)local_60) *
                      ((1.0 - fVar102) - fVar103);
        }
        fVar103 = *(float *)(iVar42 + 0x858c) * fVar101 + *(float *)(iVar42 + 0x8584) * fVar111 +
                  *(float *)(iVar42 + 0x8588) * fVar92 + *(float *)(iVar42 + 0x8580) * fVar110;
        fVar102 = *(float *)(iVar42 + 0x859c) * fVar101 + *(float *)(iVar42 + 0x8594) * fVar111 +
                  *(float *)(iVar42 + 0x8598) * fVar92 + *(float *)(iVar42 + 0x8590) * fVar110;
        fVar104 = *(float *)(iVar42 + 0x85ac) * fVar101 + *(float *)(iVar42 + 0x85a4) * fVar111 +
                  *(float *)(iVar42 + 0x85a8) * fVar92 + *(float *)(iVar42 + 0x85a0) * fVar110;
        fVar109 = *(float *)(iVar42 + 0x85bc) * fVar101 + *(float *)(iVar42 + 0x85b4) * fVar111 +
                  *(float *)(iVar42 + 0x85b8) * fVar92 + *(float *)(iVar42 + 0x85b0) * fVar110;
        if (param_1[0x13] != 0) {
          pfVar33 = (float *)(local_24 * 0x20 + param_1[0x13]);
          *pfVar33 = fVar110;
          pfVar33[1] = fVar111;
          pfVar33[2] = fVar92;
          pfVar33[3] = fVar101;
          pfVar33 = (float *)((local_24 * 0x20 | 0x10) + param_1[0x13]);
          *pfVar33 = local_90;
          pfVar33[1] = fStack_8c;
          pfVar33[2] = fStack_88;
          pfVar33[3] = fStack_84;
        }
        local_20 = 0;
        auVar107._4_4_ = fVar109;
        auVar107._0_4_ = fVar109;
        auVar107._8_4_ = fVar109;
        auVar107._12_4_ = fVar109;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar27 = (uint *)param_1[0x12];
          local_20 = 0;
          pfVar33 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar33 = (float *)(param_1 + 0x28);
          }
          if (pfVar33 == (float *)0x0) {
            puVar27[1] = puVar27[1] & 0xfffff03f;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((int)this + 0x4ec);
            fVar99 = 0.0;
            fVar100 = 0.0;
            if ((uVar40 & 1) != 0) {
              fVar99 = pfVar33[2] * fVar92 + *pfVar33 * fVar110 +
                       pfVar33[3] * fVar101 + pfVar33[1] * fVar111;
            }
            fVar64 = 0.0;
            if ((uVar40 & 2) != 0) {
              fVar64 = pfVar33[0x1a] * fVar92 + pfVar33[0x18] * fVar110 +
                       pfVar33[0x1b] * fVar101 + pfVar33[0x19] * fVar111;
            }
            fVar65 = 0.0;
            if ((uVar40 & 4) != 0) {
              fVar65 = pfVar33[0x32] * fVar92 + pfVar33[0x30] * fVar110 +
                       pfVar33[0x33] * fVar101 + pfVar33[0x31] * fVar111;
            }
            fVar66 = 0.0;
            if ((uVar40 & 8) != 0) {
              fVar66 = pfVar33[0x4a] * fVar92 + pfVar33[0x48] * fVar110 +
                       pfVar33[0x4b] * fVar101 + pfVar33[0x49] * fVar111;
            }
            if ((uVar40 & 0x10) != 0) {
              fVar100 = pfVar33[0x62] * fVar92 + pfVar33[0x60] * fVar110 +
                        pfVar33[99] * fVar101 + pfVar33[0x61] * fVar111;
            }
            fVar67 = 0.0;
            if ((uVar40 & 0x20) != 0) {
              fVar67 = pfVar33[0x7a] * fVar92 + pfVar33[0x78] * fVar110 +
                       pfVar33[0x7b] * fVar101 + pfVar33[0x79] * fVar111;
            }
            auVar82._4_4_ = -(uint)(fVar64 < 0.0);
            auVar82._0_4_ = -(uint)(fVar99 < 0.0);
            auVar82._8_4_ = -(uint)(fVar65 < 0.0);
            auVar82._12_4_ = -(uint)(fVar66 < 0.0);
            auVar88._4_4_ = -(uint)(fVar67 < 0.0);
            auVar88._0_4_ = -(uint)(fVar100 < 0.0);
            auVar88._8_8_ = 0;
            uVar34 = movmskps(pfVar33,auVar82);
            uVar40 = movmskps(uVar34 & 0xf,auVar88);
            local_20 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) |
                       *(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4);
            uVar40 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) | 0x3ff;
            puVar27[1] = puVar27[1] &
                         (*(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) | 0xc3f) & uVar40;
          }
          auVar54._4_4_ = -(uint)(fVar103 * 1.0 + fVar109 < 0.0);
          auVar54._0_4_ = -(uint)(fVar103 * -1.0 + fVar109 < 0.0);
          auVar54._8_4_ = -(uint)(fVar102 * -1.0 + fVar109 < 0.0);
          auVar54._12_4_ = -(uint)(fVar102 * 1.0 + fVar109 < 0.0);
          uVar40 = movmskps(uVar40,auVar54);
          uVar40 = *(uint *)(&DAT_100afa58 + (uVar40 & 0xf) * 4);
          uVar47 = (uVar40 | 0x30) & puVar27[1];
          puVar27[1] = uVar47;
          auVar55._4_4_ = -(uint)(fVar104 * 1.0 < 0.0);
          auVar55._0_4_ = -(uint)(fVar104 * -1.0 + fVar109 < 0.0);
          auVar55._8_4_ = -(uint)(fVar104 * -1.0 < 0.0);
          auVar55._12_4_ = -(uint)(fVar104 * 1.0 < 0.0);
          uVar34 = movmskps(puVar27,auVar55);
          local_20 = local_20 | *(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | uVar40;
          puVar27[1] = (*(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | 0xf) & uVar47;
          *puVar27 = *puVar27 | local_20;
        }
        auVar97._0_4_ = fVar103 + 0.0;
        auVar97._4_4_ = fVar102 + 0.0;
        auVar97._8_4_ = fVar104 + 0.0;
        auVar97._12_4_ = 0x3f800000;
        auVar69 = divps(auVar97,auVar107);
        auVar98._0_4_ = auVar69._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
        auVar98._4_4_ = auVar69._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
        auVar98._8_4_ = auVar69._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
        auVar98._12_4_ = auVar69._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
        if (local_24 == 0) {
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar98;
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar98;
        }
        else {
          auVar69 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar98);
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar69;
          auVar69 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar98);
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar69;
        }
        pauVar28 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_20 == 0)) {
            *pauVar28 = auVar98;
          }
          else {
            *(float *)(*pauVar28 + 0xc) = auVar98._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_3);
      goto LAB_10021089;
    }
  }
  else if (local_1c == 3) {
    local_2c = 0;
    if (param_3 != 0) {
      do {
        iVar41 = *param_1;
        iVar42 = param_1[6] * local_2c;
        fVar101 = *(float *)(iVar41 + iVar42);
        fVar103 = *(float *)(iVar41 + 4 + iVar42);
        fVar102 = *(float *)(iVar41 + 8 + iVar42);
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          iVar41 = param_1[1];
          iVar42 = param_1[7] * local_2c;
          uStack_48._4_4_ = 1.0;
          uStack_48._0_4_ = (float)*(undefined4 *)(iVar41 + 8 + iVar42);
          local_50._4_4_ = (float)*(undefined4 *)(iVar41 + 4 + iVar42);
          local_50._0_4_ = (float)*(undefined4 *)(iVar41 + iVar42);
        }
        uVar40 = *(uint *)(param_1[10] * local_2c + param_1[5]);
        iVar35 = (uVar40 & 0xff) + 10;
        iVar36 = (uVar40 >> 8 & 0xff) + 10;
        iVar37 = (uVar40 >> 0x10 & 0xff) + 10;
        iVar41 = (uVar40 >> 0x18) + 10;
        iVar42 = param_1[2];
        iVar38 = param_1[0xb] * local_2c;
        fVar104 = *(float *)(iVar42 + 8 + iVar38);
        fVar109 = *(float *)(iVar42 + iVar38);
        fVar110 = *(float *)(iVar42 + 4 + iVar38);
        iVar39 = *(int *)((int)this + 0xabc);
        iVar43 = iVar36 * 0x40;
        pfVar33 = (float *)(iVar43 + iVar39);
        pfVar1 = (float *)(iVar43 + 0x10 + iVar39);
        pfVar2 = (float *)(iVar43 + 0x30 + iVar39);
        pfVar3 = (float *)(iVar43 + 0x20 + iVar39);
        iVar44 = iVar37 * 0x40;
        pfVar13 = (float *)(iVar44 + iVar39);
        pfVar4 = (float *)(iVar44 + 0x20 + iVar39);
        pfVar5 = (float *)(iVar44 + 0x10 + iVar39);
        pfVar6 = (float *)(iVar44 + 0x30 + iVar39);
        iVar45 = iVar41 * 0x40;
        pfVar14 = (float *)(iVar45 + iVar39);
        pfVar7 = (float *)(iVar45 + 0x10 + iVar39);
        pfVar8 = (float *)(iVar45 + 0x20 + iVar39);
        pfVar9 = (float *)(iVar45 + 0x30 + iVar39);
        iVar46 = iVar35 * 0x40;
        pfVar10 = (float *)(iVar46 + 0x10 + iVar39);
        pfVar11 = (float *)(iVar46 + 0x30 + iVar39);
        pfVar12 = (float *)(iVar46 + 0x20 + iVar39);
        pfVar15 = (float *)(iVar46 + iVar39);
        fVar111 = (pfVar15[3] * 1.0 + fVar103 * pfVar15[1] +
                  fVar102 * pfVar15[2] + fVar101 * *pfVar15) * fVar109 +
                  (pfVar33[3] * 1.0 + pfVar33[1] * fVar103 +
                  pfVar33[2] * fVar102 + *pfVar33 * fVar101) * fVar110 +
                  (pfVar13[3] * 1.0 + fVar103 * pfVar13[1] +
                  fVar102 * pfVar13[2] + fVar101 * *pfVar13) * fVar104 +
                  (((1.0 - fVar109) - fVar110) - fVar104) *
                  (pfVar14[3] * 1.0 + fVar103 * pfVar14[1] +
                  fVar102 * pfVar14[2] + fVar101 * *pfVar14);
        fVar92 = (pfVar10[3] * 1.0 + pfVar10[1] * fVar103 +
                 pfVar10[2] * fVar102 + *pfVar10 * fVar101) * fVar109 +
                 (pfVar1[3] * 1.0 + pfVar1[1] * fVar103 + pfVar1[2] * fVar102 + *pfVar1 * fVar101) *
                 fVar110 + (pfVar5[3] * 1.0 + pfVar5[1] * fVar103 +
                           pfVar5[2] * fVar102 + *pfVar5 * fVar101) * fVar104 +
                 (((1.0 - fVar109) - fVar110) - fVar104) *
                 (pfVar7[3] * 1.0 + pfVar7[1] * fVar103 + pfVar7[2] * fVar102 + *pfVar7 * fVar101);
        fVar99 = (pfVar12[3] * 1.0 + pfVar12[1] * fVar103 +
                 pfVar12[2] * fVar102 + *pfVar12 * fVar101) * fVar109 +
                 (pfVar3[3] * 1.0 + pfVar3[1] * fVar103 + pfVar3[2] * fVar102 + *pfVar3 * fVar101) *
                 fVar110 + (pfVar4[3] * 1.0 + pfVar4[1] * fVar103 +
                           pfVar4[2] * fVar102 + *pfVar4 * fVar101) * fVar104 +
                 (((1.0 - fVar109) - fVar110) - fVar104) *
                 (pfVar8[3] * 1.0 + pfVar8[1] * fVar103 + pfVar8[2] * fVar102 + *pfVar8 * fVar101);
        fVar101 = (pfVar11[3] * 1.0 + pfVar11[1] * fVar103 +
                  pfVar11[2] * fVar102 + *pfVar11 * fVar101) * fVar109 +
                  (pfVar2[3] * 1.0 + pfVar2[1] * fVar103 + pfVar2[2] * fVar102 + *pfVar2 * fVar101)
                  * fVar110 +
                  (pfVar6[3] * 1.0 + pfVar6[1] * fVar103 + pfVar6[2] * fVar102 + *pfVar6 * fVar101)
                  * fVar104 +
                  (((1.0 - fVar109) - fVar110) - fVar104) *
                  (pfVar9[3] * 1.0 + pfVar9[1] * fVar103 + pfVar9[2] * fVar102 + *pfVar9 * fVar101);
        if (*(char *)((int)param_1 + 0x122) == '\0') {
          fVar103 = 0.0;
          fVar102 = 0.0;
          fVar104 = 0.0;
          fVar109 = 0.0;
        }
        else {
          FUN_100165fe(this,iVar35);
          FUN_100165fe(this,iVar36);
          FUN_100165fe(this,iVar37);
          FUN_100165fe(this,iVar41);
          fVar109 = *(float *)(iVar42 + 8 + iVar38);
          fVar110 = *(float *)(iVar42 + iVar38);
          fVar100 = *(float *)(iVar42 + 4 + iVar38);
          iVar39 = *(int *)((int)this + 0xabc);
          pfVar33 = (float *)(iVar39 + 0x4280 + iVar43);
          pfVar13 = (float *)(iVar39 + 0x4290 + iVar43);
          pfVar14 = (float *)(iVar39 + 0x42b0 + iVar43);
          pfVar15 = (float *)(iVar39 + 0x42a0 + iVar43);
          pfVar1 = (float *)(iVar39 + 0x42a0 + iVar44);
          pfVar2 = (float *)(iVar39 + 0x4290 + iVar44);
          pfVar3 = (float *)(iVar39 + 0x42b0 + iVar44);
          pfVar4 = (float *)(iVar39 + 0x4280 + iVar44);
          pfVar5 = (float *)(iVar39 + 0x4280 + iVar45);
          pfVar6 = (float *)(iVar39 + 0x42a0 + iVar45);
          pfVar7 = (float *)(iVar39 + 0x4290 + iVar45);
          pfVar8 = (float *)(iVar39 + 0x42b0 + iVar45);
          pfVar9 = (float *)(iVar39 + 0x4290 + iVar46);
          pfVar10 = (float *)(iVar39 + 0x4280 + iVar46);
          pfVar11 = (float *)(iVar39 + 0x42b0 + iVar46);
          pfVar12 = (float *)(iVar39 + 0x42a0 + iVar46);
          fVar103 = (uStack_48._4_4_ * pfVar10[3] + local_50._4_4_ * pfVar10[1] +
                    (float)uStack_48 * pfVar10[2] + (float)local_50 * *pfVar10) * fVar110 +
                    (pfVar33[3] * uStack_48._4_4_ + pfVar33[1] * local_50._4_4_ +
                    pfVar33[2] * (float)uStack_48 + *pfVar33 * (float)local_50) * fVar100 +
                    (uStack_48._4_4_ * pfVar4[3] + local_50._4_4_ * pfVar4[1] +
                    (float)uStack_48 * pfVar4[2] + (float)local_50 * *pfVar4) * fVar109 +
                    (((1.0 - fVar110) - fVar100) - fVar109) *
                    (uStack_48._4_4_ * pfVar5[3] + local_50._4_4_ * pfVar5[1] +
                    (float)uStack_48 * pfVar5[2] + (float)local_50 * *pfVar5);
          fVar102 = (pfVar9[3] * uStack_48._4_4_ + pfVar9[1] * local_50._4_4_ +
                    pfVar9[2] * (float)uStack_48 + *pfVar9 * (float)local_50) * fVar110 +
                    (pfVar13[3] * uStack_48._4_4_ + pfVar13[1] * local_50._4_4_ +
                    pfVar13[2] * (float)uStack_48 + *pfVar13 * (float)local_50) * fVar100 +
                    (pfVar2[3] * uStack_48._4_4_ + pfVar2[1] * local_50._4_4_ +
                    pfVar2[2] * (float)uStack_48 + *pfVar2 * (float)local_50) * fVar109 +
                    (((1.0 - fVar110) - fVar100) - fVar109) *
                    (pfVar7[3] * uStack_48._4_4_ + pfVar7[1] * local_50._4_4_ +
                    pfVar7[2] * (float)uStack_48 + *pfVar7 * (float)local_50);
          fVar104 = (pfVar12[3] * uStack_48._4_4_ + pfVar12[1] * local_50._4_4_ +
                    pfVar12[2] * (float)uStack_48 + *pfVar12 * (float)local_50) * fVar110 +
                    (pfVar15[3] * uStack_48._4_4_ + pfVar15[1] * local_50._4_4_ +
                    pfVar15[2] * (float)uStack_48 + *pfVar15 * (float)local_50) * fVar100 +
                    (pfVar1[3] * uStack_48._4_4_ + pfVar1[1] * local_50._4_4_ +
                    pfVar1[2] * (float)uStack_48 + *pfVar1 * (float)local_50) * fVar109 +
                    (((1.0 - fVar110) - fVar100) - fVar109) *
                    (pfVar6[3] * uStack_48._4_4_ + pfVar6[1] * local_50._4_4_ +
                    pfVar6[2] * (float)uStack_48 + *pfVar6 * (float)local_50);
          fVar109 = (pfVar11[3] * uStack_48._4_4_ + pfVar11[1] * local_50._4_4_ +
                    pfVar11[2] * (float)uStack_48 + *pfVar11 * (float)local_50) * fVar110 +
                    (pfVar14[3] * uStack_48._4_4_ + pfVar14[1] * local_50._4_4_ +
                    pfVar14[2] * (float)uStack_48 + *pfVar14 * (float)local_50) * fVar100 +
                    (pfVar3[3] * uStack_48._4_4_ + pfVar3[1] * local_50._4_4_ +
                    pfVar3[2] * (float)uStack_48 + *pfVar3 * (float)local_50) * fVar109 +
                    (((1.0 - fVar110) - fVar100) - fVar109) *
                    (pfVar8[3] * uStack_48._4_4_ + pfVar8[1] * local_50._4_4_ +
                    pfVar8[2] * (float)uStack_48 + *pfVar8 * (float)local_50);
        }
        fVar110 = fVar101 * *(float *)(iVar39 + 0x858c) + fVar92 * *(float *)(iVar39 + 0x8584) +
                  fVar99 * *(float *)(iVar39 + 0x8588) + fVar111 * *(float *)(iVar39 + 0x8580);
        fVar100 = *(float *)(iVar39 + 0x859c) * fVar101 + *(float *)(iVar39 + 0x8594) * fVar92 +
                  *(float *)(iVar39 + 0x8598) * fVar99 + *(float *)(iVar39 + 0x8590) * fVar111;
        fVar64 = *(float *)(iVar39 + 0x85ac) * fVar101 + *(float *)(iVar39 + 0x85a4) * fVar92 +
                 *(float *)(iVar39 + 0x85a8) * fVar99 + *(float *)(iVar39 + 0x85a0) * fVar111;
        fVar65 = *(float *)(iVar39 + 0x85bc) * fVar101 + *(float *)(iVar39 + 0x85b4) * fVar92 +
                 *(float *)(iVar39 + 0x85b8) * fVar99 + *(float *)(iVar39 + 0x85b0) * fVar111;
        if (param_1[0x13] != 0) {
          pfVar33 = (float *)(local_2c * 0x20 + param_1[0x13]);
          *pfVar33 = fVar111;
          pfVar33[1] = fVar92;
          pfVar33[2] = fVar99;
          pfVar33[3] = fVar101;
          pfVar33 = (float *)((local_2c * 0x20 | 0x10) + param_1[0x13]);
          *pfVar33 = fVar103;
          pfVar33[1] = fVar102;
          pfVar33[2] = fVar104;
          pfVar33[3] = fVar109;
        }
        local_18 = 0;
        auVar106._4_4_ = fVar65;
        auVar106._0_4_ = fVar65;
        auVar106._8_4_ = fVar65;
        auVar106._12_4_ = fVar65;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar27 = (uint *)param_1[0x12];
          local_18 = 0;
          pfVar33 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar33 = (float *)(param_1 + 0x28);
          }
          if (pfVar33 == (float *)0x0) {
            puVar27[1] = puVar27[1] & 0xfffff03f;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((int)this + 0x4ec);
            fVar103 = 0.0;
            fVar102 = 0.0;
            if ((uVar40 & 1) != 0) {
              fVar103 = fVar99 * pfVar33[2] + fVar111 * *pfVar33 +
                        fVar101 * pfVar33[3] + fVar92 * pfVar33[1];
            }
            fVar104 = 0.0;
            if ((uVar40 & 2) != 0) {
              fVar104 = pfVar33[0x1a] * fVar99 + pfVar33[0x18] * fVar111 +
                        pfVar33[0x1b] * fVar101 + pfVar33[0x19] * fVar92;
            }
            fVar109 = 0.0;
            if ((uVar40 & 4) != 0) {
              fVar109 = pfVar33[0x32] * fVar99 + pfVar33[0x30] * fVar111 +
                        pfVar33[0x33] * fVar101 + pfVar33[0x31] * fVar92;
            }
            fVar66 = 0.0;
            if ((uVar40 & 8) != 0) {
              fVar66 = pfVar33[0x4a] * fVar99 + pfVar33[0x48] * fVar111 +
                       pfVar33[0x4b] * fVar101 + pfVar33[0x49] * fVar92;
            }
            if ((uVar40 & 0x10) != 0) {
              fVar102 = pfVar33[0x62] * fVar99 + pfVar33[0x60] * fVar111 +
                        pfVar33[99] * fVar101 + pfVar33[0x61] * fVar92;
            }
            fVar67 = 0.0;
            if ((uVar40 & 0x20) != 0) {
              fVar67 = pfVar33[0x7a] * fVar99 + pfVar33[0x78] * fVar111 +
                       pfVar33[0x7b] * fVar101 + pfVar33[0x79] * fVar92;
            }
            auVar81._4_4_ = -(uint)(fVar104 < 0.0);
            auVar81._0_4_ = -(uint)(fVar103 < 0.0);
            auVar81._8_4_ = -(uint)(fVar109 < 0.0);
            auVar81._12_4_ = -(uint)(fVar66 < 0.0);
            auVar87._4_4_ = -(uint)(fVar67 < 0.0);
            auVar87._0_4_ = -(uint)(fVar102 < 0.0);
            auVar87._8_8_ = 0;
            uVar34 = movmskps(pfVar33,auVar81);
            uVar40 = movmskps(uVar34 & 0xf,auVar87);
            local_18 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) |
                       *(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4);
            uVar40 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) | 0x3ff;
            puVar27[1] = puVar27[1] &
                         (*(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) | 0xc3f) & uVar40;
          }
          auVar52._4_4_ = -(uint)(fVar110 * 1.0 + fVar65 < 0.0);
          auVar52._0_4_ = -(uint)(fVar110 * -1.0 + fVar65 < 0.0);
          auVar52._8_4_ = -(uint)(fVar100 * -1.0 + fVar65 < 0.0);
          auVar52._12_4_ = -(uint)(fVar100 * 1.0 + fVar65 < 0.0);
          uVar40 = movmskps(uVar40,auVar52);
          uVar40 = *(uint *)(&DAT_100afa58 + (uVar40 & 0xf) * 4);
          uVar47 = (uVar40 | 0x30) & puVar27[1];
          puVar27[1] = uVar47;
          auVar53._4_4_ = -(uint)(fVar64 * 1.0 < 0.0);
          auVar53._0_4_ = -(uint)(fVar64 * -1.0 + fVar65 < 0.0);
          auVar53._8_4_ = -(uint)(fVar64 * -1.0 < 0.0);
          auVar53._12_4_ = -(uint)(fVar64 * 1.0 < 0.0);
          uVar34 = movmskps(puVar27,auVar53);
          local_18 = local_18 | *(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | uVar40;
          puVar27[1] = (*(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | 0xf) & uVar47;
          *puVar27 = *puVar27 | local_18;
        }
        auVar95._0_4_ = fVar110 + 0.0;
        auVar95._4_4_ = fVar100 + 0.0;
        auVar95._8_4_ = fVar64 + 0.0;
        auVar95._12_4_ = 0x3f800000;
        auVar69 = divps(auVar95,auVar106);
        auVar96._0_4_ = auVar69._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
        auVar96._4_4_ = auVar69._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
        auVar96._8_4_ = auVar69._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
        auVar96._12_4_ = auVar69._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
        if (local_2c == 0) {
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar96;
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar96;
        }
        else {
          auVar69 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar96);
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar69;
          auVar69 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar96);
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar69;
        }
        pauVar28 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_18 == 0)) {
            *pauVar28 = auVar96;
          }
          else {
            *(float *)(*pauVar28 + 0xc) = auVar96._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_2c = local_2c + 1;
      } while (local_2c < param_3);
      goto LAB_10021089;
    }
  }
  else if (local_1c == 0x10) {
    local_2c = 0;
    if (param_3 != 0) {
      do {
        fVar101 = *(float *)(*param_1 + 8 + param_1[6] * local_2c);
        pfVar33 = (float *)(*param_1 + param_1[6] * local_2c);
        fVar103 = *pfVar33;
        fVar102 = pfVar33[1];
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          uStack_48._4_4_ = 1.0;
          uStack_48._0_4_ = (float)*(undefined4 *)(param_1[1] + 8 + param_1[7] * local_2c);
          local_50 = *(undefined8 *)(param_1[1] + param_1[7] * local_2c);
        }
        fVar104 = 0.0;
        fVar109 = 0.0;
        fVar110 = 0.0;
        fVar111 = 0.0;
        local_d0 = 0.0;
        fStack_cc = 0.0;
        fStack_c8 = 0.0;
        fStack_c4 = 0.0;
        uVar40 = *(uint *)(param_1[10] * local_2c + param_1[5]) & 0xff;
        if (*(char *)((int)param_1 + 0x121) != '\0') {
          pfVar33 = (float *)((uVar40 + 10) * 0x40 + *(int *)((int)this + 0xabc));
          local_d0 = pfVar33[3] * 1.0 + fVar102 * pfVar33[1] +
                     fVar101 * pfVar33[2] + fVar103 * *pfVar33;
          fStack_cc = pfVar33[7] * 1.0 + pfVar33[5] * fVar102 +
                      pfVar33[6] * fVar101 + pfVar33[4] * fVar103;
          fStack_c8 = pfVar33[0xb] * 1.0 + pfVar33[9] * fVar102 +
                      pfVar33[10] * fVar101 + pfVar33[8] * fVar103;
          fStack_c4 = pfVar33[0xf] * 1.0 + pfVar33[0xd] * fVar102 +
                      pfVar33[0xe] * fVar101 + pfVar33[0xc] * fVar103;
        }
        iVar41 = uVar40 + 10;
        if (*(char *)((int)param_1 + 0x122) != '\0') {
          FUN_100165fe(this,iVar41);
          iVar42 = *(int *)((int)this + 0xabc);
          iVar41 = iVar41 * 0x40;
          pfVar33 = (float *)(iVar42 + 0x4280 + iVar41);
          pfVar13 = (float *)(iVar42 + 0x4290 + iVar41);
          pfVar14 = (float *)(iVar42 + 0x42a0 + iVar41);
          pfVar15 = (float *)(iVar42 + 0x42b0 + iVar41);
          fVar104 = pfVar33[3] * uStack_48._4_4_ + pfVar33[1] * local_50._4_4_ +
                    pfVar33[2] * (float)uStack_48 + *pfVar33 * (float)local_50;
          fVar109 = pfVar13[3] * uStack_48._4_4_ + pfVar13[1] * local_50._4_4_ +
                    pfVar13[2] * (float)uStack_48 + *pfVar13 * (float)local_50;
          fVar110 = pfVar14[3] * uStack_48._4_4_ + pfVar14[1] * local_50._4_4_ +
                    pfVar14[2] * (float)uStack_48 + *pfVar14 * (float)local_50;
          fVar111 = pfVar15[3] * uStack_48._4_4_ + pfVar15[1] * local_50._4_4_ +
                    pfVar15[2] * (float)uStack_48 + *pfVar15 * (float)local_50;
        }
        pfVar33 = (float *)*local_30;
        fVar92 = pfVar33[3] * 1.0 + fVar102 * pfVar33[1] + fVar101 * pfVar33[2] + fVar103 * *pfVar33
        ;
        fVar99 = pfVar33[7] * 1.0 + pfVar33[5] * fVar102 +
                 pfVar33[6] * fVar101 + pfVar33[4] * fVar103;
        fVar100 = pfVar33[0xb] * 1.0 + pfVar33[9] * fVar102 +
                  pfVar33[10] * fVar101 + pfVar33[8] * fVar103;
        fVar101 = pfVar33[0xf] * 1.0 + pfVar33[0xd] * fVar102 +
                  pfVar33[0xe] * fVar101 + pfVar33[0xc] * fVar103;
        if (param_1[0x13] != 0) {
          pfVar33 = (float *)(local_2c * 0x20 + param_1[0x13]);
          *pfVar33 = local_d0;
          pfVar33[1] = fStack_cc;
          pfVar33[2] = fStack_c8;
          pfVar33[3] = fStack_c4;
          pfVar33 = (float *)((local_2c * 0x20 | 0x10) + param_1[0x13]);
          *pfVar33 = fVar104;
          pfVar33[1] = fVar109;
          pfVar33[2] = fVar110;
          pfVar33[3] = fVar111;
        }
        local_28 = 0;
        auVar105._4_4_ = fVar101;
        auVar105._0_4_ = fVar101;
        auVar105._8_4_ = fVar101;
        auVar105._12_4_ = fVar101;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar27 = (uint *)param_1[0x12];
          local_28 = 0;
          pfVar33 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar33 = (float *)(param_1 + 0x28);
          }
          if (pfVar33 == (float *)0x0) {
            puVar27[1] = puVar27[1] & 0xfffff03f;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((int)this + 0x4ec);
            fVar103 = 0.0;
            fVar102 = 0.0;
            if ((uVar40 & 1) != 0) {
              fVar103 = pfVar33[2] * fStack_c8 + *pfVar33 * local_d0 +
                        pfVar33[3] * fStack_c4 + pfVar33[1] * fStack_cc;
            }
            fVar104 = 0.0;
            if ((uVar40 & 2) != 0) {
              fVar104 = pfVar33[0x1a] * fStack_c8 + pfVar33[0x18] * local_d0 +
                        pfVar33[0x1b] * fStack_c4 + pfVar33[0x19] * fStack_cc;
            }
            fVar109 = 0.0;
            if ((uVar40 & 4) != 0) {
              fVar109 = pfVar33[0x32] * fStack_c8 + pfVar33[0x30] * local_d0 +
                        pfVar33[0x33] * fStack_c4 + pfVar33[0x31] * fStack_cc;
            }
            fVar110 = 0.0;
            if ((uVar40 & 8) != 0) {
              fVar110 = pfVar33[0x4a] * fStack_c8 + pfVar33[0x48] * local_d0 +
                        pfVar33[0x4b] * fStack_c4 + pfVar33[0x49] * fStack_cc;
            }
            if ((uVar40 & 0x10) != 0) {
              fVar102 = pfVar33[0x62] * fStack_c8 + pfVar33[0x60] * local_d0 +
                        pfVar33[99] * fStack_c4 + pfVar33[0x61] * fStack_cc;
            }
            fVar111 = 0.0;
            if ((uVar40 & 0x20) != 0) {
              fVar111 = pfVar33[0x7a] * fStack_c8 + pfVar33[0x78] * local_d0 +
                        pfVar33[0x7b] * fStack_c4 + pfVar33[0x79] * fStack_cc;
            }
            auVar80._4_4_ = -(uint)(fVar104 < 0.0);
            auVar80._0_4_ = -(uint)(fVar103 < 0.0);
            auVar80._8_4_ = -(uint)(fVar109 < 0.0);
            auVar80._12_4_ = -(uint)(fVar110 < 0.0);
            auVar86._4_4_ = -(uint)(fVar111 < 0.0);
            auVar86._0_4_ = -(uint)(fVar102 < 0.0);
            auVar86._8_8_ = 0;
            uVar34 = movmskps(pfVar33,auVar80);
            uVar40 = movmskps(uVar34 & 0xf,auVar86);
            local_28 = *(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) |
                       *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4);
            uVar40 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) | 0x3ff;
            puVar27[1] = puVar27[1] &
                         (*(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) | 0xc3f) & uVar40;
          }
          auVar50._4_4_ = -(uint)(fVar92 * 1.0 + fVar101 < 0.0);
          auVar50._0_4_ = -(uint)(fVar92 * -1.0 + fVar101 < 0.0);
          auVar50._8_4_ = -(uint)(fVar99 * -1.0 + fVar101 < 0.0);
          auVar50._12_4_ = -(uint)(fVar99 * 1.0 + fVar101 < 0.0);
          uVar40 = movmskps(uVar40,auVar50);
          uVar40 = *(uint *)(&DAT_100afa58 + (uVar40 & 0xf) * 4);
          uVar47 = (uVar40 | 0x30) & puVar27[1];
          puVar27[1] = uVar47;
          auVar51._4_4_ = -(uint)(fVar100 * 1.0 < 0.0);
          auVar51._0_4_ = -(uint)(fVar100 * -1.0 + fVar101 < 0.0);
          auVar51._8_4_ = -(uint)(fVar100 * -1.0 < 0.0);
          auVar51._12_4_ = -(uint)(fVar100 * 1.0 < 0.0);
          uVar34 = movmskps(puVar27,auVar51);
          local_28 = local_28 | *(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | uVar40;
          puVar27[1] = (*(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | 0xf) & uVar47;
          *puVar27 = *puVar27 | local_28;
        }
        auVar93._0_4_ = fVar92 + 0.0;
        auVar93._4_4_ = fVar99 + 0.0;
        auVar93._8_4_ = fVar100 + 0.0;
        auVar93._12_4_ = 0x3f800000;
        auVar69 = divps(auVar93,auVar105);
        auVar94._0_4_ = auVar69._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
        auVar94._4_4_ = auVar69._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
        auVar94._8_4_ = auVar69._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
        auVar94._12_4_ = auVar69._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
        if (local_2c == 0) {
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar94;
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar94;
        }
        else {
          auVar69 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar94);
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar69;
          auVar69 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar94);
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar69;
        }
        pauVar28 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_28 == 0)) {
            *pauVar28 = auVar94;
          }
          else {
            *(float *)(*pauVar28 + 0xc) = auVar94._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_2c = local_2c + 1;
      } while (local_2c < param_3);
      goto LAB_10021089;
    }
  }
  else if (local_1c == 0x20) {
    local_1c = 0;
    if (param_3 != 0) {
      fStack_e4 = 0.0;
      fStack_f4 = 0.0;
      local_100 = fVar101;
      fStack_fc = fVar102;
      fStack_f8 = fVar103;
      do {
        uVar22 = *(undefined8 *)(*param_1 + param_1[6] * local_1c);
        cVar24 = *(char *)((int)param_1 + 0x122);
        if (cVar24 != '\0') {
          fVar103 = *(float *)(param_1[1] + 8 + param_1[7] * local_1c);
          pfVar33 = (float *)(param_1[1] + param_1[7] * local_1c);
          fVar101 = *pfVar33;
          fVar102 = pfVar33[1];
          fStack_e4 = 1.0;
          fStack_f4 = 1.0;
          local_100 = fVar101;
          fStack_fc = fVar102;
          fStack_f8 = fVar103;
        }
        local_c0 = 0.0;
        fStack_bc = 0.0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        local_d0 = 0.0;
        fStack_cc = 0.0;
        fStack_c8 = 0.0;
        fStack_c4 = 0.0;
        uVar23 = *(undefined8 *)(param_1[3] + param_1[8] * local_1c);
        fVar104 = (float)uVar23 * (float)param_1[0x40] + (float)param_1[0x44] * (float)uVar22;
        fVar109 = (float)((ulonglong)uVar23 >> 0x20) * (float)param_1[0x41] +
                  (float)param_1[0x45] * (float)((ulonglong)uVar22 >> 0x20);
        fVar110 = *(float *)(param_1[3] + 8 + param_1[8] * local_1c) * (float)param_1[0x42] +
                  (float)param_1[0x46] * *(float *)(*param_1 + 8 + param_1[6] * local_1c);
        fVar111 = (float)param_1[0x43] * 1.0 + (float)param_1[0x47] * 1.0;
        if (cVar24 != '\0') {
          uVar22 = *(undefined8 *)(param_1[4] + param_1[9] * local_1c);
          fVar101 = (float)uVar22 * (float)param_1[0x40] + (float)param_1[0x44] * fVar101;
          fVar102 = (float)((ulonglong)uVar22 >> 0x20) * (float)param_1[0x41] +
                    (float)param_1[0x45] * fVar102;
          fVar103 = *(float *)(param_1[4] + 8 + param_1[9] * local_1c) * (float)param_1[0x42] +
                    (float)param_1[0x46] * fVar103;
          fStack_e4 = (float)param_1[0x43] * 1.0 + (float)param_1[0x47] * fStack_e4;
          local_100 = fVar101;
          fStack_fc = fVar102;
          fStack_f8 = fVar103;
          fStack_f4 = fStack_e4;
        }
        if (*(char *)((int)param_1 + 0x121) != '\0') {
          iVar41 = *(int *)((int)this + 0xabc);
          local_c0 = fVar111 * *(float *)(iVar41 + 0x28c) + fVar109 * *(float *)(iVar41 + 0x284) +
                     fVar110 * *(float *)(iVar41 + 0x288) + fVar104 * *(float *)(iVar41 + 0x280);
          fStack_bc = *(float *)(iVar41 + 0x29c) * fVar111 + *(float *)(iVar41 + 0x294) * fVar109 +
                      *(float *)(iVar41 + 0x298) * fVar110 + *(float *)(iVar41 + 0x290) * fVar104;
          fStack_b8 = *(float *)(iVar41 + 0x2ac) * fVar111 + *(float *)(iVar41 + 0x2a4) * fVar109 +
                      *(float *)(iVar41 + 0x2a8) * fVar110 + *(float *)(iVar41 + 0x2a0) * fVar104;
          fStack_b4 = *(float *)(iVar41 + 700) * fVar111 + *(float *)(iVar41 + 0x2b4) * fVar109 +
                      *(float *)(iVar41 + 0x2b8) * fVar110 + *(float *)(iVar41 + 0x2b0) * fVar104;
        }
        if (cVar24 != '\0') {
          FUN_100165fe(this,10);
          iVar41 = *(int *)((int)this + 0xabc);
          local_d0 = fStack_f4 * *(float *)(iVar41 + 0x450c) +
                     fStack_fc * *(float *)(iVar41 + 0x4504) +
                     fStack_f8 * *(float *)(iVar41 + 0x4508) +
                     local_100 * *(float *)(iVar41 + 0x4500);
          fStack_cc = *(float *)(iVar41 + 0x451c) * fStack_f4 +
                      *(float *)(iVar41 + 0x4514) * fStack_fc +
                      *(float *)(iVar41 + 0x4518) * fStack_f8 +
                      *(float *)(iVar41 + 0x4510) * local_100;
          fStack_c8 = *(float *)(iVar41 + 0x452c) * fStack_f4 +
                      *(float *)(iVar41 + 0x4524) * fStack_fc +
                      *(float *)(iVar41 + 0x4528) * fStack_f8 +
                      *(float *)(iVar41 + 0x4520) * local_100;
          fStack_c4 = *(float *)(iVar41 + 0x453c) * fStack_f4 +
                      *(float *)(iVar41 + 0x4534) * fStack_fc +
                      *(float *)(iVar41 + 0x4538) * fStack_f8 +
                      *(float *)(iVar41 + 0x4530) * local_100;
          fVar101 = local_100;
          fVar102 = fStack_fc;
          fVar103 = fStack_f8;
          fStack_e4 = fStack_f4;
        }
        pfVar33 = (float *)*local_30;
        fVar92 = fVar111 * pfVar33[3] + fVar109 * pfVar33[1] +
                 fVar110 * pfVar33[2] + fVar104 * *pfVar33;
        fVar99 = pfVar33[7] * fVar111 + pfVar33[5] * fVar109 +
                 pfVar33[6] * fVar110 + pfVar33[4] * fVar104;
        fVar100 = pfVar33[0xb] * fVar111 + pfVar33[9] * fVar109 +
                  pfVar33[10] * fVar110 + pfVar33[8] * fVar104;
        fVar104 = pfVar33[0xf] * fVar111 + pfVar33[0xd] * fVar109 +
                  pfVar33[0xe] * fVar110 + pfVar33[0xc] * fVar104;
        if (param_1[0x13] != 0) {
          pfVar33 = (float *)(local_1c * 0x20 + param_1[0x13]);
          *pfVar33 = local_c0;
          pfVar33[1] = fStack_bc;
          pfVar33[2] = fStack_b8;
          pfVar33[3] = fStack_b4;
          pfVar33 = (float *)((local_1c * 0x20 | 0x10) + param_1[0x13]);
          *pfVar33 = local_d0;
          pfVar33[1] = fStack_cc;
          pfVar33[2] = fStack_c8;
          pfVar33[3] = fStack_c4;
        }
        local_2c = 0;
        auVar78._4_4_ = fVar104;
        auVar78._0_4_ = fVar104;
        auVar78._8_4_ = fVar104;
        auVar78._12_4_ = fVar104;
        if (*(char *)((int)param_1 + 0x3b) != '\0') {
          puVar27 = (uint *)param_1[0x12];
          local_2c = 0;
          pfVar33 = (float *)0x0;
          if ((char)param_1[0x48] != '\0') {
            pfVar33 = (float *)(param_1 + 0x28);
          }
          if (pfVar33 == (float *)0x0) {
            puVar27[1] = puVar27[1] & 0xfffff03f;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)((int)this + 0x4ec);
            fVar109 = 0.0;
            fVar110 = 0.0;
            if ((uVar40 & 1) != 0) {
              fVar109 = pfVar33[2] * fStack_b8 + *pfVar33 * local_c0 +
                        pfVar33[3] * fStack_b4 + pfVar33[1] * fStack_bc;
            }
            fVar111 = 0.0;
            if ((uVar40 & 2) != 0) {
              fVar111 = pfVar33[0x1a] * fStack_b8 + pfVar33[0x18] * local_c0 +
                        pfVar33[0x1b] * fStack_b4 + pfVar33[0x19] * fStack_bc;
            }
            fVar64 = 0.0;
            if ((uVar40 & 4) != 0) {
              fVar64 = pfVar33[0x32] * fStack_b8 + pfVar33[0x30] * local_c0 +
                       pfVar33[0x33] * fStack_b4 + pfVar33[0x31] * fStack_bc;
            }
            fVar65 = 0.0;
            if ((uVar40 & 8) != 0) {
              fVar65 = pfVar33[0x4a] * fStack_b8 + pfVar33[0x48] * local_c0 +
                       pfVar33[0x4b] * fStack_b4 + pfVar33[0x49] * fStack_bc;
            }
            if ((uVar40 & 0x10) != 0) {
              fVar110 = pfVar33[0x62] * fStack_b8 + pfVar33[0x60] * local_c0 +
                        pfVar33[99] * fStack_b4 + pfVar33[0x61] * fStack_bc;
            }
            fVar66 = 0.0;
            if ((uVar40 & 0x20) != 0) {
              fVar66 = pfVar33[0x7a] * fStack_b8 + pfVar33[0x78] * local_c0 +
                       pfVar33[0x7b] * fStack_b4 + pfVar33[0x79] * fStack_bc;
            }
            auVar79._4_4_ = -(uint)(fVar111 < 0.0);
            auVar79._0_4_ = -(uint)(fVar109 < 0.0);
            auVar79._8_4_ = -(uint)(fVar64 < 0.0);
            auVar79._12_4_ = -(uint)(fVar65 < 0.0);
            auVar85._4_4_ = -(uint)(fVar66 < 0.0);
            auVar85._0_4_ = -(uint)(fVar110 < 0.0);
            auVar85._8_8_ = 0;
            uVar34 = movmskps(pfVar33,auVar79);
            uVar40 = movmskps(uVar34 & 0xf,auVar85);
            local_2c = *(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) |
                       *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4);
            uVar40 = *(uint *)(&DAT_100afa98 + (uVar40 & 3) * 4) | 0x3ff;
            puVar27[1] = puVar27[1] &
                         (*(uint *)(&DAT_100afaa8 + (uVar34 & 0xf) * 4) | 0xc3f) & uVar40;
          }
          auVar48._4_4_ = -(uint)(fVar92 * 1.0 + fVar104 < 0.0);
          auVar48._0_4_ = -(uint)(fVar92 * -1.0 + fVar104 < 0.0);
          auVar48._8_4_ = -(uint)(fVar99 * -1.0 + fVar104 < 0.0);
          auVar48._12_4_ = -(uint)(fVar99 * 1.0 + fVar104 < 0.0);
          uVar40 = movmskps(uVar40,auVar48);
          uVar40 = *(uint *)(&DAT_100afa58 + (uVar40 & 0xf) * 4);
          uVar47 = (uVar40 | 0x30) & puVar27[1];
          puVar27[1] = uVar47;
          auVar49._4_4_ = -(uint)(fVar100 * 1.0 < 0.0);
          auVar49._0_4_ = -(uint)(fVar100 * -1.0 + fVar104 < 0.0);
          auVar49._8_4_ = -(uint)(fVar100 * -1.0 < 0.0);
          auVar49._12_4_ = -(uint)(fVar100 * 1.0 < 0.0);
          uVar34 = movmskps(puVar27,auVar49);
          local_2c = local_2c | *(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | uVar40;
          puVar27[1] = (*(uint *)(&DAT_100afa44 + (uVar34 & 3) * 4) | 0xf) & uVar47;
          *puVar27 = *puVar27 | local_2c;
        }
        auVar68._0_4_ = fVar92 + 0.0;
        auVar68._4_4_ = fVar99 + 0.0;
        auVar68._8_4_ = fVar100 + 0.0;
        auVar68._12_4_ = 0x3f800000;
        auVar69 = divps(auVar68,auVar78);
        auVar70._0_4_ = auVar69._0_4_ * (float)param_1[0x18] + (float)param_1[0x1c];
        auVar70._4_4_ = auVar69._4_4_ * (float)param_1[0x19] + (float)param_1[0x1d];
        auVar70._8_4_ = auVar69._8_4_ * (float)param_1[0x1a] + (float)param_1[0x1e];
        auVar70._12_4_ = auVar69._12_4_ * (float)param_1[0x1b] + (float)param_1[0x1f];
        if (local_1c == 0) {
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar70;
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar70;
        }
        else {
          auVar69 = minps(*(undefined1 (*) [16])(param_1 + 0x20),auVar70);
          *(undefined1 (*) [16])(param_1 + 0x20) = auVar69;
          auVar69 = maxps(*(undefined1 (*) [16])(param_1 + 0x24),auVar70);
          *(undefined1 (*) [16])(param_1 + 0x24) = auVar69;
        }
        pauVar28 = (undefined1 (*) [16])param_1[0x14];
        if (pauVar28 != (undefined1 (*) [16])0x0) {
          if ((*(char *)((int)param_1 + 0x3d) == '\0') || (local_2c == 0)) {
            *pauVar28 = auVar70;
          }
          else {
            *(float *)(*pauVar28 + 0xc) = auVar70._12_4_;
          }
          param_1[0x14] = param_1[0x14] + param_1[0x15];
        }
        local_1c = local_1c + 1;
      } while (local_1c < param_3);
      goto LAB_10021089;
    }
  }
  else if (param_3 != 0) {
LAB_10021089:
    auVar75._0_4_ = (float)param_1[0x20] + -0.5;
    auVar75._4_4_ = (float)param_1[0x21] + -0.5;
    auVar75._8_4_ = (float)param_1[0x22] + 0.0;
    auVar75._12_4_ = (float)param_1[0x23] + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar75;
    auVar60._0_4_ = (float)param_1[0x24] + 0.5;
    auVar60._4_4_ = (float)param_1[0x25] + 0.5;
    auVar60._8_4_ = (float)param_1[0x26] + 0.0;
    auVar60._12_4_ = (float)param_1[0x27] + 0.0;
    auVar76 = minps(auVar75,auVar76);
    *(undefined1 (*) [16])(param_1 + 0x24) = auVar60;
    auVar61 = maxps(auVar60,auVar61);
  }
  auVar30._4_4_ = (float)((double)iVar26 + dVar19);
  auVar30._0_4_ = (float)((double)iVar25 + dVar18);
  auVar30._8_4_ = fVar16;
  auVar30._12_4_ = 0;
  auVar76 = maxps(auVar76,auVar30);
  auVar29._4_4_ = fVar77;
  auVar29._0_4_ = fVar91;
  auVar29._8_4_ = fVar17;
  auVar29._12_4_ = 0;
  auVar61 = minps(auVar61,auVar29);
LAB_100211a0:
  if ((char)param_1[0xf] != '\0') {
    *(int *)(param_1[0x12] + 8) = (int)auVar76._0_8_;
    *(int *)(param_1[0x12] + 0x10) = (int)((ulonglong)auVar76._0_8_ >> 0x20);
    *(int *)(param_1[0x12] + 0xc) = (int)auVar61._0_8_;
    *(int *)(param_1[0x12] + 0x14) = (int)((ulonglong)auVar61._0_8_ >> 0x20);
  }
  return;
}

