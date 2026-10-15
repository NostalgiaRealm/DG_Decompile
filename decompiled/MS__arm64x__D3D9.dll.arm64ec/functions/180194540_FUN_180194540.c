/*
 * FUN_180194540 at 180194540
 * undefined FUN_180194540(void)
 * Address ranges: 180194540-180194bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180194540(longlong param_1,float *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,char param_10,char param_11,undefined1 param_12)

{
  bool bVar1;
  undefined *puVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
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
  ulonglong extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float extraout_s0;
  float fVar19;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  float local_108;
  int iStack_104;
  float local_100;
  uint local_f8;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  longlong local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  int local_b0;
  undefined1 auStack_90 [16];
  int local_80;
  
  local_130 = CONCAT44(local_130._4_4_,param_5) & 0xffffffff000000ff;
  local_e0 = param_1 + 0x1c000;
  local_128 = param_1;
  local_110 = param_8;
  uStack_10c = param_7;
  FUN_180202728(*(undefined8 *)(param_1 + 0x1cf10),param_2,param_1);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (param_6 == (undefined8 *)0x0) {
    iVar13 = (int)param_2[2];
    iVar12 = (int)param_2[3];
    if (param_2[2] - (float)iVar13 != 0.0) {
      iVar13 = iVar13 + 1;
    }
    if (param_2[3] - (float)iVar12 != 0.0) {
      iVar12 = iVar12 + 1;
    }
    local_d0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_c8 = CONCAT44(iVar12,iVar13);
  }
  else {
    uStack_c8 = param_6[1];
    local_d0 = *param_6;
  }
  bVar1 = true;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  fVar16 = (float)(*extraout_x11)(param_4);
  (*(code *)puVar2)(0x180224000);
  fVar17 = (float)(*extraout_x11_00)(param_4);
  (*(code *)puVar2)(0x180224000);
  fVar18 = (float)(*extraout_x11_01)(param_3);
  (*(code *)puVar2)(0x180224000);
  uVar7 = (*extraout_x11_02)(param_3);
  local_100 = param_2[10];
  local_108 = param_2[0xb];
  iStack_104 = *(int *)(param_4 + 0x3c);
  local_118 = 0;
  lVar14 = param_3 + 0x60;
  local_f8 = (int)param_2[8] + *(int *)(param_3 + 0x3c) * (int)param_2[9];
  lVar15 = param_4 + 0x60;
  uVar8 = FUN_180193b50(uVar7,param_3,param_4);
  fVar19 = extraout_s0;
  if ((uVar8 & 1) == 0) {
    local_120 = 0;
LAB_180194764:
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_05)(param_4,param_2[10],param_2[0xb],1);
  }
  else {
    (*(code *)puVar2)(0x180224000);
    cVar4 = (*extraout_x11_03)(param_4);
    if (cVar4 != '\0') {
      FUN_18019dba0(param_4,param_2[10],param_2[0xb]);
      lVar15 = param_4 + 0x180;
      fVar17 = 1.0;
      fVar16 = 1.0;
    }
    (*(code *)puVar2)(0x180224000);
    cVar5 = (*extraout_x11_04)(param_3);
    bVar1 = cVar5 == '\0';
    if (!bVar1) {
      local_118 = param_3;
      FUN_18019dba0(param_3,param_2[8],param_2[9]);
      lVar14 = param_3 + 0x180;
      fVar19 = 1.0;
      fVar18 = 1.0;
    }
    local_120 = 1;
    if (cVar4 == '\0') goto LAB_180194764;
  }
  if (bVar1) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_06)(param_3,param_2[8],param_2[9],0);
  }
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * fVar19,
                (float)*(undefined8 *)(param_2 + 2) * fVar18);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar19,
                (float)*(undefined8 *)param_2 * fVar18);
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar17,
                (float)*(undefined8 *)(param_2 + 6) * fVar16);
  *(ulonglong *)(param_2 + 4) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar17,
                (float)*(undefined8 *)(param_2 + 4) * fVar16);
  local_138 = *(longlong *)(lVar15 + 0x20);
  if (local_138 == 0) {
    local_138 = *(longlong *)(lVar15 + 0x18);
  }
  uVar7 = (*(code *)puVar2)(0x180224000);
  (*extraout_x11_07)(uVar7,auStack_90);
  if (*(int *)(param_4 + 0x44) - 3U < 3) {
    bVar6 = FUN_180193a10(local_128,param_2,param_3,param_4);
    if ((bVar6 & 1) != 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_08)(param_3,local_f8,&local_d0);
    }
    goto LAB_180194b84;
  }
  uVar7 = (*(code *)puVar2)(0x180224000);
  (*extraout_x11_09)(uVar7,auStack_c0);
  lVar3 = local_128;
  FUN_1801b8808(local_128,*(undefined4 *)(param_4 + 0x2c),uStack_10c,local_110,param_9,
                *(undefined1 *)(local_128 + 0x1cf08),param_10,param_11,param_12);
  if (local_120 == 0) {
    if (local_80 == 0x3c) {
      FUN_180197918(lVar3,1,*(undefined8 *)(param_4 + 0x10));
    }
    if (((local_130 & 1) == 0) && (local_b0 == 0x3c)) {
      FUN_180197918(local_128,2,*(undefined8 *)(param_3 + 0x10));
    }
  }
  (*(code *)puVar2)(0x180224000);
  puVar9 = (uint *)(*extraout_x11_10)(param_4,&local_130);
  FUN_1801b8ad8(local_128,&local_13c,*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_3 + 0x2c)
                ,local_80,local_b0,*puVar9 >> 0x14 & 3,param_10,param_11,param_9,param_12);
  uVar8 = *(ulonglong *)(lVar15 + 0x28);
  local_130 = uVar8;
  if ((local_13c == 8) &&
     (*(longlong *)(lVar15 + 0x18) != *(longlong *)(lVar14 + 0x18) && param_10 == param_11)) {
LAB_1801949a4:
    local_13c = 4;
    if (*(int *)(param_4 + 0x34) != 1) {
      local_13c = 5;
    }
LAB_1801949b8:
    (*(code *)puVar2)(0x180224000);
    uVar11 = (*extraout_x11_12)(param_4,0);
    *(longlong *)(param_2 + 0x12) = local_138;
    uVar8 = uVar11;
    local_130 = uVar11;
  }
  else {
    iVar13 = local_13c;
    uVar10 = FUN_1801b7978(local_13c);
    uVar11 = extraout_x11_11;
    if ((uVar10 & 1) != 0) {
      if (iVar13 == 8) goto LAB_1801949a4;
      goto LAB_1801949b8;
    }
  }
  if (uVar11 != 0) {
    bVar6 = 1;
    if (*(longlong *)(lVar15 + 0x18) == *(longlong *)(lVar14 + 0x18)) {
      local_138 = 0;
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_13)(uVar8,&local_138);
      fVar16 = param_2[6];
      fVar19 = param_2[7];
      fVar18 = param_2[4];
      fVar17 = param_2[5];
      local_f0 = (int)fVar16;
      if (fVar18 <= fVar16) {
        local_f0 = (int)fVar18;
      }
      iStack_ec = (int)fVar19;
      if (fVar17 <= fVar19) {
        iStack_ec = (int)fVar17;
      }
      local_e8 = (int)fVar18;
      if (fVar18 <= fVar16) {
        local_e8 = (int)fVar16;
      }
      iStack_e4 = (int)fVar17;
      if (fVar17 <= fVar19) {
        iStack_e4 = (int)fVar19;
      }
      thunk_FUN_180223fb8(&local_f0,2,2);
      bVar6 = FUN_180190bb8(local_128,local_138,uVar8,param_2 + 0x12,&local_130,param_2[10],
                            (int)local_100 + (int)local_108 * iStack_104,&local_f0);
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_14)();
      param_2[10] = 0.0;
      param_2[0xb] = 0.0;
      uVar8 = local_130;
    }
    if ((bVar6 != 0) &&
       (uVar11 = (ulonglong)local_f8,
       *(longlong *)(*(longlong *)(lVar14 + 0x30) + uVar11 * 0x28) != 0)) {
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar14 + 0x18);
      uVar7 = *(undefined8 *)(*(longlong *)(lVar14 + 0x30) + uVar11 * 0x28);
      *(ulonglong *)(param_2 + 0x14) = uVar8;
      *(undefined8 *)(param_2 + 0xe) = uVar7;
      FUN_180190e60(local_128,param_2,*(undefined4 *)(param_3 + 0x2c),
                    *(undefined4 *)(param_4 + 0x2c));
      if (local_118 == 0) {
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_15)(param_3,uVar11,&local_d0);
      }
      else {
        FUN_18019dd08(local_118,uVar11,&local_d0);
      }
      goto LAB_180194b84;
    }
  }
  bVar6 = 0;
LAB_180194b84:
  thunk_FUN_18022370c(*(longlong *)(local_e0 + 0xf10) + 0x620);
  return bVar6;
}

