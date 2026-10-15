/*
 * FUN_1000db50 at 1000db50
 * undefined FUN_1000db50(void)
 * Address ranges: 1000db50-1000e34f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1000db50(int param_1,float *param_2,int param_3,int param_4,char param_5,
                 undefined8 *param_6,undefined4 *param_7,undefined4 param_8,char param_9,
                 undefined4 param_10,char param_11,undefined4 param_12,char param_13,
                 undefined4 param_14,char param_15)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  uint *puVar8;
  float fVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *pcVar14;
  int iVar15;
  float extraout_s0;
  float local_10c;
  float *local_108;
  float local_104;
  float local_100;
  char local_fc;
  int local_f8;
  float *local_f4;
  float *local_f0;
  float *local_ec;
  int local_e8;
  float *local_e4;
  undefined4 *local_e0;
  int local_dc;
  int local_d8;
  undefined4 uStack_d4;
  float *local_d0;
  int local_cc;
  float fStack_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int local_90;
  undefined1 auStack_70 [16];
  int local_60;
  
  local_d8 = param_1 + 0xc000;
  local_fc = param_5;
  local_f8 = param_1;
  local_e0 = param_7;
  uStack_d4 = param_8;
  FUN_1006e8d0(*(undefined4 *)(param_1 + 0xcf00),param_2,param_1);
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_6 == (undefined8 *)0x0) {
    iVar15 = (int)param_2[3];
    iVar13 = (int)param_2[2];
    if (param_2[2] - (float)iVar13 != 0.0) {
      iVar13 = iVar13 + 1;
    }
    if (param_2[3] - (float)iVar15 != 0.0) {
      iVar15 = iVar15 + 1;
    }
    local_c0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_b8 = CONCAT44(iVar15,iVar13);
  }
  else {
    uStack_b8 = param_6[1];
    local_c0 = *param_6;
  }
  bVar1 = true;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_108 = (float *)(*extraout_w11)(param_4);
  (*pcVar14)();
  local_104 = (float)(*extraout_w11_00)(param_4);
  (*pcVar14)();
  local_100 = (float)(*extraout_w11_01)(param_3);
  (*pcVar14)();
  uVar10 = (*extraout_w11_02)(param_3);
  local_e4 = param_2 + 0xb;
  fStack_c8 = *local_e4;
  local_cc = *(int *)(param_4 + 0x2c);
  local_ec = param_2 + 10;
  local_e8 = 0;
  local_c4 = *local_ec;
  local_f4 = param_2 + 9;
  local_f0 = param_2 + 8;
  iVar13 = param_4 + 0x48;
  local_dc = (int)*local_f0 + *(int *)(param_3 + 0x2c) * (int)*local_f4;
  iVar15 = param_3 + 0x48;
  local_10c = extraout_s0;
  uVar11 = FUN_1000ce78(uVar10,param_3,param_4);
  if ((uVar11 & 1) == 0) {
    bVar3 = false;
LAB_1000de14:
    (*pcVar14)();
    (*extraout_w11_05)(param_4,*local_ec,*local_e4,1);
  }
  else {
    (*pcVar14)();
    cVar5 = (*extraout_w11_03)(param_4);
    if (cVar5 != '\0') {
      FUN_100162c0(param_4,*local_ec,*local_e4);
      iVar13 = param_4 + 0xe8;
      local_108 = (float *)0x3f800000;
      local_104 = 1.0;
    }
    (*pcVar14)();
    cVar6 = (*extraout_w11_04)(param_3);
    bVar1 = cVar6 == '\0';
    if (!bVar1) {
      local_e8 = param_3;
      FUN_100162c0(param_3,*local_f0,*local_f4);
      iVar15 = param_3 + 0xe8;
      local_10c = 1.0;
      local_100 = 1.0;
    }
    bVar3 = true;
    if (cVar5 == '\0') goto LAB_1000de14;
  }
  if (bVar1) {
    (*pcVar14)();
    (*extraout_w11_06)(param_3,*local_f0,*local_f4,0);
  }
  local_d0 = param_2 + 4;
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * local_104,
                (float)*(undefined8 *)(param_2 + 6) * (float)local_108);
  *(ulonglong *)local_d0 =
       CONCAT44((float)((ulonglong)*(undefined8 *)local_d0 >> 0x20) * local_104,
                (float)*(undefined8 *)local_d0 * (float)local_108);
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * local_10c,
                (float)*(undefined8 *)(param_2 + 2) * local_100);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * local_10c,
                (float)*(undefined8 *)param_2 * local_100);
  fVar2 = *(float *)(iVar13 + 0x10);
  if (fVar2 == 0.0) {
    fVar2 = *(float *)(iVar13 + 0xc);
  }
  (*pcVar14)();
  (*extraout_w11_07)(fVar2,auStack_70);
  if (*(int *)(param_4 + 0x34) - 3U < 3) {
    cVar5 = FUN_1000cb08(local_f8,param_2,param_3,param_4);
    if (cVar5 == '\0') goto LAB_1000e314;
    (*pcVar14)();
    iVar13 = local_dc;
    pcVar14 = extraout_w11_08;
LAB_1000e300:
    (*pcVar14)(param_3,iVar13,&local_c0);
  }
  else {
    local_108 = (float *)(iVar15 + 0xc);
    uVar7 = (*pcVar14)();
    (*extraout_w11_09)(uVar7,auStack_a0);
    iVar4 = local_f8;
    local_f4 = (float *)(param_4 + 0x1c);
    FUN_100314c0(local_f8,*local_f4,local_e0,uStack_d4,param_9,*(undefined1 *)(local_d8 + 0xef8),
                 param_11,param_13,param_15);
    if (!bVar3) {
      if (local_60 == 0x3c) {
        FUN_1000ffe0(iVar4,1,*(undefined4 *)(param_4 + 8));
      }
      if ((local_fc == '\0') && (local_90 == 0x3c)) {
        FUN_1000ffe0(local_f8,2,*(undefined4 *)(param_3 + 8));
      }
    }
    (*pcVar14)();
    puVar8 = (uint *)(*extraout_w11_10)(param_4,&uStack_d4);
    local_e0 = (undefined4 *)(param_3 + 0x1c);
    FUN_10031730(local_f8,&local_10c,*local_f4,*local_e0,local_60,local_90,*puVar8 >> 0x14 & 3,
                 param_11,param_13);
    if ((param_9 != '\0') || (bVar1 = false, param_15 != '\0' || param_11 != param_13)) {
      bVar1 = true;
    }
    uVar11 = (ulonglong)(uint)local_10c;
    fVar9 = *(float *)(iVar13 + 0x14);
    local_104 = fVar9;
    if ((local_10c != 1.12104e-44) || (*(float *)(iVar13 + 0xc) == *local_108 || bVar1)) {
      uVar12 = FUN_1002d9e8(local_10c);
      if ((uVar12 & 1) != 0) {
        if ((int)uVar11 == 8) goto LAB_1000e108;
        goto LAB_1000e120;
      }
    }
    else {
LAB_1000e108:
      local_10c = 5.60519e-45;
      if (*(int *)(param_4 + 0x24) != 1) {
        local_10c = 7.00649e-45;
      }
LAB_1000e120:
      (*pcVar14)();
      fVar9 = (float)(*extraout_w11_11)(param_4,0);
      uVar11 = (ulonglong)(uint)local_10c;
      param_2[0xf] = fVar2;
      local_104 = fVar9;
    }
    local_f0 = param_2 + 0xf;
    if (fVar9 != 0.0) {
      cVar5 = '\x01';
      if (*(float *)(iVar13 + 0xc) == *local_108) {
        local_100 = 0.0;
        (*pcVar14)();
        uVar10 = (*extraout_w11_12)(fVar9,&local_100);
        FUN_10031e48(*local_d0,param_2[5],param_2[6],param_2[7],uVar10,auStack_b0);
        cVar5 = FUN_1000beb8(local_f8,local_100,fVar9,local_f0,&local_104,*local_ec,
                             (int)local_c4 + local_cc * (int)fStack_c8,auStack_b0);
        uVar7 = (*pcVar14)();
        (*extraout_w11_13)(uVar7);
        *local_ec = 0.0;
        *local_e4 = 0.0;
        if (cVar5 == '\0') goto LAB_1000e314;
        uVar11 = (ulonglong)(uint)local_10c;
        fVar9 = local_104;
      }
      iVar13 = local_dc;
      if (*(int *)(*(int *)(iVar15 + 0x18) + local_dc * 0x1c) != 0) {
        param_2[0xc] = *local_108;
        param_2[0xd] = *(float *)(*(int *)(iVar15 + 0x18) + local_dc * 0x1c);
        param_2[0x10] = fVar9;
        FUN_1000c350(local_f8,param_2,*local_e0,*local_f4,uVar11 & 0xffffffff,param_11,0);
        if (local_e8 != 0) {
          FUN_10016480(local_e8,iVar13,&local_c0);
          goto LAB_1000e314;
        }
        (*pcVar14)();
        pcVar14 = extraout_w11_14;
        goto LAB_1000e300;
      }
    }
    cVar5 = '\0';
  }
LAB_1000e314:
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(local_d8 + 0xf00) + 0x4a0);
  return cVar5;
}

