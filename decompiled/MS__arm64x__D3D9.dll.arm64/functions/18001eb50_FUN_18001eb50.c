/*
 * FUN_18001eb50 at 18001eb50
 * undefined FUN_18001eb50(void)
 * Address ranges: 18001eb50-18001ebeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_18001eb50(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 != 2) {
    if (param_2 == 0xf) {
      uVar1 = *param_1;
      auVar5._0_8_ = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
      auVar5._8_4_ = uVar1 >> 0x14 & 0x3ff;
      auVar5._12_4_ = 1;
      auVar5 = NEON_scvtf(auVar5,4);
      return auVar5;
    }
    if (param_2 == 0x10) {
      uVar1 = *param_1;
      auVar4._0_4_ = (int)(uVar1 << 0x16) >> 0x16;
      auVar4._4_4_ = (int)(uVar1 << 0xc) >> 0x16;
      auVar4._8_4_ = (int)(uVar1 << 2) >> 0x16;
      auVar4._12_4_ = 0x1ff;
      auVar5 = NEON_scvtf(auVar4,4);
      auVar2._0_4_ = auVar5._0_4_ / 511.0;
      auVar2._4_4_ = auVar5._4_4_ / 511.0;
      auVar2._8_4_ = auVar5._8_4_ / 511.0;
      auVar2._12_4_ = auVar5._12_4_ / 511.0;
      return auVar2;
    }
  }
  auVar3._8_8_ = (ulonglong)param_1[2] | 0x3f80000000000000;
  auVar3._0_8_ = *(undefined8 *)param_1;
  return auVar3;
}

