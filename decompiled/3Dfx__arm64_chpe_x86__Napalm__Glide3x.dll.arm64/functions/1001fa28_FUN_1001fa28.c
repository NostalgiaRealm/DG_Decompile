/*
 * FUN_1001fa28 at 1001fa28
 * undefined FUN_1001fa28(void)
 * Address ranges: 1001fa28-1002024b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001fa28(int param_1,int param_2,byte param_3,byte param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint *puVar23;
  int iVar24;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar24 = *(int *)(*piVar1 + 0x3688);
  local_f8 = param_5;
  uStack_f4 = param_6;
  local_f0 = param_7;
  local_ec = param_8;
  uVar14 = FUN_10011830(*piVar1);
  puVar2 = (uint *)(param_2 + 0x20);
  *(undefined1 *)(*piVar1 + 0x3734) = uVar14;
  *(undefined4 *)(*piVar1 + 0x2e68) = *(undefined4 *)(param_2 + 0x5c);
  *(float *)(*piVar1 + 0x2dc0) = (float)*puVar2;
  puVar3 = (uint *)(param_2 + 0x24);
  *(float *)(*piVar1 + 0x2dc4) = (float)*puVar3;
  *(undefined1 *)(*piVar1 + 0x3650) = 1;
  local_e8 = *(undefined4 *)(*piVar1 + 0x2ca4);
  local_118 = CONCAT44(local_118._4_4_,(char *)(param_2 + 0x7d));
  if (*(char *)(param_2 + 0x7d) == '\0') {
    iVar5 = *piVar1;
    uVar15 = FUN_10012b70(iVar24 + 0x1600,&DAT_1009ff80);
    *(undefined4 *)(iVar5 + 0x36d8) = uVar15;
    uStack_a8 = uRam1009ff28;
    uStack_b0 = _DAT_1009ff20;
    uStack_98 = uRam1009ff38;
    local_a0 = _DAT_1009ff30;
    local_90 = DAT_1009ff40;
    local_80 = _DAT_1009fe80;
    uStack_68 = uRam1009fe98;
    uStack_70 = _DAT_1009fe90;
    uStack_58 = uRam1009fea8;
    local_60 = _DAT_1009fea0;
    local_50 = DAT_1009feb0;
    local_c0 = 0x100000001;
    if ((param_4 == 0) ||
       (*(char *)(*(int *)(*piVar1 + 0x3680) + *(int *)(*piVar1 + 0x3684) * 0x18 + 0x531) == '\0'))
    {
      uStack_b8 = uRam1009ff18 & 0xffffffff;
    }
    else {
      uStack_b8 = CONCAT44(1,(int)uRam1009ff18);
    }
    _uStack_78 = CONCAT44(*(undefined4 *)(*piVar1 + 0x2c2c),(int)uRam1009fe88);
    puVar7 = &local_c0;
    if (*(char *)(param_2 + 0x48) == '\0') {
      puVar7 = &local_80;
    }
    uVar15 = FUN_100131c0(iVar24 + 0x15f0,puVar7);
    *(undefined4 *)(*piVar1 + 0x36e4) = uVar15;
    uVar15 = FUN_10012ec8(iVar24 + 0x1620,&DAT_1009fee0);
    *(undefined4 *)(*piVar1 + 0x36e0) = uVar15;
    *(undefined1 *)(*piVar1 + 0x3736) = 1;
    local_100 = *(float *)(param_2 + 0x28);
    fStack_fc = *(float *)(param_2 + 0x2c);
    local_108 = 0;
    FUN_1006ace0(*(undefined4 *)(iVar24 + 0x1304),1,&local_108);
  }
  else {
    *(undefined4 *)(*piVar1 + 0x2ca4) = 1;
    *(undefined1 *)(*piVar1 + 0x2daa) = 1;
    FUN_10012078(*piVar1,*(undefined1 *)(*piVar1 + 0x3734));
    FUN_10012448(*piVar1,*(undefined1 *)(*piVar1 + 0x3734));
  }
  puVar23 = (uint *)(param_2 + 0x2c);
  puVar6 = (undefined4 *)(iVar24 + 0x1304);
  puVar4 = (uint *)(param_2 + 0x28);
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = (float)*puVar4;
  fStack_d4 = (float)*puVar23;
  local_cc = 0x3f800000;
  uVar19 = FUN_1006ae10(*puVar6,1,&local_e0);
  if (((*puVar4 == *puVar2) && (*puVar23 == *puVar3)) ||
     (uVar19 = FUN_1001aa80(uVar19,*(undefined4 *)(*piVar1 + 0x2e68),
                            *(undefined4 *)(*piVar1 + 0x2e64)), (uVar19 & 1) == 0)) {
    iVar24 = 0;
  }
  else {
    iVar24 = 1;
  }
  if ((*(char *)(param_2 + 0x48) == '\0') ||
     (*(char *)(*(int *)(*piVar1 + 0x3680) + *(int *)(*piVar1 + 0x3684) * 0x18 + 0x531) == '\0')) {
    uVar16 = FUN_1001aaf8(uVar19,param_2,param_3,iVar24,param_4);
  }
  else {
    if (*(char *)(param_2 + 0x7f) == '\0') {
      uVar16 = 3;
      if (*(char *)local_118 == '\0') {
        uVar16 = 1;
      }
      uVar16 = (uint)param_4 << 3 | (uint)param_3 << 2 | uVar16;
    }
    else {
      uVar16 = (param_3 ^ 1) + 0x10;
    }
    puVar8 = &DAT_100a0240;
    if (iVar24 != 0) {
      puVar8 = &DAT_100a0200;
    }
    uVar16 = (uint)*(ushort *)(puVar8 + uVar16 * 2);
  }
  if (*(char *)(param_2 + 0x7f) != '\0') {
    local_118 = FUN_10030a18(*piVar1 + 0x4668,*(undefined4 *)(param_2 + 0x74));
    uVar20 = FUN_10030a18(*piVar1 + 0x4668,*(undefined4 *)(param_2 + 0x78));
    FUN_1006a2f0(*puVar6,0xf,local_118);
    FUN_1006a2f0(*puVar6,0x10,uVar20);
    FUN_100694c8(*(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x7680) + 0x3688) + 0x1304),
                 *(undefined4 *)(*piVar1 + 0x7688),0,1,0x80);
  }
  iVar17 = FUN_1001cae0(param_1,*(uint *)(*piVar1 + 0x2b1c) & 0x7f);
  iVar18 = FUN_1001cae0(param_1,*(undefined4 *)(*piVar1 + 0x2b20));
  cVar12 = *(char *)(param_2 + 0x48);
  iVar5 = param_1 + iVar17 * 0x120 + 0x140;
  if (iVar17 == -1) {
    iVar5 = 0;
  }
  if (cVar12 == '\0') {
    iVar5 = param_2;
  }
  iVar17 = param_1 + iVar18 * 0x120 + 0x140;
  if (iVar18 == -1) {
    iVar17 = 0;
  }
  iVar18 = param_2;
  if (cVar12 == '\0') {
    iVar18 = iVar17;
  }
  iVar17 = param_2 + (uint)param_4 * 0x20;
  if (iVar5 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(iVar5 + 0xb8);
  }
  if (iVar18 == 0) {
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    uVar22 = *(undefined4 *)(iVar18 + 0xcc);
    uVar21 = *(undefined4 *)(iVar18 + 0xb8);
  }
  if (((iVar5 != 0) && (iVar18 != 0)) &&
     ((*(uint *)(iVar18 + 0x28) < *(uint *)(iVar5 + 0x28) ||
      (*(uint *)(iVar18 + 0x2c) < *(uint *)(iVar5 + 0x2c))))) {
    if (cVar12 == '\0') {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      uVar15 = 0;
    }
  }
  uVar11 = *puVar3;
  if (iVar24 == 0) {
    local_110 = 0.005;
    fStack_10c = 0.005;
  }
  else {
    local_110 = -(0.49 / ((float)*puVar4 / (float)*puVar2));
    fStack_10c = -(0.49 / ((float)*puVar23 / (float)uVar11));
  }
  bVar13 = *(int *)(param_2 + 0x60) == 1;
  uVar9 = uStack_f4;
  if (bVar13) {
    uVar9 = uVar11 - uStack_f4;
  }
  local_100 = (float)local_f0;
  uVar10 = local_ec;
  if (bVar13) {
    uVar10 = uVar11 - local_ec;
  }
  local_108 = CONCAT44((float)uStack_f4,(float)local_f8);
  fStack_fc = (float)local_ec;
  local_118 = CONCAT44((float)uVar9 + fStack_10c,(float)local_f8 + local_110);
  local_110 = local_100 + local_110;
  fStack_10c = (float)uVar10 + fStack_10c;
  FUN_1001f498(param_1,&local_108,&local_118,*(undefined4 *)(param_1 + uVar16 * 4 + 0x920),
               *(undefined4 *)(iVar17 + 0xdc),*(undefined4 *)(iVar17 + 0xe0),uVar15,uVar21,uVar22);
  FUN_10069430(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1304) + 4,0);
  *(undefined4 *)(*piVar1 + 0x2ca4) = local_e8;
  *(undefined1 *)(*piVar1 + 0x2da9) = 1;
  *(undefined1 *)(*piVar1 + 0x2da8) = 1;
  *(undefined1 *)(*piVar1 + 0x2daa) = 1;
  *(undefined1 *)(*piVar1 + 0x2dab) = 1;
  *(undefined1 *)(*piVar1 + 0x3651) = 1;
  return;
}

