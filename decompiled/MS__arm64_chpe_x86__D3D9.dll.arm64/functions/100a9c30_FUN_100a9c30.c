/*
 * FUN_100a9c30 at 100a9c30
 * undefined FUN_100a9c30(void)
 * Address ranges: 100a9c30-100aa45b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_100a9c30(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            float *param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  float local_15c;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [4];
  char cStack_ec;
  bool bStack_eb;
  undefined1 uStack_ea;
  bool bStack_e9;
  undefined8 uStack_e8;
  int local_e0;
  int local_dc;
  int *local_d8;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  float local_c0;
  float fStack_bc;
  uint local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_70 [48];
  
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_d8 = (int *)(param_6 + 4);
  local_e0 = *local_d8;
  iVar2 = 0;
  if (param_7 != 0) {
    iVar2 = param_7 + -0x88;
  }
  iVar4 = 0;
  if (param_6 != 0) {
    iVar4 = param_6 + -0x88;
  }
  iVar3 = param_6 + -0x88;
  if (local_e0 == 0) {
    iVar3 = iVar4;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar2,param_4,param_5);
  (*pcVar10)();
  uVar15 = (*extraout_w11_00)(iVar3,param_2,param_3);
  if (((*(char *)(param_8 + 0xb) != '\0') && (*(char *)(param_8 + 10) == '\0')) &&
     (*(char *)((int)param_8 + 0x2b) == '\0')) {
    iVar4 = param_4 + *(int *)(iVar2 + 0x2c) * param_5;
    local_dc = param_2 + *(int *)(iVar3 + 0x2c) * param_3;
    if ((*(int *)(iVar2 + 0x80) == 0) ||
       (uVar15 = (*(code *)PTR_FUN_1016c210)(*(int *)(iVar2 + 0x80) + iVar4 * 0x1c + 0xc),
       (int)uVar15 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((*(int *)(iVar3 + 0x80) == 0) ||
       (uVar15 = (*(code *)PTR_FUN_1016c210)(*(int *)(iVar3 + 0x80) + local_dc * 0x1c + 0xc),
       (int)uVar15 != 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((local_e0 == 0) || (bVar6)) {
LAB_100a9dfc:
      local_15c = 2.8026e-45;
    }
    else {
      (*pcVar10)();
      uVar15 = (*extraout_w11_01)(iVar3);
      if ((uVar15 & 0xff) != 0) goto LAB_100a9dfc;
      local_15c = 0.0;
    }
    if (bVar1) {
LAB_100a9e40:
      uVar17 = 1;
    }
    else {
      (*pcVar10)();
      uVar15 = (*extraout_w11_02)(iVar2);
      uVar17 = (uint)uVar15 & 0xff;
      if ((uVar15 & 0xff) != 0) goto LAB_100a9e40;
    }
    fVar5 = (float)(uVar17 | (uint)local_15c);
    local_15c = fVar5;
    if (local_e0 != 0) {
      (*pcVar10)();
      uVar15 = (*extraout_w11_03)(iVar3);
      if (((((uVar15 & 0xff) != 0) && (*(int *)(iVar3 + 0x74) != 0)) &&
          (*(int *)(iVar2 + 0x74) != 0)) &&
         (uVar15 = (*(code *)PTR_FUN_1016c210)(*(int *)(iVar2 + 0x60) + iVar4 * 0x1c + 0xc),
         (int)uVar15 != 0)) {
        uVar15 = (*(code *)PTR_FUN_1016c210)(*(int *)(iVar3 + 0x60) + local_dc * 0x1c + 0xc);
        local_15c = 0.0;
        if ((int)uVar15 == 0) {
          local_15c = fVar5;
        }
      }
    }
    local_12c = *(float *)(iVar2 + 0x58);
    if (local_12c == 0.0) {
      local_12c = *(float *)(iVar2 + 0x54);
    }
    local_128 = *(float *)(iVar3 + 0x58);
    if (local_128 == 0.0) {
      local_128 = *(float *)(iVar3 + 0x54);
    }
    local_130 = *(float *)(iVar2 + 0x5c);
    switch(local_15c) {
    case 0.0:
      local_12c = *(float *)(iVar2 + 0x74);
      local_128 = *(float *)(iVar3 + 0x74);
      break;
    default:
      goto switchD_100a9f58_caseD_1;
    case 2.8026e-45:
      local_12c = *(float *)(iVar2 + 0x74);
    }
    local_130 = *(float *)(iVar2 + 0x7c);
switchD_100a9f58_caseD_1:
    fStack_124 = local_15c;
    uVar16 = FUN_100a6b88(uVar15,iVar3,iVar2);
    _local_f0 = CONCAT14((char)uVar16,local_f0);
    _local_f0 = CONCAT17(*(int *)(iVar2 + 0x34) - 3U < 3,_local_f0);
    puVar13 = (undefined8 *)
              FUN_100cc8b0(uVar16,auStack_70,iVar3,iVar2,param_8,param_8 + 4,local_15c);
    uStack_108 = puVar13[1];
    local_110 = *puVar13;
    local_f8 = puVar13[3];
    local_100 = puVar13[2];
    _local_f0 = CONCAT44(_cStack_ec,*(undefined4 *)(puVar13 + 4));
    uVar14 = (*pcVar10)();
    (*extraout_w11_04)(uVar14,&local_a0);
    uVar14 = (*pcVar10)();
    (*extraout_w11_05)(uVar14,&local_d0);
    if ((((int)local_110 != 0) || (local_110._4_4_ != 0)) ||
       (((uint)uStack_108 != local_a0 >> (ulonglong)(param_2 & 0x1f) ||
        (bVar1 = true, uStack_108._4_4_ != local_9c >> (ulonglong)(param_2 & 0x1f))))) {
      bVar1 = false;
    }
    if ((((int)local_100 != 0) || (local_100._4_4_ != 0)) ||
       (((uint)local_f8 != local_d0 >> (ulonglong)(param_4 & 0x1f) ||
        (bVar6 = true, local_f8._4_4_ != local_cc >> (ulonglong)(param_4 & 0x1f))))) {
      bVar6 = false;
    }
    local_120 = local_c0;
    fStack_11c = fStack_90;
    local_118 = fStack_bc;
    fStack_114 = fStack_8c;
    if ((bVar6) && (bVar1)) {
      _local_f0 = CONCAT16(1,_local_f0);
      bVar7 = true;
LAB_100aa0f8:
      if ((((local_c8 != 1) || (local_98 != 1)) || (local_c4 != 1)) || (bVar1 = true, local_94 != 1)
         ) goto LAB_100aa12c;
    }
    else {
      _local_f0 = (uint7)_local_f0;
      bVar7 = false;
      if ((bVar6) && (bVar7 = false, bVar1)) goto LAB_100aa0f8;
LAB_100aa12c:
      bVar1 = false;
    }
    uVar11 = _local_f0;
    _local_f0 = CONCAT15(bVar1,_local_f0);
    uVar16 = _local_f0;
    if (((local_c0 == fStack_90) && (*(int *)(iVar2 + 0x1c) == *(int *)(iVar3 + 0x1c))) &&
       (((uint)local_f8 - (int)local_100 == (uint)uStack_108 - (int)local_110 &&
        (local_f8._4_4_ - local_100._4_4_ == uStack_108._4_4_ - local_110._4_4_)))) {
      bStack_e9 = SUB81(uVar11,7);
      if (bStack_e9 == false) {
        if (fStack_bc == fStack_8c) {
          if (fStack_8c == 1.4013e-45) {
            local_f0[1] = SUB81(uVar11,1);
            local_f0[0] = (char)uVar11;
            if (local_f0[0] != local_f0[1]) goto LAB_100aa1ac;
LAB_100aa1b8:
            bVar8 = 1;
          }
          else {
LAB_100aa1ac:
            if (bVar7) goto LAB_100aa1b8;
            bVar8 = 0;
          }
          if ((fStack_8c == 1.4013e-45) ||
             (bVar9 = 0,
             0xa000 < *(int *)(*(int *)(param_1 + 0x1cf00) + *(int *)(param_1 + 0x14) * 0x1510 +
                              0x520))) {
            bVar9 = 1;
          }
          bVar1 = (bool)(bVar9 & bVar8);
        }
        else {
          bVar1 = fStack_8c == 1.4013e-45 && bVar1;
        }
        cStack_ec = SUB81(uVar11,4);
        if (cStack_ec != '\0') {
          bVar1 = false;
        }
      }
      else {
        bVar1 = fStack_bc == fStack_8c && bVar7;
      }
      if (bVar1) {
        _local_f0 = uVar16;
        uVar12 = FUN_100a6c38(param_1,param_2,param_3,param_4,param_5,iVar3,iVar2,&local_130,param_8
                             );
        goto LAB_100aa3d8;
      }
    }
  }
  local_100 = 0;
  local_f8 = 0;
  _local_f0 = 0;
  uStack_e8 = 0;
  if (*(char *)(param_8 + 0xb) == '\0') {
    local_12c = param_8[1];
    local_130 = *param_8;
    fStack_124 = param_8[3];
    local_128 = param_8[2];
    uStack_108 = CONCAT44(param_5,param_4);
    local_110 = CONCAT44(param_3,param_2);
    local_120 = param_8[4];
    fStack_11c = param_8[5];
    local_118 = param_8[6];
    fStack_114 = param_8[7];
    uVar12 = FUN_100a7818(param_1,&local_130,iVar3,iVar2,*local_d8 == 0,0,param_8[8],param_8[9],
                          *(undefined1 *)(param_8 + 10));
  }
  else {
    local_130 = (float)(int)*param_8;
    local_12c = (float)(int)param_8[1];
    fStack_124 = (float)(int)param_8[3];
    local_128 = (float)(int)param_8[2];
    local_110 = CONCAT44(param_3,param_2);
    local_120 = (float)(int)param_8[4];
    fStack_11c = (float)(int)param_8[5];
    local_118 = (float)(int)param_8[6];
    fStack_114 = (float)(int)param_8[7];
    uStack_108 = CONCAT44(param_5,param_4);
    uVar12 = FUN_100a7818(param_1,&local_130,iVar3,iVar2,*local_d8 == 0,param_8,param_8[8],
                          param_8[9],*(undefined1 *)(param_8 + 10));
  }
LAB_100aa3d8:
  (*pcVar10)();
  (*extraout_w11_06)(iVar2,param_4,param_5);
  (*pcVar10)();
  (*extraout_w11_07)(iVar3,param_2,param_3);
  return uVar12;
}

