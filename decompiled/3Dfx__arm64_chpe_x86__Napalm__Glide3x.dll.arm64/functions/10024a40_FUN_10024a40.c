/*
 * FUN_10024a40 at 10024a40
 * undefined FUN_10024a40(void)
 * Address ranges: 10024a40-10024f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10024a40(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 extraout_x1;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_20c;
  int *local_208;
  int local_204;
  int local_200;
  int local_1fc;
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
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined1 auStack_190 [44];
  undefined1 local_164;
  undefined1 local_13c;
  
  iVar6 = *param_1;
  local_200 = param_1[1];
  iVar8 = param_1[2];
  local_204 = iVar6 + 0x4000;
  iVar9 = param_1[4];
  local_20c = CONCAT22(local_20c._2_2_,(short)param_1[3]);
  FUN_10031150(iVar6 + 0x42e8,0,0);
  iVar3 = iVar6 + 0x3940;
  FUN_10022528(iVar3,0,2);
  uVar11 = FUN_10011830(iVar6);
  FUN_1001d538(iVar6,0xffffffff);
  local_208 = (int *)(iVar6 + 0x2c20);
  if ((*local_208 == 0) || (*(int *)(iVar6 + 0x2c24) != 1)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  FUN_10083b40(auStack_190,&DAT_1009ff80,0x148);
  local_164 = *(undefined1 *)(iVar6 + 0x2c7c);
  if ((bVar10) || (local_13c = 0, (*(uint *)(iVar6 + 0x2ddc) & 0xff0000) == 0)) {
    local_13c = 0xf;
  }
  piVar4 = (int *)(iVar6 + 0x3688);
  uVar12 = FUN_10012b70(*piVar4 + 0x1600,auStack_190);
  *(undefined4 *)(iVar6 + 0x36d8) = uVar12;
  uStack_1b8 = uRam1009ff28;
  uStack_1c0 = _DAT_1009ff20;
  uStack_1a8 = uRam1009ff38;
  local_1b0 = _DAT_1009ff30;
  local_1a0 = DAT_1009ff40;
  _local_1d0 = CONCAT44(*(int *)(iVar6 + 0x2c24),*local_208);
  _uStack_1c8 = CONCAT44(*(int *)(iVar6 + 0x2c2c),(int)uRam1009ff18);
  if (*(int *)(iVar6 + 0x2c2c) != 0) {
    FUN_1006ab60(*(undefined4 *)(*piVar4 + 0x1304),(char)iVar9);
  }
  uVar12 = FUN_100131c0(*piVar4 + 0x15f0,&local_1d0);
  *(undefined4 *)(iVar6 + 0x36e4) = uVar12;
  uVar12 = FUN_10012ec8(*piVar4 + 0x1620,&DAT_1009fee0);
  *(undefined4 *)(iVar6 + 0x36e0) = uVar12;
  bVar10 = *(int *)(iVar6 + 0x2cbc) != 0;
  cVar7 = *(char *)(iVar6 + 0x3735);
  *(bool *)(iVar6 + 0x3735) = bVar10;
  *(byte *)(iVar6 + 0x3651) = (bool)cVar7 != bVar10 | *(byte *)(iVar6 + 0x3651);
  *(undefined1 *)(iVar6 + 0x3736) = 1;
  FUN_10011960(iVar6);
  iVar13 = FUN_1001cae0(iVar3,*(undefined4 *)(iVar6 + 0x2b1c));
  iVar14 = FUN_1001cae0(iVar3,*(undefined4 *)(iVar6 + 0x2b20));
  iVar9 = iVar6 + (iVar13 + 0x34) * 0x120;
  if (iVar13 == -1) {
    iVar9 = 0;
  }
  local_1fc = iVar6 + (iVar14 + 0x34) * 0x120;
  if (iVar14 == -1) {
    local_1fc = 0;
  }
  if (iVar9 == 0) {
    uVar16 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar15 = 0;
  }
  else {
    uVar16 = *(uint *)(iVar9 + 0x28);
    uVar15 = *(uint *)(iVar9 + 0x2c);
    uVar18 = *(uint *)(iVar9 + 0x20);
    uVar17 = *(uint *)(iVar9 + 0x24);
  }
  fStack_1dc = (float)uVar15;
  local_1e0 = (float)uVar16;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1d4 = 0x3f800000;
  FUN_1006ae10(*(undefined4 *)(*piVar4 + 0x1304),1,&local_1e8);
  bVar10 = false;
  if (iVar9 != 0) {
    bVar10 = *(int *)(iVar9 + 0x10) == 5 || *(int *)(iVar9 + 0x10) == 8;
  }
  local_208 = (int *)FUN_1001cf90(iVar6,local_200,(char)iVar8,(undefined2)local_20c,bVar10);
  FUN_10011d30(iVar6,uVar11,0);
  FUN_10012448(iVar6,uVar11);
  piVar1 = (int *)(iVar6 + 0x3a78);
  *(byte *)(local_204 + 0x4b4) = *(byte *)(local_204 + 0x4b4) | 1;
  uVar12 = FUN_1005fad0(*(int *)(*piVar1 + 0x3688) + 0x1630,0x100a9348,1);
  FUN_100118f0(*piVar1,5,uVar12,*(undefined4 *)(iVar6 + 0x42d8),*(undefined4 *)(iVar6 + 0x42b0));
  FUN_10012650(*piVar1,uVar11);
  local_20c = 0;
  local_204 = FUN_1001f3d8(iVar3,extraout_x1,&local_20c);
  if (local_20c != 0) {
    puVar5 = (undefined8 *)(local_20c + local_204 * 0x10);
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
    piVar2 = (int *)(*(int *)(iVar6 + 0x42e0) + 0x2c);
    if (*piVar2 != 0) {
      *piVar2 = 0;
    }
    iVar8 = *(int *)(iVar6 + 0x42e0);
    local_1f8 = *(undefined8 *)(iVar8 + 0x68);
    local_1f0 = *(undefined4 *)(iVar8 + 0x28);
    uStack_1ec = 0x10;
    FUN_1006a650(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),0,1,&local_1f8);
    FUN_1006b340(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),4,1,local_204,0);
  }
  FUN_1001d0e0(iVar6,iVar9,local_1fc,0xf,0xf);
  FUN_10069430(*(int *)(*piVar4 + 0x1304) + 4,0);
  FUN_10022960(iVar3);
  *(undefined4 *)(iVar6 + 0x2da8) = 0x1010101;
  return;
}

