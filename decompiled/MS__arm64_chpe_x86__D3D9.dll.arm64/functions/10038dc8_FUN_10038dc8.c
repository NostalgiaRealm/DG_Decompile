/*
 * FUN_10038dc8 at 10038dc8
 * undefined FUN_10038dc8(void)
 * Address ranges: 10038dc8-10039097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038dc8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
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
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  ushort uVar23;
  undefined4 uVar24;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar25 [16];
  
  switch(param_2) {
  default:
    break;
  case 4:
    uVar1 = *param_1;
    uVar20 = (undefined1)(uVar1 >> 8);
    uVar23 = (ushort)uVar1;
    uVar21 = (undefined1)(uVar1 >> 0x10);
    uVar22 = (undefined1)(uVar1 >> 0x18);
    uVar24 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar23 & 0xff);
    auVar7[8] = uVar21;
    auVar7._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar20,uVar24));
    auVar7._9_3_ = 0;
    auVar7[0xc] = uVar22;
    auVar8._4_9_ = auVar7._4_9_;
    auVar8._0_4_ = uVar24;
    auVar9._6_2_ = 0;
    auVar9._0_6_ = auVar8._0_6_;
    auVar9._8_5_ = auVar7._8_5_;
    auVar25._0_10_ = auVar9._0_10_;
    auVar25._10_2_ = 0;
    auVar25[0xc] = uVar22;
    auVar25._13_3_ = 0;
    NEON_scvtf(auVar25,4);
    uVar24 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar23 & 0xff);
    auVar2[8] = uVar21;
    auVar2._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar20,uVar24));
    auVar2._9_3_ = 0;
    auVar2[0xc] = uVar22;
    auVar10._4_9_ = auVar2._4_9_;
    auVar10._0_4_ = uVar24;
    auVar11._6_2_ = 0;
    auVar11._0_6_ = auVar10._0_6_;
    auVar11._8_5_ = auVar2._8_5_;
    auVar28._0_10_ = auVar11._0_10_;
    auVar28._10_2_ = 0;
    auVar28[0xc] = uVar22;
    auVar28._13_3_ = 0;
    NEON_scvtf(auVar28,4);
    uVar24 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar23 & 0xff);
    auVar3[8] = uVar21;
    auVar3._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar20,uVar24));
    auVar3._9_3_ = 0;
    auVar3[0xc] = uVar22;
    auVar12._4_9_ = auVar3._4_9_;
    auVar12._0_4_ = uVar24;
    auVar13._6_2_ = 0;
    auVar13._0_6_ = auVar12._0_6_;
    auVar13._8_5_ = auVar3._8_5_;
    auVar29._0_10_ = auVar13._0_10_;
    auVar29._10_2_ = 0;
    auVar29[0xc] = uVar22;
    auVar29._13_3_ = 0;
    NEON_scvtf(auVar29,4);
    uVar24 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar23 & 0xff);
    auVar4[8] = uVar21;
    auVar4._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar20,uVar24));
    auVar4._9_3_ = 0;
    auVar4[0xc] = uVar22;
    auVar14._4_9_ = auVar4._4_9_;
    auVar14._0_4_ = uVar24;
    auVar15._6_2_ = 0;
    auVar15._0_6_ = auVar14._0_6_;
    auVar15._8_5_ = auVar4._8_5_;
    auVar30._0_10_ = auVar15._0_10_;
    auVar30._10_2_ = 0;
    auVar30[0xc] = uVar22;
    auVar30._13_3_ = 0;
    NEON_scvtf(auVar30,4);
    break;
  case 5:
    uVar1 = *param_1;
    uVar20 = (undefined1)(uVar1 >> 0x18);
    auVar5[8] = (char)(uVar1 >> 0x10);
    auVar5._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20)
    ;
    auVar5._9_3_ = 0;
    auVar5[0xc] = uVar20;
    auVar16._4_9_ = auVar5._4_9_;
    auVar16._0_4_ = uVar1 & 0xff;
    auVar17._6_2_ = 0;
    auVar17._0_6_ = auVar16._0_6_;
    auVar17._8_5_ = auVar5._8_5_;
    auVar26._0_10_ = auVar17._0_10_;
    auVar26._10_2_ = 0;
    auVar26[0xc] = uVar20;
    auVar26._13_3_ = 0;
    NEON_scvtf(auVar26,4);
    break;
  case 7:
    break;
  case 8:
    uVar1 = *param_1;
    uVar20 = (undefined1)(uVar1 >> 0x18);
    auVar6[8] = (char)(uVar1 >> 0x10);
    auVar6._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20)
    ;
    auVar6._9_3_ = 0;
    auVar6[0xc] = uVar20;
    auVar18._4_9_ = auVar6._4_9_;
    auVar18._0_4_ = uVar1 & 0xff;
    auVar19._6_2_ = 0;
    auVar19._0_6_ = auVar18._0_6_;
    auVar19._8_5_ = auVar6._8_5_;
    auVar27._0_10_ = auVar19._0_10_;
    auVar27._10_2_ = 0;
    auVar27[0xc] = uVar20;
    auVar27._13_3_ = 0;
    NEON_scvtf(auVar27,4);
    break;
  case 10:
    break;
  case 0xc:
    break;
  case 0xe:
  }
  return;
}

