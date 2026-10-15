/*
 * FUN_100b4568 at 100b4568
 * undefined FUN_100b4568(void)
 * Address ranges: 100b4568-100b4fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b4568(int param_1,float *param_2,int *param_3,int param_4,char param_5,
                 undefined8 *param_6,float param_7,float param_8,undefined1 param_9,
                 undefined4 param_10,char param_11,undefined4 param_12,char param_13,
                 undefined4 param_14,undefined1 param_15)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 *extraout_w8;
  int iVar12;
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
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *pcVar13;
  int iVar14;
  int *extraout_w12;
  int *piVar15;
  int extraout_w13;
  int *piVar16;
  undefined8 uVar17;
  int *extraout_s0;
  float local_f0;
  int *local_ec;
  char local_e8;
  char local_e7;
  char local_e6;
  int *local_e4;
  float *local_e0;
  int *local_dc;
  float local_d8;
  float local_d4;
  float *local_d0 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  int local_90;
  undefined1 auStack_78 [32];
  int local_58;
  
  pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_6 == (undefined8 *)0x0) {
    iVar14 = (int)param_2[3];
    iVar12 = (int)param_2[2];
    if (param_2[2] - (float)iVar12 != 0.0) {
      iVar12 = iVar12 + 1;
    }
    if (param_2[3] - (float)iVar14 != 0.0) {
      iVar14 = iVar14 + 1;
    }
    local_c0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_b8 = CONCAT44(iVar14,iVar12);
  }
  else {
    uStack_b8 = param_6[1];
    local_c0 = *param_6;
  }
  bVar1 = true;
  local_e6 = param_5;
  local_d8 = param_7;
  local_d4 = param_8;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_e4 = (int *)(*extraout_w11)(param_4);
  (*pcVar13)();
  local_e0 = (float *)(*extraout_w11_00)(param_4);
  (*pcVar13)();
  local_f0 = (float)(*extraout_w11_01)(param_3);
  (*pcVar13)();
  uVar10 = (*extraout_w11_02)(param_3);
  local_dc = (int *)0x0;
  iVar12 = param_4 + 0x48;
  piVar16 = param_3 + 0x12;
  local_ec = extraout_s0;
  uVar11 = FUN_100a6b88(uVar10,param_3,param_4);
  if ((uVar11 & 1) == 0) {
    local_e7 = '\0';
LAB_100b47cc:
    pfVar8 = param_2 + 0xc;
    (*pcVar13)();
    (*extraout_w11_05)(param_4,*extraout_w8,*pfVar8,1);
  }
  else {
    local_e8 = '\x01';
    (*pcVar13)();
    cVar4 = (*extraout_w11_03)(param_4);
    if (cVar4 != '\0') {
      FUN_100c2800(param_4,param_2[0xb],param_2[0xc]);
      iVar12 = param_4 + 0x13c;
      local_e8 = '\0';
      local_e4 = (int *)0x3f800000;
      local_e0 = (float *)0x3f800000;
    }
    (*pcVar13)();
    cVar4 = (*extraout_w11_04)(param_3);
    bVar1 = cVar4 == '\0';
    if (!bVar1) {
      local_dc = param_3;
      FUN_100c2800(param_3,param_2[8],param_2[9]);
      piVar16 = param_3 + 0x4f;
      local_f0 = 1.0;
      local_ec = (int *)0x3f800000;
    }
    local_e7 = '\x01';
    if (local_e8 != '\0') goto LAB_100b47cc;
  }
  if (bVar1) {
    pfVar8 = param_2 + 9;
    pfVar9 = param_2 + 8;
    (*pcVar13)();
    (*extraout_w11_06)(param_3,*pfVar9,*pfVar8,0);
  }
  uVar10 = *(undefined8 *)(param_2 + 4);
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * (float)local_e0,
                (float)*(undefined8 *)(param_2 + 6) * (float)local_e4);
  *(ulonglong *)(param_2 + 4) =
       CONCAT44((float)((ulonglong)uVar10 >> 0x20) * (float)local_e0,(float)uVar10 * (float)local_e4
               );
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * (float)local_ec,
                (float)*(undefined8 *)(param_2 + 2) * local_f0);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * (float)local_ec,
                (float)*(undefined8 *)param_2 * local_f0);
  uVar5 = (*pcVar13)();
  (*extraout_w11_07)(uVar5,auStack_78);
  if (*(int *)(param_4 + 0x34) - 3U < 3) {
    (*pcVar13)();
    uVar5 = (*extraout_w11_08)(param_4);
    switch(uVar5) {
    case 1:
      uVar17 = 0xf;
      uVar10 = 0x22;
      break;
    case 2:
      uVar17 = 0x10;
      uVar10 = 0x23;
      break;
    default:
      goto switchD_100b4920_caseD_3;
    case 4:
      uVar17 = 0x11;
      uVar10 = 0x24;
      break;
    case 8:
      uVar17 = 0x12;
      uVar10 = 0x25;
      break;
    case 0x10:
      uVar17 = 0x13;
      uVar10 = 0x26;
    }
    FUN_10112730(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x15d8),&local_d4,
                 *(undefined4 *)(param_4 + 0x60),0);
    FUN_10112730(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x15e0),&local_d8,param_3[0x1a],
                 param_2[10]);
    fVar3 = *(float *)(param_4 + 0x58);
    if (fVar3 == 0.0) {
      fVar3 = *(float *)(param_4 + 0x54);
    }
    fVar2 = (float)param_3[0x16];
    if (fVar2 == 0.0) {
      fVar2 = (float)param_3[0x15];
    }
    param_2[0x12] = fVar3;
    param_2[0x14] = local_d4;
    param_2[0x16] = fVar2;
    param_2[0x17] = local_d8;
    param_2[0x1a] = (float)param_3[0x1f];
    local_ec = (int *)(param_4 + 0x1c);
    local_dc = param_3 + 7;
    FUN_100b39d8(param_1,param_2,*local_dc,*local_ec,uVar17,0,0,0);
    if (((*(char *)(*(int *)(param_1 + 0x1cf00) + *(int *)(param_1 + 0x14) * 0x18 + 0x531) != '\0')
        && (*(char *)(*local_ec + 0x10162918) != '\0')) &&
       (*(char *)(*local_dc + 0x10162918) != '\0')) {
      (*pcVar13)();
      iVar12 = (*extraout_w11_09)(fVar3,auStack_b0);
      iVar12 = *(int *)(iVar12 + 0x20);
      (*pcVar13)();
      iVar14 = (*extraout_w11_10)(fVar3,auStack_b0);
      piVar16 = local_ec;
      piVar15 = local_dc;
      if (iVar12 != 0x2c) {
        if (iVar12 != 0x2d) goto LAB_100b4bfc;
        piVar16 = (int *)(param_4 + 0x1c);
        piVar15 = param_3 + 7;
      }
      if (*(int *)(iVar14 + 0x20) - 0x2cU < 2) {
        param_2[10] = (float)((int)param_2[8] + ((int)param_2[9] + param_3[9]) * param_3[0xb]);
        param_2[0xd] = (float)((int)param_2[0xb] +
                              ((int)param_2[0xc] + *(int *)(param_4 + 0x24)) *
                              *(int *)(param_4 + 0x2c));
        pfVar8 = (float *)FUN_10112730(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x15d8),
                                       local_d0,*(undefined4 *)(param_4 + 0x60),1);
        param_2[0x14] = *pfVar8;
        FUN_100b39d8(param_1,param_2,*piVar15,*piVar16,uVar10,1,0,0);
      }
    }
LAB_100b4bfc:
    param_2 = param_2 + 10;
    (*pcVar13)();
    fVar3 = *param_2;
    pcVar13 = extraout_w11_11;
  }
  else {
    FUN_100cbfb8(param_1,*(undefined4 *)(param_4 + 0x1c),local_d8,local_d4,param_9,
                 *(undefined1 *)(param_1 + 0x1cef8),param_11,param_13,param_15);
    local_e0 = (float *)(piVar16 + 3);
    uVar5 = (*pcVar13)();
    (*extraout_w11_12)(uVar5,auStack_b0);
    if (local_e7 == '\0') {
      if (local_58 == 0x3c) {
        FUN_100b6c20(param_1,1,*(undefined4 *)(param_4 + 8));
      }
      if ((local_e6 == '\0') && (local_90 == 0x3c)) {
        FUN_100b6c20(param_1,2,param_3[2]);
      }
    }
    (*pcVar13)();
    puVar6 = (uint *)(*extraout_w11_13)(param_4,local_d0);
    FUN_100cc338(param_1,&local_ec,*(undefined4 *)(param_4 + 0x1c),param_3[7],local_58,local_90,
                 *puVar6 >> 0x14 & 3,param_11,param_13);
    local_d0[0] = (float *)(iVar12 + 0xc);
    local_f0 = *local_d0[0];
    local_d8 = (float)piVar16[4];
    if (local_d8 == 0.0) {
      local_d8 = *local_e0;
    }
    local_e4 = (int *)(param_1 + 0x1cf04);
    FUN_10112730(*(undefined4 *)(*local_e4 + 0x15d8),&local_d4,*(undefined4 *)(iVar12 + 0x18),0);
    if ((local_ec == (int *)&DAT_00000008) && (*local_d0[0] != *local_e0 && param_11 == param_13)) {
LAB_100b4df4:
      if (param_11 == '\0') {
        local_ec = (int *)&DAT_00000004;
      }
      else {
        local_ec = (int *)0x6;
      }
      if (*(int *)(param_4 + 0x24) != 1) {
        local_ec = (int *)((int)local_ec + 1);
      }
LAB_100b4e18:
      (*pcVar13)();
      local_f0 = (float)(*extraout_w11_14)(param_4);
      uVar5 = *(undefined4 *)(*local_e4 + 0x15d8);
      (*pcVar13)();
      uVar7 = (*extraout_w11_15)(param_4,0,1);
      pfVar8 = (float *)FUN_10112730(uVar5,local_d0,uVar7,0);
      local_d4 = *pfVar8;
      piVar15 = (int *)(param_1 + 0x1cf04);
      param_2[0x12] = local_f0;
    }
    else {
      uVar11 = FUN_100c8938(local_ec);
      piVar15 = extraout_w12;
      if ((uVar11 & 1) != 0) {
        if (extraout_w13 == 8) goto LAB_100b4df4;
        goto LAB_100b4e18;
      }
    }
    pfVar8 = param_2 + 10;
    param_2[0xe] = local_d8;
    param_2[0x12] = local_f0;
    pfVar9 = (float *)FUN_10112730(*(undefined4 *)(*piVar15 + 0x15dc),local_d0,piVar16[7],*pfVar8);
    param_2[0x10] = *pfVar9;
    param_2[0x14] = local_d4;
    param_2[0x18] = (float)piVar16[0xd];
    param_2[0x1a] = (float)piVar16[0xd];
    FUN_100b39d8(param_1,param_2,param_3[7],*(undefined4 *)(param_4 + 0x1c),local_ec,0,param_11,0);
    if (local_dc != (int *)0x0) {
      FUN_100c29a0(local_dc,*pfVar8,&local_c0);
      return;
    }
    (*pcVar13)();
    fVar3 = *pfVar8;
    pcVar13 = extraout_w11_16;
  }
  (*pcVar13)(param_3,fVar3,&local_c0);
switchD_100b4920_caseD_3:
  return;
}

