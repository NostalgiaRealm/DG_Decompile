/*
 * FUN_18017f1e0 at 18017f1e0
 * undefined FUN_18017f1e0(void)
 * Address ranges: 18017f1e0-18017f4cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18017f1e0(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             longlong param_5,uint param_6,undefined8 *param_7)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined1 local_104;
  byte local_103;
  undefined2 local_102;
  longlong *local_100;
  longlong *plStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_100 = (longlong *)0x43425844;
  plStack_f8 = (longlong *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0x100000000;
  local_e8 = 0x300000000;
  uVar6 = 0;
  local_c8 = param_7;
  uVar3 = FUN_180214fe8(param_3,&local_100,0x2c);
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
  bVar2 = (*(int *)(param_2 + 0x20) - 0x10051U & 0xfffeffff) != 0;
  *(bool *)(param_2 + 0x1cb) = bVar2;
  if (bVar2) {
    cVar5 = '\0';
    uVar4 = 0;
    do {
      *(char *)(param_2 + 0x146 + uVar4) = cVar5;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      cVar5 = cVar5 + '\x01';
    } while (uVar1 < 0x11);
  }
  uVar4 = 0;
  if (param_6 != 0) {
    do {
      auVar9._8_8_ = param_2;
      auVar9._0_8_ = uVar3;
      if (*(char *)(param_4 + uVar4) != '\x11') {
        auVar9 = FUN_180184678();
      }
      param_2 = auVar9._8_8_;
      uVar3 = auVar9._0_8_;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < param_6);
  }
  *(int *)(*param_3 + 0x20) = (int)param_3[1] - (int)*param_3;
  uVar4 = FUN_1801849b8(uVar3,param_3,param_2,0);
  if ((uVar4 & 1) != 0) {
    *(int *)(*param_3 + 0x24) = (int)param_3[1] - (int)*param_3;
    local_130 = (longlong *)0x4e47534f;
    uStack_128 = 0x800000000;
    local_f0 = 0x210;
    local_e8 = CONCAT71(local_e8._1_7_,1);
    local_100 = (longlong *)FUN_1802229a8(0x210);
    plStack_f8 = local_100;
    FUN_180214fe8(&local_100,&local_130,0x10);
    uVar3 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    if (param_6 != 0) {
      local_134 = 0;
      uVar4 = 0;
      local_130 = param_3;
      local_d0 = param_1;
      do {
        local_120 = 0;
        local_13c = 0;
        local_138 = 3;
        local_140[0] = 0xf;
        FUN_1801847a8(uVar3,param_2,*(undefined1 *)(param_4 + uVar4),&local_120,&local_13c,
                      &local_138,local_140,1);
        local_118 = FUN_180212e90(&local_c0,local_120);
        local_102 = 0;
        uStack_114 = local_13c;
        local_110 = 0;
        uStack_10c = local_138;
        local_108 = (uint)uVar4 & 0xff;
        local_104 = local_140[0];
        local_103 = ~*(byte *)(param_5 + (ulonglong)*(byte *)(param_4 + uVar4));
        uVar3 = FUN_180214fe8(&local_100,&local_118,0x18);
        uVar1 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        param_3 = local_130;
        param_1 = local_d0;
        uVar6 = local_134;
      } while (uVar1 < param_6);
    }
    FUN_180213160(&local_100,param_6,&local_c0);
    local_130 = local_100;
    FUN_180214fe8(param_3,local_100,(longlong)plStack_f8 - (longlong)local_100);
    FUN_1802229d8(local_130);
    *(int *)(*param_3 + 0x28) = (int)param_3[1] - (int)*param_3;
    uVar4 = FUN_18017e5e0(param_1,param_3,param_2,param_4,param_5,param_6);
    if ((uVar4 & 1) != 0) {
      FUN_180212ef0(param_3);
      if (local_c8 != (undefined8 *)0x0) {
        uVar3 = *(undefined8 *)(param_2 + 0x28);
        uVar8 = *(undefined8 *)(param_2 + 0x40);
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        local_c8[1] = *(undefined8 *)(param_2 + 0x30);
        *local_c8 = uVar3;
        local_c8[3] = uVar8;
        local_c8[2] = uVar7;
        local_c8[4] = *(undefined8 *)(param_2 + 0x48);
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}

