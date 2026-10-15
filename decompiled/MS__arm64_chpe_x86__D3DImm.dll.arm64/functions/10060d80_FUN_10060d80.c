/*
 * FUN_10060d80 at 10060d80
 * undefined FUN_10060d80(void)
 * Address ranges: 10060d80-100611eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060d80(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  ulonglong extraout_x9;
  ulonglong extraout_x9_00;
  ulonglong extraout_x9_01;
  ulonglong extraout_x9_02;
  ulonglong extraout_x9_03;
  ulonglong extraout_x9_04;
  ulonglong extraout_x9_05;
  float fVar4;
  float fVar5;
  float fVar6;
  float extraout_s23;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x90c) == '\0') {
    piVar1 = (int *)(param_1 + 0x9cc);
    if (*(char *)(param_1 + 0x90a) == '\0') {
      FUN_10006f00(param_1);
      iVar2 = *piVar1;
      *(undefined8 *)(iVar2 + 0x888) = *(undefined8 *)(iVar2 + 0x808);
      *(undefined8 *)(iVar2 + 0x880) = *(undefined8 *)(iVar2 + 0x800);
      *(undefined8 *)(iVar2 + 0x898) = *(undefined8 *)(iVar2 + 0x818);
      *(undefined8 *)(iVar2 + 0x890) = *(undefined8 *)(iVar2 + 0x810);
      *(undefined8 *)(iVar2 + 0x8a8) = *(undefined8 *)(iVar2 + 0x828);
      *(undefined8 *)(iVar2 + 0x8a0) = *(undefined8 *)(iVar2 + 0x820);
      *(undefined8 *)(iVar2 + 0x8b8) = *(undefined8 *)(iVar2 + 0x838);
      *(undefined8 *)(iVar2 + 0x8b0) = *(undefined8 *)(iVar2 + 0x830);
      iVar2 = *piVar1;
      uStack_68 = *(undefined8 *)(iVar2 + 0x888);
      local_70 = *(undefined8 *)(iVar2 + 0x880);
      uStack_58 = *(undefined8 *)(iVar2 + 0x898);
      uStack_60 = *(undefined8 *)(iVar2 + 0x890);
      uStack_48 = *(undefined8 *)(iVar2 + 0x8a8);
      local_50 = *(undefined8 *)(iVar2 + 0x8a0);
      local_38 = *(undefined8 *)(iVar2 + 0x8b8);
      local_40 = *(undefined8 *)(iVar2 + 0x8b0);
      uVar3 = FUN_100126d8(&local_70,(undefined8 *)(iVar2 + 0x880),0);
      *(undefined1 *)(param_1 + 0x90b) = uVar3;
      *(char *)(param_1 + 0x90a) = '\x01';
    }
    FUN_100123f0(*piVar1 + 0x40,&local_70,param_1 + 0x964);
    local_f8 = 0.0;
    fVar4 = local_38._4_4_;
    if (1e-05 < ABS((float)local_38)) {
      fVar4 = (float)local_38;
    }
    local_f4 = (((float)local_40 * 0.0 + local_40._4_4_ * 0.0) -
               ((uStack_48._4_4_ / fVar4) / ((float)uStack_48 / fVar4)) * (float)local_38) +
               local_38._4_4_;
    local_100 = -local_f4;
    fStack_fc = local_100;
    FUN_100121a0(&local_100,&local_a0,*piVar1 + 0x880);
    local_f8 = 0.0;
    FUN_100121a0(&local_100,&local_f0,extraout_x9 & 0xffffffff);
    local_f8 = 0.0;
    FUN_100121a0(&local_100,&local_80,extraout_x9_00 & 0xffffffff);
    local_f8 = 0.0;
    FUN_100121a0(&local_100,&local_90,extraout_x9_01 & 0xffffffff);
    local_100 = -extraout_s23;
    fStack_fc = local_100;
    FUN_100121a0(&local_100,&local_d0,extraout_x9_02 & 0xffffffff);
    FUN_100121a0(&local_100,&local_c0,extraout_x9_03 & 0xffffffff);
    FUN_100121a0(&local_100,&local_e0,extraout_x9_04 & 0xffffffff);
    FUN_100121a0(&local_100,&local_b0,extraout_x9_05 & 0xffffffff);
    fVar4 = local_e0 + local_a0;
    local_a0 = local_a0 / fStack_94;
    local_e0 = local_e0 / fStack_d4;
    fVar5 = fStack_dc + fStack_9c;
    fStack_dc = fStack_dc / fStack_d4;
    fVar6 = local_d8 + local_98;
    local_d8 = local_d8 / fStack_d4;
    local_f8 = (fStack_d4 + fStack_94) * 0.5;
    fStack_9c = fStack_9c / fStack_94;
    fStack_ac = fStack_ac / fStack_a4;
    local_98 = local_98 / fStack_94;
    local_b0 = local_b0 / fStack_a4;
    local_a8 = local_a8 / fStack_a4;
    local_100 = (fVar4 * 0.5) / local_f8;
    fStack_ec = fStack_ec / fStack_e4;
    local_f0 = local_f0 / fStack_e4;
    fStack_fc = (fVar5 * 0.5) / local_f8;
    local_f8 = (fVar6 * 0.5) / local_f8;
    local_e8 = local_e8 / fStack_e4;
    fStack_7c = fStack_7c / fStack_74;
    local_80 = local_80 / fStack_74;
    local_78 = local_78 / fStack_74;
    fStack_8c = fStack_8c / fStack_84;
    local_90 = local_90 / fStack_84;
    local_88 = local_88 / fStack_84;
    fStack_cc = fStack_cc / fStack_c4;
    local_d0 = local_d0 / fStack_c4;
    local_c8 = local_c8 / fStack_c4;
    fStack_bc = fStack_bc / fStack_b4;
    local_c0 = local_c0 / fStack_b4;
    local_b8 = local_b8 / fStack_b4;
    FUN_100611f8(&local_c0,&local_f0,&local_d0,&local_100,param_1 + 0x1758,param_1 + 0x175c,
                 param_1 + 0x1760,param_1 + 0x1764);
    FUN_100611f8(&local_b0,&local_90,&local_e0,&local_100,param_1 + 0x1768,param_1 + 0x176c,
                 param_1 + 6000,param_1 + 0x1774);
    FUN_100611f8(&local_c0,&local_e0,&local_f0,&local_100,param_1 + 0x1778,param_1 + 0x177c,
                 param_1 + 0x1780,param_1 + 0x1784);
    FUN_100611f8(&local_d0,&local_a0,&local_b0,&local_100,param_1 + 0x1788,param_1 + 0x178c,
                 param_1 + 0x1790,param_1 + 0x1794);
    FUN_100611f8(&local_f0,&local_80,&local_a0,&local_100,param_1 + 0x1798,param_1 + 0x179c,
                 param_1 + 0x17a0,param_1 + 0x17a4);
    FUN_100611f8(&local_c0,&local_d0,&local_e0,&local_100,param_1 + 0x17a8,param_1 + 0x17ac,
                 param_1 + 0x17b0,param_1 + 0x17b4);
    *(char *)(param_1 + 0x90c) = '\x01';
  }
  return;
}

