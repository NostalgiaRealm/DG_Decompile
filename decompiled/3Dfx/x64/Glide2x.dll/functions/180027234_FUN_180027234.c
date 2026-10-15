/*
 * FUN_180027234 at 180027234
 * undefined __fastcall FUN_180027234(longlong param_1, uint param_2, byte param_3, uint param_4)
 * Address ranges: 180027234-180027775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027234(longlong param_1,uint param_2,byte param_3,uint param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
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
  FUN_18002f128(param_1 + 0x3b60,0,0);
  plVar1 = (longlong *)(param_1 + 0x34e8);
  FUN_1800268dc(plVar1,'\0',2);
  bVar9 = FUN_1800193e0(param_1);
  iVar18 = 1;
  if ((*(int *)(param_1 + 0x2a60) == 0) || (*(int *)(param_1 + 0x2a64) != 1)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  lVar19 = 2;
  puVar13 = (undefined8 *)&DAT_180060c80;
  piVar8 = local_1a8;
  do {
    piVar14 = piVar8;
    puVar11 = puVar13;
    uVar12 = puVar11[1];
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    *(undefined8 *)piVar14 = *puVar11;
    *(undefined8 *)(piVar14 + 2) = uVar12;
    uVar12 = puVar11[4];
    uVar6 = puVar11[5];
    *(undefined8 *)(piVar14 + 4) = uVar4;
    *(undefined8 *)(piVar14 + 6) = uVar5;
    uVar4 = puVar11[6];
    uVar5 = puVar11[7];
    *(undefined8 *)(piVar14 + 8) = uVar12;
    *(undefined8 *)(piVar14 + 10) = uVar6;
    uVar12 = puVar11[8];
    uVar6 = puVar11[9];
    *(undefined8 *)(piVar14 + 0xc) = uVar4;
    *(undefined8 *)(piVar14 + 0xe) = uVar5;
    uVar4 = puVar11[10];
    uVar5 = puVar11[0xb];
    *(undefined8 *)(piVar14 + 0x10) = uVar12;
    *(undefined8 *)(piVar14 + 0x12) = uVar6;
    uVar12 = puVar11[0xc];
    uVar6 = puVar11[0xd];
    *(undefined8 *)(piVar14 + 0x14) = uVar4;
    *(undefined8 *)(piVar14 + 0x16) = uVar5;
    uVar4 = puVar11[0xe];
    uVar5 = puVar11[0xf];
    *(undefined8 *)(piVar14 + 0x18) = uVar12;
    *(undefined8 *)(piVar14 + 0x1a) = uVar6;
    *(undefined8 *)(piVar14 + 0x1c) = uVar4;
    *(undefined8 *)(piVar14 + 0x1e) = uVar5;
    lVar19 = lVar19 + -1;
    puVar13 = puVar11 + 0x10;
    piVar8 = piVar14 + 0x20;
  } while (lVar19 != 0);
  uVar12 = puVar11[0x11];
  uVar4 = puVar11[0x12];
  uVar5 = puVar11[0x13];
  *(undefined8 *)(piVar14 + 0x20) = puVar11[0x10];
  *(undefined8 *)(piVar14 + 0x22) = uVar12;
  uVar6 = puVar11[0x14];
  uVar7 = puVar11[0x15];
  *(undefined8 *)(piVar14 + 0x24) = uVar4;
  *(undefined8 *)(piVar14 + 0x26) = uVar5;
  uVar4 = puVar11[0x16];
  uVar5 = puVar11[0x17];
  uVar12 = puVar11[0x18];
  *(undefined8 *)(piVar14 + 0x28) = uVar6;
  *(undefined8 *)(piVar14 + 0x2a) = uVar7;
  *(undefined8 *)(piVar14 + 0x2c) = uVar4;
  *(undefined8 *)(piVar14 + 0x2e) = uVar5;
  *(undefined8 *)(piVar14 + 0x30) = uVar12;
  uStack_17c = *(undefined1 *)(param_1 + 0x2abc);
  if ((bVar25) || ((*(uint *)(param_1 + 0x2c0c) & 0xff0000) == 0)) {
    uStack_154 = 0xf;
  }
  else {
    uStack_154 = 0;
  }
  uVar12 = FUN_18001aaa8((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1978),local_1a8);
  *(undefined8 *)(param_1 + 0x3260) = uVar12;
  local_1e0 = *(int *)(param_1 + 0x2a60);
  local_1d8 = 8;
  uStack_1d0 = 0x30000ffff;
  local_1dc = *(int *)(param_1 + 0x2a64);
  local_1c8 = 0x300000003;
  uStack_1c0 = 8;
  uStack_1bc = 3;
  uStack_1b8 = 3;
  uStack_1b4 = 0x800000003;
  uVar12 = FUN_18001ad48((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1960),&local_1e0);
  *(undefined8 *)(param_1 + 0x3278) = uVar12;
  uVar12 = FUN_18001ac58((longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x19a8),
                         (uint *)&DAT_180060c18);
  bVar25 = *(int *)(param_1 + 0x2afc) != 0;
  *(undefined8 *)(param_1 + 0x3270) = uVar12;
  *(undefined1 *)(param_1 + 0x32da) = 1;
  cVar2 = *(char *)(param_1 + 0x32d9);
  *(bool *)(param_1 + 0x32d9) = bVar25;
  *(byte *)(param_1 + 0x3171) = *(byte *)(param_1 + 0x3171) | (bool)cVar2 != bVar25;
  FUN_1800197c8(param_1);
  iVar3 = *(int *)(param_1 + 0x2984);
  uVar10 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  if (iVar3 == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = iVar18;
    if ((iVar3 != 1) && (iVar16 = -1, iVar3 == 2)) {
      iVar16 = 2;
    }
  }
  iVar3 = *(int *)(param_1 + 0x2988);
  if (iVar3 == 0) {
    iVar18 = 0;
  }
  else if ((iVar3 != 1) && (iVar18 = -1, iVar3 == 2)) {
    iVar18 = 2;
  }
  lVar20 = (longlong)iVar16 * 0x170;
  lVar19 = 0;
  if (iVar16 != -1) {
    lVar19 = param_1 + 0x3630 + lVar20;
  }
  lVar17 = 0;
  if (iVar18 != -1) {
    lVar17 = (longlong)iVar18 * 0x170 + 0x3630 + param_1;
  }
  if (lVar19 != 0) {
    puVar15 = (uint *)&DAT_00000028;
    if (iVar16 != -1) {
      puVar15 = (uint *)(param_1 + 0x3658 + lVar20);
    }
    uVar10 = *puVar15;
    puVar15 = (uint *)&DAT_0000002c;
    if (iVar16 != -1) {
      puVar15 = (uint *)(param_1 + 0x365c + lVar20);
    }
    uVar21 = *puVar15;
    puVar15 = (uint *)&DAT_00000020;
    if (iVar16 != -1) {
      puVar15 = (uint *)(param_1 + 0x3650 + lVar20);
    }
    uVar22 = *puVar15;
    puVar15 = (uint *)&DAT_00000024;
    if (iVar16 != -1) {
      puVar15 = (uint *)(param_1 + 0x3654 + lVar20);
    }
    uVar23 = *puVar15;
  }
  local_208 = 0;
  local_1f8 = 0;
  local_1f4 = 0x3f800000;
  local_200 = (float)uVar10;
  local_1fc = (float)uVar21;
  FUN_18004886c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),1,(longlong)&local_208);
  fVar26 = FUN_1800214dc(param_1,local_res10,local_res18,local_res20);
  FUN_180019b00(param_1,bVar9,'\0');
  FUN_18001a090(param_1,bVar9);
  *(byte *)(param_1 + 0x3b98) = *(byte *)(param_1 + 0x3b98) | 1;
  puVar13 = FUN_180040c80((longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x3628) + 0x31c0) + 0x19c0),
                          (byte *)&PTR_s_POSITION_18006c528,1);
  uVar12 = 0;
  FUN_180019780(*(longlong *)(param_1 + 0x3628),5,puVar13,*(undefined8 *)(param_1 + 0x3b40),
                *(undefined8 *)(param_1 + 0x3b20));
  uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),bVar9);
  FUN_18001a258(*(longlong *)(param_1 + 0x3628),bVar9);
  local_res8 = 0;
  uVar10 = FUN_180023b80((longlong)plVar1,uVar12,&local_res8);
  uVar24 = (ulonglong)uVar10;
  if (local_res8 != 0) {
    *(undefined8 *)(local_res8 + uVar24 * 0x10) = 0;
    *(float *)(local_res8 + 8 + uVar24 * 0x10) = fVar26;
    *(undefined4 *)(local_res8 + 0xc + uVar24 * 0x10) = 0;
    *(float *)(local_res8 + 0x10 + uVar24 * 0x10) = (float)uVar22;
    *(undefined4 *)(local_res8 + 0x14 + uVar24 * 0x10) = 0;
    *(float *)(local_res8 + 0x18 + uVar24 * 0x10) = fVar26;
    *(undefined8 *)(local_res8 + 0x1c + uVar24 * 0x10) = 0;
    *(float *)(local_res8 + 0x24 + uVar24 * 0x10) = (float)uVar23;
    *(float *)(local_res8 + 0x28 + uVar24 * 0x10) = fVar26;
    *(undefined4 *)(local_res8 + 0x2c + uVar24 * 0x10) = 0;
    *(float *)(local_res8 + 0x30 + uVar24 * 0x10) = (float)uVar22;
    *(float *)(local_res8 + 0x34 + uVar24 * 0x10) = (float)uVar23;
    *(float *)(local_res8 + 0x38 + uVar24 * 0x10) = fVar26;
    *(undefined4 *)(local_res8 + 0x3c + uVar24 * 0x10) = 0;
    if (*(int *)(*(longlong *)(param_1 + 0x3b50) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x3b50) + 0x34) = 0;
    }
    local_1e4 = 0x10;
    local_1f0 = *(undefined8 *)(*(longlong *)(param_1 + 0x3b50) + 0x80);
    local_1e8 = *(undefined4 *)(*(longlong *)(param_1 + 0x3b50) + 0x30);
    FUN_1800483c0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3628) + 0x31c0) + 0x1508),0,
                  1,(longlong)&local_1f0);
    FUN_180048bb4(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3628) + 0x31c0) + 0x1508),4,
                  1,uVar10,0);
  }
  FUN_1800215bc(param_1,lVar19,lVar17,'\x0f','\x0f');
  FUN_18001a2fc(param_1);
  FUN_180026ae4(plVar1);
  *(undefined4 *)(param_1 + 0x2be0) = 0x1010101;
  return;
}

