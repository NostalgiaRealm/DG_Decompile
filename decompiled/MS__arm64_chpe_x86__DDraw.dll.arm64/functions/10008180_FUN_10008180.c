/*
 * FUN_10008180 at 10008180
 * undefined FUN_10008180(void)
 * Address ranges: 10008180-10008387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10008180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,uint param_8,int param_9,
                 undefined4 param_10,int param_11,undefined4 param_12,int *param_13,
                 undefined4 param_14,int param_15,int param_16,int param_17,int param_18,
                 int param_19,undefined4 param_20,int param_21,undefined4 param_22,
                 undefined1 param_23)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  code *extraout_w11;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined2 local_65;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  code *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  bVar5 = 1;
  uVar6 = 0;
  if (param_8 != 0) {
    local_54 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_60 = param_3;
    local_5c = param_6;
    local_58 = param_7;
    local_50 = param_2;
    uStack_4c = param_1;
    local_48 = param_4;
    uStack_44 = param_5;
    do {
      if (bVar5 == 0) {
        return 0;
      }
      local_65 = 0x100;
      local_70 = 0;
      local_68 = 0;
      local_67 = param_23;
      local_66 = param_23;
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      local_80 = 0;
      (*(code *)PTR_FUN_100ba2b8)
                (&local_80,*param_13 >> (uVar6 & 0x1f),param_13[1] >> (uVar6 & 0x1f),
                 param_13[2] >> (uVar6 & 0x1f),param_13[3] >> (uVar6 & 0x1f));
      (*(code *)PTR_FUN_100ba2b8)
                (&local_90,param_15 >> (uVar6 & 0x1f),param_16 >> (uVar6 & 0x1f),
                 param_17 >> (uVar6 & 0x1f),param_18 >> (uVar6 & 0x1f));
      if ((param_9 == param_11) && (param_9 - 0xeU < 7)) {
        uVar1 = param_19 - 1;
        uVar2 = param_21 - 1;
        local_80 = CONCAT44(local_80._4_4_ & (uVar2 ^ 0xffffffff),
                            (uint)local_80 & (uVar1 ^ 0xffffffff));
        local_78 = CONCAT44((local_78._4_4_ + param_21) - 1U & (uVar2 ^ 0xffffffff),
                            ((int)local_78 + param_19) - 1U & (uVar1 ^ 0xffffffff));
        local_90 = CONCAT44(local_90._4_4_ & (uVar2 ^ 0xffffffff),
                            (uint)local_90 & (uVar1 ^ 0xffffffff));
        uStack_88 = CONCAT44((uStack_88._4_4_ + param_21) - 1U & (uVar2 ^ 0xffffffff),
                             ((int)uStack_88 + param_19) - 1U & (uVar1 ^ 0xffffffff));
      }
      iVar4 = (*(code *)PTR_FUN_100ba248)(&local_80);
      if ((iVar4 == 0) && (iVar4 = (*(code *)PTR_FUN_100ba248)(&local_90), iVar4 == 0)) {
        auVar7 = (*local_54)(local_60,uVar6 + local_58);
        bVar3 = (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_,uStack_44);
        bVar5 = bVar3 & bVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_8);
  }
  return bVar5;
}

