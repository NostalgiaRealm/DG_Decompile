/*
 * FUN_10019dc8 at 10019dc8
 * undefined FUN_10019dc8(void)
 * Address ranges: 10019dc8-1001a983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019dc8(int param_1,float *param_2,int *param_3,int param_4,char param_5,
                 undefined8 *param_6,float *param_7,int *param_8,char param_9,undefined4 param_10,
                 char param_11,undefined4 param_12,char param_13,undefined4 param_14,char param_15)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint *puVar7;
  int *piVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *extraout_w8;
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
  code *extraout_w11_17;
  code *pcVar14;
  int iVar15;
  int extraout_w12;
  int *piVar16;
  undefined8 uVar17;
  int *extraout_s0;
  int *local_fc;
  char local_f8;
  float *local_f4;
  float local_f0;
  float *local_ec;
  char local_e8;
  float *local_e4;
  int *local_e0;
  int *local_dc;
  float *local_d8;
  float *local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [32];
  int local_90;
  undefined1 auStack_78 [32];
  int local_58;
  
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_ec = (float *)(param_1 + 0xc000);
  if (param_6 == (undefined8 *)0x0) {
    iVar15 = (int)param_2[3];
    iVar10 = (int)param_2[2];
    if (param_2[2] - (float)iVar10 != 0.0) {
      iVar10 = iVar10 + 1;
    }
    if (param_2[3] - (float)iVar15 != 0.0) {
      iVar15 = iVar15 + 1;
    }
    local_d0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_c8 = CONCAT44(iVar15,iVar10);
  }
  else {
    uStack_c8 = param_6[1];
    local_d0 = *param_6;
  }
  bVar1 = true;
  local_e8 = param_5;
  local_dc = param_8;
  local_d8 = param_7;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_e4 = (float *)(*extraout_w11)(param_4);
  (*pcVar14)();
  local_f4 = (float *)(*extraout_w11_00)(param_4);
  (*pcVar14)();
  local_f0 = (float)(*extraout_w11_01)(param_3);
  (*pcVar14)();
  uVar12 = (*extraout_w11_02)(param_3);
  local_e0 = (int *)0x0;
  iVar10 = param_4 + 0x48;
  piVar16 = param_3 + 0x12;
  local_fc = extraout_s0;
  uVar13 = FUN_1000ce78(uVar12,param_3,param_4);
  if ((uVar13 & 1) == 0) {
    bVar3 = false;
LAB_1001a04c:
    pfVar6 = param_2 + 0xc;
    (*pcVar14)();
    (*extraout_w11_05)(param_4,*extraout_w8,*pfVar6,1);
  }
  else {
    local_f8 = '\x01';
    (*pcVar14)();
    cVar4 = (*extraout_w11_03)(param_4);
    if (cVar4 != '\0') {
      FUN_10027e70(param_4,param_2[0xb],param_2[0xc]);
      iVar10 = param_4 + 0x13c;
      local_f8 = '\0';
      local_f4 = (float *)0x3f800000;
      local_e4 = (float *)0x3f800000;
    }
    (*pcVar14)();
    cVar4 = (*extraout_w11_04)(param_3);
    bVar1 = cVar4 == '\0';
    if (!bVar1) {
      local_e0 = param_3;
      FUN_10027e70(param_3,param_2[8],param_2[9]);
      piVar16 = param_3 + 0x4f;
      local_fc = (int *)0x3f800000;
      local_f0 = 1.0;
    }
    bVar3 = true;
    if (local_f8 != '\0') goto LAB_1001a04c;
  }
  if (bVar1) {
    pfVar6 = param_2 + 9;
    pfVar11 = param_2 + 8;
    (*pcVar14)();
    (*extraout_w11_06)(param_3,*pfVar11,*pfVar6,0);
  }
  local_d4 = param_2 + 4;
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * (float)local_f4,
                (float)*(undefined8 *)(param_2 + 6) * (float)local_e4);
  *(ulonglong *)local_d4 =
       CONCAT44((float)((ulonglong)*(undefined8 *)local_d4 >> 0x20) * (float)local_f4,
                (float)*(undefined8 *)local_d4 * (float)local_e4);
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * (float)local_fc,
                (float)*(undefined8 *)(param_2 + 2) * local_f0);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * (float)local_fc,
                (float)*(undefined8 *)param_2 * local_f0);
  uVar5 = (*pcVar14)();
  (*extraout_w11_07)(uVar5,auStack_78);
  if (*(int *)(param_4 + 0x34) - 3U < 3) {
    (*pcVar14)();
    uVar5 = (*extraout_w11_08)(param_4);
    switch(uVar5) {
    case 1:
      uVar17 = 0xf;
      uVar12 = 0x22;
      break;
    case 2:
      uVar17 = 0x10;
      uVar12 = 0x23;
      break;
    default:
      goto switchD_1001a1ac_caseD_3;
    case 4:
      uVar17 = 0x11;
      uVar12 = 0x24;
      break;
    case 8:
      uVar17 = 0x12;
      uVar12 = 0x25;
      break;
    case 0x10:
      uVar17 = 0x13;
      uVar12 = 0x26;
    }
    FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15d8),&local_dc,
                 *(undefined4 *)(param_4 + 0x60),0);
    FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15e0),&local_f0,param_3[0x1a],
                 param_2[10]);
    fVar9 = *(float *)(param_4 + 0x58);
    if (fVar9 == 0.0) {
      fVar9 = *(float *)(param_4 + 0x54);
    }
    fVar2 = (float)param_3[0x16];
    if (fVar2 == 0.0) {
      fVar2 = (float)param_3[0x15];
    }
    param_2[0x12] = fVar9;
    local_f4 = param_2 + 0x14;
    *local_f4 = (float)local_dc;
    param_2[0x16] = fVar2;
    param_2[0x17] = local_f0;
    param_2[0x1a] = (float)param_3[0x1f];
    local_fc = (int *)(param_4 + 0x1c);
    local_e0 = param_3 + 7;
    FUN_100190f8(param_1,param_2,*local_e0,*local_fc,uVar17,0,0,0);
    if (((*(char *)((int)local_ec[0x3c0] + *(int *)(param_1 + 0x14) * 0x18 + 0x531) != '\0') &&
        (*(char *)(*local_fc + 0x100b37f0) != '\0')) && (*(char *)(*local_e0 + 0x100b37f0) != '\0'))
    {
      (*pcVar14)();
      iVar10 = (*extraout_w11_09)(fVar9,auStack_b0);
      iVar10 = *(int *)(iVar10 + 0x20);
      (*pcVar14)();
      iVar15 = (*extraout_w11_10)(fVar9,auStack_b0);
      piVar16 = local_fc;
      piVar8 = local_e0;
      if (iVar10 != 0x2c) {
        if (iVar10 != 0x2d) goto LAB_1001a488;
        piVar16 = (int *)(param_4 + 0x1c);
        piVar8 = param_3 + 7;
      }
      if (*(int *)(iVar15 + 0x20) - 0x2cU < 2) {
        param_2[10] = (float)((int)param_2[8] + ((int)param_2[9] + param_3[9]) * param_3[0xb]);
        param_2[0xd] = (float)((int)param_2[0xb] +
                              ((int)param_2[0xc] + *(int *)(param_4 + 0x24)) *
                              *(int *)(param_4 + 0x2c));
        pfVar6 = (float *)FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15d8),
                                       &local_d4,*(undefined4 *)(param_4 + 0x60),1);
        *local_f4 = *pfVar6;
        FUN_100190f8(param_1,param_2,*piVar8,*piVar16,uVar12,1,0,0);
      }
    }
LAB_1001a488:
    param_2 = param_2 + 10;
    (*pcVar14)();
    fVar9 = *param_2;
    pcVar14 = extraout_w11_11;
  }
  else {
    FUN_100314c0(param_1,*(undefined4 *)(param_4 + 0x1c),local_d8,local_dc,param_9,
                 *(undefined1 *)(local_ec + 0x3be),param_11,param_13,param_15);
    local_ec = (float *)(piVar16 + 3);
    uVar5 = (*pcVar14)();
    (*extraout_w11_12)(uVar5,auStack_b0);
    if (!bVar3) {
      if (local_58 == 0x3c) {
        FUN_1001c0d0(param_1,1,*(undefined4 *)(param_4 + 8));
      }
      if ((local_e8 == '\0') && (local_90 == 0x3c)) {
        FUN_1001c0d0(param_1,2,param_3[2]);
      }
    }
    (*pcVar14)();
    puVar7 = (uint *)(*extraout_w11_13)(param_4,&local_d8);
    FUN_10031730(param_1,&local_fc,*(undefined4 *)(param_4 + 0x1c),param_3[7],local_58,local_90,
                 *puVar7 >> 0x14 & 3,param_11,param_13);
    local_d8 = (float *)(iVar10 + 0xc);
    fVar9 = *local_d8;
    local_f0 = (float)piVar16[4];
    if (local_f0 == 0.0) {
      local_f0 = *local_ec;
    }
    local_dc = (int *)(param_1 + 0xcf04);
    FUN_10073b50(*(undefined4 *)(*local_dc + 0x15d8),&local_f4,*(undefined4 *)(iVar10 + 0x18),0);
    if ((param_9 != '\0') || (bVar1 = false, param_15 != '\0' || param_11 != param_13)) {
      bVar1 = true;
    }
    if ((local_fc != (int *)&DAT_00000008) || (*local_d8 == *local_ec || bVar1)) {
      bVar1 = false;
      piVar8 = (int *)FUN_1002d9e8(local_fc);
      if (((uint)piVar8 & 1) != 0) {
        if (extraout_w12 == 8) goto LAB_1001a690;
        goto LAB_1001a6b8;
      }
    }
    else {
LAB_1001a690:
      if (param_11 == '\0') {
        local_fc = (int *)&DAT_00000004;
      }
      else {
        local_fc = (int *)0x6;
      }
      if (*(int *)(param_4 + 0x24) != 1) {
        local_fc = (int *)((int)local_fc + 1);
      }
LAB_1001a6b8:
      (*pcVar14)();
      fVar9 = (float)(*extraout_w11_14)(param_4);
      local_d8 = *(float **)(*local_dc + 0x15d8);
      (*pcVar14)();
      uVar5 = (*extraout_w11_15)(param_4,0,1);
      piVar8 = (int *)FUN_10073b50(local_d8,&local_ec,uVar5,0);
      local_f4 = (float *)*piVar8;
      param_2[0x12] = fVar9;
      bVar1 = true;
    }
    if (((fVar9 == local_f0) && (local_e4 = param_2 + 0xb, *local_e4 == param_2[8])) &&
       (local_ec = param_2 + 0xc, *local_ec == param_2[9])) {
      FUN_10031e48(*local_d4,param_2[5],param_2[6],param_2[7],piVar8,auStack_c0);
      if (bVar1) {
        (*pcVar14)();
        iVar10 = (*extraout_w11_16)(param_4);
      }
      iVar10 = FUN_10018bc0(param_1,param_4,iVar10,*local_e4,*local_ec,auStack_c0);
      if (iVar10 == 0) {
        return;
      }
      param_2[0xd] = 0.0;
      *local_ec = 0.0;
      *local_e4 = 0.0;
      fVar9 = *(float *)(iVar10 + 0xc);
      piVar8 = (int *)FUN_10073b50(*(undefined4 *)(*local_dc + 0x15d8),&local_d4,
                                   *(undefined4 *)(iVar10 + 0x18),0);
      local_f4 = (float *)*piVar8;
    }
    pfVar6 = param_2 + 10;
    param_2[0xe] = local_f0;
    param_2[0x12] = fVar9;
    pfVar11 = (float *)FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15dc),&local_d4,
                                    piVar16[7],*pfVar6);
    param_2[0x10] = *pfVar11;
    param_2[0x14] = (float)local_f4;
    param_2[0x18] = (float)piVar16[0xd];
    param_2[0x1a] = (float)piVar16[0xd];
    FUN_100190f8(param_1,param_2,param_3[7],*(undefined4 *)(param_4 + 0x1c),local_fc,0,param_11,0);
    if (local_e0 != (int *)0x0) {
      FUN_10028010(local_e0,*pfVar6,&local_d0);
      return;
    }
    (*pcVar14)();
    fVar9 = *pfVar6;
    pcVar14 = extraout_w11_17;
  }
  (*pcVar14)(param_3,fVar9,&local_d0);
switchD_1001a1ac_caseD_3:
  return;
}

