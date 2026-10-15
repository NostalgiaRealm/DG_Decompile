/*
 * FUN_180019a70 at 180019a70
 * undefined __fastcall FUN_180019a70(longlong * param_1, uint param_2, byte param_3, uint param_4)
 * Address ranges: 180019a70-180019f89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019a70(longlong *param_1,uint param_2,byte param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  longlong local_res8;
  uint local_res10;
  byte local_res18;
  uint local_res20;
  undefined8 local_208;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  int local_1a8 [11];
  undefined1 uStack_17c;
  undefined1 uStack_154;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180021ac4((longlong)(param_1 + 0x854),0,0);
  plVar1 = param_1 + 0x6cd;
  lVar17 = 2;
  FUN_180019140(plVar1,'\0',2);
  bVar8 = FUN_18000c348((longlong)param_1);
  FUN_180014ee4(param_1,-1);
  if (((int)param_1[0x55f] == 0) || (*(int *)((longlong)param_1 + 0x2afc) != 1)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  puVar12 = (undefined8 *)&DAT_180062970;
  piVar7 = local_1a8;
  do {
    piVar13 = piVar7;
    puVar11 = puVar12;
    uVar15 = puVar11[1];
    uVar3 = puVar11[2];
    uVar4 = puVar11[3];
    *(undefined8 *)piVar13 = *puVar11;
    *(undefined8 *)(piVar13 + 2) = uVar15;
    uVar15 = puVar11[4];
    uVar5 = puVar11[5];
    *(undefined8 *)(piVar13 + 4) = uVar3;
    *(undefined8 *)(piVar13 + 6) = uVar4;
    uVar3 = puVar11[6];
    uVar4 = puVar11[7];
    *(undefined8 *)(piVar13 + 8) = uVar15;
    *(undefined8 *)(piVar13 + 10) = uVar5;
    uVar15 = puVar11[8];
    uVar5 = puVar11[9];
    *(undefined8 *)(piVar13 + 0xc) = uVar3;
    *(undefined8 *)(piVar13 + 0xe) = uVar4;
    uVar3 = puVar11[10];
    uVar4 = puVar11[0xb];
    *(undefined8 *)(piVar13 + 0x10) = uVar15;
    *(undefined8 *)(piVar13 + 0x12) = uVar5;
    uVar15 = puVar11[0xc];
    uVar5 = puVar11[0xd];
    *(undefined8 *)(piVar13 + 0x14) = uVar3;
    *(undefined8 *)(piVar13 + 0x16) = uVar4;
    uVar3 = puVar11[0xe];
    uVar4 = puVar11[0xf];
    *(undefined8 *)(piVar13 + 0x18) = uVar15;
    *(undefined8 *)(piVar13 + 0x1a) = uVar5;
    *(undefined8 *)(piVar13 + 0x1c) = uVar3;
    *(undefined8 *)(piVar13 + 0x1e) = uVar4;
    lVar17 = lVar17 + -1;
    puVar12 = puVar11 + 0x10;
    piVar7 = piVar13 + 0x20;
  } while (lVar17 != 0);
  uVar15 = puVar11[0x11];
  uVar3 = puVar11[0x12];
  uVar4 = puVar11[0x13];
  *(undefined8 *)(piVar13 + 0x20) = puVar11[0x10];
  *(undefined8 *)(piVar13 + 0x22) = uVar15;
  uVar5 = puVar11[0x14];
  uVar6 = puVar11[0x15];
  *(undefined8 *)(piVar13 + 0x24) = uVar3;
  *(undefined8 *)(piVar13 + 0x26) = uVar4;
  uVar3 = puVar11[0x16];
  uVar4 = puVar11[0x17];
  uVar15 = puVar11[0x18];
  *(undefined8 *)(piVar13 + 0x28) = uVar5;
  *(undefined8 *)(piVar13 + 0x2a) = uVar6;
  *(undefined8 *)(piVar13 + 0x2c) = uVar3;
  *(undefined8 *)(piVar13 + 0x2e) = uVar4;
  *(undefined8 *)(piVar13 + 0x30) = uVar15;
  uStack_17c = *(undefined1 *)((longlong)param_1 + 0x2b54);
  if ((bVar22) || ((*(uint *)((longlong)param_1 + 0x2cac) & 0xff0000) == 0)) {
    uStack_154 = 0xf;
  }
  else {
    uStack_154 = 0;
  }
  lVar17 = FUN_18000d928((longlong *)(param_1[0x668] + 0x1978),local_1a8);
  param_1[0x67c] = lVar17;
  local_1e0 = (int)param_1[0x55f];
  local_1d8 = 8;
  uStack_1d0 = 0x30000ffff;
  local_1dc = *(int *)((longlong)param_1 + 0x2afc);
  local_1c8 = 0x300000003;
  uStack_1c0 = 8;
  uStack_1bc = 3;
  uStack_1b8 = 3;
  uStack_1b4 = 0x800000003;
  lVar17 = FUN_18000dbc8((longlong *)(param_1[0x668] + 0x1960),&local_1e0);
  param_1[0x67f] = lVar17;
  lVar17 = FUN_18000dad8((longlong *)(param_1[0x668] + 0x19a8),(uint *)&DAT_180062900);
  bVar22 = *(int *)((longlong)param_1 + 0x2b94) != 0;
  param_1[0x67e] = lVar17;
  *(undefined1 *)((longlong)param_1 + 0x345a) = 1;
  cVar2 = *(char *)((longlong)param_1 + 0x3459);
  *(bool *)((longlong)param_1 + 0x3459) = bVar22;
  *(byte *)((longlong)param_1 + 0x32f1) =
       *(byte *)((longlong)param_1 + 0x32f1) | (bool)cVar2 != bVar22;
  FUN_18000c730((longlong)param_1);
  uVar9 = FUN_180014854(plVar1,*(int *)((longlong)param_1 + 0x29fc));
  lVar17 = (longlong)(int)uVar9;
  uVar10 = FUN_180014854(plVar1,(int)param_1[0x540]);
  plVar19 = (longlong *)0x0;
  if (uVar9 != 0xffffffff) {
    plVar19 = param_1 + lVar17 * 0x2e + 0x6f6;
  }
  plVar20 = (longlong *)0x0;
  if (uVar10 != 0xffffffff) {
    plVar20 = param_1 + (longlong)(int)uVar10 * 0x2e + 0x6f6;
  }
  if (plVar19 == (longlong *)0x0) {
    uVar10 = 0;
    uVar16 = 0;
    uVar9 = 0;
    uVar18 = 0;
  }
  else {
    puVar14 = (uint *)&DAT_00000028;
    if (uVar9 != 0xffffffff) {
      puVar14 = (uint *)(param_1 + lVar17 * 0x2e + 0x6fb);
    }
    uVar10 = *puVar14;
    puVar14 = (uint *)&DAT_0000002c;
    if (uVar9 != 0xffffffff) {
      puVar14 = (uint *)((longlong)param_1 + lVar17 * 0x170 + 0x37dc);
    }
    uVar18 = *puVar14;
    puVar14 = (uint *)&DAT_00000020;
    if (uVar9 != 0xffffffff) {
      puVar14 = (uint *)(param_1 + lVar17 * 0x2e + 0x6fa);
    }
    uVar16 = *puVar14;
    puVar14 = (uint *)&DAT_00000024;
    if (uVar9 != 0xffffffff) {
      puVar14 = (uint *)((longlong)param_1 + lVar17 * 0x170 + 0x37d4);
    }
    uVar9 = *puVar14;
  }
  local_208 = 0;
  local_1f8 = 0;
  local_1f4 = 0x3f800000;
  local_200 = (float)uVar10;
  local_1fc = (float)uVar18;
  FUN_18004ae78(*(longlong *)(param_1[0x668] + 0x1508),1,(longlong)&local_208);
  fVar23 = FUN_180014b3c((longlong)param_1,local_res10,local_res18,local_res20);
  FUN_18000ca68((longlong)param_1,bVar8,'\0');
  FUN_18000d004((longlong)param_1,bVar8);
  *(byte *)(param_1 + 0x89f) = *(byte *)(param_1 + 0x89f) | 1;
  puVar12 = FUN_18004328c((longlong *)(*(longlong *)(param_1[0x6f5] + 0x3340) + 0x19c0),
                          (byte *)&PTR_s_POSITION_18006d668,1);
  uVar15 = 0;
  FUN_18000c6e8(param_1[0x6f5],5,puVar12,param_1[0x850],param_1[0x84c]);
  uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),bVar8);
  FUN_18000d1c4(param_1[0x6f5],bVar8);
  local_res8 = 0;
  uVar10 = FUN_1800163a4((longlong)plVar1,uVar15,&local_res8);
  uVar21 = (ulonglong)uVar10;
  if (local_res8 != 0) {
    *(undefined8 *)(local_res8 + uVar21 * 0x10) = 0;
    *(float *)(local_res8 + 8 + uVar21 * 0x10) = fVar23;
    *(undefined4 *)(local_res8 + 0xc + uVar21 * 0x10) = 0;
    *(float *)(local_res8 + 0x10 + uVar21 * 0x10) = (float)uVar16;
    *(undefined4 *)(local_res8 + 0x14 + uVar21 * 0x10) = 0;
    *(float *)(local_res8 + 0x18 + uVar21 * 0x10) = fVar23;
    *(undefined8 *)(local_res8 + 0x1c + uVar21 * 0x10) = 0;
    *(float *)(local_res8 + 0x24 + uVar21 * 0x10) = (float)uVar9;
    *(float *)(local_res8 + 0x28 + uVar21 * 0x10) = fVar23;
    *(undefined4 *)(local_res8 + 0x2c + uVar21 * 0x10) = 0;
    *(float *)(local_res8 + 0x30 + uVar21 * 0x10) = (float)uVar16;
    *(float *)(local_res8 + 0x34 + uVar21 * 0x10) = (float)uVar9;
    *(float *)(local_res8 + 0x38 + uVar21 * 0x10) = fVar23;
    *(undefined4 *)(local_res8 + 0x3c + uVar21 * 0x10) = 0;
    if (*(int *)(param_1[0x852] + 0x34) != 0) {
      *(undefined4 *)(param_1[0x852] + 0x34) = 0;
    }
    local_1e4 = 0x10;
    local_1f0 = *(undefined8 *)(param_1[0x852] + 0x80);
    local_1e8 = *(undefined4 *)(param_1[0x852] + 0x30);
    FUN_18004a9cc(*(longlong *)(*(longlong *)(param_1[0x6f5] + 0x3340) + 0x1508),0,1,
                  (longlong)&local_1f0);
    FUN_18004b1c0(*(longlong *)(*(longlong *)(param_1[0x6f5] + 0x3340) + 0x1508),4,1,uVar10,0);
  }
  FUN_180014c1c((longlong)param_1,(longlong)plVar19,(longlong)plVar20,'\x0f','\x0f');
  FUN_18000d268((longlong)param_1);
  FUN_180019320(plVar1);
  *(undefined4 *)(param_1 + 0x58f) = 0x1010101;
  return;
}

