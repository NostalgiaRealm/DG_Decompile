/*
 * FUN_18006c6f8 at 18006c6f8
 * undefined FUN_18006c6f8(void)
 * Address ranges: 18006c6f8-18006c9cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18006c6f8(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             longlong param_5,uint param_6,undefined8 *param_7)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined1 local_114;
  byte local_113;
  undefined2 local_112;
  longlong local_110;
  longlong lStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  local_f0 = 0;
  local_110 = 0x43425844;
  lStack_108 = 0;
  local_e8 = 0;
  local_100 = 0x100000000;
  local_f8 = 0x300000000;
  uVar7 = 0;
  uVar4 = FUN_1800f5a90(param_3,&local_110,0x2c);
  *(undefined8 *)(param_2 + 0xec) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x11c) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 300) = 0;
  *(undefined8 *)(param_2 + 0x124) = 0;
  *(undefined8 *)(param_2 + 0x13c) = 0;
  *(undefined8 *)(param_2 + 0x134) = 0;
  *(undefined8 *)(param_2 + 0x14c) = 0;
  *(undefined8 *)(param_2 + 0x144) = 0;
  *(undefined8 *)(param_2 + 0x15c) = 0;
  *(undefined8 *)(param_2 + 0x154) = 0;
  *(undefined8 *)(param_2 + 0x16c) = 0;
  *(undefined8 *)(param_2 + 0x164) = 0;
  *(undefined8 *)(param_2 + 0x17c) = 0;
  *(undefined8 *)(param_2 + 0x174) = 0;
  *(undefined8 *)(param_2 + 0x18c) = 0;
  *(undefined8 *)(param_2 + 0x184) = 0;
  *(undefined8 *)(param_2 + 0x19c) = 0;
  *(undefined8 *)(param_2 + 0x194) = 0;
  *(undefined8 *)(param_2 + 0x1a4) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0x410802;
  *(undefined8 *)(param_2 + 0xb8) = 0x41040000110400;
  *(undefined4 *)(param_2 + 0xc0) = 0x20000d00;
  *(undefined8 *)(param_2 + 0xd8) = 0x11080000210800;
  *(undefined8 *)(param_2 + 0xd0) = 0x31080000410800;
  *(undefined1 *)(param_2 + 0x1cc) = 0;
  bVar3 = (*(int *)(param_2 + 0x20) - 0x10051U & 0xfffeffff) != 0;
  *(bool *)(param_2 + 0x1cb) = bVar3;
  if (bVar3) {
    cVar6 = '\0';
    uVar5 = 0;
    do {
      *(char *)(param_2 + 0x146 + uVar5) = cVar6;
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
      cVar6 = cVar6 + '\x01';
    } while (uVar1 < 0x11);
  }
  uVar5 = 0;
  if (param_6 != 0) {
    do {
      auVar9._8_8_ = param_2;
      auVar9._0_8_ = uVar4;
      if (*(char *)(param_4 + uVar5) != '\x11') {
        auVar9 = func_0x000180184678();
      }
      param_2 = auVar9._8_8_;
      uVar4 = auVar9._0_8_;
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < param_6);
  }
  *(int *)(*param_3 + 0x20) = (int)param_3[1] - (int)*param_3;
  uVar5 = FUN_180071738(uVar4,param_3,param_2,0);
  if ((uVar5 & 1) != 0) {
    *(int *)(*param_3 + 0x24) = (int)param_3[1] - (int)*param_3;
    local_e0 = 0x4e47534f;
    uStack_d8 = 0x800000000;
    local_100 = 0x210;
    local_f8 = CONCAT71(local_f8._1_7_,1);
    local_110 = thunk_FUN_180102f80(0x210);
    lStack_108 = local_110;
    FUN_1800f5a90(&local_110,&local_e0,0x10);
    uVar5 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (param_6 != 0) {
      uVar4 = 3;
      local_e0 = param_1;
      do {
        local_130 = 0;
        local_13c = 0;
        local_138[0] = 3;
        local_140[0] = 0xf;
        FUN_180071528(uVar4,param_2,*(undefined1 *)(param_4 + uVar5),&local_130,&local_13c,local_138
                      ,local_140,1);
        local_128 = func_0x000180212e90(&local_d0,local_130);
        local_112 = 0;
        uStack_124 = local_13c;
        local_120 = 0;
        uStack_11c = local_138[0];
        local_118 = (uint)uVar5 & 0xff;
        local_114 = local_140[0];
        local_113 = ~*(byte *)(param_5 + (ulonglong)*(byte *)(param_4 + uVar5));
        uVar4 = FUN_1800f5a90(&local_110,&local_128,0x18);
        uVar1 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        param_1 = local_e0;
      } while (uVar1 < param_6);
    }
    FUN_1800f5da0(&local_110,param_6,&local_d0);
    lVar2 = local_110;
    FUN_1800f5a90(param_3,local_110,lStack_108 - local_110);
    thunk_FUN_180102fc0(lVar2);
    *(int *)(*param_3 + 0x28) = (int)param_3[1] - (int)*param_3;
    uVar5 = FUN_18006bbb0(param_1,param_3,param_2,param_4,param_5,param_6);
    if ((uVar5 & 1) != 0) {
      FUN_1800f5ba0(param_3);
      if (param_7 != (undefined8 *)0x0) {
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar7 = *(undefined8 *)(param_2 + 0x40);
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        param_7[1] = *(undefined8 *)(param_2 + 0x30);
        *param_7 = uVar8;
        param_7[3] = uVar7;
        param_7[2] = uVar4;
        param_7[4] = *(undefined8 *)(param_2 + 0x48);
      }
      uVar7 = 1;
    }
  }
  return uVar7;
}

