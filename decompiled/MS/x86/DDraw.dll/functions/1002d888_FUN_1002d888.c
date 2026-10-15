/*
 * FUN_1002d888 at 1002d888
 * undefined __stdcall FUN_1002d888(int * param_1, undefined4 param_2, undefined4 param_3, uint * param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002d888-1002dacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d888(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5,
                 int param_6,int param_7)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [11];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 in_XMM1 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint local_1c;
  int local_18;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined1 auVar41 [16];
  
  cVar2 = (char)*param_4;
  uVar34 = param_1[2] - *param_1;
  local_18 = param_1[1];
  if ((char)param_4[1] == '\0') {
    if (local_18 < param_1[3]) {
      do {
        if (uVar34 >> 4 != 0) {
          uVar33 = 0;
          do {
            uVar35 = uVar33 + 1;
            auVar40 = *(undefined1 (*) [16])(param_5 + uVar33 * 0x10);
            uVar43 = CONCAT13(-(auVar40[3] == cVar2),
                              CONCAT12(-(auVar40[2] == cVar2),
                                       CONCAT11(-(auVar40[1] == cVar2),-(auVar40[0] == cVar2))));
            uVar44 = CONCAT13(-(auVar40[7] == cVar2),
                              CONCAT12(-(auVar40[6] == cVar2),
                                       CONCAT11(-(auVar40[5] == cVar2),-(auVar40[4] == cVar2))));
            uVar45 = CONCAT13(-(auVar40[0xb] == cVar2),
                              CONCAT12(-(auVar40[10] == cVar2),
                                       CONCAT11(-(auVar40[9] == cVar2),-(auVar40[8] == cVar2))));
            uVar46 = CONCAT13(-(auVar40[0xf] == cVar2),
                              CONCAT12(-(auVar40[0xe] == cVar2),
                                       CONCAT11(-(auVar40[0xd] == cVar2),-(auVar40[0xc] == cVar2))))
            ;
            auVar38._0_4_ = ~uVar43 & auVar40._0_4_;
            auVar38._4_4_ = ~uVar44 & auVar40._4_4_;
            auVar38._8_4_ = ~uVar45 & auVar40._8_4_;
            auVar38._12_4_ = ~uVar46 & auVar40._12_4_;
            puVar1 = (uint *)(param_7 + uVar33 * 0x10);
            auVar40._0_4_ = *puVar1 & uVar43;
            auVar40._4_4_ = puVar1[1] & uVar44;
            auVar40._8_4_ = puVar1[2] & uVar45;
            auVar40._12_4_ = puVar1[3] & uVar46;
            *(undefined1 (*) [16])(param_7 + uVar33 * 0x10) = auVar40 | auVar38;
            uVar33 = uVar35;
          } while (uVar35 < uVar34 >> 4);
        }
        uVar33 = 0;
        if ((uVar34 & 0xf) != 0) {
          do {
            bVar3 = *(byte *)(uVar33 + param_5 + (uVar34 & 0xfffffff0));
            if ((uint)bVar3 != *param_4) {
              *(byte *)(uVar33 + (uVar34 & 0xfffffff0) + param_7) = bVar3;
            }
            uVar33 = uVar33 + 1;
          } while (uVar33 < (uVar34 & 0xf));
        }
        param_7 = param_7 + param_4[5];
        param_5 = param_5 + param_6;
        local_18 = local_18 + 1;
      } while (local_18 < param_1[3]);
    }
  }
  else if (local_18 < param_1[3]) {
    do {
      local_1c = 0;
      if (uVar34 >> 4 != 0) {
        do {
          iVar32 = local_1c * 0x10;
          auVar40 = *(undefined1 (*) [16])(param_5 + local_1c * -0x10 + -0x10);
          local_1c = local_1c + 1;
          auVar21[0xd] = 0;
          auVar21._0_13_ = auVar40._0_13_;
          auVar21[0xe] = auVar40[7];
          auVar22[0xc] = auVar40[6];
          auVar22._0_12_ = auVar40._0_12_;
          auVar22._13_2_ = auVar21._13_2_;
          auVar23[0xb] = 0;
          auVar23._0_11_ = auVar40._0_11_;
          auVar23._12_3_ = auVar22._12_3_;
          auVar24[10] = auVar40[5];
          auVar24._0_10_ = auVar40._0_10_;
          auVar24._11_4_ = auVar23._11_4_;
          auVar25[9] = 0;
          auVar25._0_9_ = auVar40._0_9_;
          auVar25._10_5_ = auVar24._10_5_;
          auVar26[8] = auVar40[4];
          auVar26._0_8_ = auVar40._0_8_;
          auVar26._9_6_ = auVar25._9_6_;
          auVar37[7] = 0;
          auVar37._0_7_ = auVar26._8_7_;
          auVar28._7_8_ = 0;
          auVar28._0_7_ = auVar26._8_7_;
          auVar30._1_8_ = SUB158(auVar28 << 0x40,7);
          auVar30[0] = auVar40[3];
          auVar30._9_6_ = 0;
          auVar29._1_10_ = SUB1510(auVar30 << 0x30,5);
          auVar29[0] = auVar40[2];
          auVar31._11_4_ = 0;
          auVar31._0_11_ = auVar29;
          auVar27._3_12_ = SUB1512(auVar31 << 0x20,3);
          auVar27[2] = auVar40[1];
          auVar27[1] = 0;
          auVar27[0] = auVar40[0];
          auVar37._8_4_ = auVar27._0_4_;
          auVar37._12_4_ = auVar29._0_4_;
          auVar38 = pshufhw(auVar37,auVar37,0x1b);
          auVar38 = pshuflw(in_XMM1,auVar38,0x1b);
          auVar39[9] = 0;
          auVar39[8] = auVar40[8];
          auVar39[10] = auVar40[9];
          auVar39[0xd] = 0;
          auVar39[0xc] = auVar40[10];
          auVar39[0xe] = auVar40[0xb];
          auVar39[1] = 0;
          auVar39[0] = auVar40[0xc];
          auVar39[2] = auVar40[0xd];
          auVar39[3] = 0;
          auVar39[5] = 0;
          auVar39[4] = auVar40[0xe];
          auVar39[6] = auVar40[0xf];
          auVar39[7] = 0;
          auVar39[0xb] = 0;
          auVar39[0xf] = 0;
          auVar40 = pshufhw(auVar39,auVar39,0x1b);
          auVar40 = pshuflw(auVar40,auVar40,0x1b);
          sVar4 = auVar40._0_2_;
          cVar5 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[0] - (0xff < sVar4);
          sVar4 = auVar40._2_2_;
          cVar6 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[2] - (0xff < sVar4);
          sVar4 = auVar40._4_2_;
          cVar7 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[4] - (0xff < sVar4);
          sVar4 = auVar40._6_2_;
          cVar8 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[6] - (0xff < sVar4);
          uVar33 = CONCAT13(cVar8,CONCAT12(cVar7,CONCAT11(cVar6,cVar5)));
          sVar4 = auVar40._8_2_;
          cVar9 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[8] - (0xff < sVar4);
          sVar4 = auVar40._10_2_;
          cVar10 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[10] - (0xff < sVar4);
          sVar4 = auVar40._12_2_;
          cVar11 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[0xc] - (0xff < sVar4);
          sVar4 = auVar40._14_2_;
          cVar12 = (0 < sVar4) * (sVar4 < 0x100) * auVar40[0xe] - (0xff < sVar4);
          auVar36._0_8_ = CONCAT17(cVar12,CONCAT16(cVar11,CONCAT15(cVar10,CONCAT14(cVar9,uVar33))));
          sVar4 = auVar38._0_2_;
          cVar13 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[0] - (0xff < sVar4);
          auVar36[8] = cVar13;
          sVar4 = auVar38._2_2_;
          cVar14 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[2] - (0xff < sVar4);
          auVar36[9] = cVar14;
          sVar4 = auVar38._4_2_;
          cVar15 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[4] - (0xff < sVar4);
          auVar36[10] = cVar15;
          sVar4 = auVar38._6_2_;
          cVar16 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[6] - (0xff < sVar4);
          auVar36[0xb] = cVar16;
          sVar4 = auVar38._8_2_;
          cVar17 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[8] - (0xff < sVar4);
          auVar41[0xc] = cVar17;
          auVar41._0_12_ = auVar36;
          sVar4 = auVar38._10_2_;
          cVar18 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[10] - (0xff < sVar4);
          auVar41[0xd] = cVar18;
          sVar4 = auVar38._12_2_;
          cVar19 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[0xc] - (0xff < sVar4);
          auVar41[0xe] = cVar19;
          sVar4 = auVar38._14_2_;
          cVar20 = (0 < sVar4) * (sVar4 < 0x100) * auVar38[0xe] - (0xff < sVar4);
          auVar41[0xf] = cVar20;
          uVar35 = CONCAT13(-(cVar8 == cVar2),
                            CONCAT12(-(cVar7 == cVar2),CONCAT11(-(cVar6 == cVar2),-(cVar5 == cVar2))
                                    ));
          uVar43 = CONCAT13(-(cVar12 == cVar2),
                            CONCAT12(-(cVar11 == cVar2),
                                     CONCAT11(-(cVar10 == cVar2),-(cVar9 == cVar2))));
          uVar44 = CONCAT13(-(cVar16 == cVar2),
                            CONCAT12(-(cVar15 == cVar2),
                                     CONCAT11(-(cVar14 == cVar2),-(cVar13 == cVar2))));
          uVar45 = CONCAT13(-(cVar20 == cVar2),
                            CONCAT12(-(cVar19 == cVar2),
                                     CONCAT11(-(cVar18 == cVar2),-(cVar17 == cVar2))));
          in_XMM1._0_4_ = ~uVar35 & uVar33;
          in_XMM1._4_4_ = ~uVar43 & (uint)((ulonglong)auVar36._0_8_ >> 0x20);
          in_XMM1._8_4_ = ~uVar44 & auVar36._8_4_;
          in_XMM1._12_4_ = ~uVar45 & auVar41._12_4_;
          puVar1 = (uint *)(iVar32 + param_7);
          auVar42._0_4_ = *puVar1 & uVar35;
          auVar42._4_4_ = puVar1[1] & uVar43;
          auVar42._8_4_ = puVar1[2] & uVar44;
          auVar42._12_4_ = puVar1[3] & uVar45;
          *(undefined1 (*) [16])(iVar32 + param_7) = auVar42 | in_XMM1;
        } while (local_1c < uVar34 >> 4);
      }
      uVar33 = 0;
      if ((uVar34 & 0xf) != 0) {
        do {
          bVar3 = *(byte *)(((param_5 - (uVar34 & 0xfffffff0)) - uVar33) + -1);
          if ((uint)bVar3 != *param_4) {
            *(byte *)(uVar33 + (uVar34 & 0xfffffff0) + param_7) = bVar3;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 < (uVar34 & 0xf));
      }
      param_7 = param_7 + param_4[5];
      param_5 = param_5 + param_6;
      local_18 = local_18 + 1;
    } while (local_18 < param_1[3]);
  }
  return;
}

