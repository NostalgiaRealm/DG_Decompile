/*
 * FUN_10035cc0 at 10035cc0
 * undefined FUN_10035cc0(void)
 * Address ranges: 10035cc0-10036187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035cc0(int param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *local_78 [4];
  undefined4 local_68;
  int local_64;
  int iStack_60;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar4 = *(undefined1 *)(param_1 + 0x2b14);
  local_68 = param_2;
  FUN_10036600(param_1 + 0x3d10,0,0);
  iVar1 = param_1 + 0x3438;
  FUN_100339e8(iVar1,0,2);
  FUN_10014978(param_1);
  FUN_1001cf30(param_1,0xffffffff);
  FUN_10013150(param_1);
  if ((*(int *)(param_1 + 0x2ae0) == 0) || (*(int *)(param_1 + 0x2ae4) != 1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  DAT_100a21c4 = *(undefined1 *)(param_1 + 0x2b3c);
  if ((bVar5) || (DAT_100a21e4 = 0, (*(uint *)(param_1 + 0x2c8c) & 0xff0000) == 0)) {
    DAT_100a21e4 = 0xf;
  }
  DAT_100a2334 = *(undefined4 *)(param_1 + 0x2b7c);
  DAT_100a22e0._0_4_ = *(int *)(param_1 + 0x2ae0);
  DAT_100a22e0._4_4_ = *(int *)(param_1 + 0x2ae4);
  puVar2 = (undefined4 *)(param_1 + 0x3304);
  piVar3 = (int *)(param_1 + 0x3300);
  FUN_1006a960(*piVar3,*puVar2,&DAT_100a21a0);
  FUN_1006acc8(*piVar3,*puVar2,&DAT_100a22e0,uVar4);
  FUN_1006afa0(*piVar3,*puVar2,&DAT_100a2318);
  iVar7 = FUN_1001c518(iVar1,*(undefined4 *)(param_1 + 0x29e0));
  iVar8 = FUN_1001c518(iVar1,*(undefined4 *)(param_1 + 0x29e4));
  iStack_60 = param_1 + iVar7 * 0x104 + 0x3574;
  if (iVar7 == -1) {
    iStack_60 = 0;
  }
  local_64 = param_1 + iVar8 * 0x104 + 0x3574;
  if (iVar8 == -1) {
    local_64 = 0;
  }
  if (iStack_60 == 0) {
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = *(uint *)(iStack_60 + 0x28);
    uVar10 = *(uint *)(iStack_60 + 0x2c);
    uVar13 = *(uint *)(iStack_60 + 0x20);
    uVar12 = *(uint *)(iStack_60 + 0x24);
  }
  fStack_4c = (float)uVar10;
  local_50 = (float)uVar11;
  local_58 = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  FUN_1006b310(*piVar3,*puVar2,&local_58);
  uVar14 = FUN_1001c9c8(param_1,local_68,param_3,param_4);
  *(byte *)(param_1 + 0x3edc) = *(byte *)(param_1 + 0x3edc) | 1;
  FUN_10012798(param_1);
  FUN_10013080(*(int *)(param_1 + 0x3570),5,*(undefined4 *)(param_1 + 0x3cfc),
               *(undefined4 *)(param_1 + 0x3cf0),*(undefined4 *)(param_1 + 0x3ce0));
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar7 = (*extraout_w11)(uVar9,*(undefined4 *)(param_1 + 0x3d04),0,4,0,local_78);
  if (-1 < iVar7) {
    *local_78[0] = 0;
    local_78[0][1] = 0;
    local_78[0][2] = uVar14;
    local_78[0][3] = 0;
    local_78[0][4] = (float)uVar13;
    local_78[0][5] = 0;
    local_78[0][6] = uVar14;
    local_78[0][7] = 0;
    local_78[0][8] = 0;
    local_78[0][9] = (float)uVar12;
    local_78[0][10] = uVar14;
    local_78[0][0xb] = 0;
    local_78[0][0xc] = (float)uVar13;
    local_78[0][0xd] = (float)uVar12;
    local_78[0][0xe] = uVar14;
    local_78[0][0xf] = 0;
    uVar9 = (*pcVar6)();
    (*extraout_w11_00)(uVar9,*(undefined4 *)(param_1 + 0x3d04),0);
  }
  FUN_10031110(*(int *)(param_1 + 0x3570) + 0x3d10);
  uVar9 = (*pcVar6)();
  (*extraout_w11_01)(uVar9,4,0);
  FUN_1001cad8(param_1,iStack_60,local_64,DAT_100a21c4,DAT_100a21e4);
  FUN_10033c80(iVar1);
  (*(code *)PTR_FUN_100a0090)(*piVar3 + 0x4a0);
  *(undefined4 *)(param_1 + 0x2c60) = 0x1010101;
  return;
}

