/*
 * FUN_10095708 at 10095708
 * undefined FUN_10095708(void)
 * Address ranges: 10095708-10095a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10095708(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_1c0;
  byte local_1bf [7];
  int local_1b8;
  int iStack_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8 [2];
  int local_1a0 [5];
  byte local_18c;
  byte local_18b;
  undefined2 local_18a;
  int local_188 [5];
  byte local_174;
  byte local_173;
  undefined2 local_172;
  undefined8 local_170;
  int local_168;
  undefined4 uStack_164;
  int local_160 [7];
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  int iStack_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  int iStack_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  int iStack_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  int iStack_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  int iStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  int iStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  int iStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  int iStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  int iStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_1c0 = 0;
  local_1bf[0] = 0;
  uVar3 = FUN_10095680(param_1,param_3,&local_1c0,local_1bf);
  local_12c = 0;
  local_e4 = 0;
  iVar4 = 0xd;
  if (uVar3 != 0) {
    iVar4 = 0xe;
  }
  if (4 < uVar3) {
    iVar4 = iVar4 + 1;
  }
  local_170 = 0x4e47534f;
  uStack_164 = 8;
  local_1a0[0] = iVar4 * 0x18;
  local_144 = 8;
  local_160[0] = local_1a0[0] + 8;
  iStack_130 = local_1a0[0] + 0x1d;
  local_134 = 0xf;
  local_11c = 0xf;
  local_10c = 0x300000003;
  local_fc = 9;
  local_f4 = 0x400000003;
  local_dc = 0x500000003;
  uStack_c4 = 0x600000003;
  uStack_b4 = 2;
  uStack_ac = 0x700000003;
  uStack_94 = 0x800000003;
  uStack_84 = 4;
  uStack_7c = 0x900000003;
  uStack_6c = 5;
  local_160[1] = 0;
  local_160[2] = 1;
  local_160[6] = local_1a0[0] + 0x14;
  uStack_64 = 0xa00000003;
  local_13c = 0x100000003;
  uStack_54 = 6;
  local_160[5] = 0xf;
  local_124 = 0x200000003;
  local_104 = 0xf;
  local_ec = 0xf;
  local_d4 = 0xf;
  uStack_bc = 0xf;
  uStack_a4 = 0xf;
  uStack_8c = 0xf;
  uStack_74 = 0xf;
  uStack_5c = 0xf;
  uStack_44 = 0xf;
  uStack_4c = 0xb00000003;
  local_160[3] = 3;
  local_160[4] = 0;
  local_114 = 1;
  uStack_cc = 1;
  uStack_9c = 3;
  uStack_3c = 7;
  local_2c = 0xf;
  uStack_34 = 0xc00000003;
  local_1a0[1] = 0;
  local_1a0[2] = 2;
  local_1a0[3] = 3;
  local_1a0[4] = 0xd;
  local_188[1] = 1;
  local_188[2] = 2;
  local_188[3] = 3;
  local_188[4] = 0xe;
  local_1a0[0] = local_1a0[0] + 0x23;
  local_1b0 = 0x210;
  local_18a = 0;
  local_172 = 0;
  local_1ac = 1;
  local_188[0] = local_1a0[0];
  local_168 = iVar4;
  iStack_118 = iStack_130;
  iStack_100 = local_160[6];
  iStack_e8 = local_160[6];
  iStack_d0 = local_160[6];
  iStack_b8 = local_160[6];
  iStack_a0 = local_160[6];
  iStack_88 = local_160[6];
  iStack_70 = local_160[6];
  iStack_58 = local_160[6];
  iStack_40 = local_160[6];
  local_1b8 = FUN_101322b0(0x210);
  iStack_1b4 = local_1b8;
  FUN_10122c50(&local_1b8,&local_170,0x10);
  FUN_10122c50(&local_1b8,local_160,0x138);
  bVar1 = local_1bf[0];
  local_18c = local_1c0;
  local_18b = ~local_1c0 & 0xf;
  local_174 = local_1bf[0];
  local_173 = ~local_1bf[0] & 0xf;
  if (local_1c0 != 0) {
    FUN_10122c50(&local_1b8,local_1a0,0x18);
  }
  if (bVar1 != 0) {
    FUN_10122c50(&local_1b8,local_188,0x18);
  }
  FUN_10122c50(&local_1b8,s__SV_POSITION_1016ed2f + 1,0xc);
  FUN_10122c50(&local_1b8,s_TEXCOORD_1016ed3c,9);
  FUN_10122c50(&local_1b8,s_COLOR_1016ed45,6);
  if (uVar3 != 0) {
    FUN_10122c50(&local_1b8,s_SV_CLIPDISTANCE_1016ed4b,0x10);
  }
  local_1a8[0] = 0xabababab;
  FUN_10122c50(&local_1b8,local_1a8,-(iStack_1b4 - local_1b8) & 3);
  iVar2 = local_1b8;
  *(int *)(local_1b8 + 4) = (iStack_1b4 - local_1b8) + -8;
  FUN_10122c50(param_2,local_1b8,iStack_1b4 - local_1b8);
  FUN_101322d0(iVar2);
  return iVar4;
}

