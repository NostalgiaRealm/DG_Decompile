/*
 * FUN_100501c8 at 100501c8
 * undefined FUN_100501c8(void)
 * Address ranges: 100501c8-10050407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100501c8(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar21 [16];
  
  switch(param_5) {
  case 0:
    uVar18 = 0;
    if (param_4 != 0) {
      do {
        uVar17 = 0;
        if (param_3 != 0) {
          do {
            uVar3 = *(undefined4 *)(param_1 + uVar17 * 4);
            iVar1 = uVar17 + uVar18 * 4;
            uVar17 = uVar17 + 1;
            puVar2 = (undefined8 *)(param_6 + iVar1 * 0x10);
            uVar19 = (undefined1)((uint)uVar3 >> 0x18);
            uVar20 = (undefined4)
                     CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar3 & 0xff);
            auVar5[8] = (char)((uint)uVar3 >> 0x10);
            auVar5._0_8_ = (longlong)
                           CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                                    (uint6)CONCAT14((char)((uint)uVar3 >> 8),uVar20));
            auVar5._9_3_ = 0;
            auVar5[0xc] = uVar19;
            auVar9._4_9_ = auVar5._4_9_;
            auVar9._0_4_ = uVar20;
            auVar10._6_2_ = 0;
            auVar10._0_6_ = auVar9._0_6_;
            auVar10._8_5_ = auVar5._8_5_;
            auVar21._0_10_ = auVar10._0_10_;
            auVar21._10_2_ = 0;
            auVar21[0xc] = uVar19;
            auVar21._13_3_ = 0;
            auVar26 = NEON_scvtf(auVar21,4);
            puVar2[1] = auVar26._8_8_;
            *puVar2 = auVar26._0_8_;
          } while (uVar17 < param_3);
        }
        uVar18 = uVar18 + 1;
        param_1 = param_1 + param_2;
      } while (uVar18 < param_4);
    }
    break;
  case 1:
    uVar18 = 0;
    if (param_4 != 0) {
      do {
        uVar17 = 0;
        if (param_3 != 0) {
          do {
            uVar4 = *(uint *)(param_1 + uVar17 * 4);
            iVar1 = uVar17 + uVar18 * 4;
            uVar17 = uVar17 + 1;
            puVar2 = (undefined8 *)(param_6 + iVar1 * 0x10);
            uVar19 = (undefined1)(uVar4 >> 0x18);
            auVar6[8] = (char)(uVar4 >> 0x10);
            auVar6._0_8_ = (ulonglong)(byte)(uVar4 >> 8) << 0x20;
            auVar6._9_3_ = 0;
            auVar6[0xc] = uVar19;
            auVar11._4_9_ = auVar6._4_9_;
            auVar11._0_4_ = uVar4 & 0xff;
            auVar12._6_2_ = 0;
            auVar12._0_6_ = auVar11._0_6_;
            auVar12._8_5_ = auVar6._8_5_;
            auVar22._0_10_ = auVar12._0_10_;
            auVar22._10_2_ = 0;
            auVar22[0xc] = uVar19;
            auVar22._13_3_ = 0;
            auVar26 = NEON_scvtf(auVar22,4);
            auVar23._0_8_ = CONCAT44(auVar26._4_4_,auVar26._8_4_);
            auVar23._8_4_ = auVar26._0_4_;
            auVar23._12_4_ = auVar26._12_4_;
            puVar2[1] = auVar23._8_8_;
            *puVar2 = auVar23._0_8_;
          } while (uVar17 < param_3);
        }
        uVar18 = uVar18 + 1;
        param_1 = param_1 + param_2;
      } while (uVar18 < param_4);
    }
    break;
  case 2:
    uVar18 = 0;
    if (param_4 != 0) {
      do {
        uVar17 = 0;
        if (param_3 != 0) {
          do {
            uVar4 = *(uint *)(param_1 + uVar17 * 4);
            iVar1 = uVar17 + uVar18 * 4;
            uVar17 = uVar17 + 1;
            puVar2 = (undefined8 *)(param_6 + iVar1 * 0x10);
            uVar19 = (undefined1)(uVar4 >> 0x18);
            auVar7[8] = (char)(uVar4 >> 0x10);
            auVar7._0_8_ = (ulonglong)(byte)(uVar4 >> 8) << 0x20;
            auVar7._9_3_ = 0;
            auVar7[0xc] = uVar19;
            auVar13._4_9_ = auVar7._4_9_;
            auVar13._0_4_ = uVar4 & 0xff;
            auVar14._6_2_ = 0;
            auVar14._0_6_ = auVar13._0_6_;
            auVar14._8_5_ = auVar7._8_5_;
            auVar24._0_10_ = auVar14._0_10_;
            auVar24._10_2_ = 0;
            auVar24[0xc] = uVar19;
            auVar24._13_3_ = 0;
            auVar26 = NEON_scvtf(auVar24,4);
            auVar25._0_12_ = auVar26._4_12_;
            auVar25._12_4_ = auVar26._0_4_;
            puVar2[1] = auVar25._8_8_;
            *puVar2 = auVar26._4_8_;
          } while (uVar17 < param_3);
        }
        uVar18 = uVar18 + 1;
        param_1 = param_1 + param_2;
      } while (uVar18 < param_4);
    }
    break;
  case 3:
    uVar18 = 0;
    if (param_4 != 0) {
      do {
        uVar17 = 0;
        if (param_3 != 0) {
          do {
            uVar4 = *(uint *)(param_1 + uVar17 * 4);
            iVar1 = uVar17 + uVar18 * 4;
            uVar17 = uVar17 + 1;
            puVar2 = (undefined8 *)(param_6 + iVar1 * 0x10);
            uVar19 = (undefined1)(uVar4 >> 0x18);
            auVar8[8] = (char)(uVar4 >> 0x10);
            auVar8._0_8_ = (ulonglong)(byte)(uVar4 >> 8) << 0x20;
            auVar8._9_3_ = 0;
            auVar8[0xc] = uVar19;
            auVar15._4_9_ = auVar8._4_9_;
            auVar15._0_4_ = uVar4 & 0xff;
            auVar16._6_2_ = 0;
            auVar16._0_6_ = auVar15._0_6_;
            auVar16._8_5_ = auVar8._8_5_;
            auVar26._0_10_ = auVar16._0_10_;
            auVar26._10_2_ = 0;
            auVar26[0xc] = uVar19;
            auVar26._13_3_ = 0;
            auVar26 = NEON_scvtf(auVar26,4);
            auVar26 = NEON_rev64(auVar26,4);
            puVar2[1] = auVar26._0_8_;
            *puVar2 = auVar26._8_8_;
          } while (uVar17 < param_3);
        }
        uVar18 = uVar18 + 1;
        param_1 = param_1 + param_2;
      } while (uVar18 < param_4);
    }
  }
  return;
}

