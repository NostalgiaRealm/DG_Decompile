/*
 * FUN_10029f10 at 10029f10
 * undefined FUN_10029f10(void)
 * Address ranges: 10029f10-1002a407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029f10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 extraout_x1;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_21c;
  int *local_218;
  int local_214;
  int local_210;
  int local_20c;
  int iStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  float local_1e8;
  float fStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  int local_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined1 auStack_190 [44];
  undefined1 local_164;
  undefined1 local_13c;
  
  iVar6 = *param_1;
  local_214 = param_1[1];
  iVar14 = param_1[2];
  iVar8 = param_1[3];
  local_210 = iVar6 + 0x4000;
  local_21c = iVar6 + 0x3000;
  FUN_1002e3d0(iVar6 + 0x3f50,0,0);
  iVar3 = iVar6 + 0x35c0;
  FUN_10021b68(iVar3,0,2);
  uVar10 = FUN_1000f8a0(iVar6);
  FUN_1001cf30(iVar6,0xffffffff);
  local_218 = (int *)(iVar6 + 0x2ae0);
  if ((*local_218 == 0) || (*(int *)(iVar6 + 0x2ae4) != 1)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FUN_1007e4a0(auStack_190,&DAT_10099970,0x148);
  local_164 = *(undefined1 *)(iVar6 + 0x2b3c);
  if ((bVar9) || (local_13c = 0, (*(uint *)(iVar6 + 0x2c8c) & 0xff0000) == 0)) {
    local_13c = 0xf;
  }
  piVar4 = (int *)(iVar6 + 0x3308);
  uVar11 = FUN_10011ac0(*piVar4 + 0x1600,auStack_190);
  *(undefined4 *)(iVar6 + 0x3358) = uVar11;
  uStack_1c8 = uRam10099908;
  uStack_1b8 = uRam10099918;
  uStack_1c0 = _DAT_10099910;
  uStack_1a8 = uRam10099928;
  local_1b0 = _DAT_10099920;
  local_1a0 = DAT_10099930;
  _local_1d0 = CONCAT44(*(int *)(iVar6 + 0x2ae4),*local_218);
  uVar11 = FUN_10012110(*piVar4 + 0x15f0,&local_1d0);
  *(undefined4 *)(iVar6 + 0x3364) = uVar11;
  uVar11 = FUN_10011e18(*piVar4 + 0x1620,&DAT_100998d0);
  *(undefined4 *)(iVar6 + 0x3360) = uVar11;
  bVar9 = *(int *)(iVar6 + 0x2b7c) != 0;
  cVar7 = *(char *)(local_21c + 0x3b5);
  *(bool *)(local_21c + 0x3b5) = bVar9;
  *(byte *)(local_21c + 0x2d1) = (bool)cVar7 != bVar9 | *(byte *)(local_21c + 0x2d1);
  *(undefined1 *)(local_21c + 0x3b6) = 1;
  FUN_1000f9d0(iVar6);
  iVar12 = FUN_1001c518(iVar3,*(undefined4 *)(iVar6 + 0x29e0));
  iVar13 = FUN_1001c518(iVar3,*(undefined4 *)(iVar6 + 0x29e4));
  iStack_208 = iVar6 + iVar12 * 0x120 + 0x3700;
  if (iVar12 == -1) {
    iStack_208 = 0;
  }
  local_20c = iVar6 + iVar13 * 0x120 + 0x3700;
  if (iVar13 == -1) {
    local_20c = 0;
  }
  if (iStack_208 == 0) {
    uVar16 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar15 = 0;
  }
  else {
    uVar16 = *(uint *)(iStack_208 + 0x28);
    uVar15 = *(uint *)(iStack_208 + 0x2c);
    uVar18 = *(uint *)(iStack_208 + 0x20);
    uVar17 = *(uint *)(iStack_208 + 0x24);
  }
  fStack_1e4 = (float)uVar15;
  local_1e8 = (float)uVar16;
  local_1f0 = 0;
  local_1e0 = 0;
  local_1dc = 0x3f800000;
  FUN_10065770(*(undefined4 *)(*piVar4 + 0x1304),1,&local_1f0);
  local_218 = (int *)FUN_1001c9c8(iVar6,local_214,(char)iVar14,(short)iVar8);
  FUN_1000fda8(iVar6,uVar10,0);
  FUN_100104c0(iVar6,uVar10);
  piVar1 = (int *)(iVar6 + 0x36f8);
  *(byte *)(local_210 + 0x11c) = *(byte *)(local_210 + 0x11c) | 1;
  uVar11 = FUN_1005a420(*(int *)(*piVar1 + 0x3308) + 0x1630,0x100a1238,1);
  FUN_1000f960(*piVar1,5,uVar11,*(undefined4 *)(iVar6 + 0x3f40),*(undefined4 *)(iVar6 + 0x3f30));
  FUN_100106c8(*piVar1,uVar10);
  local_21c = 0;
  iVar14 = FUN_1001ec58(iVar3,extraout_x1,&local_21c);
  if (local_21c != 0) {
    puVar5 = (undefined8 *)(local_21c + iVar14 * 0x10);
    *puVar5 = 0;
    *(int **)(puVar5 + 1) = local_218;
    *(undefined4 *)((int)puVar5 + 0xc) = 0;
    *(float *)(puVar5 + 2) = (float)uVar18;
    *(undefined4 *)((int)puVar5 + 0x14) = 0;
    *(int **)(puVar5 + 3) = local_218;
    *(undefined8 *)((int)puVar5 + 0x1c) = 0;
    *(float *)((int)puVar5 + 0x24) = (float)uVar17;
    *(int **)(puVar5 + 5) = local_218;
    *(undefined4 *)((int)puVar5 + 0x2c) = 0;
    *(float *)(puVar5 + 6) = (float)uVar18;
    *(float *)((int)puVar5 + 0x34) = (float)uVar17;
    *(int **)(puVar5 + 7) = local_218;
    *(undefined4 *)((int)puVar5 + 0x3c) = 0;
    piVar2 = (int *)(*(int *)(iVar6 + 0x3f48) + 0x2c);
    if (*piVar2 != 0) {
      *piVar2 = 0;
    }
    iVar8 = *(int *)(iVar6 + 0x3f48);
    local_200 = *(undefined8 *)(iVar8 + 0x68);
    local_1f8 = *(undefined4 *)(iVar8 + 0x28);
    uStack_1f4 = 0x10;
    FUN_10064fb0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),0,1,&local_200);
    FUN_10065ca0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),4,1,iVar14,0);
  }
  FUN_1001cad8(iVar6,iStack_208,local_20c,0xf,0xf);
  FUN_10063d90(*(int *)(*piVar4 + 0x1304) + 4,0);
  FUN_10021fa0(iVar3);
  *(undefined4 *)(iVar6 + 0x2c60) = 0x1010101;
  return;
}

