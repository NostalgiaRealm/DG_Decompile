/*
 * FUN_10068e08 at 10068e08
 * undefined FUN_10068e08(void)
 * Address ranges: 10068e08-1006933b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10068e08(undefined8 param_1,int *param_2,int param_3)

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
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  int local_180 [5];
  undefined1 local_16c;
  undefined1 local_16b;
  undefined2 local_16a;
  int local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined1 local_154;
  undefined1 local_153;
  undefined2 local_152;
  int local_150;
  undefined8 local_14c;
  undefined8 local_144;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined2 local_13a;
  int local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined1 local_124;
  undefined1 local_123;
  undefined2 local_122;
  int local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined2 local_10a;
  int local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  int local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined1 local_dc;
  undefined1 local_db;
  undefined2 local_da;
  int local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined2 local_c2;
  int local_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined2 local_aa;
  int local_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined1 local_94;
  undefined1 local_93;
  undefined2 local_92;
  int local_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined2 local_7a;
  int local_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined1 local_64;
  undefined1 local_63;
  undefined2 local_62;
  int local_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  
  local_190 = 0;
  local_1b0 = 0x43425844;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 0;
  local_188 = 0;
  local_1a0 = 0;
  uStack_19c = 1;
  uStack_198 = 0x300000000;
  FUN_100ef6d8(param_2,&local_1b0,0x2c);
  piVar1 = param_2 + 1;
  local_180[1] = 0;
  local_180[2] = 1;
  local_16a = 0;
  local_16c = 0xf;
  local_164 = 8;
  local_154 = 0xf;
  local_152 = 0;
  *(int *)(*param_2 + 0x20) = *piVar1 - *param_2;
  local_180[3] = 3;
  local_180[4] = 0;
  local_15c = 0x100000003;
  local_153 = *(undefined1 *)(param_3 + 0x3d);
  local_14c = 0;
  local_1b0 = 0x4e475349;
  uStack_1ac = 0;
  local_13c = 0xf;
  local_13a = 0;
  local_144 = 0x200000003;
  local_13b = *(undefined1 *)(param_3 + 0x3e);
  local_124 = 0xf;
  local_122 = 0;
  local_1a8 = 0xd;
  if (*(char *)(param_3 + 0x49) != '\0') {
    local_1a8 = 0xe;
  }
  local_10c = 0xf;
  uStack_1a4 = 8;
  local_12c = 0x300000003;
  local_123 = *(undefined1 *)(param_3 + 0x3f);
  local_150 = local_1a8 * 0x18;
  local_10a = 0;
  local_180[0] = local_150 + 8;
  local_16b = *(undefined1 *)(param_3 + 0x3c);
  local_11c = 9;
  local_114 = 0x400000003;
  local_168 = local_150 + 0x14;
  local_10b = *(undefined1 *)(param_3 + 0x40);
  local_150 = local_150 + 0x1d;
  local_134 = 1;
  local_fc = 0x500000003;
  local_f3 = *(undefined1 *)(param_3 + 0x41);
  local_e4 = 0x600000003;
  local_db = *(undefined1 *)(param_3 + 0x42);
  uStack_5c = 7;
  local_d4 = 2;
  uStack_cc = 0x700000003;
  local_c3 = *(undefined1 *)(param_3 + 0x43);
  uStack_54 = 0xc00000003;
  local_4b = *(undefined1 *)(param_3 + 0x48);
  local_104 = 0;
  local_f4 = 0xf;
  local_f2 = 0;
  uStack_bc = 3;
  uStack_b4 = 0x800000003;
  local_ab = *(undefined1 *)(param_3 + 0x44);
  local_ec = 1;
  local_dc = 0xf;
  local_da = 0;
  uStack_a4 = 4;
  uStack_9c = 0x900000003;
  local_93 = *(undefined1 *)(param_3 + 0x45);
  local_c4 = 0xf;
  local_c2 = 0;
  local_ac = 0xf;
  local_aa = 0;
  uStack_8c = 5;
  uStack_84 = 0xa00000003;
  local_7b = *(undefined1 *)(param_3 + 0x46);
  local_94 = 0xf;
  local_92 = 0;
  local_7c = 0xf;
  local_7a = 0;
  uStack_74 = 6;
  uStack_6c = 0xb00000003;
  local_63 = *(undefined1 *)(param_3 + 0x47);
  local_64 = 0xf;
  local_62 = 0;
  local_4c = 0xf;
  local_4a = 0;
  local_1b8 = 0x210;
  local_1b4 = 1;
  local_138 = local_150;
  local_120 = local_168;
  local_108 = local_168;
  local_f0 = local_168;
  local_d8 = local_168;
  local_c0 = local_168;
  local_a8 = local_168;
  local_90 = local_168;
  local_78 = local_168;
  local_60 = local_168;
  local_1c0 = FUN_100fece0(0x210);
  iStack_1bc = local_1c0;
  FUN_100ef6d8(&local_1c0,&local_1b0,0x10);
  FUN_100ef6d8(&local_1c0,local_180,0x138);
  FUN_100ef6d8(&local_1c0,s_SV_POSITION_1012c800,0x1b);
  FUN_100ef6d8(&local_1c0,&DAT_1012c7fc,-(iStack_1bc - local_1c0) & 3);
  iVar2 = local_1c0;
  *(int *)(local_1c0 + 4) = (iStack_1bc - local_1c0) + -8;
  FUN_100ef6d8(param_2,local_1c0,iStack_1bc - local_1c0);
  FUN_100fed00(iVar2);
  uVar5 = 10;
  *(int *)(*param_2 + 0x24) = *piVar1 - *param_2;
  local_1b0 = 0x4e47534f;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 8;
  local_1b4 = 1;
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
  local_1c0 = FUN_100fece0(0x210);
  iStack_1bc = local_1c0;
  FUN_100ef6d8(&local_1c0,&local_1b0,0x10);
  local_1a8 = 0;
  uStack_19c = 0xf;
  uVar4 = 0;
  uStack_1a4 = 3;
  local_1b0 = uVar3 * 0x18 + 8;
  do {
    local_1a0 = (int)((char *)(param_3 + 0x4a))[uVar4];
    if (local_1a0 != -1) {
      uStack_1ac = uVar4;
      FUN_100ef6d8(&local_1c0,&local_1b0,0x18);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  local_1b0 = uVar3 * 0x18 + 0x12;
  uStack_1ac = 0;
  local_1a8 = 0;
  uStack_1a4 = 3;
  local_1a0 = 0xffffffff;
  uStack_19c = 0xe01;
  if (*(char *)(param_3 + 0x4e) != -1) {
    FUN_100ef6d8(&local_1c0,&local_1b0,0x18);
    uVar5 = 0x13;
  }
  FUN_100ef6d8(&local_1c0,s_SV_TARGET_10136060,uVar5);
  FUN_100ef6d8(&local_1c0,&DAT_1012c7f8,-(iStack_1bc - local_1c0) & 3);
  iVar2 = local_1c0;
  *(uint *)(local_1c0 + 8) = uVar3;
  *(int *)(local_1c0 + 4) = (iStack_1bc - local_1c0) + -8;
  FUN_100ef6d8(param_2,local_1c0,iStack_1bc - local_1c0);
  FUN_100fed00(iVar2);
  *(int *)(*param_2 + 0x28) = *piVar1 - *param_2;
  return 1;
}

