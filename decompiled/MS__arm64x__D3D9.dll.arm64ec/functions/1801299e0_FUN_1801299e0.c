/*
 * FUN_1801299e0 at 1801299e0
 * undefined FUN_1801299e0(void)
 * Address ranges: 1801299e0-180129d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1801299e0(float *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  float fVar17;
  float fVar18;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float2 local_10;
  float2 fStack_e;
  float2 fStack_c;
  float2 fStack_a;
  
  switch(param_2) {
  case 0:
    fVar5 = *param_1;
    auVar9 = ZEXT116(0) << 8;
    fVar18 = 0.0;
    fVar19 = 1.0;
    fVar17 = 0.0;
    goto LAB_180129a1c;
  case 1:
    fVar5 = *param_1;
    fVar17 = param_1[1];
    fVar18 = 0.0;
    goto LAB_180129a4c;
  case 2:
    fVar5 = *param_1;
    fVar17 = param_1[1];
    fVar18 = param_1[2];
LAB_180129a4c:
    fVar19 = 1.0;
    auVar9 = ZEXT116(0) << 8;
    goto LAB_180129a1c;
  case 3:
    auVar9 = ZEXT116(0) << 8;
    fVar5 = *param_1;
    fVar17 = param_1[1];
    fVar18 = param_1[2];
    fVar19 = param_1[3];
    goto LAB_180129a1c;
  case 4:
    uVar4 = (uint)*param_1 >> 7;
    fVar5 = (float)((uint)*param_1 >> 0x17 & 1 | (uVar4 & 1) << 0x10 | uVar4 & 0x1000100);
    break;
  default:
    fVar5 = *param_1;
    break;
  case 6:
    auVar3 = ZEXT516(0) << 8;
    auVar14 = ZEXT416((uint)*param_1);
    goto LAB_180129ad0;
  case 7:
    auVar3 = ZEXT516(0) << 8;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)param_1;
    goto LAB_180129b1c;
  case 8:
    fVar5 = (float)((uint)*param_1 >> 7 & 0x1010101);
    break;
  case 9:
    auVar9 = NEON_fmov(0x3f000000,4);
    auVar12._0_4_ = (int)*(short *)param_1;
    auVar12._4_4_ = (int)*(short *)((longlong)param_1 + 2);
    auVar12._8_8_ = 0;
    auVar15 = NEON_scvtf(auVar12,4);
    auVar3 = ZEXT216(0);
    auVar13._0_8_ =
         CONCAT44((int)(auVar15._4_4_ / 32767.0 + auVar9._4_4_),
                  (int)(auVar15._0_4_ / 32767.0 + auVar9._0_4_));
    auVar13._8_4_ = (int)(auVar15._8_4_ / 32767.0 + auVar9._8_4_);
    auVar13._12_4_ = (int)(auVar15._12_4_ / 32767.0 + auVar9._12_4_);
    auVar14._0_8_ = NEON_sqxtn(auVar13._0_8_,auVar13,4);
    auVar14._8_8_ = auVar14._0_8_;
LAB_180129ad0:
    auVar9 = NEON_umax(auVar14,auVar3,2);
    uVar6 = NEON_sqxtn(auVar9._0_8_,auVar9,2);
    uVar4 = (uint)uVar6;
    goto LAB_180129ae0;
  case 10:
    auVar9 = NEON_fmov(0x3f000000,4);
    auVar7._0_8_ = CONCAT26(*(undefined2 *)((longlong)param_1 + 2),(uint6)*(ushort *)param_1 << 0x10
                           );
    auVar7._8_2_ = 0;
    auVar7._10_2_ = *(undefined2 *)(param_1 + 1);
    auVar3._12_2_ = 0;
    auVar3._0_12_ = auVar7;
    auVar3._14_2_ = *(undefined2 *)((longlong)param_1 + 6);
    auVar15._0_4_ = (int)((uint6)*(ushort *)param_1 << 0x10) >> 0x10;
    auVar15._4_4_ = (int)((longlong)auVar7._0_8_ >> 0x30);
    auVar15._8_4_ = auVar7._8_4_ >> 0x10;
    auVar15._12_4_ = auVar3._12_4_ >> 0x10;
    auVar15 = NEON_scvtf(auVar15,4);
    auVar3 = ZEXT216(0);
    auVar16._0_8_ =
         CONCAT44((int)(auVar15._4_4_ / 32767.0 + auVar9._4_4_),
                  (int)(auVar15._0_4_ / 32767.0 + auVar9._0_4_));
    auVar16._8_4_ = (int)(auVar15._8_4_ / 32767.0 + auVar9._8_4_);
    auVar16._12_4_ = (int)(auVar15._12_4_ / 32767.0 + auVar9._12_4_);
    auVar9._0_8_ = NEON_sqxtn(auVar16._0_8_,auVar16,4);
    auVar9._8_8_ = auVar9._0_8_;
LAB_180129b1c:
    auVar9 = NEON_umax(auVar9,auVar3,2);
    uVar6 = NEON_sqxtn(auVar9._0_8_,auVar9,2);
    fVar5 = (float)uVar6;
    break;
  case 0xb:
    uVar4 = CONCAT22(*(ushort *)((longlong)param_1 + 2) >> 0xf,*(ushort *)param_1 >> 0xf);
    goto LAB_180129ae0;
  case 0xc:
    fVar5 = (float)CONCAT22(*(ushort *)((longlong)param_1 + 2) >> 0xf,*(ushort *)param_1 >> 0xf);
    break;
  case 0xd:
    local_10 = SUB42(*param_1,0);
    fStack_e = (float2)((uint)*param_1 >> 0x10);
    fStack_c = FLOAT_UNKNOWN;
    fStack_a = FLOAT_UNKNOWN;
    goto LAB_180129ce8;
  case 0xe:
    local_10 = SUB42(*param_1,0);
    fStack_e = (float2)((uint)*param_1 >> 0x10);
    fStack_c = SUB42(param_1[1],0);
    fStack_a = (float2)((uint)param_1[1] >> 0x10);
LAB_180129ce8:
    auVar9 = ZEXT116(0) << 8;
    fVar5 = (float)local_10;
    fVar17 = (float)fStack_e;
    fVar18 = (float)fStack_c;
    fVar19 = (float)fStack_a;
LAB_180129a1c:
    auVar3 = NEON_fmov(0x3f000000,4);
    auVar8._0_4_ = fVar5 + auVar3._0_4_;
    auVar8._4_4_ = fVar17 + auVar3._4_4_;
    auVar8._8_4_ = fVar18 + auVar3._8_4_;
    auVar8._12_4_ = fVar19 + auVar3._12_4_;
    auVar9 = NEON_fmax(auVar8,auVar9,4);
    auVar10._0_8_ = CONCAT44((int)auVar9._4_4_,(int)auVar9._0_4_);
    auVar10._8_4_ = (int)auVar9._8_4_;
    auVar10._12_4_ = (int)auVar9._12_4_;
    auVar11._0_8_ = NEON_sqxtn(auVar10._0_8_,auVar10,4);
    auVar11._8_8_ = auVar11._0_8_;
    uVar6 = NEON_uqxtn(auVar11._0_8_,auVar11,2);
    fVar5 = (float)uVar6;
    break;
  case 0xf:
    fVar5 = *param_1;
    uVar4 = (uint)fVar5 >> 0x14 & 0x3ff;
    if (((uint)fVar5 & 0x3ff00000) < 0xff00000) {
      uVar4 = 0xff;
    }
    uVar2 = (uint)fVar5 >> 10 & 0x3ff;
    if (((uint)fVar5 & 0xffc00) < 0x3fc00) {
      uVar2 = 0xff;
    }
    uVar1 = (uint)fVar5 & 0x3ff;
    if (uVar1 < 0xff) {
      uVar1 = 0xff;
    }
    fVar5 = (float)(uVar1 | (uVar2 | (uVar4 | 0x100) << 8) << 8);
    break;
  case 0x10:
    fVar5 = *param_1;
    uVar4 = 0;
    if (((uint)fVar5 & 0x20000000) == 0) {
      uVar4 = (uint)fVar5 >> 0x1c;
    }
    uVar2 = 0;
    if (((uint)fVar5 & 0x80000) == 0) {
      uVar2 = (uint)fVar5 >> 0x12;
    }
    uVar1 = 0;
    if (((uint)fVar5 & 0x200) == 0) {
      uVar1 = (uint)fVar5 >> 8;
    }
    uVar4 = (uVar1 | (uVar2 | uVar4 << 8) << 8) & 0x1010101;
LAB_180129ae0:
    fVar5 = (float)(uVar4 | 0x1000000);
  }
  return fVar5;
}

