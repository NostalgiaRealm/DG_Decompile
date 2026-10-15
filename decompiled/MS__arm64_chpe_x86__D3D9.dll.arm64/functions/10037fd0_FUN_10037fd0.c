/*
 * FUN_10037fd0 at 10037fd0
 * undefined FUN_10037fd0(void)
 * Address ranges: 10037fd0-10038333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037fd0(uint *param_1,undefined4 param_2)

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
  undefined1 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    uVar1 = *param_1;
    uVar11 = (undefined1)(uVar1 >> 0x18);
    uVar12 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar1 & 0xff);
    auVar4[8] = (char)(uVar1 >> 0x10);
    auVar4._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)(uVar1 >> 8),uVar12));
    auVar4._9_3_ = 0;
    auVar4[0xc] = uVar11;
    auVar9._4_9_ = auVar4._4_9_;
    auVar9._0_4_ = uVar12;
    auVar10._6_2_ = 0;
    auVar10._0_6_ = auVar9._0_6_;
    auVar10._8_5_ = auVar4._8_5_;
    auVar16._0_10_ = auVar10._0_10_;
    auVar16._10_2_ = 0;
    auVar16[0xc] = uVar11;
    auVar16._13_3_ = 0;
    NEON_scvtf(auVar16,4);
    break;
  case 5:
    uVar1 = *param_1;
    uVar11 = (undefined1)(uVar1 >> 0x18);
    uVar12 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar1 & 0xff);
    auVar2[8] = (char)(uVar1 >> 0x10);
    auVar2._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)(uVar1 >> 8),uVar12));
    auVar2._9_3_ = 0;
    auVar2[0xc] = uVar11;
    auVar5._4_9_ = auVar2._4_9_;
    auVar5._0_4_ = uVar12;
    auVar6._6_2_ = 0;
    auVar6._0_6_ = auVar5._0_6_;
    auVar6._8_5_ = auVar2._8_5_;
    auVar14._0_10_ = auVar6._0_10_;
    auVar14._10_2_ = 0;
    auVar14[0xc] = uVar11;
    auVar14._13_3_ = 0;
    goto LAB_10038278;
  case 6:
    break;
  case 7:
    break;
  case 8:
    uVar1 = *param_1;
    uVar11 = (undefined1)(uVar1 >> 0x18);
    uVar12 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar1 & 0xff);
    auVar3[8] = (char)(uVar1 >> 0x10);
    auVar3._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)(uVar1 >> 8),uVar12));
    auVar3._9_3_ = 0;
    auVar3[0xc] = uVar11;
    auVar7._4_9_ = auVar3._4_9_;
    auVar7._0_4_ = uVar12;
    auVar8._6_2_ = 0;
    auVar8._0_6_ = auVar7._0_6_;
    auVar8._8_5_ = auVar3._8_5_;
    auVar13._0_10_ = auVar8._0_10_;
    auVar13._10_2_ = 0;
    auVar13[0xc] = uVar11;
    auVar13._13_3_ = 0;
    NEON_scvtf(auVar13,4);
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    uVar1 = *param_1;
    auVar14._0_8_ = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
    auVar14._8_4_ = uVar1 >> 0x14 & 0x3ff;
    auVar14._12_4_ = 1;
LAB_10038278:
    NEON_scvtf(auVar14,4);
    break;
  case 0x10:
    uVar1 = *param_1;
    auVar15._0_4_ = (int)(uVar1 << 0x16) >> 0x16;
    auVar15._4_4_ = (int)(uVar1 << 0xc) >> 0x16;
    auVar15._8_4_ = (int)(uVar1 << 2) >> 0x16;
    auVar15._12_4_ = 0x1ff;
    NEON_scvtf(auVar15,4);
  }
  return;
}

