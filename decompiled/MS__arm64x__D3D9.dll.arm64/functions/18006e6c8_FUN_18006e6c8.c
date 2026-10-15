/*
 * FUN_18006e6c8 at 18006e6c8
 * undefined FUN_18006e6c8(void)
 * Address ranges: 18006e6c8-18006ea53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18006e6c8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong local_1d0;
  longlong lStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8 [5];
  byte local_194;
  byte local_193;
  undefined2 local_192;
  int local_190 [5];
  byte local_17c;
  byte local_17b;
  undefined2 local_17a;
  undefined8 local_178;
  int local_170;
  undefined4 uStack_16c;
  int local_168 [7];
  undefined8 local_14c;
  undefined8 local_144;
  undefined4 local_13c;
  int iStack_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  int iStack_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  int iStack_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  int iStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  int iStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  int iStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  int iStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  int iStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  int iStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  int iStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  
  uVar9 = 0;
  uVar6 = 0;
  do {
    iVar7 = (int)uVar6 >> 3;
    local_1b0 = *(undefined4 *)(param_3 + 8);
    uVar1 = uVar6 & 7;
    uVar6 = uVar6 + 1;
    if ((*(byte *)((longlong)&local_1b0 + (longlong)iVar7) >> (ulonglong)uVar1 & 1) != 0) {
      uVar9 = uVar9 + 1;
    }
  } while (uVar6 < 6);
  bVar2 = (&DAT_18022c4d8)[uVar9];
  local_134 = 0;
  bVar3 = (&DAT_18022c4d0)[uVar9];
  local_11c = 1;
  local_ec = 0;
  uStack_d4 = 1;
  iVar7 = 0xd;
  if (uVar9 != 0) {
    iVar7 = 0xe;
  }
  iVar7 = (uint)(4 < uVar9) + iVar7;
  local_178 = 0x4e47534f;
  local_1a8[0] = 0x18;
  if (uVar9 < 5) {
    local_1a8[0] = 0;
  }
  bVar5 = uVar9 == 0;
  local_168[0] = 0x158;
  if (bVar5) {
    local_168[0] = 0x140;
  }
  local_168[0] = local_1a8[0] + local_168[0];
  local_168[1] = 0;
  local_168[2] = 1;
  local_168[6] = 0x164;
  if (bVar5) {
    local_168[6] = 0x14c;
  }
  uStack_16c = 8;
  local_14c = 8;
  local_144 = 0x100000003;
  iStack_138 = 0x16d;
  if (bVar5) {
    iStack_138 = 0x155;
  }
  iStack_138 = local_1a8[0] + iStack_138;
  local_12c = 0x200000003;
  local_168[3] = 3;
  local_168[4] = 0;
  local_114 = 0x300000003;
  uStack_a4 = 3;
  local_104 = 9;
  uStack_9c = 0x800000003;
  local_fc = 0x400000003;
  uStack_8c = 4;
  local_e4 = 0x500000003;
  uStack_84 = 0x900000003;
  local_168[6] = local_1a8[0] + local_168[6];
  uStack_cc = 0x600000003;
  local_168[5] = 0xf;
  uStack_bc = 2;
  local_13c = 0xf;
  uStack_b4 = 0x700000003;
  local_124 = 0xf;
  local_10c = 0xf;
  local_f4 = 0xf;
  local_dc = 0xf;
  local_c4 = 0xf;
  local_ac = 0xf;
  local_94 = 0xf;
  local_7c = 0xf;
  uStack_74 = 5;
  local_64 = 0xf;
  local_4c = 0xf;
  uStack_44 = 7;
  uStack_3c = 0xc00000003;
  local_34 = 0xf;
  iVar8 = 0x173;
  if (bVar5) {
    iVar8 = 0x15b;
  }
  uStack_6c = 0xa00000003;
  local_1a8[0] = local_1a8[0] + iVar8;
  local_192 = 0;
  local_1a8[1] = 0;
  local_1a8[2] = 2;
  local_1a8[3] = 3;
  local_1a8[4] = 0xd;
  local_190[1] = 1;
  local_190[2] = 2;
  uStack_5c = 6;
  local_190[3] = 3;
  local_190[4] = 0xe;
  uStack_54 = 0xb00000003;
  local_1c0 = 0x210;
  local_17a = 0;
  local_1b8 = 1;
  local_190[0] = local_1a8[0];
  local_170 = iVar7;
  iStack_120 = iStack_138;
  iStack_108 = local_168[6];
  iStack_f0 = local_168[6];
  iStack_d8 = local_168[6];
  iStack_c0 = local_168[6];
  iStack_a8 = local_168[6];
  iStack_90 = local_168[6];
  iStack_78 = local_168[6];
  iStack_60 = local_168[6];
  iStack_48 = local_168[6];
  local_1d0 = thunk_FUN_180102f80(0x210);
  lStack_1c8 = local_1d0;
  FUN_1800f5a90(&local_1d0,&local_178,0x10);
  FUN_1800f5a90(&local_1d0,local_168,0x138);
  local_193 = ~bVar2 & 0xf;
  local_17b = ~bVar3 & 0xf;
  local_194 = bVar2;
  local_17c = bVar3;
  if (bVar2 != 0) {
    FUN_1800f5a90(&local_1d0,local_1a8,0x18);
  }
  if (bVar3 != 0) {
    FUN_1800f5a90(&local_1d0,local_190,0x18);
  }
  FUN_1800f5a90(&local_1d0,s_SV_POSITION_18024c478,0xc);
  FUN_1800f5a90(&local_1d0,s_TEXCOORD_18024c484,9);
  FUN_1800f5a90(&local_1d0,s_COLOR_18024c48d,6);
  if (uVar9 != 0) {
    FUN_1800f5a90(&local_1d0,s_SV_CLIPDISTANCE_18024c493,0x10);
  }
  local_1ac = 0xabababab;
  FUN_1800f5a90(&local_1d0,&local_1ac,-((int)lStack_1c8 - (int)local_1d0) & 3);
  lVar4 = local_1d0;
  *(int *)(local_1d0 + 4) = ((int)lStack_1c8 - (int)local_1d0) + -8;
  FUN_1800f5a90(param_2,local_1d0,lStack_1c8 - local_1d0);
  thunk_FUN_180102fc0(lVar4);
  return iVar7;
}

