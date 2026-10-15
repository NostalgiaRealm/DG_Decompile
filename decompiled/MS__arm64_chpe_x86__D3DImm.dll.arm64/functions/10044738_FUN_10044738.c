/*
 * FUN_10044738 at 10044738
 * undefined FUN_10044738(void)
 * Address ranges: 10044738-10044e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044738(undefined4 param_1,int *param_2,undefined8 param_3,int param_4,int param_5,
                 undefined4 param_6,ulonglong param_7,int *param_8)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined4 extraout_w11;
  int *piVar13;
  int *piVar14;
  int *local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  int *piStack_d4;
  uint local_d0;
  int *local_cc;
  uint local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  float local_b4;
  int *local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int local_6c;
  int *local_68;
  char local_64;
  int *local_60;
  int local_5c;
  undefined4 local_58;
  ulonglong local_50;
  ulonglong uStack_48;
  
  local_78 = (int *)((uint)(param_7 >> 0x2f) & 1);
  param_2[0x8e] = param_5;
  param_2[0x91] = 0;
  param_2[0x92] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  local_74 = param_2 + 0x90;
  param_2[0x8c] = 0x437f0000;
  param_2[0x8d] = 0x437f0000;
  uVar11 = param_7 >> 0x2f & 1;
  iVar8 = (int)uVar11;
  local_64 = (char)uVar11;
  local_7c = (int *)(param_4 * 0x120);
  iVar1 = iVar8 * 2 + 1;
  local_68 = local_7c + 0x2a5;
  piVar2 = local_7c + 0x2a6;
  local_60 = local_7c;
  local_70 = param_8;
  local_6c = iVar8;
  local_5c = param_4;
  local_58 = param_1;
  if (*param_2 == 0x40) {
    piVar14 = (int *)param_2[0x23];
    piVar13 = local_7c + 0x2a4;
    local_7c = param_2 + 0x23;
    piVar5 = (int *)FUN_10079948(param_2,iVar1,1);
    if (iVar8 == 0) {
      uVar9 = 0;
      local_80 = piVar14;
    }
    else {
      local_bc = (int *)0x1e4;
      local_b8 = (int *)0x0;
      local_c0 = (int *)param_2[0x25];
      local_a8 = 0;
      local_b0 = (int *)0x0;
      local_ac = 0;
      local_b4 = 1.0;
      local_c8 = 0;
      local_d0 = 3;
      local_d8 = 0;
      local_e0 = param_2;
      uStack_dc = param_6;
      piStack_d4 = piVar5;
      local_cc = piVar14;
      local_c4 = piVar13;
      FUN_1007a868(&local_e0,0x3c);
      piVar13 = (int *)0xffffffff;
      uVar9 = 0x54;
      local_80 = piVar5;
    }
    local_50 = param_7 >> 0x2e & 1;
    uStack_48 = param_7 >> 0x2d & 1;
    if (local_50 != uStack_48) {
      piStack_d4 = (int *)FUN_10079948(param_2,local_6c + 1,1);
      local_b4 = 0.0;
      *local_74 = (int)piStack_d4;
      local_c0 = local_80;
      local_c8 = (uint)DAT_1009ec1a;
      local_cc = (int *)*local_7c;
      local_d8 = 0x31;
      local_e0 = param_2;
      uStack_dc = param_6;
      local_d0 = iVar1;
      local_c4 = piVar2;
      local_bc = (int *)uVar9;
      local_b8 = piVar13;
      FUN_1007a868(&local_e0,0x30);
    }
    local_b4 = 0.0;
    local_bc = (int *)(uint)DAT_1009ec19;
    local_b8 = local_68;
    local_c0 = (int *)*local_7c;
    local_cc = local_80;
    local_d8 = 0x34;
    local_e0 = param_2;
    uStack_dc = param_6;
    piStack_d4 = piVar5;
    local_d0 = iVar1;
    local_c8 = uVar9;
    local_c4 = piVar13;
    FUN_1007a868(&local_e0,0x30);
    local_d0 = 7;
    if ((char)local_78 == '\0') {
      local_d0 = 1;
    }
    piVar14 = local_60;
    local_78 = param_2 + 0x90;
    piVar13 = local_7c;
  }
  else {
    piVar5 = (int *)FUN_10079948(param_2,iVar1,1);
    FUN_100798e0(param_2,param_4);
    local_c4 = (int *)FUN_10079878(param_2,param_4,0,param_4);
    local_c0 = (int *)0x55;
    local_c8 = 0x54;
    local_d8 = 0x6c;
    local_cc = local_70;
    local_b8 = (int *)0x0;
    local_b4 = 0.0;
    local_e0 = param_2;
    uStack_dc = param_6;
    piStack_d4 = piVar5;
    local_d0 = iVar1;
    local_bc = (int *)extraout_w11;
    uVar10 = FUN_1007a868(&local_e0,0x30);
    uVar6 = FUN_1003c430(uVar10,param_7,param_4);
    FUN_1007b170(param_2 + 2,param_4,(char)(1 << (ulonglong)(uVar6 & 0x1f)));
    local_80 = local_74;
    if (local_64 != '\0') {
      local_c0 = (int *)0x1e4;
      local_c4 = (int *)param_2[0x24];
      local_b8 = (int *)0x0;
      local_bc = (int *)0x3f800000;
      local_d8 = 0;
      local_c8 = 0x55;
      local_d0 = 2;
      local_e0 = param_2;
      uStack_dc = param_6;
      piStack_d4 = piVar5;
      local_cc = piVar5;
      FUN_1007a868(&local_e0,0x2c);
      local_80 = param_2 + 0x90;
    }
    local_50 = param_7 >> 0x2e & 1;
    uStack_48 = param_7 >> 0x2d & 1;
    if (local_50 != uStack_48) {
      piStack_d4 = (int *)FUN_10079948(param_2,local_6c + 1,1);
      local_b8 = (int *)0x0;
      local_bc = (int *)0x54;
      *local_74 = (int)piStack_d4;
      local_c8 = (uint)DAT_1009ec1a;
      local_cc = (int *)param_2[0x23];
      local_d8 = 0x31;
      local_e0 = param_2;
      uStack_dc = param_6;
      local_d0 = iVar1;
      local_c4 = piVar2;
      local_c0 = piVar5;
      FUN_1007a868(&local_e0,0x2c);
      local_7c = (int *)(param_4 * 0x120);
    }
    piVar13 = param_2 + 0x23;
    local_b8 = (int *)0x0;
    local_c0 = (int *)(uint)DAT_1009ec19;
    local_bc = local_68;
    local_c4 = (int *)*piVar13;
    local_c8 = 0x54;
    local_d8 = 0x34;
    local_e0 = param_2;
    uStack_dc = param_6;
    piStack_d4 = piVar5;
    local_d0 = iVar1;
    local_cc = piVar5;
    FUN_1007a868(&local_e0,0x2c);
    bVar4 = (char)local_78 == '\0';
    local_d0 = 7;
    piVar14 = local_7c;
    local_78 = local_80;
    if (bVar4) {
      local_d0 = 1;
    }
  }
  local_b8 = (int *)0x0;
  local_c0 = (int *)(uint)DAT_1009ec1a;
  local_c4 = (int *)*piVar13;
  local_c8 = 4;
  local_d8 = 0x33;
  local_e0 = param_2;
  uStack_dc = param_6;
  piStack_d4 = piVar5;
  local_cc = piVar5;
  local_bc = piVar2;
  FUN_1007a868(&local_e0,0x2c);
  local_c8 = 0x54;
  local_c4 = (int *)0x0;
  local_d8 = 0x1c;
  local_e0 = param_2;
  uStack_dc = param_6;
  piStack_d4 = piVar5;
  local_d0 = iVar1;
  local_cc = piVar5;
  FUN_1007a868(&local_e0,0x20);
  if (local_50 != uStack_48) {
    local_c4 = (int *)*piVar13;
    piStack_d4 = (int *)param_2[0x90];
    local_bc = piVar14 + 0x2aa;
    local_b0 = piVar14 + 0x2ab;
    local_c0 = (int *)(uint)DAT_1009ec1a;
    local_ac = 0;
    local_d8 = 0x37;
    local_b4 = 3.57331e-43;
    local_c8 = 0x154;
    local_e0 = param_2;
    uStack_dc = param_6;
    local_d0 = iVar1;
    local_cc = piStack_d4;
    local_b8 = local_c4;
    FUN_1007a868(&local_e0,0x38);
    local_b8 = (int *)0x0;
    piStack_d4 = (int *)*local_78;
    local_c0 = (int *)0xe4;
    local_bc = (int *)0x1;
    local_c4 = (int *)param_2[0x24];
    local_c8 = 0x154;
    local_d8 = 0x27;
    local_e0 = param_2;
    uStack_dc = param_6;
    local_d0 = iVar1;
    local_cc = piStack_d4;
    FUN_1007a868(&local_e0,0x2c);
  }
  uVar9 = local_58;
  iVar1 = local_5c;
  if ((((uint)param_7 >> 0x1b & 1) == 0) || ((param_7 >> 0x28 & 1) != 0)) {
    bVar12 = 0xf;
  }
  else {
    bVar12 = 7;
  }
  pbVar3 = (byte *)(param_2 + 0x93);
  *pbVar3 = bVar12;
  param_2[0x8f] = (int)piVar5;
  uVar7 = FUN_100425a8(local_58,param_2,local_5c,local_70,0,param_6,param_7);
  iVar8 = FUN_100438a0(uVar9,param_2,iVar1,uVar7,piVar5,0,param_6,param_7);
  if (local_64 != '\0') {
    uVar7 = FUN_100425a8(uVar9,param_2,iVar1,local_70,1,param_6,param_7);
    uVar9 = FUN_100438a0(uVar9,param_2,iVar1,uVar7,piVar5,1,param_6,param_7);
    local_d0 = 4;
    local_d8 = 0x1a;
    local_c8 = 0xaa;
    local_c4 = (int *)0x0;
    local_e0 = param_2;
    uStack_dc = param_6;
    piStack_d4 = piVar5;
    local_cc = piVar5;
    uVar10 = FUN_1007a868(&local_e0,0x20);
    local_d8 = CONCAT31(local_d8._1_3_,0xaa);
    local_e0 = piVar5;
    FUN_10042500(uVar10,param_2,param_6,iVar8,0xf,uVar9,iVar8,uVar9);
    FUN_10079a60(param_2,uVar9);
  }
  local_bc = (int *)(1.0 / (float)param_2[0x8c]);
  local_c4 = (int *)param_2[0x25];
  local_b0 = (int *)(1.0 / (float)param_2[0x8d]);
  local_d0 = (uint)*pbVar3;
  piStack_d4 = (int *)iVar8;
  local_cc = (int *)iVar8;
  if ((param_7 & 0xf000000000) == 0) {
    local_d8 = 0x38;
    local_ac = 0;
    local_c0 = (int *)0xe4;
    local_c8 = 0xe4;
    local_e0 = param_2;
    uStack_dc = param_6;
    local_b8 = local_bc;
    local_b4 = (float)local_bc;
    FUN_1007a868(&local_e0,0x38);
  }
  else {
    local_b0 = (int *)((float)local_b0 + (float)local_b0);
    local_bc = (int *)((float)local_bc + (float)local_bc);
    local_94 = 0;
    local_a8 = 0xe4;
    local_c0 = (int *)0xe4;
    local_c8 = 0xe4;
    local_9c = 0xbf800000;
    uStack_98 = 0xbf800000;
    local_a4 = 0xbf800000;
    uStack_a0 = 0xbf800000;
    local_d8 = 0x32;
    local_e0 = param_2;
    uStack_dc = param_6;
    local_b8 = local_bc;
    local_b4 = (float)local_bc;
    local_ac = (int)local_c4;
    FUN_1007a868(&local_e0,0x50);
  }
  if ((*pbVar3 == 7) && ((param_7 >> 0x30 & 1) == 0)) {
    local_cc = (int *)param_2[0x24];
    local_c0 = (int *)0x0;
    local_c4 = (int *)0x3f800000;
    local_c8 = 0xe4;
    local_d0 = 8;
    local_d8 = 0x36;
    local_e0 = param_2;
    uStack_dc = param_6;
    piStack_d4 = (int *)iVar8;
    FUN_1007a868(&local_e0,0x24);
  }
  FUN_10079a60(param_2,param_2[0x90]);
  FUN_10079a60(param_2,piVar5);
  return;
}

