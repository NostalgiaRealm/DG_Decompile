/*
 * FUN_1003a640 at 1003a640
 * undefined FUN_1003a640(void)
 * Address ranges: 1003a640-1003ab17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a640(int *param_1)

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
  undefined8 uVar14;
  undefined8 extraout_x1;
  uint uVar15;
  int extraout_w10;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_20c;
  int *local_208;
  int local_204;
  int iStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
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
  local_20c = param_1[1];
  iVar13 = param_1[2];
  iVar8 = param_1[3];
  FUN_1003ea50(iVar6 + 0x3950,0,0);
  iVar3 = iVar6 + 0x3440;
  FUN_10032a48(iVar3,0,2);
  uVar10 = FUN_100200d0(iVar6);
  local_208 = (int *)(iVar6 + 0x2a40);
  if ((*local_208 == 0) || (*(int *)(iVar6 + 0x2a44) != 1)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FUN_1007a780(auStack_190,&DAT_10096c10,0x148);
  local_164 = *(undefined1 *)(iVar6 + 0x2a9c);
  if ((bVar9) || (local_13c = 0, (*(uint *)(iVar6 + 0x2bec) & 0xff0000) == 0)) {
    local_13c = 0xf;
  }
  piVar4 = (int *)(iVar6 + 0x3188);
  uVar11 = FUN_10022380(*piVar4 + 0x1600,auStack_190);
  *(undefined4 *)(iVar6 + 0x31d8) = uVar11;
  uStack_1c8 = uRam10096ba8;
  uStack_1b8 = uRam10096bb8;
  uStack_1c0 = _DAT_10096bb0;
  uStack_1a8 = uRam10096bc8;
  local_1b0 = _DAT_10096bc0;
  local_1a0 = DAT_10096bd0;
  _local_1d0 = CONCAT44(*(int *)(iVar6 + 0x2a44),*local_208);
  uVar11 = FUN_100229d0(*piVar4 + 0x15f0,&local_1d0);
  *(undefined4 *)(iVar6 + 0x31e4) = uVar11;
  uVar11 = FUN_100226d8(*piVar4 + 0x1620,&DAT_10096b70);
  *(undefined4 *)(iVar6 + 0x31e0) = uVar11;
  bVar9 = *(int *)(iVar6 + 0x2adc) != 0;
  cVar7 = *(char *)(iVar6 + 0x3235);
  *(bool *)(iVar6 + 0x3235) = bVar9;
  *(byte *)(iVar6 + 0x3151) = (bool)cVar7 != bVar9 | *(byte *)(iVar6 + 0x3151);
  *(undefined1 *)(iVar6 + 0x3236) = 1;
  uVar14 = FUN_10020200(iVar6);
  uVar14 = FUN_1002be40(uVar14,*(undefined4 *)(iVar6 + 0x2964));
  iVar12 = FUN_1002be40(uVar14,*(undefined4 *)(iVar6 + 0x2968));
  iStack_200 = iVar6 + extraout_w10 * 0x120 + 0x3580;
  if (extraout_w10 == -1) {
    iStack_200 = 0;
  }
  local_204 = iVar6 + iVar12 * 0x120 + 0x3580;
  if (iVar12 == -1) {
    local_204 = 0;
  }
  if (iStack_200 == 0) {
    uVar16 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar15 = 0;
  }
  else {
    uVar16 = *(uint *)(iStack_200 + 0x28);
    uVar15 = *(uint *)(iStack_200 + 0x2c);
    uVar18 = *(uint *)(iStack_200 + 0x20);
    uVar17 = *(uint *)(iStack_200 + 0x24);
  }
  fStack_1dc = (float)uVar15;
  local_1e0 = (float)uVar16;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1d4 = 0x3f800000;
  FUN_10061ae0(*(undefined4 *)(*piVar4 + 0x1304),1,&local_1e8);
  local_208 = (int *)FUN_1002c008(iVar6,local_20c,(char)iVar13,(short)iVar8);
  FUN_100205d8(iVar6,uVar10,0);
  FUN_10020cd0(iVar6,uVar10);
  piVar1 = (int *)(iVar6 + 0x3578);
  *(byte *)(iVar6 + 0x3970) = *(byte *)(iVar6 + 0x3970) | 1;
  uVar11 = FUN_10056790(*(int *)(*piVar1 + 0x3188) + 0x1630,0x1009e408,1);
  FUN_10020190(*piVar1,5,uVar11,*(undefined4 *)(iVar6 + 0x3940),*(undefined4 *)(iVar6 + 0x3930));
  FUN_10020ed0(*piVar1,uVar10);
  local_20c = 0;
  iVar13 = FUN_1002fbb8(iVar3,extraout_x1,&local_20c);
  if (local_20c != 0) {
    puVar5 = (undefined8 *)(local_20c + iVar13 * 0x10);
    *puVar5 = 0;
    *(int **)(puVar5 + 1) = local_208;
    *(undefined4 *)((int)puVar5 + 0xc) = 0;
    *(float *)(puVar5 + 2) = (float)uVar18;
    *(undefined4 *)((int)puVar5 + 0x14) = 0;
    *(int **)(puVar5 + 3) = local_208;
    *(undefined8 *)((int)puVar5 + 0x1c) = 0;
    *(float *)((int)puVar5 + 0x24) = (float)uVar17;
    *(int **)(puVar5 + 5) = local_208;
    *(undefined4 *)((int)puVar5 + 0x2c) = 0;
    *(float *)(puVar5 + 6) = (float)uVar18;
    *(float *)((int)puVar5 + 0x34) = (float)uVar17;
    *(int **)(puVar5 + 7) = local_208;
    *(undefined4 *)((int)puVar5 + 0x3c) = 0;
    piVar2 = (int *)(*(int *)(iVar6 + 0x3948) + 0x2c);
    if (*piVar2 != 0) {
      *piVar2 = 0;
    }
    iVar8 = *(int *)(iVar6 + 0x3948);
    local_1f8 = *(undefined8 *)(iVar8 + 0x68);
    local_1f0 = *(undefined4 *)(iVar8 + 0x28);
    uStack_1ec = 0x10;
    FUN_10061320(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),0,1,&local_1f8);
    FUN_10062010(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),4,1,iVar13,0);
  }
  FUN_1002c118(iVar6,iStack_200,local_204,0xf,0xf);
  FUN_10060100(*(int *)(*piVar4 + 0x1304) + 4,0);
  FUN_10032e80(iVar3);
  *(undefined4 *)(iVar6 + 0x2bc0) = 0x1010101;
  return;
}

