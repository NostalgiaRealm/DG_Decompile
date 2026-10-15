/*
 * FUN_1801505b0 at 1801505b0
 * undefined FUN_1801505b0(void)
 * Address ranges: 1801505b0-1801506d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801505b0(undefined8 param_1,undefined1 (*param_2) [16],uint param_3,uint param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar4 = ZEXT516(0) << 8;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  if ((param_4 & 1) == 0) {
    uVar1 = param_3 >> 3;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      auVar4 = NEON_umax(auVar4,*param_2,2);
      auVar7 = NEON_umin(auVar7,*param_2,2);
      param_2 = param_2 + 1;
    }
    param_3 = param_3 & 7;
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._0_8_ = auVar4._8_8_;
    auVar4 = NEON_umax(auVar4,auVar3,2);
    auVar6._8_8_ = auVar7._8_8_;
    auVar6._0_8_ = auVar7._8_8_;
    auVar7 = NEON_umin(auVar7,auVar6,2);
    auVar8 = NEON_rev64(auVar4,2);
    auVar4 = NEON_umax(auVar4,auVar8,2);
    auVar8 = NEON_rev64(auVar7,2);
    auVar7 = NEON_umin(auVar7,auVar8,2);
    auVar8 = NEON_rev32(auVar4,2);
    auVar4 = NEON_umax(auVar4,auVar8,2);
    auVar8 = NEON_rev32(auVar7,2);
    auVar7 = NEON_umin(auVar7,auVar8,2);
    while (param_3 != 0) {
      param_3 = param_3 - 1;
      puVar2 = *param_2;
      param_2 = (undefined1 (*) [16])(*param_2 + 2);
      auVar4 = NEON_umax(auVar4,ZEXT216(*(ushort *)puVar2),2);
      auVar7 = NEON_umin(auVar7,ZEXT216(*(ushort *)puVar2),2);
    }
    *param_6 = 0;
    *param_5 = 0;
    *(short *)param_5 = auVar7._0_2_;
    *(short *)param_6 = auVar4._0_2_;
    return;
  }
  uVar1 = param_3 >> 2;
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    auVar4 = NEON_umax(auVar4,*param_2,4);
    auVar7 = NEON_umin(auVar7,*param_2,4);
    param_2 = param_2 + 1;
  }
  param_3 = param_3 & 3;
  auVar8._8_8_ = auVar4._8_8_;
  auVar8._0_8_ = auVar4._8_8_;
  auVar4 = NEON_umax(auVar4,auVar8,4);
  auVar5._8_8_ = auVar7._8_8_;
  auVar5._0_8_ = auVar7._8_8_;
  auVar7 = NEON_umin(auVar7,auVar5,4);
  auVar8 = NEON_rev64(auVar4,4);
  auVar4 = NEON_umax(auVar4,auVar8,4);
  auVar8 = NEON_rev64(auVar7,4);
  auVar7 = NEON_umin(auVar7,auVar8,4);
  while (param_3 != 0) {
    param_3 = param_3 - 1;
    puVar2 = *param_2;
    param_2 = (undefined1 (*) [16])(*param_2 + 4);
    auVar4 = NEON_umax(auVar4,ZEXT416(*(uint *)puVar2),4);
    auVar7 = NEON_umin(auVar7,ZEXT416(*(uint *)puVar2),4);
  }
  *param_5 = auVar7._0_4_;
  *param_6 = auVar4._0_4_;
  return;
}

