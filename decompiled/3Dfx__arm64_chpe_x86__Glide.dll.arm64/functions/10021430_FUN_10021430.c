/*
 * FUN_10021430 at 10021430
 * undefined FUN_10021430(void)
 * Address ranges: 10021430-100214d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021430(undefined8 param_1,undefined1 (*param_2) [16],uint param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar7;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  
  auVar4 = ZEXT516(0) << 8;
  uVar2 = 0;
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  if (param_3 >> 2 != 0) {
    do {
      auVar8 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      auVar4 = NEON_umax(auVar4,auVar8,4);
      auVar3 = NEON_umin(auVar3,auVar8,4);
    } while (uVar2 < param_3 >> 2);
  }
  auVar6._8_8_ = auVar4._8_8_;
  auVar6._0_8_ = auVar4._8_8_;
  uVar2 = 0;
  auVar8 = NEON_umax(auVar6,auVar4,4);
  auVar5._8_8_ = auVar3._8_8_;
  auVar5._0_8_ = auVar3._8_8_;
  auVar3 = NEON_umin(auVar5,auVar3,4);
  uVar7 = auVar8._4_4_;
  auVar4._4_4_ = uVar7;
  auVar4._0_4_ = uVar7;
  auVar4._8_4_ = uVar7;
  auVar4._12_4_ = uVar7;
  auVar4 = NEON_umax(auVar4,auVar8,4);
  uVar7 = auVar3._4_4_;
  auVar8._4_4_ = uVar7;
  auVar8._0_4_ = uVar7;
  auVar8._8_4_ = uVar7;
  auVar8._12_4_ = uVar7;
  auVar3 = NEON_umin(auVar8,auVar3,4);
  if ((param_3 & 3) != 0) {
    do {
      uVar2 = uVar2 + 1;
      puVar1 = *param_2;
      param_2 = (undefined1 (*) [16])(*param_2 + 4);
      auVar4 = NEON_umax(auVar4,ZEXT416(*(uint *)puVar1),4);
      auVar3 = NEON_umin(auVar3,ZEXT416(*(uint *)puVar1),4);
    } while (uVar2 < (param_3 & 3));
  }
  *param_4 = auVar3._0_4_;
  *param_5 = auVar4._0_4_;
  return;
}

