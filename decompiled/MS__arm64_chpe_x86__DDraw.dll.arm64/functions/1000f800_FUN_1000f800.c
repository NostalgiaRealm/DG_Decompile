/*
 * FUN_1000f800 at 1000f800
 * undefined FUN_1000f800(void)
 * Address ranges: 1000f800-1000ff3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1000f800(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            float *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  float local_ec;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  int local_7c;
  int *local_78;
  undefined1 auStack_70 [48];
  
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_78 = (int *)(param_6 + 4);
  local_80 = *local_78;
  iVar1 = 0;
  if (param_7 != 0) {
    iVar1 = param_7 + -0x88;
  }
  iVar3 = 0;
  if (param_6 != 0) {
    iVar3 = param_6 + -0x88;
  }
  iVar2 = param_6 + -0x88;
  if (local_80 == 0) {
    iVar2 = iVar3;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar1,param_4,param_5);
  (*pcVar9)();
  uVar12 = (*extraout_w11_00)(iVar2,param_2,param_3);
  if (((*(char *)(param_8 + 0xb) != '\0') && (*(char *)(param_8 + 10) == '\0')) &&
     (*(char *)((int)param_8 + 0x2b) == '\0')) {
    iVar3 = param_4 + *(int *)(iVar1 + 0x2c) * param_5;
    local_7c = param_2 + *(int *)(iVar2 + 0x2c) * param_3;
    if ((*(int *)(iVar1 + 0x80) == 0) ||
       (uVar12 = (*(code *)PTR_FUN_100ba248)(*(int *)(iVar1 + 0x80) + iVar3 * 0x1c + 0xc),
       (int)uVar12 != 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((*(int *)(iVar2 + 0x80) == 0) ||
       (uVar12 = (*(code *)PTR_FUN_100ba248)(*(int *)(iVar2 + 0x80) + local_7c * 0x1c + 0xc),
       (int)uVar12 != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((local_80 == 0) || (bVar5)) {
LAB_1000f9c4:
      local_ec = 2.8026e-45;
    }
    else {
      (*pcVar9)();
      uVar12 = (*extraout_w11_01)(iVar2);
      if ((uVar12 & 0xff) != 0) goto LAB_1000f9c4;
      local_ec = 0.0;
    }
    if (bVar6) {
LAB_1000fa08:
      uVar14 = 1;
    }
    else {
      (*pcVar9)();
      uVar12 = (*extraout_w11_02)(iVar1);
      uVar14 = (uint)uVar12 & 0xff;
      if ((uVar12 & 0xff) != 0) goto LAB_1000fa08;
    }
    fVar4 = (float)(uVar14 | (uint)local_ec);
    local_ec = fVar4;
    if (local_80 != 0) {
      (*pcVar9)();
      uVar12 = (*extraout_w11_03)(iVar2);
      if (((((uVar12 & 0xff) != 0) && (*(int *)(iVar2 + 0x74) != 0)) &&
          (*(int *)(iVar1 + 0x74) != 0)) &&
         (uVar12 = (*(code *)PTR_FUN_100ba248)(*(int *)(iVar1 + 0x60) + iVar3 * 0x1c + 0xc),
         (int)uVar12 != 0)) {
        uVar12 = (*(code *)PTR_FUN_100ba248)(*(int *)(iVar2 + 0x60) + local_7c * 0x1c + 0xc);
        local_ec = 0.0;
        if ((int)uVar12 == 0) {
          local_ec = fVar4;
        }
      }
    }
    fStack_cc = *(float *)(iVar1 + 0x58);
    if (fStack_cc == 0.0) {
      fStack_cc = *(float *)(iVar1 + 0x54);
    }
    local_c8 = *(float *)(iVar2 + 0x58);
    if (local_c8 == 0.0) {
      local_c8 = *(float *)(iVar2 + 0x54);
    }
    local_d0 = *(float *)(iVar1 + 0x5c);
    switch(local_ec) {
    case 0.0:
      fStack_cc = *(float *)(iVar1 + 0x74);
      local_c8 = *(float *)(iVar2 + 0x74);
      break;
    default:
      goto switchD_1000fb20_caseD_1;
    case 2.8026e-45:
      fStack_cc = *(float *)(iVar1 + 0x74);
    }
    local_d0 = *(float *)(iVar1 + 0x7c);
switchD_1000fb20_caseD_1:
    fStack_c4 = local_ec;
    uVar13 = FUN_1000ce78(uVar12,iVar2,iVar1);
    local_90._0_5_ = CONCAT14((char)uVar13,(undefined4)local_90);
    local_90 = CONCAT17(*(int *)(iVar1 + 0x34) - 3U < 3,(undefined7)local_90);
    puVar11 = (undefined8 *)FUN_10031c30(uVar13,auStack_70,iVar2,iVar1,param_8,param_8 + 4,local_ec)
    ;
    uStack_a8 = puVar11[1];
    local_b0 = *puVar11;
    local_98 = puVar11[3];
    local_a0 = puVar11[2];
    local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(puVar11 + 4));
    FUN_1000ccb8(puVar11,&local_d0,param_2);
    if ((local_c0 == fStack_bc) && (*(int *)(iVar1 + 0x1c) == *(int *)(iVar2 + 0x1c))) {
      if ((int)local_98 - (int)local_a0 == (int)uStack_a8 - (int)local_b0) {
        if (local_98._4_4_ - local_a0._4_4_ == uStack_a8._4_4_ - local_b0._4_4_) {
          if (local_90._7_1_ == '\0') {
            if (local_b8 == fStack_b4) {
              if (fStack_b4 == 1.4013e-45) {
                if ((char)local_90 != local_90._1_1_) goto LAB_1000fc80;
LAB_1000fc90:
                bVar7 = 1;
              }
              else {
LAB_1000fc80:
                if (local_90._6_1_ != '\0') goto LAB_1000fc90;
                bVar7 = 0;
              }
              if ((fStack_b4 == 1.4013e-45) ||
                 (bVar8 = 0,
                 0xa000 < *(int *)(*(int *)(param_1 + 0xcf00) + *(int *)(param_1 + 0x14) * 0x1510 +
                                  0x520))) {
                bVar8 = 1;
              }
              bVar6 = (bool)(bVar8 & bVar7);
            }
            else if ((fStack_b4 == 1.4013e-45) && (local_90._5_1_ != '\0')) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (local_90._4_1_ != '\0') {
              bVar6 = false;
            }
          }
          else if ((local_b8 == fStack_b4) && (local_90._6_1_ != '\0')) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            uVar10 = FUN_1000cf28(param_1,param_2,param_3,param_4,param_5,iVar2,iVar1,&local_d0,
                                  param_8);
            goto LAB_1000fec0;
          }
        }
      }
    }
  }
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (*(char *)(param_8 + 0xb) == '\0') {
    fStack_cc = param_8[1];
    local_d0 = *param_8;
    fStack_c4 = param_8[3];
    local_c8 = param_8[2];
    uStack_a8 = CONCAT44(param_5,param_4);
    local_b0 = CONCAT44(param_3,param_2);
    local_c0 = param_8[4];
    fStack_bc = param_8[5];
    local_b8 = param_8[6];
    fStack_b4 = param_8[7];
    uVar10 = FUN_1000db50(param_1,&local_d0,iVar2,iVar1,*local_78 == 0,0,param_8[8],param_8[9],
                          *(undefined1 *)(param_8 + 10));
  }
  else {
    local_d0 = (float)(int)*param_8;
    fStack_cc = (float)(int)param_8[1];
    fStack_c4 = (float)(int)param_8[3];
    local_c8 = (float)(int)param_8[2];
    local_c0 = (float)(int)param_8[4];
    fStack_bc = (float)(int)param_8[5];
    local_b8 = (float)(int)param_8[6];
    fStack_b4 = (float)(int)param_8[7];
    uStack_a8 = CONCAT44(param_5,param_4);
    local_b0 = CONCAT44(param_3,param_2);
    uVar10 = FUN_1000db50(param_1,&local_d0,iVar2,iVar1,*local_78 == 0,param_8,param_8[8],param_8[9]
                          ,*(undefined1 *)(param_8 + 10));
  }
LAB_1000fec0:
  (*pcVar9)();
  (*extraout_w11_04)(iVar1,param_4,param_5);
  (*pcVar9)();
  (*extraout_w11_05)(iVar2,param_2,param_3);
  return uVar10;
}

