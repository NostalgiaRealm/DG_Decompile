/*
 * FUN_1801a1c90 at 1801a1c90
 * undefined FUN_1801a1c90(void)
 * Address ranges: 1801a1c90-1801a2263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a1c90(longlong param_1,float *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,char param_10,char param_11,byte param_12)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong extraout_x1;
  int iVar10;
  int iVar11;
  int extraout_w11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *pcVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_s0;
  float fVar17;
  int local_120 [2];
  longlong local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  int local_b0;
  undefined1 auStack_98 [32];
  int local_78;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  local_e8 = CONCAT44(local_e8._4_4_,param_7);
  local_100 = CONCAT44(local_100._4_4_,param_5) & 0xffffffff000000ff;
  local_f0 = CONCAT44(local_f0._4_4_,param_8);
  if (param_6 == (undefined8 *)0x0) {
    iVar11 = (int)param_2[2];
    iVar10 = (int)param_2[3];
    if (param_2[2] - (float)iVar11 != 0.0) {
      iVar11 = iVar11 + 1;
    }
    if (param_2[3] - (float)iVar10 != 0.0) {
      iVar10 = iVar10 + 1;
    }
    local_e0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_d8 = CONCAT44(iVar10,iVar11);
  }
  else {
    uStack_d8 = param_6[1];
    local_e0 = *param_6;
  }
  bVar1 = true;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  fVar14 = (float)(*extraout_x11)(param_4);
  (*(code *)puVar2)(0x180224000);
  fVar15 = (float)(*extraout_x11_00)(param_4);
  (*(code *)puVar2)(0x180224000);
  fVar16 = (float)(*extraout_x11_01)(param_3);
  (*(code *)puVar2)(0x180224000);
  uVar5 = (*extraout_x11_02)(param_3);
  lVar13 = 0;
  uVar6 = FUN_180193b50(uVar5,param_3,param_4);
  fVar17 = extraout_s0;
  if ((uVar6 & 1) == 0) {
    local_118 = param_4 + 0x60;
    local_108 = 0;
    local_110 = param_3 + 0x60;
LAB_1801a1e9c:
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_05)(param_4,param_2[0xb],param_2[0xc],1);
  }
  else {
    local_120[0] = 1;
    (*(code *)puVar2)(0x180224000);
    cVar3 = (*extraout_x11_03)(param_4);
    if (cVar3 == '\0') {
      local_118 = 0x60;
    }
    else {
      FUN_1801aea68(param_4,param_2[0xb],param_2[0xc]);
      fVar15 = 1.0;
      local_120[0] = 0;
      fVar14 = 1.0;
      local_118 = 0x1a4;
    }
    local_118 = local_118 + param_4;
    (*(code *)puVar2)(0x180224000);
    cVar3 = (*extraout_x11_04)(param_3);
    bVar1 = cVar3 == '\0';
    if (bVar1) {
      local_110 = 0x60;
    }
    else {
      FUN_1801aea68(param_3,param_2[8],param_2[9]);
      fVar17 = 1.0;
      fVar16 = 1.0;
      local_110 = 0x1a4;
      lVar13 = param_3;
    }
    local_110 = local_110 + param_3;
    local_108 = 1;
    if (local_120[0] != 0) goto LAB_1801a1e9c;
  }
  if (bVar1) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_06)(param_3,param_2[8],param_2[9],0);
  }
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * fVar17,
                (float)*(undefined8 *)(param_2 + 2) * fVar16);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar17,
                (float)*(undefined8 *)param_2 * fVar16);
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar15,
                (float)*(undefined8 *)(param_2 + 6) * fVar14);
  *(ulonglong *)(param_2 + 4) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar15,
                (float)*(undefined8 *)(param_2 + 4) * fVar14);
  uVar5 = (*(code *)puVar2)(0x180224000);
  (*extraout_x11_07)(uVar5,auStack_98);
  if (*(int *)(param_4 + 0x44) - 3U < 3) {
    uVar6 = FUN_1801a1360(param_1,param_2,param_3,param_4);
    if ((uVar6 & 1) == 0) {
      return;
    }
    (*(code *)puVar2)(0x180224000);
    uVar6 = (ulonglong)(uint)param_2[10];
    pcVar12 = extraout_x11_08;
    goto LAB_1801a2234;
  }
  local_f8 = CONCAT44(local_f8._4_4_,(uint)param_12);
  FUN_1801b8808(param_1,*(undefined4 *)(param_4 + 0x2c),local_e8 & 0xffffffff,local_f0 & 0xffffffff,
                param_9,*(undefined1 *)(param_1 + 0x1cf08),param_10,param_11,param_12);
  uVar5 = (*(code *)puVar2)(0x180224000);
  (*extraout_x11_09)(uVar5,auStack_d0);
  if (local_108 == 0) {
    if (local_78 == 0x3c) {
      FUN_1801a4380(param_1,1,*(undefined8 *)(param_4 + 0x10));
    }
    if (((local_100 & 1) == 0) && (local_b0 == 0x3c)) {
      FUN_1801a4380(param_1,2,*(undefined8 *)(param_3 + 0x10));
    }
  }
  (*(code *)puVar2)(0x180224000);
  puVar7 = (uint *)(*extraout_x11_10)(param_4,&local_100);
  FUN_1801b8ad8(param_1,local_120,*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_3 + 0x2c),
                local_78,local_b0,*puVar7 >> 0x14 & 3,param_10,param_11,param_9,(undefined1)local_f8
               );
  local_f8 = *(undefined8 *)(local_118 + 0x14);
  local_100 = *(ulonglong *)(local_110 + 0x1c);
  if (local_100 == 0) {
    local_100 = *(ulonglong *)(local_110 + 0x14);
  }
  local_e8 = param_1 + 0x1c000;
  FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_f0,
                *(undefined4 *)(local_118 + 0x2c),0);
  if ((local_120[0] == 8) &&
     (*(longlong *)(local_118 + 0x14) != *(longlong *)(local_110 + 0x14) && param_10 == param_11)) {
LAB_1801a2104:
    if (param_10 == '\0') {
      local_120[0] = 4;
    }
    else {
      local_120[0] = 6;
    }
    if (*(int *)(param_4 + 0x34) != 1) {
      local_120[0] = local_120[0] + 1;
    }
LAB_1801a2124:
    (*(code *)puVar2)(0x180224000);
    local_f8 = (*extraout_x11_11)(param_4);
    (*(code *)puVar2)(0x180224000);
    uVar4 = (*extraout_x11_12)(param_4,0,1);
    puVar8 = (ulonglong *)
             FUN_18020d168(*(undefined8 *)(*(longlong *)(local_e8 + 0xf18) + 0x1930),&local_118,
                           uVar4,0);
    local_f0 = *puVar8;
    *(undefined8 *)(param_2 + 0x16) = local_f8;
  }
  else {
    uVar6 = FUN_1801b7978(local_120[0]);
    if ((uVar6 & 1) != 0) {
      if (extraout_w11 == 8) goto LAB_1801a2104;
      goto LAB_1801a2124;
    }
  }
  *(ulonglong *)(param_2 + 0xe) = local_100;
  *(undefined8 *)(param_2 + 0x16) = local_f8;
  puVar9 = (undefined8 *)
           FUN_18020d168(*(undefined8 *)(*(longlong *)(local_e8 + 0xf18) + 0x1938),&local_118,
                         *(undefined4 *)(local_110 + 0x30),param_2[10]);
  *(undefined8 *)(param_2 + 0x12) = *puVar9;
  *(ulonglong *)(param_2 + 0x1a) = local_f0;
  param_2[0x22] = *(float *)(local_110 + 0x48);
  param_2[0x24] = *(float *)(local_110 + 0x48);
  uVar5 = FUN_1801a0908(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),
                        *(undefined4 *)(param_4 + 0x2c),local_120[0],0,param_10,0);
  if (lVar13 != 0) {
    FUN_1801aeba8(lVar13,param_2[10],&local_e0);
    return;
  }
  (*(code *)puVar2)(0x180224000,uVar5,param_2[10]);
  uVar6 = extraout_x1;
  pcVar12 = extraout_x11_13;
LAB_1801a2234:
  (*pcVar12)(param_3,uVar6,&local_e0);
  return;
}

