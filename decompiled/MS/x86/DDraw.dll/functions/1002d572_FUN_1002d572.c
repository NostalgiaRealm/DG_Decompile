/*
 * FUN_1002d572 at 1002d572
 * undefined __stdcall FUN_1002d572(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002d572-1002d68e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d572(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [11];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM1 [16];
  uint local_14;
  
  iVar32 = param_1[1];
  uVar31 = param_1[2] - *param_1;
  if (iVar32 < param_1[3]) {
    do {
      local_14 = 0;
      if (uVar31 >> 4 != 0) {
        do {
          iVar29 = local_14 * 0x10;
          auVar35 = *(undefined1 (*) [16])(param_5 + local_14 * -0x10 + -0x10);
          local_14 = local_14 + 1;
          auVar18[0xd] = 0;
          auVar18._0_13_ = auVar35._0_13_;
          auVar18[0xe] = auVar35[7];
          auVar19[0xc] = auVar35[6];
          auVar19._0_12_ = auVar35._0_12_;
          auVar19._13_2_ = auVar18._13_2_;
          auVar20[0xb] = 0;
          auVar20._0_11_ = auVar35._0_11_;
          auVar20._12_3_ = auVar19._12_3_;
          auVar21[10] = auVar35[5];
          auVar21._0_10_ = auVar35._0_10_;
          auVar21._11_4_ = auVar20._11_4_;
          auVar22[9] = 0;
          auVar22._0_9_ = auVar35._0_9_;
          auVar22._10_5_ = auVar21._10_5_;
          auVar23[8] = auVar35[4];
          auVar23._0_8_ = auVar35._0_8_;
          auVar23._9_6_ = auVar22._9_6_;
          auVar33[7] = 0;
          auVar33._0_7_ = auVar23._8_7_;
          auVar25._7_8_ = 0;
          auVar25._0_7_ = auVar23._8_7_;
          auVar27._1_8_ = SUB158(auVar25 << 0x40,7);
          auVar27[0] = auVar35[3];
          auVar27._9_6_ = 0;
          auVar26._1_10_ = SUB1510(auVar27 << 0x30,5);
          auVar26[0] = auVar35[2];
          auVar28._11_4_ = 0;
          auVar28._0_11_ = auVar26;
          auVar24._3_12_ = SUB1512(auVar28 << 0x20,3);
          auVar24[2] = auVar35[1];
          auVar24[1] = 0;
          auVar24[0] = auVar35[0];
          auVar33._8_4_ = auVar24._0_4_;
          auVar33._12_4_ = auVar26._0_4_;
          auVar33 = pshufhw(auVar33,auVar33,0x1b);
          in_XMM1 = pshuflw(in_XMM1,auVar33,0x1b);
          auVar34[9] = 0;
          auVar34[8] = auVar35[8];
          auVar34[10] = auVar35[9];
          auVar34[0xd] = 0;
          auVar34[0xc] = auVar35[10];
          auVar34[0xe] = auVar35[0xb];
          auVar34[1] = 0;
          auVar34[0] = auVar35[0xc];
          auVar34[2] = auVar35[0xd];
          auVar34[3] = 0;
          auVar34[5] = 0;
          auVar34[4] = auVar35[0xe];
          auVar34[6] = auVar35[0xf];
          auVar34[7] = 0;
          auVar34[0xb] = 0;
          auVar34[0xf] = 0;
          auVar35 = pshufhw(auVar34,auVar34,0x1b);
          auVar35 = pshuflw(auVar35,auVar35,0x1b);
          sVar2 = auVar35._0_2_;
          sVar3 = auVar35._2_2_;
          sVar4 = auVar35._4_2_;
          sVar5 = auVar35._6_2_;
          sVar6 = auVar35._8_2_;
          sVar7 = auVar35._10_2_;
          sVar8 = auVar35._12_2_;
          sVar9 = auVar35._14_2_;
          sVar10 = in_XMM1._0_2_;
          sVar11 = in_XMM1._2_2_;
          sVar12 = in_XMM1._4_2_;
          sVar13 = in_XMM1._6_2_;
          sVar14 = in_XMM1._8_2_;
          sVar15 = in_XMM1._10_2_;
          sVar16 = in_XMM1._12_2_;
          sVar17 = in_XMM1._14_2_;
          pcVar1 = (char *)(iVar29 + param_7);
          *pcVar1 = (0 < sVar2) * (sVar2 < 0x100) * auVar35[0] - (0xff < sVar2);
          pcVar1[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar35[2] - (0xff < sVar3);
          pcVar1[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar35[4] - (0xff < sVar4);
          pcVar1[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar35[6] - (0xff < sVar5);
          pcVar1[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar35[8] - (0xff < sVar6);
          pcVar1[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar35[10] - (0xff < sVar7);
          pcVar1[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar35[0xc] - (0xff < sVar8);
          pcVar1[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar35[0xe] - (0xff < sVar9);
          pcVar1[8] = (0 < sVar10) * (sVar10 < 0x100) * in_XMM1[0] - (0xff < sVar10);
          pcVar1[9] = (0 < sVar11) * (sVar11 < 0x100) * in_XMM1[2] - (0xff < sVar11);
          pcVar1[10] = (0 < sVar12) * (sVar12 < 0x100) * in_XMM1[4] - (0xff < sVar12);
          pcVar1[0xb] = (0 < sVar13) * (sVar13 < 0x100) * in_XMM1[6] - (0xff < sVar13);
          pcVar1[0xc] = (0 < sVar14) * (sVar14 < 0x100) * in_XMM1[8] - (0xff < sVar14);
          pcVar1[0xd] = (0 < sVar15) * (sVar15 < 0x100) * in_XMM1[10] - (0xff < sVar15);
          pcVar1[0xe] = (0 < sVar16) * (sVar16 < 0x100) * in_XMM1[0xc] - (0xff < sVar16);
          pcVar1[0xf] = (0 < sVar17) * (sVar17 < 0x100) * in_XMM1[0xe] - (0xff < sVar17);
        } while (local_14 < uVar31 >> 4);
      }
      uVar30 = 0;
      if ((uVar31 & 0xf) != 0) {
        do {
          *(undefined1 *)(uVar30 + (uVar31 & 0xfffffff0) + param_7) =
               *(undefined1 *)(((param_5 - (uVar31 & 0xfffffff0)) - uVar30) + -1);
          uVar30 = uVar30 + 1;
        } while (uVar30 < (uVar31 & 0xf));
      }
      param_7 = param_7 + *(int *)(param_4 + 0x14);
      param_5 = param_5 + param_6;
      iVar32 = iVar32 + 1;
    } while (iVar32 < param_1[3]);
  }
  return;
}

