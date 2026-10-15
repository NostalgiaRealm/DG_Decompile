/*
 * FUN_10033bd0 at 10033bd0
 * undefined FUN_10033bd0(void)
 * Address ranges: 10033bd0-100340b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033bd0(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar12;
  undefined4 uVar13;
  uint local_78;
  undefined4 *local_68 [4];
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_10035760(param_1 + 0x4090,0,0);
  iVar1 = param_1 + 0x37b8;
  FUN_1003b998(iVar1,0,2);
  FUN_10014e08(param_1);
  FUN_1001d538(param_1,0xffffffff);
  FUN_100141e8(param_1);
  if ((*(int *)(param_1 + 0x2c20) == 0) || (*(int *)(param_1 + 0x2c24) != 1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  DAT_100aa3b4 = *(undefined1 *)(param_1 + 0x2c7c);
  if ((bVar6) || (DAT_100aa3d4 = 0, (*(uint *)(param_1 + 0x2ddc) & 0xff0000) == 0)) {
    DAT_100aa3d4 = 0xf;
  }
  DAT_100aa524 = *(undefined4 *)(param_1 + 0x2cbc);
  DAT_100aa4d0._0_4_ = *(int *)(param_1 + 0x2c20);
  DAT_100aa4d0._4_4_ = *(int *)(param_1 + 0x2c24);
  DAT_100aa4dc = *(undefined4 *)(param_1 + 0x2c2c);
  puVar2 = (undefined4 *)(param_1 + 0x3684);
  piVar3 = (int *)(param_1 + 0x3680);
  FUN_10070000(*piVar3,*puVar2,&DAT_100aa390);
  FUN_10070368(*piVar3,*puVar2,&DAT_100aa4d0,param_5);
  FUN_10070640(*piVar3,*puVar2,&DAT_100aa508);
  iVar7 = FUN_1001cae0(iVar1,*(undefined4 *)(param_1 + 0x2b1c));
  iVar8 = FUN_1001cae0(iVar1,*(undefined4 *)(param_1 + 0x2b20));
  iVar4 = param_1 + iVar7 * 0x104 + 0x38f4;
  if (iVar7 == -1) {
    iVar4 = 0;
  }
  iVar7 = param_1 + iVar8 * 0x104 + 0x38f4;
  if (iVar8 == -1) {
    iVar7 = 0;
  }
  if (iVar4 == 0) {
    uVar11 = 0;
    local_78 = 0;
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = *(uint *)(iVar4 + 0x28);
    uVar10 = *(uint *)(iVar4 + 0x2c);
    local_78 = *(uint *)(iVar4 + 0x20);
    uVar12 = *(uint *)(iVar4 + 0x24);
  }
  fStack_4c = (float)uVar10;
  local_50 = (float)uVar11;
  local_58 = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  FUN_100709b0(*piVar3,*puVar2,&local_58);
  bVar6 = false;
  if (iVar4 != 0) {
    bVar6 = *(int *)(iVar4 + 0x10) == 5 || *(int *)(iVar4 + 0x10) == 8;
  }
  uVar13 = FUN_1001cf90(param_1,param_2,param_3,param_4,bVar6);
  *(byte *)(param_1 + 0x425c) = *(byte *)(param_1 + 0x425c) | 1;
  FUN_10013848(param_1);
  FUN_10014130(*(int *)(param_1 + 0x38f0),5,*(undefined4 *)(param_1 + 0x407c),
               *(undefined4 *)(param_1 + 0x4070),*(undefined4 *)(param_1 + 0x4060));
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar8 = (*extraout_w11)(uVar9,*(undefined4 *)(param_1 + 0x4084),0,4,0,local_68);
  if (-1 < iVar8) {
    *local_68[0] = 0;
    local_68[0][1] = 0;
    local_68[0][2] = uVar13;
    local_68[0][3] = 0;
    local_68[0][4] = (float)local_78;
    local_68[0][5] = 0;
    local_68[0][6] = uVar13;
    local_68[0][7] = 0;
    local_68[0][8] = 0;
    local_68[0][9] = (float)uVar12;
    local_68[0][10] = uVar13;
    local_68[0][0xb] = 0;
    local_68[0][0xc] = (float)local_78;
    local_68[0][0xd] = (float)uVar12;
    local_68[0][0xe] = uVar13;
    local_68[0][0xf] = 0;
    uVar9 = (*pcVar5)();
    (*extraout_w11_00)(uVar9,*(undefined4 *)(param_1 + 0x4084),0);
  }
  FUN_10035000(*(int *)(param_1 + 0x38f0) + 0x4090);
  uVar9 = (*pcVar5)();
  (*extraout_w11_01)(uVar9,4,0);
  FUN_1001d0e0(param_1,iVar4,iVar7,DAT_100aa3b4,DAT_100aa3d4);
  FUN_1003bc30(iVar1);
  (*(code *)PTR_FUN_100a8090)(*piVar3 + 0x4a0);
  *(undefined4 *)(param_1 + 0x2da8) = 0x1010101;
  return;
}

