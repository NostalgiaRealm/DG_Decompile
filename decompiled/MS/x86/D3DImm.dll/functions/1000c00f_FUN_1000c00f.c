/*
 * FUN_1000c00f at 1000c00f
 * undefined __thiscall FUN_1000c00f(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, int param_7, char param_8)
 * Address ranges: 1000c00f-10011754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1000c00f(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7,char param_8)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [12];
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined1 auVar23 [12];
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar78;
  float fVar79;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  float fVar94;
  undefined1 auVar90 [12];
  undefined1 auVar91 [12];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar95;
  float fVar103;
  float fVar104;
  undefined1 auVar96 [12];
  undefined1 auVar97 [12];
  undefined1 auVar98 [12];
  undefined1 auVar99 [12];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar105 [4];
  float fVar106;
  float fVar123;
  undefined1 auVar107 [12];
  undefined1 auVar108 [12];
  undefined1 auVar109 [12];
  undefined1 auVar110 [12];
  undefined1 auVar111 [12];
  undefined1 auVar112 [12];
  undefined1 auVar113 [12];
  undefined1 auVar114 [12];
  float fVar124;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar125;
  float fVar126;
  float fVar131;
  float fVar132;
  undefined1 auVar127 [12];
  undefined1 auVar128 [12];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  uint local_98;
  undefined1 local_80 [4];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_14;
  
  uVar18 = param_6 & 1;
  iVar10 = param_6 + param_7 + -1;
  local_98 = 7;
  do {
    iVar20 = local_98 * 8 + 0x14 + param_2;
    if (*(char *)(param_2 + 0x14 + local_98 * 8) != -1) {
      iVar21 = local_98 - 7;
      piVar19 = (int *)(param_1 + local_98 * 0xc);
      iVar11 = iVar21 * 100;
      if ((*(int *)((int)this + iVar11 + 0x4f8) == 1) ||
         (((*(uint *)((int)this + iVar11 + 0x520) & 0x30000) == 0 &&
          ((uVar12 = *(uint *)((int)this + iVar11 + 0x554) & 0xff, uVar12 == 0 || (4 < uVar12))))))
      {
        if ((param_8 == '\0') && (*piVar19 != 0)) {
          if ((char)piVar19[2] == *(char *)(param_2 + 0x18 + local_98 * 8)) {
            FUN_1000bd28(piVar19,iVar20,param_4,param_5,param_6,param_7);
          }
          else {
            FUN_1000bea1(piVar19,iVar20,param_4,param_5,param_6,param_7);
          }
        }
      }
      else {
        FUN_10008cbb((int)this);
        pfVar15 = (float *)(param_4 + (uint)*(byte *)(param_2 + 0x17 + local_98 * 8) * 4);
        cVar3 = *(char *)((int)this + iVar11 + 0x554);
        uVar12 = *(uint *)((int)this + iVar11 + 0x520) & 0xf0000;
        pfVar14 = pfVar15;
        if (uVar12 == 0x10000) {
          uVar12 = param_6 >> 1;
          if (cVar3 == '\x01') {
            local_14 = *(int *)((int)this + 0x9cc);
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar20 = *(int *)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + 0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar67 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                         fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
                fVar78 = *(float *)(iVar20 + 0x71c) * fVar94 + *(float *)(iVar20 + 0x714) * fVar84 +
                         *(float *)(iVar20 + 0x718) * fVar88 + *(float *)(iVar20 + 0x710) * fVar81;
                fVar79 = *(float *)(iVar20 + 0x72c) * fVar94 + *(float *)(iVar20 + 0x724) * fVar84 +
                         *(float *)(iVar20 + 0x728) * fVar88 + *(float *)(iVar20 + 0x720) * fVar81;
                pfVar14 = (float *)(local_1c * 0x40 + 0x30 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar80 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                         fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
                fVar83 = *(float *)(iVar20 + 0x71c) * fVar94 + *(float *)(iVar20 + 0x714) * fVar84 +
                         *(float *)(iVar20 + 0x718) * fVar88 + *(float *)(iVar20 + 0x710) * fVar81;
                fVar81 = *(float *)(iVar20 + 0x72c) * fVar94 + *(float *)(iVar20 + 0x724) * fVar84 +
                         *(float *)(iVar20 + 0x728) * fVar88 + *(float *)(iVar20 + 0x720) * fVar81;
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar67 * fVar67 + fVar79 * fVar79 + fVar78 * fVar78;
                  auVar25._4_4_ = fVar84;
                  auVar25._0_4_ = fVar84;
                  auVar25._8_4_ = fVar84;
                  auVar25._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar25,auVar25);
                  uVar22 = auVar25._0_4_;
                  fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                  fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                  fVar79 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar79;
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar65._4_4_ = fVar84;
                  auVar65._0_4_ = fVar84;
                  auVar65._8_4_ = fVar84;
                  auVar65._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar65,auVar65);
                  uVar22 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                }
                pfVar14 = (float *)(local_14 + 0x80 + iVar21 * 0x40);
                fVar84 = *pfVar14;
                fVar88 = pfVar14[1];
                fVar94 = pfVar14[2];
                fVar86 = pfVar14[3];
                *pfVar15 = fVar86 * 1.0 + (fVar78 + 0.0) * fVar88 +
                           (fVar79 + 0.0) * fVar94 + (fVar67 + 0.0) * fVar84;
                *(float *)((int)pfVar15 + param_5) =
                     fVar86 * 1.0 + (fVar83 + 0.0) * fVar88 +
                     (fVar81 + 0.0) * fVar94 + (fVar80 + 0.0) * fVar84;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar20 = *(int *)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x10 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              fVar67 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                       fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
              fVar78 = fVar94 * *(float *)(iVar20 + 0x71c) + fVar84 * *(float *)(iVar20 + 0x714) +
                       fVar88 * *(float *)(iVar20 + 0x718) + fVar81 * *(float *)(iVar20 + 0x710);
              fVar81 = fVar94 * *(float *)(iVar20 + 0x72c) + fVar84 * *(float *)(iVar20 + 0x724) +
                       fVar88 * *(float *)(iVar20 + 0x728) + fVar81 * *(float *)(iVar20 + 0x720);
              if (*(int *)((int)this + 0x4cc) != 0) {
                fVar84 = fVar67 * fVar67 + fVar81 * fVar81 + fVar78 * fVar78;
                auVar66._4_4_ = fVar84;
                auVar66._0_4_ = fVar84;
                auVar66._8_4_ = fVar84;
                auVar66._12_4_ = fVar84;
                auVar25 = rsqrtss(auVar66,auVar66);
                uVar12 = auVar25._0_4_;
                fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar67;
                fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar78;
                fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
              }
LAB_1000fd86:
              pfVar14 = (float *)(local_14 + 0x80 + iVar21 * 0x40);
              fVar81 = (fVar81 + 0.0) * pfVar14[2] + (fVar67 + 0.0) * *pfVar14;
              fVar84 = pfVar14[3] * 1.0 + (fVar78 + 0.0) * pfVar14[1];
              goto LAB_1000c708;
            }
          }
          else if (cVar3 == '\x02') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar11 = *(int *)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + 0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar67 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                         fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
                fVar78 = *(float *)(iVar11 + 0x71c) * fVar94 + *(float *)(iVar11 + 0x714) * fVar84 +
                         *(float *)(iVar11 + 0x718) * fVar88 + *(float *)(iVar11 + 0x710) * fVar81;
                fVar79 = *(float *)(iVar11 + 0x72c) * fVar94 + *(float *)(iVar11 + 0x724) * fVar84 +
                         *(float *)(iVar11 + 0x728) * fVar88 + *(float *)(iVar11 + 0x720) * fVar81;
                pfVar14 = (float *)(local_1c * 0x40 + 0x30 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar80 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                         fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
                fVar83 = *(float *)(iVar11 + 0x71c) * fVar94 + *(float *)(iVar11 + 0x714) * fVar84 +
                         *(float *)(iVar11 + 0x718) * fVar88 + *(float *)(iVar11 + 0x710) * fVar81;
                fVar81 = *(float *)(iVar11 + 0x72c) * fVar94 + *(float *)(iVar11 + 0x724) * fVar84 +
                         *(float *)(iVar11 + 0x728) * fVar88 + *(float *)(iVar11 + 0x720) * fVar81;
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar67 * fVar67 + fVar79 * fVar79 + fVar78 * fVar78;
                  auVar63._4_4_ = fVar84;
                  auVar63._0_4_ = fVar84;
                  auVar63._8_4_ = fVar84;
                  auVar63._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar63,auVar63);
                  uVar22 = auVar25._0_4_;
                  fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                  fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                  fVar79 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar79;
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar64._4_4_ = fVar84;
                  auVar64._0_4_ = fVar84;
                  auVar64._8_4_ = fVar84;
                  auVar64._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar64,auVar64);
                  uVar22 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                }
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                fVar84 = *pfVar14;
                fVar88 = pfVar14[1];
                fVar94 = pfVar14[2];
                fVar86 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                fVar95 = *pfVar14;
                fVar103 = pfVar14[1];
                fVar104 = pfVar14[2];
                fVar126 = pfVar14[3];
                *(ulonglong *)pfVar15 =
                     CONCAT44(fVar103 * (fVar78 + 0.0) + fVar126 * 1.0 +
                              fVar95 * (fVar67 + 0.0) + fVar104 * (fVar79 + 0.0),
                              fVar88 * (fVar78 + 0.0) + fVar86 * 1.0 +
                              fVar84 * (fVar67 + 0.0) + fVar94 * (fVar79 + 0.0));
                *(float *)((int)pfVar15 + param_5) =
                     fVar86 * 1.0 + fVar88 * (fVar83 + 0.0) +
                     fVar94 * (fVar81 + 0.0) + fVar84 * (fVar80 + 0.0);
                ((float *)((int)pfVar15 + param_5))[1] =
                     fVar126 * 1.0 + fVar103 * (fVar83 + 0.0) +
                     fVar104 * (fVar81 + 0.0) + fVar95 * (fVar80 + 0.0);
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar11 = *(int *)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x10 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              fVar67 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                       fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
              fVar78 = fVar94 * *(float *)(iVar11 + 0x71c) + fVar84 * *(float *)(iVar11 + 0x714) +
                       fVar88 * *(float *)(iVar11 + 0x718) + fVar81 * *(float *)(iVar11 + 0x710);
              fVar81 = fVar94 * *(float *)(iVar11 + 0x72c) + fVar84 * *(float *)(iVar11 + 0x724) +
                       fVar88 * *(float *)(iVar11 + 0x728) + fVar81 * *(float *)(iVar11 + 0x720);
              if (*(int *)((int)this + 0x4cc) != 0) {
                fVar84 = fVar67 * fVar67 + fVar81 * fVar81 + fVar78 * fVar78;
                auVar77._4_4_ = fVar84;
                auVar77._0_4_ = fVar84;
                auVar77._8_4_ = fVar84;
                auVar77._12_4_ = fVar84;
                auVar25 = rsqrtss(auVar77,auVar77);
                uVar12 = auVar25._0_4_;
                fVar67 = fVar67 * (float)(-(uint)(0.0 < fVar84) & uVar12);
                fVar78 = fVar78 * (float)(-(uint)(0.0 < fVar84) & uVar12);
                fVar81 = fVar81 * (float)(-(uint)(0.0 < fVar84) & uVar12);
              }
              pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
              fVar80 = (fVar67 + 0.0) * *pfVar14;
              fVar83 = (fVar78 + 0.0) * pfVar14[1];
              fVar84 = (fVar81 + 0.0) * pfVar14[2];
              fVar79 = pfVar14[3] * 1.0;
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
              fVar88 = (fVar67 + 0.0) * *pfVar14;
              fVar94 = (fVar78 + 0.0) * pfVar14[1];
              fVar81 = (fVar81 + 0.0) * pfVar14[2];
              fVar67 = pfVar14[3] * 1.0;
LAB_1000c600:
              auVar23._0_4_ = fVar67 + fVar94 + fVar81 + fVar88;
              auVar23._4_4_ = fVar81 + fVar88 + fVar67 + fVar94;
              auVar23._8_4_ = fVar79 + fVar83 + fVar84 + fVar80;
LAB_1000c60d:
              *pfVar15 = auVar23._0_4_;
              pfVar15[1] = auVar23._8_4_;
            }
          }
          else if (cVar3 == '\x03') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar11 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar17 = *(int *)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + 0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar67 = fVar94 * *(float *)(iVar17 + 0x70c) + fVar84 * *(float *)(iVar17 + 0x704) +
                         fVar88 * *(float *)(iVar17 + 0x708) + fVar81 * *(float *)(iVar17 + 0x700);
                fVar78 = *(float *)(iVar17 + 0x71c) * fVar94 + *(float *)(iVar17 + 0x714) * fVar84 +
                         *(float *)(iVar17 + 0x718) * fVar88 + *(float *)(iVar17 + 0x710) * fVar81;
                fVar79 = *(float *)(iVar17 + 0x72c) * fVar94 + *(float *)(iVar17 + 0x724) * fVar84 +
                         *(float *)(iVar17 + 0x728) * fVar88 + *(float *)(iVar17 + 0x720) * fVar81;
                pfVar14 = (float *)(local_1c * 0x40 + 0x30 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                local_50 = fVar94 * *(float *)(iVar17 + 0x70c) + fVar84 * *(float *)(iVar17 + 0x704)
                           + fVar88 * *(float *)(iVar17 + 0x708) +
                             fVar81 * *(float *)(iVar17 + 0x700);
                fStack_4c = *(float *)(iVar17 + 0x71c) * fVar94 +
                            *(float *)(iVar17 + 0x714) * fVar84 +
                            *(float *)(iVar17 + 0x718) * fVar88 +
                            *(float *)(iVar17 + 0x710) * fVar81;
                fStack_48 = *(float *)(iVar17 + 0x72c) * fVar94 +
                            *(float *)(iVar17 + 0x724) * fVar84 +
                            *(float *)(iVar17 + 0x728) * fVar88 +
                            *(float *)(iVar17 + 0x720) * fVar81;
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar81 = fVar67 * fVar67 + fVar79 * fVar79 + fVar78 * fVar78;
                  auVar61._4_4_ = fVar81;
                  auVar61._0_4_ = fVar81;
                  auVar61._8_4_ = fVar81;
                  auVar61._12_4_ = fVar81;
                  auVar25 = rsqrtss(auVar61,auVar61);
                  uVar22 = auVar25._0_4_;
                  fVar67 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar67;
                  fVar78 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar78;
                  fVar79 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar79;
                  fVar81 = local_50 * local_50 + fStack_48 * fStack_48 + fStack_4c * fStack_4c;
                  auVar62._4_4_ = fVar81;
                  auVar62._0_4_ = fVar81;
                  auVar62._8_4_ = fVar81;
                  auVar62._12_4_ = fVar81;
                  auVar25 = rsqrtss(auVar62,auVar62);
                  uVar22 = auVar25._0_4_;
                  local_50 = (float)(-(uint)(0.0 < fVar81) & uVar22) * local_50;
                  fStack_4c = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_4c;
                  fStack_48 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_48;
                }
                fVar67 = fVar67 + 0.0;
                fVar78 = fVar78 + 0.0;
                fVar79 = fVar79 + 0.0;
                pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                fVar80 = *pfVar14;
                fVar83 = pfVar14[1];
                fVar86 = pfVar14[2];
                fVar95 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0xa0 + iVar11);
                fVar103 = *pfVar14;
                fVar104 = pfVar14[1];
                fVar126 = pfVar14[2];
                fVar131 = pfVar14[3];
                local_50 = local_50 + 0.0;
                fStack_4c = fStack_4c + 0.0;
                fStack_48 = fStack_48 + 0.0;
                *(ulonglong *)pfVar15 =
                     CONCAT44(fVar95 * 1.0 + fVar83 * fVar78 + fVar86 * fVar79 + fVar80 * fVar67,
                              fVar94 * 1.0 + fVar84 * fVar78 + fVar88 * fVar79 + fVar81 * fVar67);
                pfVar15[2] = fVar131 * 1.0 + fVar104 * fVar78 + fVar126 * fVar79 + fVar103 * fVar67;
                *(ulonglong *)((int)pfVar15 + param_5) =
                     CONCAT44(fVar95 * 1.0 + fVar83 * fStack_4c +
                              fVar86 * fStack_48 + fVar80 * local_50,
                              fVar94 * 1.0 + fVar84 * fStack_4c +
                              fVar88 * fStack_48 + fVar81 * local_50);
                pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                *(float *)((int)pfVar15 + param_5 + 8) =
                     fVar131 * 1.0 + fVar104 * fStack_4c + fVar126 * fStack_48 + fVar103 * local_50;
                local_1c = local_1c + 1;
                pfVar15 = pfVar14;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar11 = *(int *)((int)this + 0x9cc);
              pfVar15 = (float *)(param_6 * 0x20 + -0x10 + param_3);
              fVar81 = *pfVar15;
              fVar88 = pfVar15[1];
              fVar94 = pfVar15[2];
              fVar67 = pfVar15[3];
              fVar84 = fVar67 * *(float *)(iVar11 + 0x70c) + fVar88 * *(float *)(iVar11 + 0x704) +
                       fVar94 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
              fVar78 = fVar67 * *(float *)(iVar11 + 0x71c) + fVar88 * *(float *)(iVar11 + 0x714) +
                       fVar94 * *(float *)(iVar11 + 0x718) + fVar81 * *(float *)(iVar11 + 0x710);
              fVar81 = fVar67 * *(float *)(iVar11 + 0x72c) + fVar88 * *(float *)(iVar11 + 0x724) +
                       fVar94 * *(float *)(iVar11 + 0x728) + fVar81 * *(float *)(iVar11 + 0x720);
              if (*(int *)((int)this + 0x4cc) != 0) {
                fVar88 = fVar84 * fVar84 + fVar81 * fVar81 + fVar78 * fVar78;
                auVar76._4_4_ = fVar88;
                auVar76._0_4_ = fVar88;
                auVar76._8_4_ = fVar88;
                auVar76._12_4_ = fVar88;
                auVar25 = rsqrtss(auVar76,auVar76);
                uVar12 = auVar25._0_4_;
                fVar84 = fVar84 * (float)(-(uint)(0.0 < fVar88) & uVar12);
                fVar78 = fVar78 * (float)(-(uint)(0.0 < fVar88) & uVar12);
                fVar81 = fVar81 * (float)(-(uint)(0.0 < fVar88) & uVar12);
              }
              fVar84 = fVar84 + 0.0;
              fVar78 = fVar78 + 0.0;
              fVar81 = fVar81 + 0.0;
              fVar88 = 1.0;
              goto LAB_1000c486;
            }
          }
          else if (cVar3 == '\x04') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar11 = *(int *)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + 0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar67 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                         fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
                fVar78 = *(float *)(iVar11 + 0x71c) * fVar94 + *(float *)(iVar11 + 0x714) * fVar84 +
                         *(float *)(iVar11 + 0x718) * fVar88 + *(float *)(iVar11 + 0x710) * fVar81;
                fVar79 = *(float *)(iVar11 + 0x72c) * fVar94 + *(float *)(iVar11 + 0x724) * fVar84 +
                         *(float *)(iVar11 + 0x728) * fVar88 + *(float *)(iVar11 + 0x720) * fVar81;
                pfVar14 = (float *)(local_1c * 0x40 + 0x30 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                local_50 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704)
                           + fVar88 * *(float *)(iVar11 + 0x708) +
                             fVar81 * *(float *)(iVar11 + 0x700);
                fStack_4c = *(float *)(iVar11 + 0x71c) * fVar94 +
                            *(float *)(iVar11 + 0x714) * fVar84 +
                            *(float *)(iVar11 + 0x718) * fVar88 +
                            *(float *)(iVar11 + 0x710) * fVar81;
                fStack_48 = *(float *)(iVar11 + 0x72c) * fVar94 +
                            *(float *)(iVar11 + 0x724) * fVar84 +
                            *(float *)(iVar11 + 0x728) * fVar88 +
                            *(float *)(iVar11 + 0x720) * fVar81;
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar81 = fVar67 * fVar67 + fVar79 * fVar79 + fVar78 * fVar78;
                  auVar58._4_4_ = fVar81;
                  auVar58._0_4_ = fVar81;
                  auVar58._8_4_ = fVar81;
                  auVar58._12_4_ = fVar81;
                  auVar25 = rsqrtss(auVar58,auVar58);
                  uVar22 = auVar25._0_4_;
                  fVar67 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar67;
                  fVar78 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar78;
                  fVar79 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar79;
                  fVar81 = local_50 * local_50 + fStack_48 * fStack_48 + fStack_4c * fStack_4c;
                  auVar59._4_4_ = fVar81;
                  auVar59._0_4_ = fVar81;
                  auVar59._8_4_ = fVar81;
                  auVar59._12_4_ = fVar81;
                  auVar25 = rsqrtss(auVar59,auVar59);
                  uVar22 = auVar25._0_4_;
                  local_50 = (float)(-(uint)(0.0 < fVar81) & uVar22) * local_50;
                  fStack_4c = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_4c;
                  fStack_48 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_48;
                }
                fVar67 = fVar67 + 0.0;
                fVar78 = fVar78 + 0.0;
                fVar79 = fVar79 + 0.0;
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
                fVar81 = *pfVar1;
                fVar84 = pfVar1[1];
                fVar88 = pfVar1[2];
                fVar94 = pfVar1[3];
                pfVar1 = (float *)(iVar20 + 0xa0 + iVar21);
                fVar80 = *pfVar1;
                fVar83 = pfVar1[1];
                fVar86 = pfVar1[2];
                fVar95 = pfVar1[3];
                pfVar1 = (float *)(iVar20 + 0xb0 + iVar21);
                fVar103 = *pfVar1;
                fVar104 = pfVar1[1];
                fVar126 = pfVar1[2];
                fVar131 = pfVar1[3];
                local_50 = local_50 + 0.0;
                fStack_4c = fStack_4c + 0.0;
                fStack_48 = fStack_48 + 0.0;
                auVar75._0_4_ =
                     pfVar14[3] * 1.0 + pfVar14[1] * fStack_4c +
                     pfVar14[2] * fStack_48 + *pfVar14 * local_50;
                auVar75._4_4_ =
                     fVar94 * 1.0 + fVar84 * fStack_4c + fVar88 * fStack_48 + fVar81 * local_50;
                auVar75._8_4_ =
                     fVar95 * 1.0 + fVar83 * fStack_4c + fVar86 * fStack_48 + fVar80 * local_50;
                auVar75._12_4_ =
                     fVar131 * 1.0 + fVar104 * fStack_4c + fVar126 * fStack_48 + fVar103 * local_50;
                *pfVar15 = pfVar14[3] * 1.0 + pfVar14[1] * fVar78 +
                           pfVar14[2] * fVar79 + *pfVar14 * fVar67;
                pfVar15[1] = fVar94 * 1.0 + fVar84 * fVar78 + fVar88 * fVar79 + fVar81 * fVar67;
                pfVar15[2] = fVar95 * 1.0 + fVar83 * fVar78 + fVar86 * fVar79 + fVar80 * fVar67;
                pfVar15[3] = fVar131 * 1.0 + fVar104 * fVar78 + fVar126 * fVar79 + fVar103 * fVar67;
                *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar75;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar11 = *(int *)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x10 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              fVar67 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                       fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
              fVar78 = fVar94 * *(float *)(iVar11 + 0x71c) + fVar84 * *(float *)(iVar11 + 0x714) +
                       fVar88 * *(float *)(iVar11 + 0x718) + fVar81 * *(float *)(iVar11 + 0x710);
              fVar81 = fVar94 * *(float *)(iVar11 + 0x72c) + fVar84 * *(float *)(iVar11 + 0x724) +
                       fVar88 * *(float *)(iVar11 + 0x728) + fVar81 * *(float *)(iVar11 + 0x720);
              if (*(int *)((int)this + 0x4cc) != 0) {
                fVar84 = fVar67 * fVar67 + fVar81 * fVar81 + fVar78 * fVar78;
                auVar60._4_4_ = fVar84;
                auVar60._0_4_ = fVar84;
                auVar60._8_4_ = fVar84;
                auVar60._12_4_ = fVar84;
                auVar25 = rsqrtss(auVar60,auVar60);
                uVar12 = auVar25._0_4_;
                fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar67;
                fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar78;
                fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
              }
              fVar67 = fVar67 + 0.0;
              fVar78 = fVar78 + 0.0;
              fVar81 = fVar81 + 0.0;
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
              pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
              fVar84 = *pfVar1;
              fVar88 = pfVar1[1];
              fVar94 = pfVar1[2];
              fVar79 = pfVar1[3];
              pfVar1 = (float *)(iVar20 + 0xa0 + iVar21);
              fVar80 = *pfVar1;
              fVar83 = pfVar1[1];
              fVar86 = pfVar1[2];
              fVar95 = pfVar1[3];
              pfVar1 = (float *)(iVar20 + 0xb0 + iVar21);
              fVar103 = *pfVar1;
              fVar104 = pfVar1[1];
              fVar126 = pfVar1[2];
              fVar131 = pfVar1[3];
              *pfVar15 = pfVar14[3] * 1.0 + fVar78 * pfVar14[1] +
                         fVar81 * pfVar14[2] + fVar67 * *pfVar14;
              pfVar15[1] = fVar79 * 1.0 + fVar78 * fVar88 + fVar81 * fVar94 + fVar67 * fVar84;
              pfVar15[2] = fVar95 * 1.0 + fVar78 * fVar83 + fVar81 * fVar86 + fVar67 * fVar80;
              pfVar15[3] = fVar131 * 1.0 + fVar78 * fVar104 + fVar81 * fVar126 + fVar67 * fVar103;
            }
          }
          else {
            local_14 = 0;
            if (uVar12 != 0) {
              do {
                iVar20 = *(int *)((int)this + 0x9cc);
                pfVar14 = (float *)(local_14 * 0x40 + 0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar67 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                         fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
                fVar78 = *(float *)(iVar20 + 0x71c) * fVar94 + *(float *)(iVar20 + 0x714) * fVar84 +
                         *(float *)(iVar20 + 0x718) * fVar88 + *(float *)(iVar20 + 0x710) * fVar81;
                fVar79 = *(float *)(iVar20 + 0x72c) * fVar94 + *(float *)(iVar20 + 0x724) * fVar84 +
                         *(float *)(iVar20 + 0x728) * fVar88 + *(float *)(iVar20 + 0x720) * fVar81;
                pfVar14 = (float *)(local_14 * 0x40 + 0x30 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar80 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                         fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
                fVar83 = *(float *)(iVar20 + 0x71c) * fVar94 + *(float *)(iVar20 + 0x714) * fVar84 +
                         *(float *)(iVar20 + 0x718) * fVar88 + *(float *)(iVar20 + 0x710) * fVar81;
                fVar81 = *(float *)(iVar20 + 0x72c) * fVar94 + *(float *)(iVar20 + 0x724) * fVar84 +
                         *(float *)(iVar20 + 0x728) * fVar88 + *(float *)(iVar20 + 0x720) * fVar81;
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar67 * fVar67 + fVar79 * fVar79 + fVar78 * fVar78;
                  auVar55._4_4_ = fVar84;
                  auVar55._0_4_ = fVar84;
                  auVar55._8_4_ = fVar84;
                  auVar55._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar55,auVar55);
                  uVar22 = auVar25._0_4_;
                  fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                  fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                  fVar79 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar79;
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar56._4_4_ = fVar84;
                  auVar56._0_4_ = fVar84;
                  auVar56._8_4_ = fVar84;
                  auVar56._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar56,auVar56);
                  uVar22 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                }
                *pfVar15 = fVar67;
                pfVar15[1] = fVar78;
                pfVar15[2] = fVar79;
                *(ulonglong *)((int)pfVar15 + param_5) = CONCAT44(fVar83,fVar80);
                pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                *(float *)((int)pfVar15 + param_5 + 8) = fVar81;
                local_14 = local_14 + 1;
                pfVar15 = pfVar14;
              } while (local_14 < uVar12);
            }
            if (uVar18 != 0) {
              iVar20 = *(int *)((int)this + 0x9cc);
              pfVar15 = (float *)(param_6 * 0x20 + -0x10 + param_3);
              fVar81 = *pfVar15;
              fVar84 = pfVar15[1];
              fVar88 = pfVar15[2];
              fVar94 = pfVar15[3];
              fVar67 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                       fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
              fVar78 = fVar94 * *(float *)(iVar20 + 0x71c) + fVar84 * *(float *)(iVar20 + 0x714) +
                       fVar88 * *(float *)(iVar20 + 0x718) + fVar81 * *(float *)(iVar20 + 0x710);
              uVar89 = CONCAT44(fVar78,fVar67);
              fVar81 = fVar94 * *(float *)(iVar20 + 0x72c) + fVar84 * *(float *)(iVar20 + 0x724) +
                       fVar88 * *(float *)(iVar20 + 0x728) + fVar81 * *(float *)(iVar20 + 0x720);
              if (*(int *)((int)this + 0x4cc) != 0) {
                fVar84 = fVar67 * fVar67 + fVar81 * fVar81 + fVar78 * fVar78;
                auVar57._4_4_ = fVar84;
                auVar57._0_4_ = fVar84;
                auVar57._8_4_ = fVar84;
                auVar57._12_4_ = fVar84;
                auVar25 = rsqrtss(auVar57,auVar57);
                uVar12 = auVar25._0_4_;
                uVar89 = CONCAT44((float)(-(uint)(0.0 < fVar84) & uVar12) * fVar78,
                                  (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar67);
                fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
              }
LAB_1000ff16:
              *(undefined8 *)pfVar14 = uVar89;
              pfVar14[2] = fVar81;
            }
          }
        }
        else if (uVar12 == 0x20000) {
          uVar12 = param_6 >> 1;
          if (cVar3 == '\x01') {
            iVar20 = *(int *)((int)this + 0x9cc);
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar67 = pfVar1[4];
                fVar78 = pfVar1[5];
                fVar79 = pfVar1[6];
                fVar80 = pfVar1[7];
                fVar83 = pfVar1[8];
                fVar86 = pfVar1[9];
                fVar95 = pfVar1[10];
                fVar103 = pfVar1[0xb];
                fVar104 = pfVar1[0xc];
                fVar126 = pfVar1[0xd];
                fVar131 = pfVar1[0xe];
                fVar132 = pfVar1[0xf];
                fVar82 = *pfVar1;
                fVar85 = pfVar1[1];
                fVar87 = pfVar1[2];
                fVar106 = pfVar1[3];
                pfVar14 = (float *)(local_1c * 0x40 + 0x20 + param_3);
                fVar123 = *pfVar14;
                fVar124 = pfVar14[1];
                fVar125 = pfVar14[2];
                fVar5 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21 * 0x40);
                fVar6 = *pfVar14;
                fVar7 = pfVar14[1];
                fVar8 = pfVar14[2];
                fVar9 = pfVar14[3];
                *pfVar15 = (fVar132 * fVar94 + fVar126 * fVar84 +
                           fVar131 * fVar88 + fVar104 * fVar81) * fVar9 +
                           (fVar80 * fVar94 + fVar78 * fVar84 + fVar79 * fVar88 + fVar67 * fVar81) *
                           fVar7 + (fVar103 * fVar94 + fVar86 * fVar84 +
                                   fVar95 * fVar88 + fVar83 * fVar81) * fVar8 +
                                   (pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                                   pfVar1[2] * fVar88 + *pfVar1 * fVar81) * fVar6;
                *(float *)((int)pfVar15 + param_5) =
                     (fVar132 * fVar5 + fVar126 * fVar124 + fVar131 * fVar125 + fVar104 * fVar123) *
                     fVar9 + (fVar80 * fVar5 + fVar78 * fVar124 +
                             fVar79 * fVar125 + fVar67 * fVar123) * fVar7 +
                     (fVar103 * fVar5 + fVar86 * fVar124 + fVar95 * fVar125 + fVar83 * fVar123) *
                     fVar8 + (fVar106 * fVar5 + fVar85 * fVar124 +
                             fVar87 * fVar125 + fVar82 * fVar123) * fVar6;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              pfVar1 = *(float **)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x20 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21 * 0x40);
              *pfVar15 = (fVar94 * pfVar1[0xf] + fVar84 * pfVar1[0xd] +
                         fVar88 * pfVar1[0xe] + fVar81 * pfVar1[0xc]) * pfVar14[3] +
                         (fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                         fVar88 * pfVar1[6] + fVar81 * pfVar1[4]) * pfVar14[1] +
                         (fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                         fVar88 * pfVar1[10] + fVar81 * pfVar1[8]) * pfVar14[2] +
                         (fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                         fVar88 * pfVar1[2] + fVar81 * *pfVar1) * *pfVar14;
            }
          }
          else if (cVar3 == '\x02') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                fVar132 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                          pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                fVar82 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                         pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                fVar85 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                         pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                fVar87 = pfVar1[0xf] * fVar94 + pfVar1[0xd] * fVar84 +
                         pfVar1[0xe] * fVar88 + pfVar1[0xc] * fVar81;
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(local_1c * 0x40 + 0x20 + param_3);
                fVar67 = *pfVar14;
                fVar78 = pfVar14[1];
                fVar79 = pfVar14[2];
                fVar80 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                fVar83 = *pfVar14;
                fVar86 = pfVar14[1];
                fVar95 = pfVar14[2];
                fVar103 = pfVar14[3];
                fVar104 = pfVar1[3] * fVar80 + pfVar1[1] * fVar78 +
                          pfVar1[2] * fVar79 + *pfVar1 * fVar67;
                fVar126 = pfVar1[7] * fVar80 + pfVar1[5] * fVar78 +
                          pfVar1[6] * fVar79 + pfVar1[4] * fVar67;
                fVar131 = pfVar1[0xb] * fVar80 + pfVar1[9] * fVar78 +
                          pfVar1[10] * fVar79 + pfVar1[8] * fVar67;
                fVar67 = pfVar1[0xf] * fVar80 + pfVar1[0xd] * fVar78 +
                         pfVar1[0xe] * fVar79 + pfVar1[0xc] * fVar67;
                *pfVar15 = fVar87 * fVar94 + fVar82 * fVar84 + fVar85 * fVar88 + fVar132 * fVar81;
                pfVar15[1] = fVar103 * fVar87 + fVar86 * fVar82 + fVar95 * fVar85 + fVar83 * fVar132
                ;
                *(float *)((int)pfVar15 + param_5) =
                     fVar67 * fVar94 + fVar126 * fVar84 + fVar131 * fVar88 + fVar104 * fVar81;
                ((float *)((int)pfVar15 + param_5))[1] =
                     fVar103 * fVar67 + fVar86 * fVar126 + fVar95 * fVar131 + fVar83 * fVar104;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              pfVar1 = *(float **)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x20 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              fVar67 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                       fVar88 * pfVar1[2] + fVar81 * *pfVar1;
              fVar78 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                       fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
              fVar79 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                       fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
              fVar80 = fVar94 * pfVar1[0xf] + fVar84 * pfVar1[0xd] +
                       fVar88 * pfVar1[0xe] + fVar81 * pfVar1[0xc];
              pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
              *pfVar15 = fVar80 * pfVar14[3] + fVar78 * pfVar14[1] +
                         fVar79 * pfVar14[2] + fVar67 * *pfVar14;
              pfVar15[1] = fVar80 * fVar94 + fVar78 * fVar84 + fVar79 * fVar88 + fVar67 * fVar81;
            }
          }
          else if (cVar3 == '\x03') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            pfVar14 = pfVar15;
            if (uVar12 != 0) {
              do {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar15 = (float *)(local_1c * 0x40 + param_3);
                fVar81 = *pfVar15;
                fVar84 = pfVar15[1];
                fVar88 = pfVar15[2];
                fVar94 = pfVar15[3];
                pfVar15 = (float *)(local_1c * 0x40 + 0x20 + param_3);
                fVar67 = *pfVar15;
                fVar78 = pfVar15[1];
                fVar79 = pfVar15[2];
                fVar80 = pfVar15[3];
                pfVar15 = (float *)(iVar20 + 0x80 + iVar21);
                fVar83 = *pfVar15;
                fVar86 = pfVar15[1];
                fVar95 = pfVar15[2];
                fVar103 = pfVar15[3];
                pfVar15 = (float *)(iVar20 + 0x90 + iVar21);
                fVar104 = *pfVar15;
                fVar126 = pfVar15[1];
                fVar131 = pfVar15[2];
                fVar132 = pfVar15[3];
                fVar106 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                          pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                fVar123 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                          pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                fVar124 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                          pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                fVar125 = pfVar1[0xf] * fVar94 + pfVar1[0xd] * fVar84 +
                          pfVar1[0xe] * fVar88 + pfVar1[0xc] * fVar81;
                pfVar15 = (float *)(iVar20 + 0xa0 + iVar21);
                fVar81 = *pfVar15;
                fVar84 = pfVar15[1];
                fVar88 = pfVar15[2];
                fVar94 = pfVar15[3];
                fVar82 = pfVar1[3] * fVar80 + pfVar1[1] * fVar78 +
                         pfVar1[2] * fVar79 + *pfVar1 * fVar67;
                fVar85 = pfVar1[7] * fVar80 + pfVar1[5] * fVar78 +
                         pfVar1[6] * fVar79 + pfVar1[4] * fVar67;
                fVar87 = pfVar1[0xb] * fVar80 + pfVar1[9] * fVar78 +
                         pfVar1[10] * fVar79 + pfVar1[8] * fVar67;
                fVar67 = pfVar1[0xf] * fVar80 + pfVar1[0xd] * fVar78 +
                         pfVar1[0xe] * fVar79 + pfVar1[0xc] * fVar67;
                *(ulonglong *)pfVar14 =
                     CONCAT44(fVar132 * fVar125 + fVar126 * fVar123 +
                              fVar131 * fVar124 + fVar104 * fVar106,
                              fVar125 * fVar103 + fVar123 * fVar86 +
                              fVar124 * fVar95 + fVar106 * fVar83);
                pfVar14[2] = fVar94 * fVar125 + fVar84 * fVar123 +
                             fVar88 * fVar124 + fVar81 * fVar106;
                *(ulonglong *)((int)pfVar14 + param_5) =
                     CONCAT44(fVar132 * fVar67 + fVar126 * fVar85 +
                              fVar131 * fVar87 + fVar104 * fVar82,
                              fVar67 * fVar103 + fVar85 * fVar86 + fVar87 * fVar95 + fVar82 * fVar83
                             );
                pfVar15 = (float *)((int)pfVar14 + param_5 * 2);
                *(float *)((int)pfVar14 + param_5 + 8) =
                     fVar94 * fVar67 + fVar84 * fVar85 + fVar88 * fVar87 + fVar81 * fVar82;
                local_1c = local_1c + 1;
                pfVar14 = pfVar15;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              pfVar1 = *(float **)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x20 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              fVar67 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                       fVar88 * pfVar1[2] + fVar81 * *pfVar1;
              fVar78 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                       fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
              fVar79 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                       fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
              fVar80 = fVar94 * pfVar1[0xf] + fVar84 * pfVar1[0xd] +
                       fVar88 * pfVar1[0xe] + fVar81 * pfVar1[0xc];
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
              pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
              pfVar2 = (float *)(iVar20 + 0xa0 + iVar21);
              fVar81 = *pfVar2;
              fVar84 = pfVar2[1];
              fVar88 = pfVar2[2];
              fVar94 = pfVar2[3];
              *(ulonglong *)pfVar15 =
                   CONCAT44(fVar80 * pfVar1[3] + fVar78 * pfVar1[1] +
                            fVar79 * pfVar1[2] + fVar67 * *pfVar1,
                            fVar80 * pfVar14[3] + fVar78 * pfVar14[1] +
                            fVar79 * pfVar14[2] + fVar67 * *pfVar14);
              pfVar15[2] = fVar80 * fVar94 + fVar78 * fVar84 + fVar79 * fVar88 + fVar67 * fVar81;
            }
          }
          else if (cVar3 == '\x04') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                pfVar2 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(local_1c * 0x40 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(local_1c * 0x40 + 0x20 + param_3);
                fVar67 = *pfVar14;
                fVar78 = pfVar14[1];
                fVar79 = pfVar14[2];
                fVar80 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                fVar83 = *pfVar14;
                fVar86 = pfVar14[1];
                fVar95 = pfVar14[2];
                fVar103 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0xb0 + iVar21);
                fVar104 = *pfVar14;
                fVar126 = pfVar14[1];
                fVar131 = pfVar14[2];
                fVar132 = pfVar14[3];
                fVar106 = pfVar2[3] * fVar94 + pfVar2[1] * fVar84 +
                          pfVar2[2] * fVar88 + *pfVar2 * fVar81;
                fVar123 = pfVar2[7] * fVar94 + pfVar2[5] * fVar84 +
                          pfVar2[6] * fVar88 + pfVar2[4] * fVar81;
                fVar124 = pfVar2[0xb] * fVar94 + pfVar2[9] * fVar84 +
                          pfVar2[10] * fVar88 + pfVar2[8] * fVar81;
                fVar125 = pfVar2[0xf] * fVar94 + pfVar2[0xd] * fVar84 +
                          pfVar2[0xe] * fVar88 + pfVar2[0xc] * fVar81;
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                pfVar1 = (float *)(iVar20 + 0xa0 + iVar21);
                fVar81 = *pfVar1;
                fVar84 = pfVar1[1];
                fVar88 = pfVar1[2];
                fVar94 = pfVar1[3];
                fVar82 = pfVar2[3] * fVar80 + pfVar2[1] * fVar78 +
                         pfVar2[2] * fVar79 + *pfVar2 * fVar67;
                fVar85 = pfVar2[7] * fVar80 + pfVar2[5] * fVar78 +
                         pfVar2[6] * fVar79 + pfVar2[4] * fVar67;
                fVar87 = pfVar2[0xb] * fVar80 + pfVar2[9] * fVar78 +
                         pfVar2[10] * fVar79 + pfVar2[8] * fVar67;
                fVar67 = pfVar2[0xf] * fVar80 + pfVar2[0xd] * fVar78 +
                         pfVar2[0xe] * fVar79 + pfVar2[0xc] * fVar67;
                auVar74._0_4_ =
                     pfVar14[3] * fVar67 + pfVar14[1] * fVar85 +
                     pfVar14[2] * fVar87 + *pfVar14 * fVar82;
                auVar74._4_4_ =
                     fVar103 * fVar67 + fVar86 * fVar85 + fVar95 * fVar87 + fVar83 * fVar82;
                auVar74._8_4_ =
                     fVar94 * fVar67 + fVar84 * fVar85 + fVar88 * fVar87 + fVar81 * fVar82;
                auVar74._12_4_ =
                     fVar132 * fVar67 + fVar126 * fVar85 + fVar131 * fVar87 + fVar104 * fVar82;
                *pfVar15 = fVar125 * pfVar14[3] + fVar123 * pfVar14[1] +
                           fVar124 * pfVar14[2] + fVar106 * *pfVar14;
                pfVar15[1] = fVar103 * fVar125 + fVar86 * fVar123 +
                             fVar95 * fVar124 + fVar83 * fVar106;
                pfVar15[2] = fVar94 * fVar125 + fVar84 * fVar123 +
                             fVar88 * fVar124 + fVar81 * fVar106;
                pfVar15[3] = fVar132 * fVar125 + fVar126 * fVar123 +
                             fVar131 * fVar124 + fVar104 * fVar106;
                *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar74;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              pfVar1 = *(float **)((int)this + 0x9cc);
              pfVar14 = (float *)(param_6 * 0x20 + -0x20 + param_3);
              fVar81 = *pfVar14;
              fVar84 = pfVar14[1];
              fVar88 = pfVar14[2];
              fVar94 = pfVar14[3];
              fVar104 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                        fVar88 * pfVar1[2] + fVar81 * *pfVar1;
              fVar126 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                        fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
              fVar131 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                        fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
              fVar132 = fVar94 * pfVar1[0xf] + fVar84 * pfVar1[0xd] +
                        fVar88 * pfVar1[0xe] + fVar81 * pfVar1[0xc];
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
              pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
              fVar81 = *pfVar1;
              fVar84 = pfVar1[1];
              fVar88 = pfVar1[2];
              fVar94 = pfVar1[3];
              pfVar1 = (float *)(iVar20 + 0xa0 + iVar21);
              fVar67 = *pfVar1;
              fVar78 = pfVar1[1];
              fVar79 = pfVar1[2];
              fVar80 = pfVar1[3];
              pfVar1 = (float *)(iVar20 + 0xb0 + iVar21);
              fVar83 = *pfVar1;
              fVar86 = pfVar1[1];
              fVar95 = pfVar1[2];
              fVar103 = pfVar1[3];
              *pfVar15 = fVar132 * pfVar14[3] + fVar126 * pfVar14[1] +
                         fVar131 * pfVar14[2] + fVar104 * *pfVar14;
              pfVar15[1] = fVar132 * fVar94 + fVar126 * fVar84 + fVar131 * fVar88 + fVar104 * fVar81
              ;
              pfVar15[2] = fVar132 * fVar80 + fVar126 * fVar78 + fVar131 * fVar79 + fVar104 * fVar67
              ;
              pfVar15[3] = fVar132 * fVar103 + fVar126 * fVar86 +
                           fVar131 * fVar95 + fVar104 * fVar83;
            }
          }
          else {
            local_14 = 0;
            if (uVar12 != 0) {
              do {
                pfVar1 = *(float **)((int)this + 0x9cc);
                fVar81 = pfVar1[4];
                fVar84 = pfVar1[5];
                fVar88 = pfVar1[6];
                fVar94 = pfVar1[7];
                fVar67 = pfVar1[8];
                fVar78 = pfVar1[9];
                fVar79 = pfVar1[10];
                fVar80 = pfVar1[0xb];
                pfVar14 = (float *)(local_14 * 0x40 + param_3);
                fVar83 = *pfVar14;
                fVar86 = pfVar14[1];
                fVar95 = pfVar14[2];
                fVar103 = pfVar14[3];
                pfVar14 = (float *)(local_14 * 0x40 + 0x20 + param_3);
                fVar104 = *pfVar14;
                fVar126 = pfVar14[1];
                fVar131 = pfVar14[2];
                fVar132 = pfVar14[3];
                fVar82 = *pfVar1;
                fVar85 = pfVar1[1];
                fVar87 = pfVar1[2];
                fVar106 = pfVar1[3];
                *(ulonglong *)pfVar15 =
                     CONCAT44(fVar94 * fVar103 + fVar84 * fVar86 + fVar88 * fVar95 + fVar81 * fVar83
                              ,fVar103 * pfVar1[3] + fVar86 * pfVar1[1] +
                               fVar95 * pfVar1[2] + fVar83 * *pfVar1);
                pfVar15[2] = fVar80 * fVar103 + fVar78 * fVar86 + fVar79 * fVar95 + fVar67 * fVar83;
                *(ulonglong *)((int)pfVar15 + param_5) =
                     CONCAT44(fVar94 * fVar132 + fVar84 * fVar126 +
                              fVar88 * fVar131 + fVar81 * fVar104,
                              fVar132 * fVar106 + fVar126 * fVar85 +
                              fVar131 * fVar87 + fVar104 * fVar82);
                pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                *(float *)((int)pfVar15 + param_5 + 8) =
                     fVar80 * fVar132 + fVar78 * fVar126 + fVar79 * fVar131 + fVar67 * fVar104;
                local_14 = local_14 + 1;
                pfVar15 = pfVar14;
              } while (local_14 < uVar12);
            }
            if (uVar18 != 0) {
              pfVar1 = *(float **)((int)this + 0x9cc);
              pfVar15 = (float *)(param_6 * 0x20 + -0x20 + param_3);
              fVar81 = *pfVar15;
              fVar84 = pfVar15[1];
              fVar88 = pfVar15[2];
              fVar94 = pfVar15[3];
              uVar89 = CONCAT44(fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                                fVar88 * pfVar1[6] + fVar81 * pfVar1[4],
                                fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                                fVar88 * pfVar1[2] + fVar81 * *pfVar1);
              fVar81 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                       fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
              goto LAB_1000ff16;
            }
          }
        }
        else if (uVar12 == 0x30000) {
          uVar12 = param_6 >> 1;
          if (cVar3 == '\x01') {
            local_14 = *(int *)((int)this + 0x9cc);
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar20 = local_1c * 0x40;
                if (*(int *)((int)this + 0x4c8) == 0) {
                  pfVar14 = (float *)(iVar20 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x10 + param_3);
                  fVar67 = *pfVar14;
                  fVar78 = pfVar14[1];
                  fVar79 = pfVar14[2];
                  fVar80 = pfVar14[3];
                  iVar20 = *(int *)((int)this + 0x9cc);
                  local_50 = 0.0;
                  fStack_4c = 0.0;
                  fStack_48 = 1.0;
                  fVar83 = fVar80 * *(float *)(iVar20 + 0x70c) + fVar78 * *(float *)(iVar20 + 0x704)
                           + fVar79 * *(float *)(iVar20 + 0x708) +
                             fVar67 * *(float *)(iVar20 + 0x700);
                  fVar86 = *(float *)(iVar20 + 0x71c) * fVar80 + *(float *)(iVar20 + 0x714) * fVar78
                           + *(float *)(iVar20 + 0x718) * fVar79 +
                             *(float *)(iVar20 + 0x710) * fVar67;
                  fVar67 = *(float *)(iVar20 + 0x72c) * fVar80 + *(float *)(iVar20 + 0x724) * fVar78
                           + *(float *)(iVar20 + 0x728) * fVar79 +
                             *(float *)(iVar20 + 0x720) * fVar67;
                  fVar78 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704)
                           + fVar88 * *(float *)(iVar20 + 0x708) +
                             fVar81 * *(float *)(iVar20 + 0x700);
                  fVar80 = *(float *)(iVar20 + 0x71c) * fVar94 + *(float *)(iVar20 + 0x714) * fVar84
                           + *(float *)(iVar20 + 0x718) * fVar88 +
                             *(float *)(iVar20 + 0x710) * fVar81;
                  fVar81 = *(float *)(iVar20 + 0x72c) * fVar94 + *(float *)(iVar20 + 0x724) * fVar84
                           + *(float *)(iVar20 + 0x728) * fVar88 +
                             *(float *)(iVar20 + 0x720) * fVar81;
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar84 = fVar83 * fVar83 + fVar67 * fVar67 + fVar86 * fVar86;
                    auVar51._4_4_ = fVar84;
                    auVar51._0_4_ = fVar84;
                    auVar51._8_4_ = fVar84;
                    auVar51._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar51,auVar51);
                    uVar22 = auVar25._0_4_;
                    fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                    fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar86;
                    fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                    fVar84 = fVar78 * fVar78 + fVar81 * fVar81 + fVar80 * fVar80;
                    auVar52._4_4_ = fVar84;
                    auVar52._0_4_ = fVar84;
                    auVar52._8_4_ = fVar84;
                    auVar52._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar52,auVar52);
                    uVar22 = auVar25._0_4_;
                    fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                    fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                    fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                  }
                  fVar84 = 0.0;
                  fVar94 = 0.0;
                  fVar95 = 1.0;
                }
                else {
                  pfVar1 = *(float **)((int)this + 0x9cc);
                  pfVar14 = (float *)(iVar20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar79 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                           fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                  fVar95 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                           pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar131 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar20 + 0x20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar103 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                            pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                  fVar104 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                            pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar126 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar20 + 0x10 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar83 = fVar94 * pfVar1[0x1c3] + fVar84 * pfVar1[0x1c1] +
                           fVar88 * pfVar1[0x1c2] + fVar81 * pfVar1[0x1c0];
                  fVar86 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar67 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  pfVar14 = (float *)(iVar20 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar78 = fVar94 * pfVar1[0x1c3] + fVar84 * pfVar1[0x1c1] +
                           fVar88 * pfVar1[0x1c2] + fVar81 * pfVar1[0x1c0];
                  fVar80 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar81 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar84 = fVar83 * fVar83 + fVar67 * fVar67 + fVar86 * fVar86;
                    auVar49._4_4_ = fVar84;
                    auVar49._0_4_ = fVar84;
                    auVar49._8_4_ = fVar84;
                    auVar49._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar49,auVar49);
                    uVar22 = auVar25._0_4_;
                    fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                    fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar86;
                    fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                    fVar84 = fVar78 * fVar78 + fVar81 * fVar81 + fVar80 * fVar80;
                    auVar50._4_4_ = fVar84;
                    auVar50._0_4_ = fVar84;
                    auVar50._8_4_ = fVar84;
                    auVar50._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar50,auVar50);
                    uVar22 = auVar25._0_4_;
                    fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                    fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                    fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                  }
                  auVar99._0_4_ = fVar79 * fVar79;
                  auVar99._4_4_ = fVar95 * fVar95;
                  auVar99._8_4_ = fVar131 * fVar131;
                  auVar102._0_4_ = auVar99._0_4_ + auVar99._8_4_ + auVar99._4_4_;
                  auVar102._4_8_ = auVar99._4_8_;
                  auVar102._12_4_ = 0;
                  auVar25 = rsqrtss(auVar102,auVar102);
                  fVar88 = auVar25._0_4_;
                  auVar91._0_4_ = fVar103 * fVar103;
                  auVar91._4_4_ = fVar104 * fVar104;
                  auVar91._8_4_ = fVar126 * fVar126;
                  fVar84 = -(fVar88 * fVar79);
                  fVar94 = -(fVar88 * fVar95);
                  fVar95 = -(fVar88 * fVar131);
                  auVar93._0_4_ = auVar91._0_4_ + auVar91._8_4_ + auVar91._4_4_;
                  auVar93._4_8_ = auVar91._4_8_;
                  auVar93._12_4_ = 0;
                  auVar25 = rsqrtss(auVar93,auVar93);
                  fVar88 = auVar25._0_4_;
                  fVar79 = fVar84 * fVar83 + fVar95 * fVar67 + fVar94 * fVar86;
                  local_50 = -(fVar88 * fVar103);
                  fStack_4c = -(fVar88 * fVar104);
                  fStack_48 = -(fVar88 * fVar126);
                  fVar88 = local_50 * fVar78 + fStack_48 * fVar81 + fStack_4c * fVar80;
                }
                pfVar14 = (float *)(local_14 + 0x80 + iVar21 * 0x40);
                fVar103 = *pfVar14;
                fVar104 = pfVar14[1];
                fVar126 = pfVar14[2];
                fVar131 = pfVar14[3];
                *pfVar15 = fVar131 * 1.0 + ((fVar79 * 2.0 * fVar86 - fVar94) + 0.0) * fVar104 +
                           ((fVar79 * 2.0 * fVar67 - fVar95) + 0.0) * fVar126 +
                           ((fVar79 * 2.0 * fVar83 - fVar84) + 0.0) * fVar103;
                *(float *)((int)pfVar15 + param_5) =
                     fVar131 * 1.0 + ((fVar88 * 2.0 * fVar80 - fStack_4c) + 0.0) * fVar104 +
                     ((fVar88 * 2.0 * fVar81 - fStack_48) + 0.0) * fVar126 +
                     ((fVar88 * 2.0 * fVar78 - local_50) + 0.0) * fVar103;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar20 = param_6 * 0x20;
              if (*(int *)((int)this + 0x4c8) == 0) {
                fVar67 = 0.0;
                fVar78 = 0.0;
                fVar81 = 1.0;
                pfVar14 = (float *)(iVar20 + -0x10 + param_3);
                fVar84 = *pfVar14;
                fVar88 = pfVar14[1];
                fVar94 = pfVar14[2];
                fVar79 = pfVar14[3];
                iVar20 = *(int *)((int)this + 0x9cc);
                fVar86 = fVar94 * 2.0;
                fVar95 = fVar94 * 2.0;
                fVar103 = fVar94 * 2.0;
                fVar80 = fVar79 * *(float *)(iVar20 + 0x70c) + fVar88 * *(float *)(iVar20 + 0x704) +
                         fVar94 * *(float *)(iVar20 + 0x708) + fVar84 * *(float *)(iVar20 + 0x700);
                fVar83 = fVar79 * *(float *)(iVar20 + 0x71c) + fVar88 * *(float *)(iVar20 + 0x714) +
                         fVar94 * *(float *)(iVar20 + 0x718) + fVar84 * *(float *)(iVar20 + 0x710);
                fVar84 = fVar79 * *(float *)(iVar20 + 0x72c) + fVar88 * *(float *)(iVar20 + 0x724) +
                         fVar94 * *(float *)(iVar20 + 0x728) + fVar84 * *(float *)(iVar20 + 0x720);
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar88 = fVar80 * fVar80 + fVar84 * fVar84 + fVar83 * fVar83;
                  auVar54._4_4_ = fVar88;
                  auVar54._0_4_ = fVar88;
                  auVar54._8_4_ = fVar88;
                  auVar54._12_4_ = fVar88;
                  auVar25 = rsqrtss(auVar54,auVar54);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar83;
                  fVar84 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar84;
                }
              }
              else {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(iVar20 + -0x20 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + -0x10 + param_3);
                fVar67 = *pfVar14;
                fVar78 = pfVar14[1];
                fVar79 = pfVar14[2];
                fVar80 = pfVar14[3];
                fVar83 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                         fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                fVar104 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                          fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
                fVar81 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                         fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
                fVar86 = fVar80 * pfVar1[0x1c3] + fVar78 * pfVar1[0x1c1] +
                         fVar79 * pfVar1[0x1c2] + fVar67 * pfVar1[0x1c0];
                fVar95 = fVar80 * pfVar1[0x1c7] + fVar78 * pfVar1[0x1c5] +
                         fVar79 * pfVar1[0x1c6] + fVar67 * pfVar1[0x1c4];
                fVar103 = fVar80 * pfVar1[0x1cb] + fVar78 * pfVar1[0x1c9] +
                          fVar79 * pfVar1[0x1ca] + fVar67 * pfVar1[0x1c8];
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar86 * fVar86 + fVar103 * fVar103 + fVar95 * fVar95;
                  auVar53._4_4_ = fVar84;
                  auVar53._0_4_ = fVar84;
                  auVar53._8_4_ = fVar84;
                  auVar53._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar53,auVar53);
                  uVar12 = auVar25._0_4_;
                  fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar86;
                  fVar95 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar95;
                  fVar103 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar103;
                }
                auVar114._0_4_ = fVar83 * fVar83;
                auVar114._4_4_ = fVar104 * fVar104;
                auVar114._8_4_ = fVar81 * fVar81;
                auVar122._0_4_ = auVar114._0_4_ + auVar114._8_4_ + auVar114._4_4_;
                auVar122._4_8_ = auVar114._4_8_;
                auVar122._12_4_ = 0;
                auVar25 = rsqrtss(auVar122,auVar122);
                fVar84 = auVar25._0_4_;
                fVar67 = -(fVar84 * fVar83);
                fVar78 = -(fVar84 * fVar104);
                fVar81 = -(fVar84 * fVar81);
                fVar84 = fVar86 * fVar67 + fVar103 * fVar81 + fVar95 * fVar78;
                fVar80 = fVar84 * 2.0;
                fVar83 = fVar84 * 2.0;
                fVar84 = fVar84 * 2.0;
              }
              fVar67 = fVar80 * fVar86 - fVar67;
              fVar78 = fVar83 * fVar95 - fVar78;
              fVar81 = fVar84 * fVar103 - fVar81;
              goto LAB_1000fd86;
            }
          }
          else if (cVar3 == '\x02') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar11 = local_1c * 0x40;
                if (*(int *)((int)this + 0x4c8) == 0) {
                  pfVar14 = (float *)(iVar11 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  pfVar14 = (float *)(iVar11 + 0x10 + param_3);
                  fVar67 = *pfVar14;
                  fVar78 = pfVar14[1];
                  fVar79 = pfVar14[2];
                  fVar80 = pfVar14[3];
                  iVar11 = *(int *)((int)this + 0x9cc);
                  fVar83 = fVar80 * *(float *)(iVar11 + 0x70c) + fVar78 * *(float *)(iVar11 + 0x704)
                           + fVar79 * *(float *)(iVar11 + 0x708) +
                             fVar67 * *(float *)(iVar11 + 0x700);
                  fVar86 = *(float *)(iVar11 + 0x71c) * fVar80 + *(float *)(iVar11 + 0x714) * fVar78
                           + *(float *)(iVar11 + 0x718) * fVar79 +
                             *(float *)(iVar11 + 0x710) * fVar67;
                  fVar67 = *(float *)(iVar11 + 0x72c) * fVar80 + *(float *)(iVar11 + 0x724) * fVar78
                           + *(float *)(iVar11 + 0x728) * fVar79 +
                             *(float *)(iVar11 + 0x720) * fVar67;
                  fVar78 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704)
                           + fVar88 * *(float *)(iVar11 + 0x708) +
                             fVar81 * *(float *)(iVar11 + 0x700);
                  fVar80 = *(float *)(iVar11 + 0x71c) * fVar94 + *(float *)(iVar11 + 0x714) * fVar84
                           + *(float *)(iVar11 + 0x718) * fVar88 +
                             *(float *)(iVar11 + 0x710) * fVar81;
                  fVar81 = *(float *)(iVar11 + 0x72c) * fVar94 + *(float *)(iVar11 + 0x724) * fVar84
                           + *(float *)(iVar11 + 0x728) * fVar88 +
                             *(float *)(iVar11 + 0x720) * fVar81;
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar84 = fVar83 * fVar83 + fVar67 * fVar67 + fVar86 * fVar86;
                    auVar45._4_4_ = fVar84;
                    auVar45._0_4_ = fVar84;
                    auVar45._8_4_ = fVar84;
                    auVar45._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar45,auVar45);
                    uVar22 = auVar25._0_4_;
                    fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                    fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar86;
                    fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                    fVar84 = fVar78 * fVar78 + fVar81 * fVar81 + fVar80 * fVar80;
                    auVar46._4_4_ = fVar84;
                    auVar46._0_4_ = fVar84;
                    auVar46._8_4_ = fVar84;
                    auVar46._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar46,auVar46);
                    uVar22 = auVar25._0_4_;
                    fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                    fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                    fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                  }
                  local_80 = (undefined1  [4])0x0;
                  fStack_7c = 0.0;
                  fStack_78 = 1.0;
                  auVar105 = local_80;
                  fVar84 = fStack_7c;
                  fVar94 = fStack_78;
                }
                else {
                  pfVar1 = *(float **)((int)this + 0x9cc);
                  pfVar14 = (float *)(iVar11 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar126 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                            pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                  fVar131 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                            pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar132 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar11 + 0x20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar95 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                           pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                  fVar103 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                            pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar104 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar11 + 0x10 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar83 = pfVar1[0x1c3] * fVar94 + pfVar1[0x1c1] * fVar84 +
                           pfVar1[0x1c2] * fVar88 + pfVar1[0x1c0] * fVar81;
                  fVar86 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar67 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  pfVar14 = (float *)(iVar11 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar78 = fVar94 * pfVar1[0x1c3] + fVar84 * pfVar1[0x1c1] +
                           fVar88 * pfVar1[0x1c2] + fVar81 * pfVar1[0x1c0];
                  fVar80 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar81 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar84 = fVar83 * fVar83 + fVar67 * fVar67 + fVar86 * fVar86;
                    auVar43._4_4_ = fVar84;
                    auVar43._0_4_ = fVar84;
                    auVar43._8_4_ = fVar84;
                    auVar43._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar43,auVar43);
                    uVar22 = auVar25._0_4_;
                    fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                    fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar86;
                    fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                    fVar84 = fVar78 * fVar78 + fVar81 * fVar81 + fVar80 * fVar80;
                    auVar44._4_4_ = fVar84;
                    auVar44._0_4_ = fVar84;
                    auVar44._8_4_ = fVar84;
                    auVar44._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar44,auVar44);
                    uVar22 = auVar25._0_4_;
                    fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                    fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                    fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                  }
                  auVar112._0_4_ = fVar126 * fVar126;
                  auVar112._4_4_ = fVar131 * fVar131;
                  auVar112._8_4_ = fVar132 * fVar132;
                  auVar120._0_4_ = auVar112._0_4_ + auVar112._8_4_ + auVar112._4_4_;
                  auVar120._4_8_ = auVar112._4_8_;
                  auVar120._12_4_ = 0;
                  auVar25 = rsqrtss(auVar120,auVar120);
                  fVar94 = auVar25._0_4_;
                  auVar98._0_4_ = fVar95 * fVar95;
                  auVar98._4_4_ = fVar103 * fVar103;
                  auVar98._8_4_ = fVar104 * fVar104;
                  auVar101._0_4_ = auVar98._0_4_ + auVar98._8_4_ + auVar98._4_4_;
                  auVar101._4_8_ = auVar98._4_8_;
                  auVar101._12_4_ = 0;
                  auVar25 = rsqrtss(auVar101,auVar101);
                  fVar84 = auVar25._0_4_;
                  fVar79 = -(fVar94 * fVar126) * fVar83 + -(fVar94 * fVar132) * fVar67 +
                           -(fVar94 * fVar131) * fVar86;
                  local_80 = (undefined1  [4])-(fVar84 * fVar95);
                  fStack_7c = -(fVar84 * fVar103);
                  fStack_78 = -(fVar84 * fVar104);
                  fVar88 = (float)local_80 * fVar78 + fStack_78 * fVar81 + fStack_7c * fVar80;
                  auVar105 = (undefined1  [4])-(fVar94 * fVar126);
                  fVar84 = -(fVar94 * fVar131);
                  fVar94 = -(fVar94 * fVar132);
                }
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                fVar95 = *pfVar14;
                fVar103 = pfVar14[1];
                fVar104 = pfVar14[2];
                fVar126 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                fVar131 = *pfVar14;
                fVar132 = pfVar14[1];
                fVar82 = pfVar14[2];
                fVar85 = pfVar14[3];
                fVar83 = (fVar79 * 2.0 * fVar83 - (float)auVar105) + 0.0;
                fVar84 = (fVar79 * 2.0 * fVar86 - fVar84) + 0.0;
                fVar94 = (fVar79 * 2.0 * fVar67 - fVar94) + 0.0;
                fVar67 = (fVar88 * 2.0 * fVar78 - (float)local_80) + 0.0;
                fVar78 = (fVar88 * 2.0 * fVar80 - fStack_7c) + 0.0;
                fVar81 = (fVar88 * 2.0 * fVar81 - fStack_78) + 0.0;
                *pfVar15 = fVar126 * 1.0 + fVar84 * fVar103 + fVar94 * fVar104 + fVar83 * fVar95;
                pfVar15[1] = fVar85 * 1.0 + fVar132 * fVar84 + fVar82 * fVar94 + fVar131 * fVar83;
                *(float *)((int)pfVar15 + param_5) =
                     fVar126 * 1.0 + fVar78 * fVar103 + fVar81 * fVar104 + fVar67 * fVar95;
                ((float *)((int)pfVar15 + param_5))[1] =
                     fVar85 * 1.0 + fVar132 * fVar78 + fVar82 * fVar81 + fVar131 * fVar67;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar11 = param_6 * 0x20;
              if (*(int *)((int)this + 0x4c8) == 0) {
                fVar67 = 0.0;
                fVar78 = 0.0;
                fVar79 = 1.0;
                pfVar14 = (float *)(iVar11 + -0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                iVar11 = *(int *)((int)this + 0x9cc);
                fVar95 = fVar88 * 2.0;
                fVar103 = fVar88 * 2.0;
                fVar86 = fVar88 * 2.0;
                fVar80 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                         fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
                fVar83 = fVar94 * *(float *)(iVar11 + 0x71c) + fVar84 * *(float *)(iVar11 + 0x714) +
                         fVar88 * *(float *)(iVar11 + 0x718) + fVar81 * *(float *)(iVar11 + 0x710);
                fVar81 = fVar94 * *(float *)(iVar11 + 0x72c) + fVar84 * *(float *)(iVar11 + 0x724) +
                         fVar88 * *(float *)(iVar11 + 0x728) + fVar81 * *(float *)(iVar11 + 0x720);
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar48._4_4_ = fVar84;
                  auVar48._0_4_ = fVar84;
                  auVar48._8_4_ = fVar84;
                  auVar48._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar48,auVar48);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
                }
              }
              else {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(iVar11 + -0x20 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(iVar11 + -0x10 + param_3);
                fVar67 = *pfVar14;
                fVar78 = pfVar14[1];
                fVar79 = pfVar14[2];
                fVar86 = pfVar14[3];
                fVar95 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                         fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                fVar103 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                          fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
                fVar84 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                         fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
                fVar80 = fVar86 * pfVar1[0x1c3] + fVar78 * pfVar1[0x1c1] +
                         fVar79 * pfVar1[0x1c2] + fVar67 * pfVar1[0x1c0];
                fVar83 = fVar86 * pfVar1[0x1c7] + fVar78 * pfVar1[0x1c5] +
                         fVar79 * pfVar1[0x1c6] + fVar67 * pfVar1[0x1c4];
                fVar81 = fVar86 * pfVar1[0x1cb] + fVar78 * pfVar1[0x1c9] +
                         fVar79 * pfVar1[0x1ca] + fVar67 * pfVar1[0x1c8];
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar88 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar47._4_4_ = fVar88;
                  auVar47._0_4_ = fVar88;
                  auVar47._8_4_ = fVar88;
                  auVar47._12_4_ = fVar88;
                  auVar25 = rsqrtss(auVar47,auVar47);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar81;
                }
                auVar113._0_4_ = fVar95 * fVar95;
                auVar113._4_4_ = fVar103 * fVar103;
                auVar113._8_4_ = fVar84 * fVar84;
                auVar121._0_4_ = auVar113._0_4_ + auVar113._8_4_ + auVar113._4_4_;
                auVar121._4_8_ = auVar113._4_8_;
                auVar121._12_4_ = 0;
                auVar25 = rsqrtss(auVar121,auVar121);
                fVar88 = auVar25._0_4_;
                fVar67 = -(fVar88 * fVar95);
                fVar78 = -(fVar88 * fVar103);
                fVar79 = -(fVar88 * fVar84);
                fVar86 = fVar67 * fVar80 + fVar79 * fVar81 + fVar78 * fVar83;
                fVar95 = fVar86 * 2.0;
                fVar103 = fVar86 * 2.0;
                fVar86 = fVar86 * 2.0;
              }
              fVar84 = (fVar95 * fVar80 - fVar67) + 0.0;
              fVar88 = (fVar103 * fVar83 - fVar78) + 0.0;
              fVar81 = (fVar86 * fVar81 - fVar79) + 0.0;
              pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
              pfVar1 = (float *)(iVar20 + 0x80 + iVar21);
              fVar94 = fVar81 * pfVar1[2] + fVar84 * *pfVar1;
              fVar67 = pfVar1[3] * 1.0 + fVar88 * pfVar1[1];
              auVar23._0_4_ = fVar67 + fVar94;
              auVar23._4_4_ = fVar94 + fVar67;
              auVar23._8_4_ =
                   pfVar14[3] * 1.0 + fVar88 * pfVar14[1] + fVar81 * pfVar14[2] + fVar84 * *pfVar14;
              goto LAB_1000c60d;
            }
          }
          else if (cVar3 == '\x03') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar11 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar17 = local_1c * 0x40;
                if (*(int *)((int)this + 0x4c8) == 0) {
                  pfVar14 = (float *)(iVar17 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  local_50 = pfVar14[2];
                  fVar88 = pfVar14[3];
                  pfVar14 = (float *)(iVar17 + 0x10 + param_3);
                  fVar94 = *pfVar14;
                  fVar67 = pfVar14[1];
                  fVar78 = pfVar14[2];
                  fVar79 = pfVar14[3];
                  iVar17 = *(int *)((int)this + 0x9cc);
                  local_40 = 0.0;
                  fStack_3c = 0.0;
                  fStack_38 = 1.0;
                  fVar80 = fVar79 * *(float *)(iVar17 + 0x70c) + fVar67 * *(float *)(iVar17 + 0x704)
                           + fVar78 * *(float *)(iVar17 + 0x708) +
                             fVar94 * *(float *)(iVar17 + 0x700);
                  fVar83 = *(float *)(iVar17 + 0x71c) * fVar79 + *(float *)(iVar17 + 0x714) * fVar67
                           + *(float *)(iVar17 + 0x718) * fVar78 +
                             *(float *)(iVar17 + 0x710) * fVar94;
                  fVar94 = *(float *)(iVar17 + 0x72c) * fVar79 + *(float *)(iVar17 + 0x724) * fVar67
                           + *(float *)(iVar17 + 0x728) * fVar78 +
                             *(float *)(iVar17 + 0x720) * fVar94;
                  fVar67 = fVar88 * *(float *)(iVar17 + 0x70c) + fVar84 * *(float *)(iVar17 + 0x704)
                           + local_50 * *(float *)(iVar17 + 0x708) +
                             fVar81 * *(float *)(iVar17 + 0x700);
                  fVar79 = *(float *)(iVar17 + 0x71c) * fVar88 + *(float *)(iVar17 + 0x714) * fVar84
                           + *(float *)(iVar17 + 0x718) * local_50 +
                             *(float *)(iVar17 + 0x710) * fVar81;
                  fStack_58 = *(float *)(iVar17 + 0x72c) * fVar88 +
                              *(float *)(iVar17 + 0x724) * fVar84 +
                              *(float *)(iVar17 + 0x728) * local_50 +
                              *(float *)(iVar17 + 0x720) * fVar81;
                  local_60 = CONCAT44(fVar79,fVar67);
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar81 = fVar80 * fVar80 + fVar94 * fVar94 + fVar83 * fVar83;
                    auVar39._4_4_ = fVar81;
                    auVar39._0_4_ = fVar81;
                    auVar39._8_4_ = fVar81;
                    auVar39._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar39,auVar39);
                    uVar22 = auVar25._0_4_;
                    fVar80 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar80;
                    fVar83 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar83;
                    fVar94 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar94;
                    fVar81 = fVar67 * fVar67 + fStack_58 * fStack_58 + fVar79 * fVar79;
                    auVar40._4_4_ = fVar81;
                    auVar40._0_4_ = fVar81;
                    auVar40._8_4_ = fVar81;
                    auVar40._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar40,auVar40);
                    uVar22 = auVar25._0_4_;
                    fStack_58 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_58;
                    local_60 = CONCAT44((float)(-(uint)(0.0 < fVar81) & uVar22) * fVar79,
                                        (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar67);
                  }
                  fVar81 = 0.0;
                  fVar84 = 0.0;
                  fVar88 = 1.0;
                }
                else {
                  pfVar1 = *(float **)((int)this + 0x9cc);
                  pfVar14 = (float *)(iVar17 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar78 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                           fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                  fVar126 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                            pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar131 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar17 + 0x20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar79 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                           pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                  fVar86 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                           pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar95 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                           pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar17 + 0x10 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar80 = pfVar1[0x1c3] * fVar94 + pfVar1[0x1c1] * fVar84 +
                           pfVar1[0x1c2] * fVar88 + pfVar1[0x1c0] * fVar81;
                  fVar83 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar94 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  pfVar14 = (float *)(iVar17 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar67 = pfVar14[3];
                  fVar103 = fVar67 * pfVar1[0x1c3] + fVar84 * pfVar1[0x1c1] +
                            fVar88 * pfVar1[0x1c2] + fVar81 * pfVar1[0x1c0];
                  fVar104 = pfVar1[0x1c7] * fVar67 + pfVar1[0x1c5] * fVar84 +
                            pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fStack_58 = pfVar1[0x1cb] * fVar67 + pfVar1[0x1c9] * fVar84 +
                              pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  local_60 = CONCAT44(fVar104,fVar103);
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar81 = fVar80 * fVar80 + fVar94 * fVar94 + fVar83 * fVar83;
                    auVar37._4_4_ = fVar81;
                    auVar37._0_4_ = fVar81;
                    auVar37._8_4_ = fVar81;
                    auVar37._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar37,auVar37);
                    uVar22 = auVar25._0_4_;
                    fVar80 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar80;
                    fVar83 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar83;
                    fVar94 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar94;
                    fVar81 = fVar103 * fVar103 + fStack_58 * fStack_58 + fVar104 * fVar104;
                    auVar38._4_4_ = fVar81;
                    auVar38._0_4_ = fVar81;
                    auVar38._8_4_ = fVar81;
                    auVar38._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar38,auVar38);
                    uVar22 = auVar25._0_4_;
                    fVar103 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar103;
                    fVar104 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar104;
                    fStack_58 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_58;
                    local_60 = CONCAT44(fVar104,fVar103);
                  }
                  auVar128._0_4_ = fVar78 * fVar78;
                  auVar128._4_4_ = fVar126 * fVar126;
                  auVar128._8_4_ = fVar131 * fVar131;
                  auVar130._0_4_ = auVar128._0_4_ + auVar128._8_4_ + auVar128._4_4_;
                  auVar130._4_8_ = auVar128._4_8_;
                  auVar130._12_4_ = 0;
                  auVar25 = rsqrtss(auVar130,auVar130);
                  fVar88 = auVar25._0_4_;
                  auVar110._0_4_ = fVar79 * fVar79;
                  auVar110._4_4_ = fVar86 * fVar86;
                  auVar110._8_4_ = fVar95 * fVar95;
                  fVar81 = -(fVar88 * fVar78);
                  fVar84 = -(fVar88 * fVar126);
                  fVar88 = -(fVar88 * fVar131);
                  auVar118._0_4_ = auVar110._0_4_ + auVar110._8_4_ + auVar110._4_4_;
                  auVar118._4_8_ = auVar110._4_8_;
                  auVar118._12_4_ = 0;
                  auVar25 = rsqrtss(auVar118,auVar118);
                  fVar67 = auVar25._0_4_;
                  fVar78 = fVar81 * fVar80 + fVar88 * fVar94 + fVar84 * fVar83;
                  local_40 = -(fVar67 * fVar79);
                  fStack_3c = -(fVar67 * fVar86);
                  fStack_38 = -(fVar67 * fVar95);
                  local_50 = local_40 * fVar103 + fStack_38 * fStack_58 + fStack_3c * fVar104;
                }
                fStack_48 = local_50 * 2.0;
                fStack_4c = local_50 * 2.0;
                local_50 = local_50 * 2.0;
                pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                fVar67 = *pfVar14;
                fVar79 = pfVar14[1];
                fVar86 = pfVar14[2];
                fVar95 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                fVar103 = *pfVar14;
                fVar104 = pfVar14[1];
                fVar126 = pfVar14[2];
                fVar131 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0xa0 + iVar11);
                fVar132 = *pfVar14;
                fVar82 = pfVar14[1];
                fVar85 = pfVar14[2];
                fVar87 = pfVar14[3];
                fVar81 = (fVar78 * 2.0 * fVar80 - fVar81) + 0.0;
                fVar80 = (fVar78 * 2.0 * fVar83 - fVar84) + 0.0;
                fVar94 = (fVar78 * 2.0 * fVar94 - fVar88) + 0.0;
                fVar84 = (local_50 * (float)local_60 - local_40) + 0.0;
                fVar88 = (fStack_4c * local_60._4_4_ - fStack_3c) + 0.0;
                fVar78 = (fStack_48 * fStack_58 - fStack_38) + 0.0;
                *(ulonglong *)pfVar15 =
                     CONCAT44(fVar95 * 1.0 + fVar79 * fVar80 + fVar86 * fVar94 + fVar67 * fVar81,
                              fVar131 * 1.0 + fVar104 * fVar80 + fVar126 * fVar94 + fVar103 * fVar81
                             );
                pfVar15[2] = fVar87 * 1.0 + fVar82 * fVar80 + fVar85 * fVar94 + fVar132 * fVar81;
                *(ulonglong *)((int)pfVar15 + param_5) =
                     CONCAT44(fVar95 * 1.0 + fVar79 * fVar88 + fVar86 * fVar78 + fVar67 * fVar84,
                              fVar131 * 1.0 + fVar104 * fVar88 + fVar126 * fVar78 + fVar103 * fVar84
                             );
                *(float *)((int)pfVar15 + param_5 + 8) =
                     fVar87 * 1.0 + fVar82 * fVar88 + fVar85 * fVar78 + fVar132 * fVar84;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
                pfVar14 = pfVar15;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar11 = param_6 * 0x20;
              if (*(int *)((int)this + 0x4c8) == 0) {
                fVar67 = 0.0;
                fVar78 = 0.0;
                fVar79 = 1.0;
                pfVar15 = (float *)(iVar11 + -0x10 + param_3);
                fVar81 = *pfVar15;
                fVar84 = pfVar15[1];
                fVar88 = pfVar15[2];
                fVar94 = pfVar15[3];
                iVar11 = *(int *)((int)this + 0x9cc);
                fVar86 = fVar88 * 2.0;
                fVar95 = fVar88 * 2.0;
                fVar103 = fVar88 * 2.0;
                fVar80 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                         fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
                fVar83 = fVar94 * *(float *)(iVar11 + 0x71c) + fVar84 * *(float *)(iVar11 + 0x714) +
                         fVar88 * *(float *)(iVar11 + 0x718) + fVar81 * *(float *)(iVar11 + 0x710);
                fVar81 = fVar94 * *(float *)(iVar11 + 0x72c) + fVar84 * *(float *)(iVar11 + 0x724) +
                         fVar88 * *(float *)(iVar11 + 0x728) + fVar81 * *(float *)(iVar11 + 0x720);
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar42._4_4_ = fVar84;
                  auVar42._0_4_ = fVar84;
                  auVar42._8_4_ = fVar84;
                  auVar42._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar42,auVar42);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
                }
              }
              else {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar15 = (float *)(iVar11 + -0x20 + param_3);
                fVar81 = *pfVar15;
                fVar84 = pfVar15[1];
                fVar88 = pfVar15[2];
                fVar94 = pfVar15[3];
                pfVar15 = (float *)(iVar11 + -0x10 + param_3);
                fVar67 = *pfVar15;
                fVar78 = pfVar15[1];
                fVar79 = pfVar15[2];
                fVar80 = pfVar15[3];
                fVar83 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                         fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                fVar104 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                          fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
                fVar81 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                         fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
                fVar86 = fVar80 * pfVar1[0x1c3] + fVar78 * pfVar1[0x1c1] +
                         fVar79 * pfVar1[0x1c2] + fVar67 * pfVar1[0x1c0];
                fVar95 = fVar80 * pfVar1[0x1c7] + fVar78 * pfVar1[0x1c5] +
                         fVar79 * pfVar1[0x1c6] + fVar67 * pfVar1[0x1c4];
                fVar103 = fVar80 * pfVar1[0x1cb] + fVar78 * pfVar1[0x1c9] +
                          fVar79 * pfVar1[0x1ca] + fVar67 * pfVar1[0x1c8];
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar86 * fVar86 + fVar103 * fVar103 + fVar95 * fVar95;
                  auVar41._4_4_ = fVar84;
                  auVar41._0_4_ = fVar84;
                  auVar41._8_4_ = fVar84;
                  auVar41._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar41,auVar41);
                  uVar12 = auVar25._0_4_;
                  fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar86;
                  fVar95 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar95;
                  fVar103 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar103;
                }
                auVar111._0_4_ = fVar83 * fVar83;
                auVar111._4_4_ = fVar104 * fVar104;
                auVar111._8_4_ = fVar81 * fVar81;
                auVar119._0_4_ = auVar111._0_4_ + auVar111._8_4_ + auVar111._4_4_;
                auVar119._4_8_ = auVar111._4_8_;
                auVar119._12_4_ = 0;
                auVar25 = rsqrtss(auVar119,auVar119);
                fVar84 = auVar25._0_4_;
                fVar67 = -(fVar84 * fVar83);
                fVar78 = -(fVar84 * fVar104);
                fVar79 = -(fVar84 * fVar81);
                fVar81 = fVar86 * fVar67 + fVar103 * fVar79 + fVar95 * fVar78;
                fVar80 = fVar81 * 2.0;
                fVar83 = fVar81 * 2.0;
                fVar81 = fVar81 * 2.0;
              }
              fVar84 = (fVar80 * fVar86 - fVar67) + 0.0;
              fVar78 = (fVar83 * fVar95 - fVar78) + 0.0;
              fVar81 = (fVar81 * fVar103 - fVar79) + 0.0;
              fVar88 = 1.0;
LAB_1000c486:
              iVar21 = iVar21 * 0x40;
              pfVar15 = (float *)(iVar20 + 0x80 + iVar21);
              pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
              pfVar2 = (float *)(iVar20 + 0xa0 + iVar21);
              fVar94 = *pfVar2;
              fVar67 = pfVar2[1];
              fVar79 = pfVar2[2];
              fVar80 = pfVar2[3];
              *(ulonglong *)pfVar14 =
                   CONCAT44(fVar88 * pfVar1[3] + fVar78 * pfVar1[1] +
                            fVar81 * pfVar1[2] + fVar84 * *pfVar1,
                            fVar88 * pfVar15[3] + fVar78 * pfVar15[1] +
                            fVar81 * pfVar15[2] + fVar84 * *pfVar15);
              pfVar14[2] = fVar88 * fVar80 + fVar78 * fVar67 + fVar81 * fVar79 + fVar84 * fVar94;
            }
          }
          else if (cVar3 == '\x04') {
            iVar20 = *(int *)((int)this + 0x9cc);
            iVar21 = iVar21 * 0x40;
            local_1c = 0;
            if (uVar12 != 0) {
              do {
                iVar11 = local_1c * 0x40;
                if (*(int *)((int)this + 0x4c8) == 0) {
                  pfVar14 = (float *)(iVar11 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  local_50 = pfVar14[2];
                  fVar88 = pfVar14[3];
                  pfVar14 = (float *)(iVar11 + 0x10 + param_3);
                  fVar94 = *pfVar14;
                  fVar67 = pfVar14[1];
                  fVar78 = pfVar14[2];
                  fVar79 = pfVar14[3];
                  iVar11 = *(int *)((int)this + 0x9cc);
                  local_40 = 0.0;
                  fStack_3c = 0.0;
                  fStack_38 = 1.0;
                  fVar80 = fVar79 * *(float *)(iVar11 + 0x70c) + fVar67 * *(float *)(iVar11 + 0x704)
                           + fVar78 * *(float *)(iVar11 + 0x708) +
                             fVar94 * *(float *)(iVar11 + 0x700);
                  fVar83 = *(float *)(iVar11 + 0x71c) * fVar79 + *(float *)(iVar11 + 0x714) * fVar67
                           + *(float *)(iVar11 + 0x718) * fVar78 +
                             *(float *)(iVar11 + 0x710) * fVar94;
                  fVar94 = *(float *)(iVar11 + 0x72c) * fVar79 + *(float *)(iVar11 + 0x724) * fVar67
                           + *(float *)(iVar11 + 0x728) * fVar78 +
                             *(float *)(iVar11 + 0x720) * fVar94;
                  fVar67 = fVar88 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704)
                           + local_50 * *(float *)(iVar11 + 0x708) +
                             fVar81 * *(float *)(iVar11 + 0x700);
                  fVar79 = *(float *)(iVar11 + 0x71c) * fVar88 + *(float *)(iVar11 + 0x714) * fVar84
                           + *(float *)(iVar11 + 0x718) * local_50 +
                             *(float *)(iVar11 + 0x710) * fVar81;
                  fStack_58 = *(float *)(iVar11 + 0x72c) * fVar88 +
                              *(float *)(iVar11 + 0x724) * fVar84 +
                              *(float *)(iVar11 + 0x728) * local_50 +
                              *(float *)(iVar11 + 0x720) * fVar81;
                  local_60 = CONCAT44(fVar79,fVar67);
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar81 = fVar80 * fVar80 + fVar94 * fVar94 + fVar83 * fVar83;
                    auVar33._4_4_ = fVar81;
                    auVar33._0_4_ = fVar81;
                    auVar33._8_4_ = fVar81;
                    auVar33._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar33,auVar33);
                    uVar22 = auVar25._0_4_;
                    fVar80 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar80;
                    fVar83 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar83;
                    fVar94 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar94;
                    fVar81 = fVar67 * fVar67 + fStack_58 * fStack_58 + fVar79 * fVar79;
                    auVar34._4_4_ = fVar81;
                    auVar34._0_4_ = fVar81;
                    auVar34._8_4_ = fVar81;
                    auVar34._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar34,auVar34);
                    uVar22 = auVar25._0_4_;
                    fStack_58 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_58;
                    local_60 = CONCAT44((float)(-(uint)(0.0 < fVar81) & uVar22) * fVar79,
                                        (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar67);
                  }
                  fVar81 = 0.0;
                  fVar84 = 0.0;
                  fVar88 = 1.0;
                }
                else {
                  pfVar1 = *(float **)((int)this + 0x9cc);
                  pfVar14 = (float *)(iVar11 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar78 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                           fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                  fVar79 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                           pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar86 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                           pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar11 + 0x20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar104 = pfVar1[3] * fVar94 + pfVar1[1] * fVar84 +
                            pfVar1[2] * fVar88 + *pfVar1 * fVar81;
                  fVar126 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                            pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar131 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar11 + 0x10 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar80 = pfVar1[0x1c3] * fVar94 + pfVar1[0x1c1] * fVar84 +
                           pfVar1[0x1c2] * fVar88 + pfVar1[0x1c0] * fVar81;
                  fVar83 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar94 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  pfVar14 = (float *)(iVar11 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar67 = pfVar14[3];
                  fVar95 = fVar84 * pfVar1[0x1c1] + fVar67 * pfVar1[0x1c3] +
                           fVar81 * pfVar1[0x1c0] + fVar88 * pfVar1[0x1c2];
                  fVar103 = pfVar1[0x1c5] * fVar84 + pfVar1[0x1c7] * fVar67 +
                            pfVar1[0x1c4] * fVar81 + pfVar1[0x1c6] * fVar88;
                  fStack_58 = pfVar1[0x1cb] * fVar67 + pfVar1[0x1c9] * fVar84 +
                              pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  local_60 = CONCAT44(fVar103,fVar95);
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar81 = fVar80 * fVar80 + fVar94 * fVar94 + fVar83 * fVar83;
                    auVar31._4_4_ = fVar81;
                    auVar31._0_4_ = fVar81;
                    auVar31._8_4_ = fVar81;
                    auVar31._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar31,auVar31);
                    uVar22 = auVar25._0_4_;
                    fVar80 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar80;
                    fVar83 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar83;
                    fVar94 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar94;
                    fVar81 = fVar95 * fVar95 + fStack_58 * fStack_58 + fVar103 * fVar103;
                    auVar32._4_4_ = fVar81;
                    auVar32._0_4_ = fVar81;
                    auVar32._8_4_ = fVar81;
                    auVar32._12_4_ = fVar81;
                    auVar25 = rsqrtss(auVar32,auVar32);
                    uVar22 = auVar25._0_4_;
                    fVar95 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar95;
                    fVar103 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fVar103;
                    fStack_58 = (float)(-(uint)(0.0 < fVar81) & uVar22) * fStack_58;
                    local_60 = CONCAT44(fVar103,fVar95);
                  }
                  auVar127._0_4_ = fVar78 * fVar78;
                  auVar127._4_4_ = fVar79 * fVar79;
                  auVar127._8_4_ = fVar86 * fVar86;
                  auVar129._0_4_ = auVar127._0_4_ + auVar127._8_4_ + auVar127._4_4_;
                  auVar129._4_8_ = auVar127._4_8_;
                  auVar129._12_4_ = 0;
                  auVar25 = rsqrtss(auVar129,auVar129);
                  fVar88 = auVar25._0_4_;
                  auVar108._0_4_ = fVar104 * fVar104;
                  auVar108._4_4_ = fVar126 * fVar126;
                  auVar108._8_4_ = fVar131 * fVar131;
                  fVar81 = -(fVar88 * fVar78);
                  fVar84 = -(fVar88 * fVar79);
                  fVar88 = -(fVar88 * fVar86);
                  auVar116._0_4_ = auVar108._0_4_ + auVar108._8_4_ + auVar108._4_4_;
                  auVar116._4_8_ = auVar108._4_8_;
                  auVar116._12_4_ = 0;
                  auVar25 = rsqrtss(auVar116,auVar116);
                  fVar67 = auVar25._0_4_;
                  local_40 = -(fVar67 * fVar104);
                  fStack_3c = -(fVar67 * fVar126);
                  fStack_38 = -(fVar67 * fVar131);
                  fVar78 = fVar81 * fVar80 + fVar88 * fVar94 + fVar84 * fVar83;
                  local_50 = local_40 * fVar95 + fStack_38 * fStack_58 + fStack_3c * fVar103;
                }
                fStack_48 = local_50 * 2.0;
                fStack_4c = local_50 * 2.0;
                local_50 = local_50 * 2.0;
                pfVar14 = (float *)(iVar20 + 0xb0 + iVar21);
                fVar67 = *pfVar14;
                fVar79 = pfVar14[1];
                fVar86 = pfVar14[2];
                fVar95 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0xa0 + iVar21);
                fVar103 = *pfVar14;
                fVar104 = pfVar14[1];
                fVar126 = pfVar14[2];
                fVar131 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                fVar132 = *pfVar14;
                fVar82 = pfVar14[1];
                fVar85 = pfVar14[2];
                fVar87 = pfVar14[3];
                fVar81 = (fVar78 * 2.0 * fVar80 - fVar81) + 0.0;
                fVar80 = (fVar78 * 2.0 * fVar83 - fVar84) + 0.0;
                fVar94 = (fVar78 * 2.0 * fVar94 - fVar88) + 0.0;
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                fVar84 = (local_50 * (float)local_60 - local_40) + 0.0;
                fVar88 = (fStack_4c * local_60._4_4_ - fStack_3c) + 0.0;
                fVar78 = (fStack_48 * fStack_58 - fStack_38) + 0.0;
                pfVar1 = (float *)(iVar20 + 0x80 + iVar21);
                auVar73._0_4_ =
                     pfVar1[3] * 1.0 + fVar88 * pfVar1[1] + fVar78 * pfVar1[2] + fVar84 * *pfVar1;
                auVar73._4_4_ = fVar87 * 1.0 + fVar82 * fVar88 + fVar85 * fVar78 + fVar132 * fVar84;
                auVar73._8_4_ =
                     fVar131 * 1.0 + fVar104 * fVar88 + fVar126 * fVar78 + fVar103 * fVar84;
                auVar73._12_4_ = fVar95 * 1.0 + fVar79 * fVar88 + fVar86 * fVar78 + fVar67 * fVar84;
                *pfVar15 = pfVar14[3] * 1.0 + fVar80 * pfVar14[1] +
                           fVar94 * pfVar14[2] + fVar81 * *pfVar14;
                pfVar15[1] = fVar87 * 1.0 + fVar82 * fVar80 + fVar85 * fVar94 + fVar132 * fVar81;
                pfVar15[2] = fVar131 * 1.0 + fVar104 * fVar80 + fVar126 * fVar94 + fVar103 * fVar81;
                pfVar15[3] = fVar95 * 1.0 + fVar79 * fVar80 + fVar86 * fVar94 + fVar67 * fVar81;
                *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar73;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_1c = local_1c + 1;
              } while (local_1c < uVar12);
            }
            if (uVar18 != 0) {
              iVar11 = param_6 * 0x20;
              if (*(int *)((int)this + 0x4c8) == 0) {
                fVar67 = 0.0;
                fVar78 = 0.0;
                fVar79 = 1.0;
                pfVar14 = (float *)(iVar11 + -0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                iVar11 = *(int *)((int)this + 0x9cc);
                fVar95 = fVar88 * 2.0;
                fVar103 = fVar88 * 2.0;
                fVar86 = fVar88 * 2.0;
                fVar80 = fVar94 * *(float *)(iVar11 + 0x70c) + fVar84 * *(float *)(iVar11 + 0x704) +
                         fVar88 * *(float *)(iVar11 + 0x708) + fVar81 * *(float *)(iVar11 + 0x700);
                fVar83 = fVar94 * *(float *)(iVar11 + 0x71c) + fVar84 * *(float *)(iVar11 + 0x714) +
                         fVar88 * *(float *)(iVar11 + 0x718) + fVar81 * *(float *)(iVar11 + 0x710);
                fVar81 = fVar94 * *(float *)(iVar11 + 0x72c) + fVar84 * *(float *)(iVar11 + 0x724) +
                         fVar88 * *(float *)(iVar11 + 0x728) + fVar81 * *(float *)(iVar11 + 0x720);
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar36._4_4_ = fVar84;
                  auVar36._0_4_ = fVar84;
                  auVar36._8_4_ = fVar84;
                  auVar36._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar36,auVar36);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
                }
              }
              else {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(iVar11 + -0x20 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(iVar11 + -0x10 + param_3);
                fVar67 = *pfVar14;
                fVar78 = pfVar14[1];
                fVar79 = pfVar14[2];
                fVar86 = pfVar14[3];
                fVar95 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                         fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                fVar103 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                          fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
                fVar84 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                         fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
                fVar80 = fVar86 * pfVar1[0x1c3] + fVar78 * pfVar1[0x1c1] +
                         fVar79 * pfVar1[0x1c2] + fVar67 * pfVar1[0x1c0];
                fVar83 = fVar86 * pfVar1[0x1c7] + fVar78 * pfVar1[0x1c5] +
                         fVar79 * pfVar1[0x1c6] + fVar67 * pfVar1[0x1c4];
                fVar81 = fVar86 * pfVar1[0x1cb] + fVar78 * pfVar1[0x1c9] +
                         fVar79 * pfVar1[0x1ca] + fVar67 * pfVar1[0x1c8];
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar88 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar35._4_4_ = fVar88;
                  auVar35._0_4_ = fVar88;
                  auVar35._8_4_ = fVar88;
                  auVar35._12_4_ = fVar88;
                  auVar25 = rsqrtss(auVar35,auVar35);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar81;
                }
                auVar109._0_4_ = fVar95 * fVar95;
                auVar109._4_4_ = fVar103 * fVar103;
                auVar109._8_4_ = fVar84 * fVar84;
                auVar117._0_4_ = auVar109._0_4_ + auVar109._8_4_ + auVar109._4_4_;
                auVar117._4_8_ = auVar109._4_8_;
                auVar117._12_4_ = 0;
                auVar25 = rsqrtss(auVar117,auVar117);
                fVar88 = auVar25._0_4_;
                fVar67 = -(fVar88 * fVar95);
                fVar78 = -(fVar88 * fVar103);
                fVar79 = -(fVar88 * fVar84);
                fVar86 = fVar67 * fVar80 + fVar79 * fVar81 + fVar78 * fVar83;
                fVar95 = fVar86 * 2.0;
                fVar103 = fVar86 * 2.0;
                fVar86 = fVar86 * 2.0;
              }
              fVar95 = (fVar95 * fVar80 - fVar67) + 0.0;
              fVar103 = (fVar103 * fVar83 - fVar78) + 0.0;
              fVar104 = (fVar86 * fVar81 - fVar79) + 0.0;
              pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
              pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
              pfVar2 = (float *)(iVar20 + 0xa0 + iVar21);
              fVar81 = fVar95 * *pfVar2;
              fVar84 = fVar103 * pfVar2[1];
              fVar67 = fVar104 * pfVar2[2];
              fVar78 = pfVar2[3] * 1.0;
              pfVar2 = (float *)(iVar20 + 0xb0 + iVar21);
              fVar88 = fVar95 * *pfVar2;
              fVar94 = fVar103 * pfVar2[1];
              fVar79 = fVar104 * pfVar2[2];
              fVar80 = pfVar2[3] * 1.0;
              fVar83 = fVar104 * pfVar14[2] + fVar95 * *pfVar14;
              fVar86 = pfVar14[3] * 1.0 + fVar103 * pfVar14[1];
              fVar95 = fVar104 * pfVar1[2] + fVar95 * *pfVar1;
              fVar103 = pfVar1[3] * 1.0 + fVar103 * pfVar1[1];
LAB_1000c320:
              *pfVar15 = fVar86 + fVar83;
              pfVar15[1] = fVar103 + fVar95;
              pfVar15[2] = fVar78 + fVar84 + fVar67 + fVar81;
              pfVar15[3] = fVar80 + fVar94 + fVar79 + fVar88;
            }
          }
          else {
            local_20 = 0;
            if (uVar12 != 0) {
              do {
                iVar20 = local_20 * 0x40;
                if (*(int *)((int)this + 0x4c8) == 0) {
                  pfVar14 = (float *)(iVar20 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x10 + param_3);
                  fVar67 = *pfVar14;
                  fVar78 = pfVar14[1];
                  fVar79 = pfVar14[2];
                  fVar80 = pfVar14[3];
                  iVar20 = *(int *)((int)this + 0x9cc);
                  auVar91 = *(undefined1 (*) [12])(iVar20 + 0x700);
                  fVar83 = fVar80 * *(float *)(iVar20 + 0x70c) + fVar78 * *(float *)(iVar20 + 0x704)
                           + fVar79 * *(float *)(iVar20 + 0x708) +
                             fVar67 * *(float *)*(undefined1 (*) [12])(iVar20 + 0x700);
                  fVar86 = *(float *)(iVar20 + 0x71c) * fVar80 + *(float *)(iVar20 + 0x714) * fVar78
                           + *(float *)(iVar20 + 0x718) * fVar79 +
                             *(float *)(iVar20 + 0x710) * fVar67;
                  fVar67 = *(float *)(iVar20 + 0x72c) * fVar80 + *(float *)(iVar20 + 0x724) * fVar78
                           + *(float *)(iVar20 + 0x728) * fVar79 +
                             *(float *)(iVar20 + 0x720) * fVar67;
                  local_80 = auVar91._0_4_;
                  fStack_7c = auVar91._4_4_;
                  fStack_78 = auVar91._8_4_;
                  fVar78 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * fStack_7c +
                           fVar88 * fStack_78 + fVar81 * (float)local_80;
                  fVar80 = *(float *)(iVar20 + 0x71c) * fVar94 + *(float *)(iVar20 + 0x714) * fVar84
                           + *(float *)(iVar20 + 0x718) * fVar88 +
                             *(float *)(iVar20 + 0x710) * fVar81;
                  fVar81 = *(float *)(iVar20 + 0x72c) * fVar94 + *(float *)(iVar20 + 0x724) * fVar84
                           + *(float *)(iVar20 + 0x728) * fVar88 +
                             *(float *)(iVar20 + 0x720) * fVar81;
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar84 = fVar83 * fVar83 + fVar67 * fVar67 + fVar86 * fVar86;
                    auVar27._4_4_ = fVar84;
                    auVar27._0_4_ = fVar84;
                    auVar27._8_4_ = fVar84;
                    auVar27._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar27,auVar27);
                    uVar22 = auVar25._0_4_;
                    fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                    fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar86;
                    fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                    fVar84 = fVar78 * fVar78 + fVar81 * fVar81 + fVar80 * fVar80;
                    auVar28._4_4_ = fVar84;
                    auVar28._0_4_ = fVar84;
                    auVar28._8_4_ = fVar84;
                    auVar28._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar28,auVar28);
                    uVar22 = auVar25._0_4_;
                    fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                    fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                    fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                  }
                  fVar84 = 0.0;
                  fVar94 = 0.0;
                  fVar95 = 1.0;
                  fVar103 = fVar84;
                  fVar104 = fVar94;
                  fVar126 = fVar95;
                }
                else {
                  pfVar1 = *(float **)((int)this + 0x9cc);
                  pfVar14 = (float *)(iVar20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar79 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                           fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                  fVar95 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                           pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar131 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar20 + 0x20 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar103 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                            fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                  fVar104 = pfVar1[7] * fVar94 + pfVar1[5] * fVar84 +
                            pfVar1[6] * fVar88 + pfVar1[4] * fVar81;
                  fVar126 = pfVar1[0xb] * fVar94 + pfVar1[9] * fVar84 +
                            pfVar1[10] * fVar88 + pfVar1[8] * fVar81;
                  pfVar14 = (float *)(iVar20 + 0x10 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar83 = fVar94 * pfVar1[0x1c3] + fVar84 * pfVar1[0x1c1] +
                           fVar88 * pfVar1[0x1c2] + fVar81 * pfVar1[0x1c0];
                  fVar86 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar67 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  pfVar14 = (float *)(iVar20 + 0x30 + param_3);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                  fVar78 = pfVar1[0x1c3] * fVar94 + pfVar1[0x1c1] * fVar84 +
                           pfVar1[0x1c2] * fVar88 + pfVar1[0x1c0] * fVar81;
                  fVar80 = pfVar1[0x1c7] * fVar94 + pfVar1[0x1c5] * fVar84 +
                           pfVar1[0x1c6] * fVar88 + pfVar1[0x1c4] * fVar81;
                  fVar81 = pfVar1[0x1cb] * fVar94 + pfVar1[0x1c9] * fVar84 +
                           pfVar1[0x1ca] * fVar88 + pfVar1[0x1c8] * fVar81;
                  if (*(int *)((int)this + 0x4cc) != 0) {
                    fVar84 = fVar83 * fVar83 + fVar67 * fVar67 + fVar86 * fVar86;
                    auVar24._4_4_ = fVar84;
                    auVar24._0_4_ = fVar84;
                    auVar24._8_4_ = fVar84;
                    auVar24._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar24,auVar24);
                    uVar22 = auVar25._0_4_;
                    fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar83;
                    fVar86 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar86;
                    fVar67 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar67;
                    fVar84 = fVar78 * fVar78 + fVar81 * fVar81 + fVar80 * fVar80;
                    auVar26._4_4_ = fVar84;
                    auVar26._0_4_ = fVar84;
                    auVar26._8_4_ = fVar84;
                    auVar26._12_4_ = fVar84;
                    auVar25 = rsqrtss(auVar26,auVar26);
                    uVar22 = auVar25._0_4_;
                    fVar78 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar78;
                    fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar80;
                    fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar22) * fVar81;
                  }
                  auVar96._0_4_ = fVar79 * fVar79;
                  auVar96._4_4_ = fVar95 * fVar95;
                  auVar96._8_4_ = fVar131 * fVar131;
                  auVar100._0_4_ = auVar96._0_4_ + auVar96._8_4_ + auVar96._4_4_;
                  auVar100._4_8_ = auVar96._4_8_;
                  auVar100._12_4_ = 0;
                  auVar25 = rsqrtss(auVar100,auVar100);
                  fVar88 = auVar25._0_4_;
                  auVar90._0_4_ = fVar103 * fVar103;
                  auVar90._4_4_ = fVar104 * fVar104;
                  auVar90._8_4_ = fVar126 * fVar126;
                  fVar84 = -(fVar88 * fVar79);
                  fVar94 = -(fVar88 * fVar95);
                  fVar95 = -(fVar88 * fVar131);
                  auVar92._0_4_ = auVar90._0_4_ + auVar90._8_4_ + auVar90._4_4_;
                  auVar92._4_8_ = auVar90._4_8_;
                  auVar92._12_4_ = 0;
                  auVar25 = rsqrtss(auVar92,auVar92);
                  fVar131 = auVar25._0_4_;
                  fVar79 = fVar84 * fVar83 + fVar95 * fVar67 + fVar94 * fVar86;
                  fVar88 = -(fVar131 * fVar103) * fVar78 + -(fVar131 * fVar126) * fVar81 +
                           -(fVar131 * fVar104) * fVar80;
                  fVar103 = -(fVar131 * fVar103);
                  fVar104 = -(fVar131 * fVar104);
                  fVar126 = -(fVar131 * fVar126);
                }
                *(ulonglong *)pfVar15 =
                     CONCAT44(fVar79 * 2.0 * fVar86 - fVar94,fVar79 * 2.0 * fVar83 - fVar84);
                pfVar15[2] = fVar79 * 2.0 * fVar67 - fVar95;
                *(ulonglong *)((int)pfVar15 + param_5) =
                     CONCAT44(fVar88 * 2.0 * fVar80 - fVar104,fVar88 * 2.0 * fVar78 - fVar103);
                *(float *)((int)pfVar15 + param_5 + 8) = fVar88 * 2.0 * fVar81 - fVar126;
                pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                local_20 = local_20 + 1;
              } while (local_20 < uVar12);
            }
            if (uVar18 != 0) {
              iVar20 = param_6 * 0x20;
              if (*(int *)((int)this + 0x4c8) == 0) {
                fVar67 = 0.0;
                fVar78 = 0.0;
                fVar79 = 1.0;
                pfVar14 = (float *)(iVar20 + -0x10 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                iVar20 = *(int *)((int)this + 0x9cc);
                auVar97._0_4_ = fVar88 * 2.0;
                auVar97._4_4_ = fVar88 * 2.0;
                auVar97._8_4_ = fVar88 * 2.0;
                fVar80 = fVar94 * *(float *)(iVar20 + 0x70c) + fVar84 * *(float *)(iVar20 + 0x704) +
                         fVar88 * *(float *)(iVar20 + 0x708) + fVar81 * *(float *)(iVar20 + 0x700);
                fVar83 = fVar94 * *(float *)(iVar20 + 0x71c) + fVar84 * *(float *)(iVar20 + 0x714) +
                         fVar88 * *(float *)(iVar20 + 0x718) + fVar81 * *(float *)(iVar20 + 0x710);
                fVar81 = fVar94 * *(float *)(iVar20 + 0x72c) + fVar84 * *(float *)(iVar20 + 0x724) +
                         fVar88 * *(float *)(iVar20 + 0x728) + fVar81 * *(float *)(iVar20 + 0x720);
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar84 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar30._4_4_ = fVar84;
                  auVar30._0_4_ = fVar84;
                  auVar30._8_4_ = fVar84;
                  auVar30._12_4_ = fVar84;
                  auVar25 = rsqrtss(auVar30,auVar30);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar84) & uVar12) * fVar81;
                }
              }
              else {
                pfVar1 = *(float **)((int)this + 0x9cc);
                pfVar14 = (float *)(iVar20 + -0x20 + param_3);
                fVar81 = *pfVar14;
                fVar84 = pfVar14[1];
                fVar88 = pfVar14[2];
                fVar94 = pfVar14[3];
                pfVar14 = (float *)(iVar20 + -0x10 + param_3);
                fVar67 = *pfVar14;
                fVar78 = pfVar14[1];
                fVar79 = pfVar14[2];
                fVar86 = pfVar14[3];
                fVar95 = fVar94 * pfVar1[3] + fVar84 * pfVar1[1] +
                         fVar88 * pfVar1[2] + fVar81 * *pfVar1;
                fVar103 = fVar94 * pfVar1[7] + fVar84 * pfVar1[5] +
                          fVar88 * pfVar1[6] + fVar81 * pfVar1[4];
                fVar84 = fVar94 * pfVar1[0xb] + fVar84 * pfVar1[9] +
                         fVar88 * pfVar1[10] + fVar81 * pfVar1[8];
                fVar80 = fVar86 * pfVar1[0x1c3] + fVar78 * pfVar1[0x1c1] +
                         fVar79 * pfVar1[0x1c2] + fVar67 * pfVar1[0x1c0];
                fVar83 = fVar86 * pfVar1[0x1c7] + fVar78 * pfVar1[0x1c5] +
                         fVar79 * pfVar1[0x1c6] + fVar67 * pfVar1[0x1c4];
                fVar81 = fVar86 * pfVar1[0x1cb] + fVar78 * pfVar1[0x1c9] +
                         fVar79 * pfVar1[0x1ca] + fVar67 * pfVar1[0x1c8];
                if (*(int *)((int)this + 0x4cc) != 0) {
                  fVar88 = fVar80 * fVar80 + fVar81 * fVar81 + fVar83 * fVar83;
                  auVar29._4_4_ = fVar88;
                  auVar29._0_4_ = fVar88;
                  auVar29._8_4_ = fVar88;
                  auVar29._12_4_ = fVar88;
                  auVar25 = rsqrtss(auVar29,auVar29);
                  uVar12 = auVar25._0_4_;
                  fVar80 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar80;
                  fVar83 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar83;
                  fVar81 = (float)(-(uint)(0.0 < fVar88) & uVar12) * fVar81;
                }
                auVar107._0_4_ = fVar95 * fVar95;
                auVar107._4_4_ = fVar103 * fVar103;
                auVar107._8_4_ = fVar84 * fVar84;
                auVar115._0_4_ = auVar107._0_4_ + auVar107._8_4_ + auVar107._4_4_;
                auVar115._4_8_ = auVar107._4_8_;
                auVar115._12_4_ = 0;
                auVar25 = rsqrtss(auVar115,auVar115);
                fVar88 = auVar25._0_4_;
                fVar67 = -(fVar88 * fVar95);
                fVar78 = -(fVar88 * fVar103);
                fVar79 = -(fVar88 * fVar84);
                fVar84 = fVar67 * fVar80 + fVar79 * fVar81 + fVar78 * fVar83;
                auVar97._0_4_ = fVar84 * 2.0;
                auVar97._4_4_ = fVar84 * 2.0;
                auVar97._8_4_ = fVar84 * 2.0;
              }
              *(ulonglong *)pfVar15 =
                   CONCAT44(auVar97._4_4_ * fVar83 - fVar78,auVar97._0_4_ * fVar80 - fVar67);
              pfVar15[2] = auVar97._8_4_ * fVar81 - fVar79;
            }
          }
        }
        else {
          cVar4 = *(char *)((int)piVar19 + 9);
          if (cVar4 == '\x01') {
            if (cVar3 == '\x01') {
              local_20 = *(int *)((int)this + 0x9cc);
              local_1c = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar81 = 0.0;
                  }
                  else {
                    fVar88 = 1.0;
                    pfVar14 = (float *)((param_7 + local_1c * 2) * piVar19[1] + *piVar19);
                    fVar81 = *pfVar14;
                    fVar84 = *(float *)((int)pfVar14 + piVar19[1]);
                  }
                  local_1c = local_1c + 1;
                  pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                  fVar94 = *pfVar14;
                  fVar67 = pfVar14[1];
                  fVar78 = pfVar14[2];
                  fVar79 = pfVar14[3];
                  *pfVar15 = fVar79 * 0.0 + fVar67 * fVar88 + fVar78 * 0.0 + fVar94 * fVar81;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar79 * 0.0 + fVar67 * fVar88 + fVar78 * 0.0 + fVar94 * fVar84;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_1c < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar81 = 0.0;
                  fVar84 = 0.0;
                }
                else {
                  fVar81 = *(float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar84 = 1.0;
                }
                fVar88 = 0.0;
LAB_1000d23e:
                pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                fVar81 = pfVar14[2] * 0.0 + fVar81 * *pfVar14;
                fVar84 = fVar88 * pfVar14[3] + fVar84 * pfVar14[1];
LAB_1000c708:
                *pfVar15 = fVar84 + fVar81;
              }
            }
            else if (cVar3 == '\x02') {
              local_20 = *(int *)((int)this + 0x9cc);
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar84 = 0.0;
                    fVar81 = 0.0;
                    fVar88 = 0.0;
                  }
                  else {
                    fVar88 = 1.0;
                    pfVar14 = (float *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    fVar81 = *pfVar14;
                    fVar84 = *(float *)((int)pfVar14 + piVar19[1]);
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                  fVar94 = *pfVar14;
                  fVar67 = pfVar14[1];
                  fVar78 = pfVar14[2];
                  fVar79 = pfVar14[3];
                  pfVar14 = (float *)(local_20 + 0x90 + iVar21 * 0x40);
                  fVar80 = *pfVar14;
                  fVar83 = pfVar14[1];
                  fVar86 = pfVar14[2];
                  fVar95 = pfVar14[3];
                  *pfVar15 = fVar79 * 0.0 + fVar67 * fVar88 + fVar78 * 0.0 + fVar94 * fVar81;
                  pfVar15[1] = fVar95 * 0.0 + fVar83 * fVar88 + fVar86 * 0.0 + fVar80 * fVar81;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar79 * 0.0 + fVar88 * fVar67 + fVar78 * 0.0 + fVar84 * fVar94;
                  ((float *)((int)pfVar15 + param_5))[1] =
                       fVar95 * 0.0 + fVar83 * fVar88 + fVar86 * 0.0 + fVar80 * fVar84;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar88 = 0.0;
                  fVar94 = 0.0;
                }
                else {
                  fVar88 = *(float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar94 = 1.0;
                }
                fVar67 = 0.0;
                fVar81 = 0.0;
LAB_1000c5e2:
                pfVar14 = (float *)(local_20 + 0x90 + iVar21 * 0x40);
                fVar80 = fVar88 * *pfVar14;
                fVar83 = fVar94 * pfVar14[1];
                fVar84 = fVar81 * pfVar14[2];
                fVar79 = fVar67 * pfVar14[3];
                pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                fVar88 = fVar88 * *pfVar14;
                fVar94 = fVar94 * pfVar14[1];
                fVar81 = fVar81 * pfVar14[2];
                fVar67 = fVar67 * pfVar14[3];
                goto LAB_1000c600;
              }
            }
            else if (cVar3 == '\x03') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    local_60._0_4_ = 0.0;
                    local_60._4_4_ = 0.0;
                  }
                  else {
                    fVar84 = 1.0;
                    pfVar14 = (float *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    local_60._0_4_ = *(float *)((int)pfVar14 + piVar19[1]);
                    fVar81 = *pfVar14;
                    local_60._4_4_ = 1.0;
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  fVar88 = *pfVar14;
                  fVar94 = pfVar14[1];
                  fVar67 = pfVar14[2];
                  fVar78 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar79 = *pfVar14;
                  fVar80 = pfVar14[1];
                  fVar83 = pfVar14[2];
                  fVar86 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar95 = *pfVar14;
                  fVar103 = pfVar14[1];
                  fVar104 = pfVar14[2];
                  fVar126 = pfVar14[3];
                  *(ulonglong *)pfVar15 =
                       CONCAT44(fVar86 * 0.0 + fVar80 * fVar84 + fVar83 * 0.0 + fVar79 * fVar81,
                                fVar78 * 0.0 + fVar84 * fVar94 + fVar67 * 0.0 + fVar81 * fVar88);
                  pfVar15[2] = fVar126 * 0.0 + fVar103 * fVar84 + fVar104 * 0.0 + fVar95 * fVar81;
                  *(ulonglong *)((int)pfVar15 + param_5) =
                       CONCAT44(fVar86 * 0.0 + fVar80 * local_60._4_4_ +
                                fVar83 * 0.0 + fVar79 * (float)local_60,
                                fVar78 * 0.0 + fVar94 * local_60._4_4_ +
                                fVar67 * 0.0 + fVar88 * (float)local_60);
                  pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                  *(float *)((int)pfVar15 + param_5 + 8) =
                       fVar126 * 0.0 + fVar103 * local_60._4_4_ +
                       fVar104 * 0.0 + fVar95 * (float)local_60;
                  pfVar15 = pfVar14;
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar84 = 0.0;
                  fVar78 = 0.0;
                }
                else {
                  fVar84 = *(float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar78 = 1.0;
                }
                fVar88 = 0.0;
                fVar81 = 0.0;
                goto LAB_1000c486;
              }
            }
            else if (cVar3 == '\x04') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    local_70._0_4_ = 0.0;
                    local_70._4_4_ = 0.0;
                  }
                  else {
                    fVar84 = 1.0;
                    pfVar14 = (float *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    local_70._0_4_ = *(float *)((int)pfVar14 + piVar19[1]);
                    fVar81 = *pfVar14;
                    local_70._4_4_ = 1.0;
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  pfVar1 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar88 = *pfVar1;
                  fVar94 = pfVar1[1];
                  fVar67 = pfVar1[2];
                  fVar78 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar79 = *pfVar1;
                  fVar80 = pfVar1[1];
                  fVar83 = pfVar1[2];
                  fVar86 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0xb0 + iVar11);
                  fVar95 = *pfVar1;
                  fVar103 = pfVar1[1];
                  fVar104 = pfVar1[2];
                  fVar126 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0x80 + iVar11);
                  auVar72._0_4_ =
                       pfVar1[3] * 0.0 + local_70._4_4_ * pfVar1[1] +
                       pfVar1[2] * 0.0 + (float)local_70 * *pfVar1;
                  auVar72._4_4_ =
                       fVar78 * 0.0 + fVar94 * local_70._4_4_ +
                       fVar67 * 0.0 + fVar88 * (float)local_70;
                  auVar72._8_4_ =
                       fVar86 * 0.0 + fVar80 * local_70._4_4_ +
                       fVar83 * 0.0 + fVar79 * (float)local_70;
                  auVar72._12_4_ =
                       fVar126 * 0.0 + fVar103 * local_70._4_4_ +
                       fVar104 * 0.0 + fVar95 * (float)local_70;
                  *pfVar15 = pfVar14[3] * 0.0 + pfVar14[1] * fVar84 +
                             pfVar14[2] * 0.0 + *pfVar14 * fVar81;
                  pfVar15[1] = fVar78 * 0.0 + fVar94 * fVar84 + fVar67 * 0.0 + fVar88 * fVar81;
                  pfVar15[2] = fVar80 * fVar84 + fVar86 * 0.0 + fVar79 * fVar81 + fVar83 * 0.0;
                  pfVar15[3] = fVar103 * fVar84 + fVar126 * 0.0 + fVar95 * fVar81 + fVar104 * 0.0;
                  *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar72;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar95 = 0.0;
                  fVar103 = 0.0;
                }
                else {
                  fVar95 = *(float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar103 = 1.0;
                }
                fVar126 = 0.0;
                fVar104 = 0.0;
LAB_1000c2de:
                iVar21 = iVar21 * 0x40;
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                pfVar1 = (float *)(iVar20 + 0x90 + iVar21);
                pfVar2 = (float *)(iVar20 + 0xa0 + iVar21);
                fVar81 = fVar95 * *pfVar2;
                fVar84 = fVar103 * pfVar2[1];
                fVar67 = fVar104 * pfVar2[2];
                fVar78 = fVar126 * pfVar2[3];
                pfVar2 = (float *)(iVar20 + 0xb0 + iVar21);
                fVar88 = fVar95 * *pfVar2;
                fVar94 = fVar103 * pfVar2[1];
                fVar79 = fVar104 * pfVar2[2];
                fVar80 = fVar126 * pfVar2[3];
                fVar83 = fVar104 * pfVar14[2] + fVar95 * *pfVar14;
                fVar86 = fVar126 * pfVar14[3] + fVar103 * pfVar14[1];
                fVar95 = fVar104 * pfVar1[2] + fVar95 * *pfVar1;
                fVar103 = fVar126 * pfVar1[3] + fVar103 * pfVar1[1];
                goto LAB_1000c320;
              }
            }
          }
          else if (cVar4 == '\x02') {
            if (cVar3 == '\x01') {
              local_20 = *(int *)((int)this + 0x9cc);
              local_1c = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    auVar71 = ZEXT816(0);
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                  }
                  else {
                    fVar81 = (float)DAT_10060100;
                    fVar84 = DAT_10060100._4_4_;
                    puVar16 = (undefined8 *)((param_7 + local_1c * 2) * piVar19[1] + *piVar19);
                    uVar89 = *puVar16;
                    fVar88 = (float)uVar89;
                    fVar94 = (float)((ulonglong)uVar89 >> 0x20);
                    auVar71._8_8_ = (longlong)DAT_10060100;
                    auVar71._0_8_ = *(undefined8 *)((int)puVar16 + piVar19[1]);
                  }
                  local_1c = local_1c + 1;
                  pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                  fVar67 = *pfVar14;
                  fVar78 = pfVar14[1];
                  fVar79 = pfVar14[2];
                  fVar80 = pfVar14[3];
                  *pfVar15 = fVar80 * fVar84 + fVar78 * fVar94 + fVar79 * fVar81 + fVar67 * fVar88;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar80 * auVar71._12_4_ + fVar78 * auVar71._4_4_ +
                       fVar79 * auVar71._8_4_ + fVar67 * auVar71._0_4_;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_1c < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar81 = 0.0;
                  fVar84 = 0.0;
                  fVar88 = 0.0;
                }
                else {
                  fVar88 = 1.0;
                  uVar89 = *(undefined8 *)(*piVar19 + piVar19[1] * iVar10);
                  fVar81 = (float)uVar89;
                  fVar84 = (float)((ulonglong)uVar89 >> 0x20);
                }
                goto LAB_1000d23e;
              }
            }
            else if (cVar3 == '\x02') {
              local_20 = *(int *)((int)this + 0x9cc);
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                    fVar67 = 0.0;
                  }
                  else {
                    fVar67 = 1.0;
                    pfVar14 = (float *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    fVar88 = *pfVar14;
                    fVar94 = pfVar14[1];
                    pfVar14 = (float *)((int)pfVar14 + piVar19[1]);
                    fVar81 = *pfVar14;
                    fVar84 = pfVar14[1];
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                  fVar78 = *pfVar14;
                  fVar79 = pfVar14[1];
                  fVar80 = pfVar14[2];
                  fVar83 = pfVar14[3];
                  pfVar14 = (float *)(local_20 + 0x90 + iVar21 * 0x40);
                  fVar86 = *pfVar14;
                  fVar95 = pfVar14[1];
                  fVar103 = pfVar14[2];
                  fVar104 = pfVar14[3];
                  *(ulonglong *)pfVar15 =
                       CONCAT44(fVar104 * fVar67 + fVar95 * fVar94 + fVar103 * 0.0 + fVar86 * fVar88
                                ,fVar67 * fVar83 + fVar94 * fVar79 + fVar80 * 0.0 + fVar88 * fVar78)
                  ;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar83 * fVar67 + fVar79 * fVar84 + fVar80 * 0.0 + fVar78 * fVar81;
                  ((float *)((int)pfVar15 + param_5))[1] =
                       fVar104 * fVar67 + fVar95 * fVar84 + fVar103 * 0.0 + fVar86 * fVar81;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar88 = 0.0;
                  fVar94 = 0.0;
                  fVar67 = 0.0;
                }
                else {
                  fVar67 = 1.0;
                  uVar89 = *(undefined8 *)(*piVar19 + piVar19[1] * iVar10);
                  fVar88 = (float)uVar89;
                  fVar94 = (float)((ulonglong)uVar89 >> 0x20);
                }
                fVar81 = 0.0;
                goto LAB_1000c5e2;
              }
            }
            else if (cVar3 == '\x03') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar81 = 0.0;
                    local_60 = 0;
                    fStack_54 = 0.0;
                  }
                  else {
                    fVar81 = 1.0;
                    puVar16 = (undefined8 *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    local_60 = *(undefined8 *)((int)puVar16 + piVar19[1]);
                    uVar89 = *puVar16;
                    fVar84 = (float)uVar89;
                    fVar88 = (float)((ulonglong)uVar89 >> 0x20);
                    fStack_54 = 1.0;
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  fVar94 = *pfVar14;
                  fVar67 = pfVar14[1];
                  fVar78 = pfVar14[2];
                  fVar79 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar80 = *pfVar14;
                  fVar83 = pfVar14[1];
                  fVar86 = pfVar14[2];
                  fVar95 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar103 = *pfVar14;
                  fVar104 = pfVar14[1];
                  fVar126 = pfVar14[2];
                  fVar131 = pfVar14[3];
                  *(ulonglong *)pfVar15 =
                       CONCAT44(fVar95 * fVar81 + fVar83 * fVar88 + fVar86 * 0.0 + fVar80 * fVar84,
                                fVar79 * fVar81 + fVar67 * fVar88 + fVar78 * 0.0 + fVar94 * fVar84);
                  pfVar15[2] = fVar131 * fVar81 + fVar104 * fVar88 +
                               fVar126 * 0.0 + fVar103 * fVar84;
                  *(ulonglong *)((int)pfVar15 + param_5) =
                       CONCAT44(fVar95 * fStack_54 + fVar83 * local_60._4_4_ +
                                fVar86 * 0.0 + fVar80 * (float)local_60,
                                fVar79 * fStack_54 + fVar67 * local_60._4_4_ +
                                fVar78 * 0.0 + fVar94 * (float)local_60);
                  pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                  *(float *)((int)pfVar15 + param_5 + 8) =
                       fVar131 * fStack_54 + fVar104 * local_60._4_4_ +
                       fVar126 * 0.0 + fVar103 * (float)local_60;
                  pfVar15 = pfVar14;
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar84 = 0.0;
                  fVar78 = 0.0;
                  fVar88 = 0.0;
                }
                else {
                  fVar88 = 1.0;
                  pfVar15 = (float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar84 = *pfVar15;
                  fVar78 = pfVar15[1];
                }
                fVar81 = 0.0;
                goto LAB_1000c486;
              }
            }
            else if (cVar3 == '\x04') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    local_70 = 0;
                    fStack_64 = 0.0;
                  }
                  else {
                    fVar88 = 1.0;
                    pfVar14 = (float *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    local_70 = *(undefined8 *)((int)pfVar14 + piVar19[1]);
                    fVar81 = *pfVar14;
                    fVar84 = pfVar14[1];
                    fStack_64 = 1.0;
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  pfVar1 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar94 = *pfVar1;
                  fVar67 = pfVar1[1];
                  fVar78 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar80 = *pfVar1;
                  fVar83 = pfVar1[1];
                  fVar86 = pfVar1[2];
                  fVar95 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0xb0 + iVar11);
                  fVar103 = *pfVar1;
                  fVar104 = pfVar1[1];
                  fVar126 = pfVar1[2];
                  fVar131 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0x80 + iVar11);
                  auVar70._0_4_ =
                       fStack_64 * pfVar1[3] + local_70._4_4_ * pfVar1[1] +
                       pfVar1[2] * 0.0 + (float)local_70 * *pfVar1;
                  auVar70._4_4_ =
                       fVar79 * fStack_64 + fVar67 * local_70._4_4_ +
                       fVar78 * 0.0 + fVar94 * (float)local_70;
                  auVar70._8_4_ =
                       fVar95 * fStack_64 + fVar83 * local_70._4_4_ +
                       fVar86 * 0.0 + fVar80 * (float)local_70;
                  auVar70._12_4_ =
                       fVar131 * fStack_64 + fVar104 * local_70._4_4_ +
                       fVar126 * 0.0 + fVar103 * (float)local_70;
                  *pfVar15 = pfVar14[3] * fVar88 + pfVar14[1] * fVar84 +
                             pfVar14[2] * 0.0 + *pfVar14 * fVar81;
                  pfVar15[1] = fVar79 * fVar88 + fVar67 * fVar84 + fVar78 * 0.0 + fVar94 * fVar81;
                  pfVar15[2] = fVar95 * fVar88 + fVar83 * fVar84 + fVar86 * 0.0 + fVar80 * fVar81;
                  pfVar15[3] = fVar131 * fVar88 + fVar104 * fVar84 +
                               fVar126 * 0.0 + fVar103 * fVar81;
                  *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar70;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar95 = 0.0;
                  fVar103 = 0.0;
                  fVar126 = 0.0;
                }
                else {
                  fVar126 = 1.0;
                  pfVar14 = (float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar95 = *pfVar14;
                  fVar103 = pfVar14[1];
                }
                fVar104 = 0.0;
                goto LAB_1000c2de;
              }
            }
          }
          else if (cVar4 == '\x03') {
            if (cVar3 == '\x01') {
              iVar20 = *(int *)((int)this + 0x9cc);
              local_1c = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                    fVar84 = 0.0;
                    fVar79 = 0.0;
                    fVar67 = 0.0;
                    fVar78 = 0.0;
                    fVar81 = 0.0;
                    fVar80 = 0.0;
                  }
                  else {
                    iVar11 = piVar19[1];
                    pfVar14 = (float *)((param_7 + local_1c * 2) * iVar11 + *piVar19);
                    fVar81 = pfVar14[2];
                    fVar67 = *pfVar14;
                    fVar78 = pfVar14[1];
                    fVar88 = *(float *)((int)pfVar14 + iVar11);
                    fVar94 = ((float *)((int)pfVar14 + iVar11))[1];
                    fVar80 = 1.0;
                    fVar84 = *(float *)((int)pfVar14 + iVar11 + 8);
                    fVar79 = 1.0;
                  }
                  local_1c = local_1c + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar21 * 0x40);
                  fVar83 = *pfVar14;
                  fVar86 = pfVar14[1];
                  fVar95 = pfVar14[2];
                  fVar103 = pfVar14[3];
                  *pfVar15 = fVar103 * fVar80 + fVar86 * fVar78 + fVar95 * fVar81 + fVar83 * fVar67;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar103 * fVar79 + fVar86 * fVar94 + fVar95 * fVar84 + fVar83 * fVar88;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_1c < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar88 = 0.0;
                  fVar94 = 0.0;
                  fVar81 = 0.0;
                  fVar84 = 0.0;
                }
                else {
                  fVar81 = *(float *)(*piVar19 + 8 + piVar19[1] * iVar10);
                  uVar89 = *(undefined8 *)(*piVar19 + piVar19[1] * iVar10);
                  fVar88 = (float)uVar89;
                  fVar94 = (float)((ulonglong)uVar89 >> 0x20);
                  fVar84 = 1.0;
                }
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21 * 0x40);
                fVar81 = fVar81 * pfVar14[2] + fVar88 * *pfVar14;
                fVar84 = fVar84 * pfVar14[3] + fVar94 * pfVar14[1];
                goto LAB_1000c708;
              }
            }
            else if (cVar3 == '\x02') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar21 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar67 = 0.0;
                    fVar78 = 0.0;
                    fVar84 = 0.0;
                    fVar79 = 0.0;
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                    fVar81 = 0.0;
                    fVar80 = 0.0;
                  }
                  else {
                    iVar11 = piVar19[1];
                    pfVar14 = (float *)((param_7 + local_14 * 2) * iVar11 + *piVar19);
                    fVar81 = pfVar14[2];
                    fVar88 = *pfVar14;
                    fVar94 = pfVar14[1];
                    fVar67 = *(float *)((int)pfVar14 + iVar11);
                    fVar78 = ((float *)((int)pfVar14 + iVar11))[1];
                    fVar80 = 1.0;
                    fVar84 = *(float *)((int)pfVar14 + iVar11 + 8);
                    fVar79 = 1.0;
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                  fVar83 = *pfVar14;
                  fVar86 = pfVar14[1];
                  fVar95 = pfVar14[2];
                  fVar103 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                  fVar104 = *pfVar14;
                  fVar126 = pfVar14[1];
                  fVar131 = pfVar14[2];
                  fVar132 = pfVar14[3];
                  *(ulonglong *)pfVar15 =
                       CONCAT44(fVar132 * fVar80 + fVar126 * fVar94 +
                                fVar131 * fVar81 + fVar104 * fVar88,
                                fVar103 * fVar80 + fVar86 * fVar94 +
                                fVar95 * fVar81 + fVar83 * fVar88);
                  *(float *)((int)pfVar15 + param_5) =
                       fVar103 * fVar79 + fVar86 * fVar78 + fVar95 * fVar84 + fVar83 * fVar67;
                  ((float *)((int)pfVar15 + param_5))[1] =
                       fVar132 * fVar79 + fVar126 * fVar78 + fVar131 * fVar84 + fVar104 * fVar67;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar80 = 0.0;
                  fVar83 = 0.0;
                  fVar84 = 0.0;
                  fVar79 = 0.0;
                }
                else {
                  fVar84 = *(float *)(*piVar19 + 8 + piVar19[1] * iVar10);
                  uVar89 = *(undefined8 *)(*piVar19 + piVar19[1] * iVar10);
                  fVar80 = (float)uVar89;
                  fVar83 = (float)((ulonglong)uVar89 >> 0x20);
                  fVar79 = 1.0;
                }
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21);
                fVar88 = fVar80 * *pfVar14;
                fVar94 = fVar83 * pfVar14[1];
                fVar81 = fVar84 * pfVar14[2];
                fVar67 = fVar79 * pfVar14[3];
                pfVar14 = (float *)(iVar20 + 0x90 + iVar21);
                fVar80 = fVar80 * *pfVar14;
                fVar83 = fVar83 * pfVar14[1];
                fVar84 = fVar84 * pfVar14[2];
                fVar79 = fVar79 * pfVar14[3];
                goto LAB_1000c600;
              }
            }
            else if (cVar3 == '\x03') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar81 = 0.0;
                    fVar94 = 0.0;
                    local_60 = 0;
                    fStack_58 = 0.0;
                    fStack_54 = 0.0;
                  }
                  else {
                    iVar17 = piVar19[1];
                    pfVar14 = (float *)((param_7 + local_14 * 2) * iVar17 + *piVar19);
                    fVar81 = pfVar14[2];
                    fVar84 = *pfVar14;
                    fVar88 = pfVar14[1];
                    local_60 = *(undefined8 *)((int)pfVar14 + iVar17);
                    fVar94 = 1.0;
                    fStack_58 = *(float *)((int)pfVar14 + iVar17 + 8);
                    fStack_54 = 1.0;
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  fVar67 = *pfVar14;
                  fVar78 = pfVar14[1];
                  fVar79 = pfVar14[2];
                  fVar80 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar83 = *pfVar14;
                  fVar86 = pfVar14[1];
                  fVar95 = pfVar14[2];
                  fVar103 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar104 = *pfVar14;
                  fVar126 = pfVar14[1];
                  fVar131 = pfVar14[2];
                  fVar132 = pfVar14[3];
                  *(ulonglong *)pfVar15 =
                       CONCAT44(fVar103 * fVar94 + fVar86 * fVar88 +
                                fVar95 * fVar81 + fVar83 * fVar84,
                                fVar94 * fVar80 + fVar88 * fVar78 +
                                fVar81 * fVar79 + fVar84 * fVar67);
                  pfVar15[2] = fVar132 * fVar94 + fVar126 * fVar88 +
                               fVar131 * fVar81 + fVar104 * fVar84;
                  *(ulonglong *)((int)pfVar15 + param_5) =
                       CONCAT44(fVar103 * fStack_54 + fVar86 * local_60._4_4_ +
                                fVar95 * fStack_58 + fVar83 * (float)local_60,
                                fStack_54 * fVar80 + local_60._4_4_ * fVar78 +
                                fStack_58 * fVar79 + (float)local_60 * fVar67);
                  pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                  *(float *)((int)pfVar15 + param_5 + 8) =
                       fVar132 * fStack_54 + fVar126 * local_60._4_4_ +
                       fVar131 * fStack_58 + fVar104 * (float)local_60;
                  pfVar15 = pfVar14;
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar84 = 0.0;
                  fVar78 = 0.0;
                  fVar81 = 0.0;
                  fVar88 = 0.0;
                }
                else {
                  fVar81 = *(float *)(*piVar19 + 8 + piVar19[1] * iVar10);
                  pfVar15 = (float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar84 = *pfVar15;
                  fVar78 = pfVar15[1];
                  fVar88 = 1.0;
                }
                goto LAB_1000c486;
              }
            }
            else if (cVar3 == '\x04') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar81 = 0.0;
                    fVar94 = 0.0;
                    _local_80 = ZEXT816(0);
                  }
                  else {
                    iVar17 = piVar19[1];
                    pfVar14 = (float *)((param_7 + local_14 * 2) * iVar17 + *piVar19);
                    fVar81 = pfVar14[2];
                    fVar84 = *pfVar14;
                    fVar88 = pfVar14[1];
                    fVar94 = 1.0;
                    fStack_78 = (float)*(undefined4 *)((int)pfVar14 + iVar17 + 8);
                    _local_80 = *(undefined8 *)((int)pfVar14 + iVar17);
                    fStack_74 = 1.0;
                  }
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  pfVar1 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar67 = *pfVar1;
                  fVar78 = pfVar1[1];
                  fVar79 = pfVar1[2];
                  fVar80 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar83 = *pfVar1;
                  fVar86 = pfVar1[1];
                  fVar95 = pfVar1[2];
                  fVar103 = pfVar1[3];
                  pfVar1 = (float *)(iVar20 + 0xb0 + iVar11);
                  fVar104 = *pfVar1;
                  fVar126 = pfVar1[1];
                  fVar131 = pfVar1[2];
                  fVar132 = pfVar1[3];
                  local_14 = local_14 + 1;
                  auVar69._0_4_ =
                       pfVar14[3] * fStack_74 + pfVar14[1] * fStack_7c +
                       pfVar14[2] * fStack_78 + *pfVar14 * (float)local_80;
                  auVar69._4_4_ =
                       fVar80 * fStack_74 + fVar78 * fStack_7c +
                       fVar79 * fStack_78 + fVar67 * (float)local_80;
                  auVar69._8_4_ =
                       fVar103 * fStack_74 + fVar86 * fStack_7c +
                       fVar95 * fStack_78 + fVar83 * (float)local_80;
                  auVar69._12_4_ =
                       fVar132 * fStack_74 + fVar126 * fStack_7c +
                       fVar131 * fStack_78 + fVar104 * (float)local_80;
                  *pfVar15 = pfVar14[3] * fVar94 + pfVar14[1] * fVar88 +
                             pfVar14[2] * fVar81 + *pfVar14 * fVar84;
                  pfVar15[1] = fVar80 * fVar94 + fVar78 * fVar88 + fVar79 * fVar81 + fVar67 * fVar84
                  ;
                  pfVar15[2] = fVar103 * fVar94 + fVar86 * fVar88 +
                               fVar95 * fVar81 + fVar83 * fVar84;
                  pfVar15[3] = fVar132 * fVar94 + fVar126 * fVar88 +
                               fVar131 * fVar81 + fVar104 * fVar84;
                  *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar69;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar95 = 0.0;
                  fVar103 = 0.0;
                  fVar104 = 0.0;
                  fVar126 = 0.0;
                }
                else {
                  fVar104 = *(float *)(*piVar19 + 8 + piVar19[1] * iVar10);
                  pfVar14 = (float *)(*piVar19 + piVar19[1] * iVar10);
                  fVar95 = *pfVar14;
                  fVar103 = pfVar14[1];
                  fVar126 = 1.0;
                }
                goto LAB_1000c2de;
              }
            }
          }
          else if (cVar4 == '\x04') {
            if (cVar3 == '\x01') {
              iVar20 = *(int *)((int)this + 0x9cc);
              if (param_6 >> 1 != 0) {
                uVar12 = 0;
                do {
                  if (*piVar19 == 0) {
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                    fVar67 = 0.0;
                    fVar78 = 0.0;
                    fVar79 = 0.0;
                    fVar80 = 0.0;
                  }
                  else {
                    pfVar14 = (float *)((param_7 + uVar12 * 2) * piVar19[1] + *piVar19);
                    fVar67 = *pfVar14;
                    fVar78 = pfVar14[1];
                    fVar79 = pfVar14[2];
                    fVar80 = pfVar14[3];
                    pfVar14 = (float *)(piVar19[1] + (int)pfVar14);
                    fVar81 = *pfVar14;
                    fVar84 = pfVar14[1];
                    fVar88 = pfVar14[2];
                    fVar94 = pfVar14[3];
                  }
                  uVar12 = uVar12 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar21 * 0x40);
                  fVar83 = *pfVar14;
                  fVar86 = pfVar14[1];
                  fVar95 = pfVar14[2];
                  fVar103 = pfVar14[3];
                  *pfVar15 = fVar80 * fVar103 + fVar78 * fVar86 + fVar79 * fVar95 + fVar67 * fVar83;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar94 * fVar103 + fVar84 * fVar86 + fVar88 * fVar95 + fVar81 * fVar83;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (uVar12 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar81 = 0.0;
                  fVar84 = 0.0;
                  fVar88 = 0.0;
                  fVar94 = 0.0;
                }
                else {
                  pfVar14 = (float *)(piVar19[1] * iVar10 + *piVar19);
                  fVar81 = *pfVar14;
                  fVar84 = pfVar14[1];
                  fVar88 = pfVar14[2];
                  fVar94 = pfVar14[3];
                }
                pfVar14 = (float *)(iVar20 + 0x80 + iVar21 * 0x40);
                fVar81 = fVar88 * pfVar14[2] + fVar81 * *pfVar14;
                fVar84 = fVar94 * pfVar14[3] + fVar84 * pfVar14[1];
                goto LAB_1000c708;
              }
            }
            else if (cVar3 == '\x02') {
              local_20 = *(int *)((int)this + 0x9cc);
              if (param_6 >> 1 != 0) {
                uVar12 = 0;
                do {
                  if (*piVar19 == 0) {
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                    fVar67 = 0.0;
                    fVar78 = 0.0;
                    fVar79 = 0.0;
                    fVar80 = 0.0;
                  }
                  else {
                    pfVar14 = (float *)((param_7 + uVar12 * 2) * piVar19[1] + *piVar19);
                    fVar67 = *pfVar14;
                    fVar78 = pfVar14[1];
                    fVar79 = pfVar14[2];
                    fVar80 = pfVar14[3];
                    pfVar14 = (float *)(piVar19[1] + (int)pfVar14);
                    fVar81 = *pfVar14;
                    fVar84 = pfVar14[1];
                    fVar88 = pfVar14[2];
                    fVar94 = pfVar14[3];
                  }
                  uVar12 = uVar12 + 1;
                  pfVar14 = (float *)(local_20 + 0x80 + iVar21 * 0x40);
                  fVar83 = *pfVar14;
                  fVar86 = pfVar14[1];
                  fVar95 = pfVar14[2];
                  fVar103 = pfVar14[3];
                  pfVar14 = (float *)(local_20 + 0x90 + iVar21 * 0x40);
                  fVar104 = *pfVar14;
                  fVar126 = pfVar14[1];
                  fVar131 = pfVar14[2];
                  fVar132 = pfVar14[3];
                  *pfVar15 = fVar80 * fVar103 + fVar78 * fVar86 + fVar79 * fVar95 + fVar67 * fVar83;
                  pfVar15[1] = fVar132 * fVar80 + fVar126 * fVar78 +
                               fVar131 * fVar79 + fVar104 * fVar67;
                  *(float *)((int)pfVar15 + param_5) =
                       fVar94 * fVar103 + fVar84 * fVar86 + fVar88 * fVar95 + fVar81 * fVar83;
                  ((float *)((int)pfVar15 + param_5))[1] =
                       fVar132 * fVar94 + fVar126 * fVar84 + fVar131 * fVar88 + fVar104 * fVar81;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (uVar12 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar88 = 0.0;
                  fVar94 = 0.0;
                  fVar81 = 0.0;
                  fVar67 = 0.0;
                }
                else {
                  pfVar14 = (float *)(piVar19[1] * iVar10 + *piVar19);
                  fVar88 = *pfVar14;
                  fVar94 = pfVar14[1];
                  fVar81 = pfVar14[2];
                  fVar67 = pfVar14[3];
                }
                goto LAB_1000c5e2;
              }
            }
            else if (cVar3 == '\x03') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_14 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    fVar67 = 0.0;
                    fVar78 = 0.0;
                    fVar79 = 0.0;
                    fVar80 = 0.0;
                    fVar81 = 0.0;
                    fVar84 = 0.0;
                    fVar88 = 0.0;
                    fVar94 = 0.0;
                  }
                  else {
                    pfVar14 = (float *)((param_7 + local_14 * 2) * piVar19[1] + *piVar19);
                    fVar81 = *pfVar14;
                    fVar84 = pfVar14[1];
                    fVar88 = pfVar14[2];
                    fVar94 = pfVar14[3];
                    pfVar14 = (float *)(piVar19[1] + (int)pfVar14);
                    fVar67 = *pfVar14;
                    fVar78 = pfVar14[1];
                    fVar79 = pfVar14[2];
                    fVar80 = pfVar14[3];
                  }
                  local_14 = local_14 + 1;
                  pfVar14 = (float *)(iVar20 + 0x80 + iVar11);
                  fVar83 = *pfVar14;
                  fVar86 = pfVar14[1];
                  fVar95 = pfVar14[2];
                  fVar103 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar104 = *pfVar14;
                  fVar126 = pfVar14[1];
                  fVar131 = pfVar14[2];
                  fVar132 = pfVar14[3];
                  pfVar14 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar82 = *pfVar14;
                  fVar85 = pfVar14[1];
                  fVar87 = pfVar14[2];
                  fVar106 = pfVar14[3];
                  *(ulonglong *)pfVar15 =
                       CONCAT44(fVar132 * fVar94 + fVar126 * fVar84 +
                                fVar131 * fVar88 + fVar104 * fVar81,
                                fVar94 * fVar103 + fVar84 * fVar86 +
                                fVar88 * fVar95 + fVar81 * fVar83);
                  pfVar15[2] = fVar106 * fVar94 + fVar85 * fVar84 +
                               fVar87 * fVar88 + fVar82 * fVar81;
                  *(ulonglong *)((int)pfVar15 + param_5) =
                       CONCAT44(fVar132 * fVar80 + fVar126 * fVar78 +
                                fVar131 * fVar79 + fVar104 * fVar67,
                                fVar103 * fVar80 + fVar86 * fVar78 +
                                fVar95 * fVar79 + fVar83 * fVar67);
                  pfVar14 = (float *)((int)pfVar15 + param_5 * 2);
                  *(float *)((int)pfVar15 + param_5 + 8) =
                       fVar106 * fVar80 + fVar85 * fVar78 + fVar87 * fVar79 + fVar82 * fVar67;
                  pfVar15 = pfVar14;
                } while (local_14 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar84 = 0.0;
                  fVar78 = 0.0;
                  fVar81 = 0.0;
                  fVar88 = 0.0;
                }
                else {
                  pfVar15 = (float *)(piVar19[1] * iVar10 + *piVar19);
                  fVar84 = *pfVar15;
                  fVar78 = pfVar15[1];
                  fVar81 = pfVar15[2];
                  fVar88 = pfVar15[3];
                }
                goto LAB_1000c486;
              }
            }
            else if (cVar3 == '\x04') {
              iVar20 = *(int *)((int)this + 0x9cc);
              iVar11 = iVar21 * 0x40;
              local_24 = 0;
              if (param_6 >> 1 != 0) {
                do {
                  if (*piVar19 == 0) {
                    local_80 = (undefined1  [4])0x0;
                    fStack_7c = 0.0;
                    fStack_78 = 0.0;
                    fVar81 = 0.0;
                    local_70 = 0;
                    fStack_68 = 0.0;
                    fStack_64 = 0.0;
                  }
                  else {
                    pauVar13 = (undefined1 (*) [12])
                               ((param_7 + local_24 * 2) * piVar19[1] + *piVar19);
                    auVar91 = *pauVar13;
                    fVar81 = *(float *)pauVar13[1];
                    puVar16 = (undefined8 *)(*pauVar13 + piVar19[1]);
                    local_70 = *puVar16;
                    fStack_68 = *(float *)(puVar16 + 1);
                    fStack_64 = *(float *)((int)puVar16 + 0xc);
                    local_80 = auVar91._0_4_;
                    fStack_7c = auVar91._4_4_;
                    fStack_78 = auVar91._8_4_;
                  }
                  local_24 = local_24 + 1;
                  pauVar13 = (undefined1 (*) [12])(iVar20 + 0x80 + iVar11);
                  auVar91 = *pauVar13;
                  pfVar14 = (float *)(iVar20 + 0x90 + iVar11);
                  fVar84 = pfVar14[3];
                  pfVar1 = (float *)(iVar20 + 0xa0 + iVar11);
                  fVar88 = pfVar1[3];
                  pfVar2 = (float *)(iVar20 + 0xb0 + iVar11);
                  fVar94 = pfVar2[3];
                  fVar80 = *pfVar14 * (float)local_80;
                  fVar83 = pfVar14[1] * fStack_7c;
                  fVar86 = pfVar14[2] * fStack_78;
                  fVar67 = *pfVar2 * (float)local_80;
                  fVar78 = pfVar2[1] * fStack_7c;
                  fVar79 = pfVar2[2] * fStack_78;
                  fVar95 = *pfVar1 * (float)local_80;
                  fVar103 = pfVar1[1] * fStack_7c;
                  fVar104 = pfVar1[2] * fStack_78;
                  fVar126 = *(float *)*pauVar13 * (float)local_80;
                  fVar131 = *(float *)(*pauVar13 + 4) * fStack_7c;
                  fVar132 = *(float *)(*pauVar13 + 8) * fStack_78;
                  local_80 = auVar91._0_4_;
                  fStack_7c = auVar91._4_4_;
                  fStack_78 = auVar91._8_4_;
                  auVar68._0_4_ =
                       *(float *)pauVar13[1] * fStack_64 + fStack_7c * local_70._4_4_ +
                       fStack_78 * fStack_68 + (float)local_80 * (float)local_70;
                  auVar68._4_4_ =
                       fVar84 * fStack_64 + pfVar14[1] * local_70._4_4_ +
                       pfVar14[2] * fStack_68 + *pfVar14 * (float)local_70;
                  auVar68._8_4_ =
                       fVar88 * fStack_64 + pfVar1[1] * local_70._4_4_ +
                       pfVar1[2] * fStack_68 + *pfVar1 * (float)local_70;
                  auVar68._12_4_ =
                       fVar94 * fStack_64 + pfVar2[1] * local_70._4_4_ +
                       pfVar2[2] * fStack_68 + *pfVar2 * (float)local_70;
                  *pfVar15 = *(float *)pauVar13[1] * fVar81 + fVar131 + fVar132 + fVar126;
                  pfVar15[1] = fVar84 * fVar81 + fVar83 + fVar86 + fVar80;
                  pfVar15[2] = fVar88 * fVar81 + fVar103 + fVar104 + fVar95;
                  pfVar15[3] = fVar94 * fVar81 + fVar78 + fVar79 + fVar67;
                  *(undefined1 (*) [16])((int)pfVar15 + param_5) = auVar68;
                  pfVar15 = (float *)((int)pfVar15 + param_5 * 2);
                } while (local_24 < param_6 >> 1);
              }
              if (uVar18 != 0) {
                if (*piVar19 == 0) {
                  fVar95 = 0.0;
                  fVar103 = 0.0;
                  fVar104 = 0.0;
                  fVar126 = 0.0;
                }
                else {
                  pfVar14 = (float *)(piVar19[1] * iVar10 + *piVar19);
                  fVar95 = *pfVar14;
                  fVar103 = pfVar14[1];
                  fVar104 = pfVar14[2];
                  fVar126 = pfVar14[3];
                }
                goto LAB_1000c2de;
              }
            }
          }
        }
      }
    }
    local_98 = local_98 + 1;
    if (0xe < local_98) {
      return;
    }
  } while( true );
}

