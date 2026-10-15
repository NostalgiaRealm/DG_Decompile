/*
 * FUN_1001f230 at 1001f230
 * undefined FUN_1001f230(void)
 * Address ranges: 1001f230-1001f95b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001f230(int param_1,int param_2,undefined1 param_3,byte param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
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
  uint *puVar5;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar22 = *(int *)(*piVar1 + 0x3308);
  local_108 = param_5;
  uStack_104 = param_6;
  local_100 = param_7;
  local_fc = param_8;
  uVar14 = FUN_1000f8a0(*piVar1);
  puVar2 = (uint *)(param_2 + 0x20);
  puVar3 = (uint *)(param_2 + 0x24);
  *(undefined1 *)(*piVar1 + 0x33b4) = uVar14;
  *(undefined4 *)(*piVar1 + 0x2d18) = *(undefined4 *)(param_2 + 0x5c);
  *(float *)(*piVar1 + 0x2c70) = (float)*puVar2;
  *(float *)(*piVar1 + 0x2c74) = (float)*puVar3;
  *(undefined1 *)(*piVar1 + 0x32d0) = 1;
  local_f4 = *(undefined4 *)(*piVar1 + 0x2b64);
  if (*(char *)(param_2 + 0x7d) == '\0') {
    iVar6 = *piVar1;
    uVar15 = FUN_10011ac0(iVar22 + 0x1600,&DAT_10099970);
    *(undefined4 *)(iVar6 + 0x3358) = uVar15;
    uStack_b8 = uRam10099908;
    uStack_a8 = uRam10099918;
    uStack_b0 = _DAT_10099910;
    uStack_98 = uRam10099928;
    local_a0 = _DAT_10099920;
    local_90 = DAT_10099930;
    uStack_78 = uRam10099880;
    local_80 = _DAT_10099878;
    uStack_68 = uRam10099890;
    uStack_70 = _DAT_10099888;
    uStack_58 = uRam100998a0;
    local_60 = _DAT_10099898;
    local_50 = DAT_100998a8;
    local_c0 = 0x100000001;
    puVar8 = &local_c0;
    if (*(char *)(param_2 + 0x48) == '\0') {
      puVar8 = &local_80;
    }
    uVar15 = FUN_10012110(iVar22 + 0x15f0,puVar8);
    *(undefined4 *)(*piVar1 + 0x3364) = uVar15;
    uVar15 = FUN_10011e18(iVar22 + 0x1620,&DAT_100998d0);
    *(undefined4 *)(*piVar1 + 0x3360) = uVar15;
    *(undefined1 *)(*piVar1 + 0x33b6) = 1;
    local_110 = *(float *)(param_2 + 0x28);
    fStack_10c = *(float *)(param_2 + 0x2c);
    local_118 = 0;
    FUN_10065640(*(undefined4 *)(iVar22 + 0x1304),1,&local_118);
  }
  else {
    *(undefined4 *)(*piVar1 + 0x2b64) = 1;
    *(undefined1 *)(*piVar1 + 0x2c62) = 1;
    FUN_100100f0(*piVar1,*(undefined1 *)(*piVar1 + 0x33b4));
    FUN_100104c0(*piVar1,*(undefined1 *)(*piVar1 + 0x33b4));
  }
  puVar7 = (undefined4 *)(iVar22 + 0x1304);
  puVar5 = (uint *)(param_2 + 0x28);
  puVar4 = (uint *)(param_2 + 0x2c);
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = (float)*puVar5;
  fStack_d4 = (float)*puVar4;
  local_cc = 0x3f800000;
  uVar18 = FUN_10065770(*puVar7,1,&local_e0);
  if (((*puVar5 == *puVar2) && (*puVar4 == *puVar3)) ||
     (uVar18 = FUN_1001a590(uVar18,*(undefined4 *)(*piVar1 + 0x2d18),
                            *(undefined4 *)(*piVar1 + 0x2d14)), (uVar18 & 1) == 0)) {
    iVar22 = 0;
  }
  else {
    iVar22 = 1;
  }
  local_f8 = FUN_1001a600(uVar18,param_2,param_3,iVar22,param_4);
  if (*(char *)(param_2 + 0x7f) != '\0') {
    local_f0 = FUN_1002dc98(*piVar1 + 0x42d0,*(undefined4 *)(param_2 + 0x74));
    uVar19 = FUN_1002dc98(*piVar1 + 0x42d0,*(undefined4 *)(param_2 + 0x78));
    FUN_10064c50(*puVar7,0xf,local_f0);
    FUN_10064c50(*puVar7,0x10,uVar19);
    FUN_10063e28(*(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x72e8) + 0x3308) + 0x1304),
                 *(undefined4 *)(*piVar1 + 0x72f0),0,1,0x80);
  }
  iVar16 = FUN_1001c518(param_1,*(uint *)(*piVar1 + 0x29e0) & 0x7f);
  iVar17 = FUN_1001c518(param_1,*(undefined4 *)(*piVar1 + 0x29e4));
  cVar12 = *(char *)(param_2 + 0x48);
  iVar6 = param_1 + iVar16 * 0x120 + 0x140;
  if (iVar16 == -1) {
    iVar6 = 0;
  }
  if (cVar12 == '\0') {
    iVar6 = param_2;
  }
  iVar16 = param_1 + iVar17 * 0x120 + 0x140;
  if (iVar17 == -1) {
    iVar16 = 0;
  }
  iVar17 = param_2;
  if (cVar12 == '\0') {
    iVar17 = iVar16;
  }
  iVar16 = param_2 + (uint)param_4 * 0x20;
  if (iVar6 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(iVar6 + 0xb8);
  }
  if (iVar17 == 0) {
    uVar21 = 0;
    uVar20 = 0;
  }
  else {
    uVar21 = *(undefined4 *)(iVar17 + 0xcc);
    uVar20 = *(undefined4 *)(iVar17 + 0xb8);
  }
  if (((iVar6 != 0) && (iVar17 != 0)) &&
     ((*(uint *)(iVar17 + 0x28) < *(uint *)(iVar6 + 0x28) ||
      (*(uint *)(iVar17 + 0x2c) < *(uint *)(iVar6 + 0x2c))))) {
    if (cVar12 == '\0') {
      uVar20 = 0;
      uVar21 = 0;
    }
    else {
      uVar15 = 0;
    }
  }
  uVar11 = *puVar3;
  if (iVar22 == 0) {
    local_e8 = 0.005;
    fStack_e4 = 0.005;
  }
  else {
    local_e8 = -(0.49 / ((float)*puVar5 / (float)*puVar2));
    fStack_e4 = -(0.49 / ((float)*puVar4 / (float)uVar11));
  }
  local_110 = (float)local_100;
  bVar13 = *(int *)(param_2 + 0x60) == 1;
  uVar9 = uStack_104;
  if (bVar13) {
    uVar9 = uVar11 - uStack_104;
  }
  uVar10 = local_fc;
  if (bVar13) {
    uVar10 = uVar11 - local_fc;
  }
  local_118 = CONCAT44((float)uStack_104,(float)local_108);
  fStack_10c = (float)local_fc;
  local_f0 = CONCAT44((float)uVar9 + fStack_e4,local_e8 + (float)local_108);
  local_e8 = local_e8 + local_110;
  fStack_e4 = (float)uVar10 + fStack_e4;
  FUN_1001ed18(param_1,&local_118,&local_f0,*(undefined4 *)(param_1 + local_f8 * 4 + 0x920),
               *(undefined4 *)(iVar16 + 0xdc),*(undefined4 *)(iVar16 + 0xe0),uVar15,uVar20,uVar21);
  FUN_10063d90(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1304) + 4,0);
  *(undefined4 *)(*piVar1 + 0x2b64) = local_f4;
  *(undefined1 *)(*piVar1 + 0x2c61) = 1;
  *(undefined1 *)(*piVar1 + 0x2c60) = 1;
  *(undefined1 *)(*piVar1 + 0x2c62) = 1;
  *(undefined1 *)(*piVar1 + 0x2c63) = 1;
  *(undefined1 *)(*piVar1 + 0x32d1) = 1;
  return;
}

