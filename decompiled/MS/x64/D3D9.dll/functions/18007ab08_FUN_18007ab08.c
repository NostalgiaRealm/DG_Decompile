/*
 * FUN_18007ab08 at 18007ab08
 * int __fastcall FUN_18007ab08(ulonglong param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18007ab08-18007aef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18007ab08(ulonglong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong local_res8;
  byte local_res20 [8];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  int local_1a8 [5];
  byte local_194;
  byte local_193;
  undefined2 local_192;
  int local_190 [5];
  byte local_17c;
  byte local_17b;
  undefined2 local_17a;
  int local_178 [7];
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  
  local_res8 = param_1 & 0xffffffffffffff00;
  local_res20[0] = 0;
  uVar4 = FUN_18007aab8(param_1,param_3,(undefined1 *)&local_res8,local_res20);
  uVar3 = (uint)uVar4;
  local_38 = 0x4e47534f;
  local_178[1] = 0;
  local_178[3] = 3;
  local_178[4] = 0;
  local_178[5] = 0xf;
  local_154 = 3;
  local_14c = 0xf;
  local_144 = 0;
  local_13c = 3;
  local_134 = 0xf;
  local_178[2] = 1;
  local_150 = 1;
  local_2c = 8;
  local_15c = 8;
  local_138 = 2;
  iVar5 = (uVar3 != 0) + 0xd + (uint)(4 < uVar3);
  local_12c = 1;
  local_124 = 3;
  local_120 = 3;
  uVar6 = -(uint)(4 < uVar3) & 0x18;
  local_11c = 0xf;
  local_114 = 9;
  local_10c = 3;
  local_178[0] = 0x140;
  if (uVar3 != 0) {
    local_178[0] = 0x158;
  }
  local_108 = 4;
  local_178[0] = local_178[0] + uVar6;
  local_104 = 0xf;
  local_fc = 0;
  local_f4 = 3;
  local_ec = 0xf;
  local_e4 = 1;
  local_178[6] = 0x14c;
  if (uVar3 != 0) {
    local_178[6] = 0x164;
  }
  local_dc = 3;
  local_178[6] = local_178[6] + uVar6;
  local_d8 = 6;
  local_148 = 0x155;
  if (uVar3 != 0) {
    local_148 = 0x16d;
  }
  local_d4 = 0xf;
  local_148 = uVar6 + local_148;
  local_f0 = 5;
  local_84 = 5;
  local_c0 = 7;
  local_54 = 7;
  local_cc = 2;
  local_c4 = 3;
  local_bc = 0xf;
  local_1a8[0] = 0x15b;
  if (uVar3 != 0) {
    local_1a8[0] = 0x173;
  }
  local_b4 = 3;
  local_ac = 3;
  local_a8 = 8;
  local_a4 = 0xf;
  local_1a8[0] = uVar6 + local_1a8[0];
  local_1b8 = 0x210;
  local_9c = 4;
  local_94 = 3;
  local_90 = 9;
  local_8c = 0xf;
  local_7c = 3;
  local_78 = 10;
  local_74 = 0xf;
  local_6c = 6;
  local_64 = 3;
  local_60 = 0xb;
  local_5c = 0xf;
  local_4c = 3;
  local_48 = 0xc;
  local_44 = 0xf;
  local_1a8[1] = 0;
  local_1a8[2] = 2;
  local_1a8[3] = 3;
  local_1a8[4] = 0xd;
  local_192 = 0;
  local_190[1] = 1;
  local_190[2] = 2;
  local_190[3] = 3;
  local_190[4] = 0xe;
  local_17a = 0;
  local_1b0 = 1;
  local_190[0] = local_1a8[0];
  local_130 = local_148;
  local_118 = local_178[6];
  local_100 = local_178[6];
  local_e8 = local_178[6];
  local_d0 = local_178[6];
  local_b8 = local_178[6];
  local_a0 = local_178[6];
  local_88 = local_178[6];
  local_70 = local_178[6];
  local_58 = local_178[6];
  local_30 = iVar5;
  local_1c8 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_1c0 = local_1c8;
  FUN_1800edd90((longlong *)&local_1c8,&local_38,0x10);
  FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)local_178,0x138);
  bVar1 = local_res20[0];
  local_194 = (byte)local_res8;
  local_193 = ~(byte)local_res8 & 0xf;
  local_17c = local_res20[0];
  local_17b = ~local_res20[0] & 0xf;
  if ((byte)local_res8 != 0) {
    FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)local_1a8,0x18);
  }
  if (bVar1 != 0) {
    FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)local_190,0x18);
  }
  FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)s_SV_POSITION_180111c88,0xc);
  FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)s_TEXCOORD_180111c94,9);
  FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)s_COLOR_180111c9d,6);
  if (uVar3 != 0) {
    FUN_1800edd90((longlong *)&local_1c8,(undefined8 *)s_SV_CLIPDISTANCE_180111ca3,0x10);
  }
  local_res8 = CONCAT44(local_res8._4_4_,0xabababab);
  FUN_1800edd90((longlong *)&local_1c8,&local_res8,
                (ulonglong)(-((int)local_1c0 - (int)local_1c8) & 3));
  puVar2 = local_1c8;
  *(int *)((longlong)local_1c8 + 4) = ((int)local_1c0 - (int)local_1c8) + -8;
  FUN_1800edd90(param_2,local_1c8,(longlong)local_1c0 - (longlong)local_1c8);
  FUN_1800fbcf0(puVar2);
  return iVar5;
}

