/*
 * FUN_10060370 at 10060370
 * undefined FUN_10060370(void)
 * Address ranges: 10060370-100604cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060370(undefined8 param_1,undefined1 (*param_2) [16],uint param_3,uint param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar2 = 0;
  auVar4 = ZEXT516(0) << 8;
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  if ((param_4 & 1) == 0) {
    if (param_3 >> 3 != 0) {
      do {
        auVar5 = *param_2;
        uVar2 = uVar2 + 1;
        param_2 = param_2 + 1;
        auVar4 = NEON_umax(auVar4,auVar5,2);
        auVar3 = NEON_umin(auVar3,auVar5,2);
      } while (uVar2 < param_3 >> 3);
    }
    uVar2 = 0;
    auVar6._8_8_ = auVar4._8_8_;
    auVar6._0_8_ = auVar4._8_8_;
    auVar4 = NEON_umax(auVar4,auVar6,2);
    auVar7._8_8_ = auVar3._8_8_;
    auVar7._0_8_ = auVar3._8_8_;
    auVar5 = NEON_umin(auVar3,auVar7,2);
    auVar3 = NEON_rev64(auVar4,2);
    auVar4 = NEON_umax(auVar4,auVar3,2);
    auVar3 = NEON_rev64(auVar5,2);
    auVar5 = NEON_umin(auVar5,auVar3,2);
    auVar3 = NEON_rev32(auVar4,2);
    auVar4 = NEON_umax(auVar4,auVar3,2);
    auVar3 = NEON_rev32(auVar5,2);
    auVar3 = NEON_umin(auVar5,auVar3,2);
    if ((param_3 & 7) != 0) {
      do {
        uVar2 = uVar2 + 1;
        puVar1 = *param_2;
        param_2 = (undefined1 (*) [16])(*param_2 + 2);
        auVar4 = NEON_umax(auVar4,ZEXT216(*(ushort *)puVar1),2);
        auVar3 = NEON_umin(auVar3,ZEXT216(*(ushort *)puVar1),2);
      } while (uVar2 < (param_3 & 7));
    }
    *param_6 = 0;
    *param_5 = 0;
    *(short *)param_5 = auVar3._0_2_;
    *(short *)param_6 = auVar4._0_2_;
    return;
  }
  if (param_3 >> 2 != 0) {
    do {
      auVar5 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      auVar4 = NEON_umax(auVar4,auVar5,4);
      auVar3 = NEON_umin(auVar3,auVar5,4);
    } while (uVar2 < param_3 >> 2);
  }
  uVar2 = 0;
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._0_8_ = auVar4._8_8_;
  auVar7 = NEON_umax(auVar4,auVar5,4);
  auVar4._8_8_ = auVar3._8_8_;
  auVar4._0_8_ = auVar3._8_8_;
  auVar5 = NEON_umin(auVar3,auVar4,4);
  auVar3 = NEON_rev64(auVar7,4);
  auVar4 = NEON_umax(auVar7,auVar3,4);
  auVar3 = NEON_rev64(auVar5,4);
  auVar3 = NEON_umin(auVar5,auVar3,4);
  if ((param_3 & 3) != 0) {
    do {
      uVar2 = uVar2 + 1;
      puVar1 = *param_2;
      param_2 = (undefined1 (*) [16])(*param_2 + 4);
      auVar4 = NEON_umax(auVar4,ZEXT416(*(uint *)puVar1),4);
      auVar3 = NEON_umin(auVar3,ZEXT416(*(uint *)puVar1),4);
    } while (uVar2 < (param_3 & 3));
  }
  *param_5 = auVar3._0_4_;
  *param_6 = auVar4._0_4_;
  return;
}

