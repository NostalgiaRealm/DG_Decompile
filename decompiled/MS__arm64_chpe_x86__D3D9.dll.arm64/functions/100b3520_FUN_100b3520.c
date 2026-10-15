/*
 * FUN_100b3520 at 100b3520
 * undefined FUN_100b3520(void)
 * Address ranges: 100b3520-100b39c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b3520(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *extraout_w11;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float *local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [16];
  uint local_68;
  uint local_60;
  undefined8 local_54;
  
  *(undefined4 *)(param_1 + 0x1cf14) = param_3;
  *(undefined4 *)(param_1 + 0x1cf10) = *(undefined4 *)(param_1 + 0x1d024);
  *(undefined4 *)(param_1 + 0x1cf38) = *(undefined4 *)(param_1 + 0x1d028);
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6,auStack_78);
  *(undefined8 *)(param_1 + 0x1cf6c) = local_54;
  piVar1 = (int *)(param_1 + 0x1cf04);
  uVar6 = FUN_1011a318(*piVar1 + 0x1640,param_1 + 0x1cf0c);
  iVar4 = *(int *)(*piVar1 + 0x1304);
  FUN_1011ec30(*(undefined4 *)(iVar4 + 0x8e4),uVar6,*(undefined4 *)(iVar4 + 0x8e0),iVar4,
               *(undefined8 *)(iVar4 + 0x938));
  FUN_10114ce0(*(undefined4 *)(*piVar1 + 0x1304),uVar6);
  FUN_10114d70(*(undefined4 *)(*piVar1 + 0x1304),5);
  local_90 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = local_68 >> (ulonglong)(param_2[8] & 0x1f);
  if (local_98 == 0) {
    local_98 = 1;
  }
  local_e8 = (float)local_98;
  uStack_94 = local_60 >> (ulonglong)(param_2[8] & 0x1f);
  if (uStack_94 == 0) {
    uStack_94 = 1;
  }
  uVar5 = (ulonglong)uStack_94;
  local_7c = 0x3f800000;
  local_88 = local_e8;
  fStack_84 = (float)uVar5;
  FUN_10115c60(*(undefined4 *)(*piVar1 + 0x1304),1,&local_90);
  FUN_10115b30(*(undefined4 *)(*piVar1 + 0x1304),1,&local_a0);
  local_e4 = (float *)(param_1 + 0x1ce30);
  *(float *)(param_1 + 0x1ce34) = (float)uVar5;
  *local_e4 = local_e8;
  *(undefined4 *)(param_1 + 0x1ce90) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1ce94) = param_2[0xc];
  *(float *)(param_1 + 0x1cee0) = (float)(uint)param_2[0xb];
  *(float *)(param_1 + 0x1cee4) = (float)(uint)param_2[0xc];
  fVar10 = (float)param_2[6];
  fVar8 = (float)param_2[4];
  if (fVar8 < fVar10) {
    fVar8 = fVar10 - 0.495;
  }
  *(float *)(param_1 + 0x1ce98) = fVar8;
  fVar10 = (float)param_2[7];
  fVar8 = (float)param_2[5];
  if (fVar8 < fVar10) {
    fVar8 = fVar10 - 0.495;
  }
  *(float *)(param_1 + 0x1ce9c) = fVar8;
  FUN_1011bc80(*(int *)(param_1 + 0x1cf80) + 0x38,&local_f8,2,
               *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*piVar1 + 0x1304) + 0x938));
  if ((undefined8 *)local_f0 != (undefined8 *)0x0) {
    uVar11 = *(undefined8 *)local_e4;
    uVar9 = *(undefined8 *)(local_e4 + 6);
    uVar7 = *(undefined8 *)(local_e4 + 4);
    ((undefined8 *)local_f0)[1] = *(undefined8 *)(local_e4 + 2);
    *(undefined8 *)local_f0 = uVar11;
    ((undefined8 *)local_f0)[3] = uVar9;
    ((undefined8 *)local_f0)[2] = uVar7;
    uVar11 = *(undefined8 *)(local_e4 + 8);
    uVar9 = *(undefined8 *)(local_e4 + 0xe);
    uVar7 = *(undefined8 *)(local_e4 + 0xc);
    ((undefined8 *)local_f0)[5] = *(undefined8 *)(local_e4 + 10);
    ((undefined8 *)local_f0)[4] = uVar11;
    ((undefined8 *)local_f0)[7] = uVar9;
    ((undefined8 *)local_f0)[6] = uVar7;
    uVar11 = *(undefined8 *)(local_e4 + 0x10);
    uVar9 = *(undefined8 *)(local_e4 + 0x16);
    uVar7 = *(undefined8 *)(local_e4 + 0x14);
    ((undefined8 *)local_f0)[9] = *(undefined8 *)(local_e4 + 0x12);
    ((undefined8 *)local_f0)[8] = uVar11;
    ((undefined8 *)local_f0)[0xb] = uVar9;
    ((undefined8 *)local_f0)[10] = uVar7;
    uVar11 = *(undefined8 *)(local_e4 + 0x18);
    uVar9 = *(undefined8 *)(local_e4 + 0x1e);
    uVar7 = *(undefined8 *)(local_e4 + 0x1c);
    ((undefined8 *)local_f0)[0xd] = *(undefined8 *)(local_e4 + 0x1a);
    ((undefined8 *)local_f0)[0xc] = uVar11;
    ((undefined8 *)local_f0)[0xf] = uVar9;
    ((undefined8 *)local_f0)[0xe] = uVar7;
    uVar11 = *(undefined8 *)(local_e4 + 0x20);
    uVar9 = *(undefined8 *)(local_e4 + 0x26);
    uVar7 = *(undefined8 *)(local_e4 + 0x24);
    ((undefined8 *)local_f0)[0x11] = *(undefined8 *)(local_e4 + 0x22);
    ((undefined8 *)local_f0)[0x10] = uVar11;
    ((undefined8 *)local_f0)[0x13] = uVar9;
    ((undefined8 *)local_f0)[0x12] = uVar7;
    uVar11 = *(undefined8 *)(local_e4 + 0x28);
    uVar9 = *(undefined8 *)(local_e4 + 0x2e);
    uVar7 = *(undefined8 *)(local_e4 + 0x2c);
    ((undefined8 *)local_f0)[0x15] = *(undefined8 *)(local_e4 + 0x2a);
    ((undefined8 *)local_f0)[0x14] = uVar11;
    ((undefined8 *)local_f0)[0x17] = uVar9;
    ((undefined8 *)local_f0)[0x16] = uVar7;
    piVar2 = (int *)(*(int *)(param_1 + 0x1cf80) + 0x2c);
    if (*piVar2 != 0) {
      *piVar2 = 0;
    }
    FUN_10115010(*(undefined4 *)(*piVar1 + 0x1304),0,local_f8);
  }
  local_e0 = *param_2;
  uStack_dc = param_2[1];
  local_d0 = param_2[2];
  fStack_d4 = (float)param_2[5];
  uVar7 = 1;
  local_d8 = (float)param_2[4];
  local_c8 = (float)param_2[6];
  uStack_bc = param_2[3];
  fStack_b4 = (float)param_2[7];
  piVar2 = (int *)(param_1 + 0x1cef0);
  if (*piVar2 == 0x100) {
    *piVar2 = 0;
    uVar7 = 2;
  }
  uStack_cc = uStack_dc;
  fStack_c4 = fStack_d4;
  local_c0 = local_e0;
  local_b8 = local_d8;
  local_b0 = local_d0;
  uStack_ac = uStack_bc;
  local_a8 = local_c8;
  fStack_a4 = fStack_b4;
  FUN_1011bc80(*(int *)(param_1 + 0x1cf7c) + 0x38,&local_f8,uVar7,
               *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*piVar1 + 0x1304) + 0x938));
  if ((undefined8 *)local_f0 != (undefined8 *)0x0) {
    local_f0._0_4_ = (undefined8 *)local_f0 + *piVar2 * 8;
    *(undefined8 *)local_f0 = CONCAT44(uStack_dc,local_e0);
    ((undefined8 *)local_f0)[1] = CONCAT44(fStack_d4,local_d8);
    ((undefined8 *)local_f0)[2] = CONCAT44(uStack_cc,local_d0);
    ((undefined8 *)local_f0)[3] = CONCAT44(fStack_c4,local_c8);
    ((undefined8 *)local_f0)[4] = CONCAT44(uStack_bc,local_c0);
    ((undefined8 *)local_f0)[5] = CONCAT44(fStack_b4,local_b8);
    ((undefined8 *)local_f0)[6] = CONCAT44(uStack_ac,local_b0);
    ((undefined8 *)local_f0)[7] = CONCAT44(fStack_a4,local_a8);
    piVar3 = (int *)(*(int *)(param_1 + 0x1cf7c) + 0x2c);
    if (*piVar3 != 0) {
      *piVar3 = 0;
    }
  }
  local_f0 = 0x1000004000;
  FUN_101154a0(*(undefined4 *)(*piVar1 + 0x1304),0,1,&local_f8);
  FUN_10116190(*(undefined4 *)(*piVar1 + 0x1304),4,1,*piVar2 << 2,0);
  *piVar2 = *piVar2 + 1;
  return;
}

