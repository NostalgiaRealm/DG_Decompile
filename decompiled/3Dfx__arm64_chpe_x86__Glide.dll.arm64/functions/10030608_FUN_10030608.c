/*
 * FUN_10030608 at 10030608
 * undefined FUN_10030608(void)
 * Address ranges: 10030608-10030cbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10030608(int param_1,int param_2,undefined1 param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  ulonglong extraout_x13;
  int extraout_w14;
  int iVar17;
  int extraout_w14_00;
  int extraout_w15;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined1 local_108;
  uint local_104;
  uint uStack_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar17 = *(int *)(*piVar1 + 0x3188);
  local_108 = param_3;
  local_104 = param_5;
  uStack_100 = param_6;
  local_fc = param_7;
  local_f8 = param_8;
  uVar10 = FUN_10020550(*piVar1);
  *(undefined1 *)(*piVar1 + 0x3234) = uVar10;
  *(undefined4 *)(*piVar1 + 0x2c78) = *(undefined4 *)(param_2 + 0x5c);
  *(float *)(*piVar1 + 0x2bd0) = (float)*(uint *)(param_2 + 0x20);
  puVar2 = (uint *)(param_2 + 0x24);
  *(float *)(*piVar1 + 0x2bd4) = (float)*puVar2;
  *(undefined1 *)(*piVar1 + 0x3150) = 1;
  local_f4 = *(undefined4 *)(*piVar1 + 0x2ac4);
  if (*(char *)(param_2 + 0x7d) == '\0') {
    iVar12 = *piVar1;
    uVar11 = FUN_10022800(iVar17 + 0x1600,&DAT_10096c40);
    *(undefined4 *)(iVar12 + 0x31d8) = uVar11;
    uStack_b8 = uRam10096bd8;
    uStack_a8 = uRam10096be8;
    uStack_b0 = _DAT_10096be0;
    uStack_98 = uRam10096bf8;
    local_a0 = _DAT_10096bf0;
    local_90 = DAT_10096c00;
    uStack_78 = uRam10096b50;
    local_80 = _DAT_10096b48;
    uStack_68 = uRam10096b60;
    uStack_70 = _DAT_10096b58;
    uStack_58 = uRam10096b70;
    local_60 = _DAT_10096b68;
    local_50 = DAT_10096b78;
    local_c0 = 0x100000001;
    puVar5 = &local_c0;
    if (*(char *)(param_2 + 0x48) == '\0') {
      puVar5 = &local_80;
    }
    uVar11 = FUN_10022e50(iVar17 + 0x15f0,puVar5);
    *(undefined4 *)(*piVar1 + 0x31e4) = uVar11;
    uVar11 = FUN_10022b58(iVar17 + 0x1620,&DAT_10096ba0);
    *(undefined4 *)(*piVar1 + 0x31e0) = uVar11;
    *(undefined1 *)(*piVar1 + 0x3236) = 1;
    fStack_10c = *(float *)(param_2 + 0x2c);
    local_110 = *(float *)(param_2 + 0x28);
    local_118 = 0;
    FUN_10061e30(*(undefined4 *)(iVar17 + 0x1304),1,&local_118);
  }
  else {
    *(undefined4 *)(*piVar1 + 0x2ac4) = 1;
    *(undefined1 *)(*piVar1 + 0x2bc2) = 1;
    FUN_10020da0(*piVar1,*(undefined1 *)(*piVar1 + 0x3234));
    FUN_10021150(*piVar1,*(undefined1 *)(*piVar1 + 0x3234));
  }
  puVar3 = (uint *)(param_2 + 0x2c);
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = (float)*(uint *)(param_2 + 0x28);
  fStack_d4 = (float)*puVar3;
  local_cc = 0x3f800000;
  uVar13 = FUN_10061f60(*(undefined4 *)(iVar17 + 0x1304),1,&local_e0);
  uVar7 = *(uint *)(param_2 + 0x28);
  if (((uVar7 == *(uint *)(param_2 + 0x20)) && (*puVar3 == *puVar2)) ||
     (uVar13 = FUN_1002a378(uVar13,*(undefined4 *)(*piVar1 + 0x2c78),
                            *(undefined4 *)(*piVar1 + 0x2c74)), iVar17 = extraout_w14,
     (uVar13 & 1) == 0)) {
    iVar17 = *piVar1;
  }
  uVar14 = FUN_1002c2c0(uVar13,*(uint *)(iVar17 + 0x2964) & 0x7f);
  iVar12 = FUN_1002c2c0(uVar14,*(undefined4 *)(extraout_w14_00 + 0x2968));
  iVar17 = param_1 + extraout_w15 * 0x120 + 0x140;
  if (extraout_w15 == -1) {
    iVar17 = 0;
  }
  if (extraout_w11 == 0) {
    iVar17 = param_2;
  }
  iVar4 = param_1 + iVar12 * 0x120 + 0x140;
  if (iVar12 == -1) {
    iVar4 = 0;
  }
  iVar12 = param_2;
  if (extraout_w11 == 0) {
    iVar12 = iVar4;
  }
  iVar4 = param_2 + (param_4 & 0xff) * 0x20;
  if (iVar17 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(iVar17 + 0xb8);
  }
  if (iVar12 == 0) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(iVar12 + 0xcc);
    uVar16 = *(undefined4 *)(iVar12 + 0xb8);
  }
  if (((iVar17 != 0) && (iVar12 != 0)) &&
     ((*(uint *)(iVar12 + 0x28) < *(uint *)(iVar17 + 0x28) ||
      (*(uint *)(iVar12 + 0x2c) < *(uint *)(iVar17 + 0x2c))))) {
    if (extraout_w11 == 0) {
      uVar16 = 0;
      uVar15 = 0;
    }
    else {
      uVar11 = 0;
    }
  }
  uVar8 = *puVar2;
  if (extraout_w12 == 0) {
    local_e8 = 0.005;
    fStack_e4 = 0.005;
  }
  else {
    local_e8 = -(0.49 / ((float)uVar7 / (float)(extraout_x13 & 0xffffffff)));
    fStack_e4 = -(0.49 / ((float)*puVar3 / (float)uVar8));
  }
  local_110 = (float)local_fc;
  bVar9 = *(int *)(param_2 + 0x60) == 1;
  uVar7 = uStack_100;
  if (bVar9) {
    uVar7 = uVar8 - uStack_100;
  }
  uVar6 = local_f8;
  if (bVar9) {
    uVar6 = uVar8 - local_f8;
  }
  local_118 = CONCAT44((float)uStack_100,(float)local_104);
  fStack_10c = (float)local_f8;
  local_f0 = local_e8 + (float)local_104;
  fStack_ec = (float)uVar7 + fStack_e4;
  local_e8 = local_e8 + local_110;
  fStack_e4 = (float)uVar6 + fStack_e4;
  FUN_100300f8(param_1,&local_118,&local_f0,*(undefined4 *)(param_1 + extraout_w10 * 4 + 0x4a0),
               *(undefined4 *)(iVar4 + 0xdc),*(undefined4 *)(iVar4 + 0xe0),uVar11,uVar16,uVar15);
  FUN_10060580(*(int *)(*(int *)(*piVar1 + 0x3188) + 0x1304) + 4,0);
  *(undefined4 *)(*piVar1 + 0x2ac4) = local_f4;
  *(undefined1 *)(*piVar1 + 0x2bc1) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc0) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc2) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc3) = 1;
  *(undefined1 *)(*piVar1 + 0x3151) = 1;
  return;
}

