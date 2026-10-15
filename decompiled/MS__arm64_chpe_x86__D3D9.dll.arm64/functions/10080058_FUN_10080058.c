/*
 * FUN_10080058 at 10080058
 * undefined FUN_10080058(void)
 * Address ranges: 10080058-100805db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10080058(undefined8 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  int local_1b0;
  uint uStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  undefined1 uStack_19c;
  char cStack_19b;
  undefined2 uStack_19a;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  int *local_180;
  int local_178 [5];
  undefined1 local_164;
  undefined1 local_163;
  undefined2 local_162;
  int local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined2 local_14a;
  int local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined1 local_134;
  undefined1 local_133;
  undefined2 local_132;
  int local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined2 local_11a;
  int local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined1 local_104;
  undefined1 local_103;
  undefined2 local_102;
  int local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined2 local_ea;
  int local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined2 local_d2;
  int local_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined2 local_ba;
  int local_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined2 local_a2;
  int local_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined2 local_8a;
  int local_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined1 local_74;
  undefined1 local_73;
  undefined2 local_72;
  int local_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined2 local_5a;
  int local_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined1 local_44;
  undefined1 local_43;
  undefined2 local_42;
  
  local_190 = 0;
  local_1b0 = 0x43425844;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 0;
  local_188 = 0;
  local_1a0 = 0;
  uStack_19c = 1;
  cStack_19b = 0;
  uStack_19a = 0;
  uStack_198 = 0x300000000;
  FUN_10122c50(param_2,&local_1b0,0x2c);
  piVar1 = param_2 + 1;
  local_178[1] = 0;
  local_178[2] = 1;
  local_164 = 0xf;
  local_162 = 0;
  local_14c = 0xf;
  local_14a = 0;
  *(int *)(*param_2 + 0x20) = *piVar1 - *param_2;
  local_1b0 = 0x4e475349;
  uStack_1ac = 0;
  local_15c = 8;
  local_178[3] = 3;
  local_178[4] = 0;
  local_144 = 0;
  local_134 = 0xf;
  local_132 = 0;
  local_1a8 = 0xd;
  if (*(char *)(param_3 + 0x49) != '\0') {
    local_1a8 = 0xe;
  }
  local_12c = 1;
  uStack_1a4 = 8;
  local_154 = 0x100000003;
  local_14b = *(undefined1 *)(param_3 + 0x3d);
  iVar2 = local_1a8 * 0x18;
  local_11c = 0xf;
  local_178[0] = iVar2 + 8;
  local_11a = 0;
  local_163 = *(undefined1 *)(param_3 + 0x3c);
  local_148 = iVar2 + 0x1d;
  local_104 = 0xf;
  local_13c = 0x200000003;
  local_133 = *(undefined1 *)(param_3 + 0x3e);
  local_160 = iVar2 + 0x14;
  local_124 = 0x300000003;
  local_11b = *(undefined1 *)(param_3 + 0x3f);
  local_114 = 9;
  local_10c = 0x400000003;
  local_103 = *(undefined1 *)(param_3 + 0x40);
  uStack_b4 = 3;
  uStack_ac = 0x800000003;
  local_a3 = *(undefined1 *)(param_3 + 0x44);
  local_f4 = 0x500000003;
  local_eb = *(undefined1 *)(param_3 + 0x41);
  uStack_9c = 4;
  uStack_94 = 0x900000003;
  local_8b = *(undefined1 *)(param_3 + 0x45);
  local_dc = 0x600000003;
  local_d3 = *(undefined1 *)(param_3 + 0x42);
  uStack_84 = 5;
  uStack_7c = 0xa00000003;
  local_73 = *(undefined1 *)(param_3 + 0x46);
  uStack_54 = 7;
  uStack_6c = 6;
  uStack_cc = 2;
  uStack_4c = 0xc00000003;
  uStack_64 = 0xb00000003;
  local_43 = *(undefined1 *)(param_3 + 0x48);
  uStack_c4 = 0x700000003;
  local_5b = *(undefined1 *)(param_3 + 0x47);
  local_bb = *(undefined1 *)(param_3 + 0x43);
  local_102 = 0;
  local_fc = 0;
  local_ec = 0xf;
  local_ea = 0;
  local_e4 = 1;
  local_d4 = 0xf;
  local_d2 = 0;
  local_bc = 0xf;
  local_ba = 0;
  local_a4 = 0xf;
  local_a2 = 0;
  local_8c = 0xf;
  local_8a = 0;
  local_74 = 0xf;
  local_72 = 0;
  local_5c = 0xf;
  local_5a = 0;
  local_44 = 0xf;
  local_42 = 0;
  local_1b8 = 0x210;
  local_1b4 = 1;
  local_180 = piVar1;
  local_130 = local_148;
  local_118 = local_160;
  local_100 = local_160;
  local_e8 = local_160;
  local_d0 = local_160;
  local_b8 = local_160;
  local_a0 = local_160;
  local_88 = local_160;
  local_70 = local_160;
  local_58 = local_160;
  local_1c0 = FUN_101322b0(0x210);
  iStack_1bc = local_1c0;
  FUN_10122c50(&local_1c0,&local_1b0,0x10);
  FUN_10122c50(&local_1c0,local_178,0x138);
  local_1b0 = iVar2 + 0x23;
  uStack_19c = 1;
  uStack_1ac = 0;
  local_1a8 = 9;
  uStack_1a4 = 1;
  local_1a0 = 0xd;
  cStack_19b = *(char *)(param_3 + 0x49);
  uStack_19a = 0;
  if (cStack_19b == '\0') {
    uVar5 = 0x1b;
  }
  else {
    uVar5 = 0x2a;
    FUN_10122c50(&local_1c0,&local_1b0,0x18);
  }
  FUN_10122c50(&local_1c0,s_SV_POSITION_10162230,uVar5);
  FUN_10122c50(&local_1c0,&DAT_1016222c,-(iStack_1bc - local_1c0) & 3);
  iVar2 = local_1c0;
  *(int *)(local_1c0 + 4) = (iStack_1bc - local_1c0) + -8;
  FUN_10122c50(param_2,local_1c0,iStack_1bc - local_1c0);
  FUN_101322d0(iVar2);
  local_1b4 = 1;
  uVar5 = 10;
  *(int *)(*param_2 + 0x24) = *piVar1 - *param_2;
  local_1b0 = 0x4e47534f;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 8;
  uVar3 = (uint)(*(char *)(param_3 + 0x4d) != -1);
  if (*(char *)(param_3 + 0x4c) != -1) {
    uVar3 = uVar3 + 1;
  }
  if (*(char *)(param_3 + 0x4b) != -1) {
    uVar3 = uVar3 + 1;
  }
  if (*(char *)(param_3 + 0x4e) != -1) {
    uVar3 = uVar3 + 1;
  }
  if (*(char *)(param_3 + 0x4a) != -1) {
    uVar3 = uVar3 + 1;
  }
  local_1b8 = 0x210;
  local_1c0 = FUN_101322b0(0x210);
  iStack_1bc = local_1c0;
  FUN_10122c50(&local_1c0,&local_1b0,0x10);
  uStack_1a4 = 3;
  uVar4 = 0;
  local_1a8 = 0;
  uStack_19c = 0xf;
  cStack_19b = 0;
  uStack_19a = 0;
  local_1b0 = uVar3 * 0x18 + 8;
  do {
    local_1a0 = (int)((char *)(param_3 + 0x4a))[uVar4];
    if (local_1a0 != -1) {
      uStack_1ac = uVar4;
      FUN_10122c50(&local_1c0,&local_1b0,0x18);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  local_1b0 = uVar3 * 0x18 + 0x12;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 3;
  local_1a0 = 0xffffffff;
  uStack_19c = 1;
  cStack_19b = 0xe;
  uStack_19a = 0;
  if (*(char *)(param_3 + 0x4e) != -1) {
    FUN_10122c50(&local_1c0,&local_1b0,0x18);
    uVar5 = 0x13;
  }
  FUN_10122c50(&local_1c0,s_SV_TARGET_1016e3b0,uVar5);
  FUN_10122c50(&local_1c0,&DAT_10162228,-(iStack_1bc - local_1c0) & 3);
  iVar2 = local_1c0;
  *(uint *)(local_1c0 + 8) = uVar3;
  *(int *)(local_1c0 + 4) = (iStack_1bc - local_1c0) + -8;
  FUN_10122c50(param_2,local_1c0,iStack_1bc - local_1c0);
  FUN_101322d0(iVar2);
  *(int *)(*param_2 + 0x28) = *local_180 - *param_2;
  return 1;
}

