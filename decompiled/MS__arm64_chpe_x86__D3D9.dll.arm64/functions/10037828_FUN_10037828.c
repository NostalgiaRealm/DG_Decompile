/*
 * FUN_10037828 at 10037828
 * undefined FUN_10037828(void)
 * Address ranges: 10037828-10037bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_10037828(float *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  float fVar14;
  float fVar15;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float2 local_10;
  float2 fStack_e;
  float2 fStack_c;
  float2 fStack_a;
  
  switch(param_2) {
  case 0:
    fVar4 = *param_1;
    auVar8 = ZEXT116(0) << 8;
    fVar15 = 0.0;
    fVar16 = 1.0;
    fVar14 = 0.0;
    goto LAB_1003786c;
  case 1:
    fVar4 = *param_1;
    fVar14 = param_1[1];
    fVar15 = 0.0;
    goto LAB_100378a4;
  case 2:
    fVar4 = *param_1;
    fVar14 = param_1[1];
    fVar15 = param_1[2];
LAB_100378a4:
    fVar16 = 1.0;
    auVar8 = ZEXT116(0) << 8;
    goto LAB_1003786c;
  case 3:
    auVar8 = ZEXT116(0) << 8;
    fVar4 = *param_1;
    fVar14 = param_1[1];
    fVar15 = param_1[2];
    fVar16 = param_1[3];
    goto LAB_1003786c;
  case 4:
    fVar4 = *param_1;
    fVar4 = (float)(((uint)fVar4 >> 7 & 1) << 0x10 |
                   ((uint)fVar4 & 0x80008000 | (uint)fVar4 >> 0x10 & 0xff) >> 7);
    break;
  default:
    fVar4 = *param_1;
    break;
  case 6:
    auVar17 = ZEXT516(0) << 8;
    auVar19 = ZEXT416((uint)*param_1);
    goto LAB_1003793c;
  case 7:
    auVar17 = ZEXT516(0) << 8;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)param_1;
    goto LAB_10037994;
  case 8:
    fVar4 = (float)((uint)*param_1 >> 7 & 0x1010101);
    break;
  case 9:
    auVar18 = NEON_fmov(0x3f000000,4);
    auVar11._0_4_ = (int)((uint6)*(ushort *)param_1 << 0x10) >> 0x10;
    auVar11._4_4_ =
         (int)((longlong)
               CONCAT26(*(undefined2 *)((int)param_1 + 2),(uint6)*(ushort *)param_1 << 0x10) >> 0x30
              );
    auVar11._8_8_ = 0;
    auVar8 = NEON_scvtf(auVar11,4);
    auVar17 = ZEXT216(0);
    auVar12._0_8_ =
         CONCAT44((int)(auVar8._4_4_ / 32767.0 + auVar18._4_4_),
                  (int)(auVar8._0_4_ / 32767.0 + auVar18._0_4_));
    auVar12._8_4_ = (int)(auVar8._8_4_ / 32767.0 + auVar18._8_4_);
    auVar12._12_4_ = (int)(auVar8._12_4_ / 32767.0 + auVar18._12_4_);
    auVar19._0_8_ = NEON_sqxtn(auVar12._0_8_,auVar12,4);
    auVar19._8_8_ = auVar19._0_8_;
LAB_1003793c:
    auVar8 = NEON_umax(auVar19,auVar17,2);
    uVar5 = NEON_sqxtn(auVar8._0_8_,auVar8,2);
    uVar3 = (uint)uVar5;
    goto LAB_1003794c;
  case 10:
    auVar19 = NEON_fmov(0x3f000000,4);
    auVar6._0_8_ = CONCAT26(*(undefined2 *)((int)param_1 + 2),(uint6)*(ushort *)param_1 << 0x10);
    auVar6._8_2_ = 0;
    auVar6._10_2_ = *(undefined2 *)(param_1 + 1);
    auVar17._12_2_ = 0;
    auVar17._0_12_ = auVar6;
    auVar17._14_2_ = *(undefined2 *)((int)param_1 + 6);
    auVar18._0_4_ = (int)((uint6)*(ushort *)param_1 << 0x10) >> 0x10;
    auVar18._4_4_ = (int)((longlong)auVar6._0_8_ >> 0x30);
    auVar18._8_4_ = auVar6._8_4_ >> 0x10;
    auVar18._12_4_ = auVar17._12_4_ >> 0x10;
    auVar8 = NEON_scvtf(auVar18,4);
    auVar17 = ZEXT216(0);
    auVar13._0_8_ =
         CONCAT44((int)(auVar8._4_4_ / 32767.0 + auVar19._4_4_),
                  (int)(auVar8._0_4_ / 32767.0 + auVar19._0_4_));
    auVar13._8_4_ = (int)(auVar8._8_4_ / 32767.0 + auVar19._8_4_);
    auVar13._12_4_ = (int)(auVar8._12_4_ / 32767.0 + auVar19._12_4_);
    auVar8._0_8_ = NEON_sqxtn(auVar13._0_8_,auVar13,4);
    auVar8._8_8_ = auVar8._0_8_;
LAB_10037994:
    auVar8 = NEON_umax(auVar8,auVar17,2);
    uVar5 = NEON_sqxtn(auVar8._0_8_,auVar8,2);
    fVar4 = (float)uVar5;
    break;
  case 0xb:
    uVar3 = CONCAT22(*(ushort *)((int)param_1 + 2) >> 0xf,*(ushort *)param_1 >> 0xf);
    goto LAB_1003794c;
  case 0xc:
    fVar4 = (float)CONCAT22(*(ushort *)((int)param_1 + 2) >> 0xf,*(ushort *)param_1 >> 0xf);
    break;
  case 0xd:
    local_10 = SUB42(*param_1,0);
    fStack_e = (float2)((uint)*param_1 >> 0x10);
    fStack_c = FLOAT_UNKNOWN;
    fStack_a = FLOAT_UNKNOWN;
    goto LAB_10037b70;
  case 0xe:
    local_10 = SUB42(*param_1,0);
    fStack_e = (float2)((uint)*param_1 >> 0x10);
    fStack_c = SUB42(param_1[1],0);
    fStack_a = (float2)((uint)param_1[1] >> 0x10);
LAB_10037b70:
    auVar8 = ZEXT116(0) << 8;
    fVar4 = (float)local_10;
    fVar14 = (float)fStack_e;
    fVar15 = (float)fStack_c;
    fVar16 = (float)fStack_a;
LAB_1003786c:
    auVar17 = NEON_fmov(0x3f000000,4);
    auVar7._0_4_ = fVar4 + auVar17._0_4_;
    auVar7._4_4_ = fVar14 + auVar17._4_4_;
    auVar7._8_4_ = fVar15 + auVar17._8_4_;
    auVar7._12_4_ = fVar16 + auVar17._12_4_;
    auVar8 = NEON_fmax(auVar7,auVar8,4);
    auVar9._0_8_ = CONCAT44((int)auVar8._4_4_,(int)auVar8._0_4_);
    auVar9._8_4_ = (int)auVar8._8_4_;
    auVar9._12_4_ = (int)auVar8._12_4_;
    auVar10._0_8_ = NEON_sqxtn(auVar9._0_8_,auVar9,4);
    auVar10._8_8_ = auVar10._0_8_;
    uVar5 = NEON_uqxtn(auVar10._0_8_,auVar10,2);
    fVar4 = (float)uVar5;
    break;
  case 0xf:
    fVar4 = *param_1;
    uVar3 = (uint)fVar4 >> 0x14 & 0x3ff;
    if (uVar3 < 0xff) {
      uVar3 = 0xff;
    }
    uVar2 = (uint)fVar4 >> 10 & 0x3ff;
    uVar1 = (uint)fVar4 & 0x3ff;
    if (uVar2 < 0xff) {
      uVar2 = 0xff;
    }
    if (uVar1 < 0xff) {
      uVar1 = 0xff;
    }
    fVar4 = (float)(uVar1 | (uVar2 | (uVar3 | 0x100) << 8) << 8);
    break;
  case 0x10:
    fVar4 = *param_1;
    uVar3 = 0;
    if (((uint)fVar4 & 0x20000000) == 0) {
      uVar3 = (uint)fVar4 >> 0x1c;
    }
    uVar1 = 0;
    if (((uint)fVar4 & 0x80000) == 0) {
      uVar1 = (uint)fVar4 >> 0x12;
    }
    uVar2 = 0;
    if (((uint)fVar4 & 0x200) == 0) {
      uVar2 = (uint)fVar4 >> 8;
    }
    uVar3 = (uVar2 | (uVar1 | uVar3 << 8) << 8) & 0x1010101;
LAB_1003794c:
    fVar4 = (float)(uVar3 | 0x1000000);
  }
  return fVar4;
}

