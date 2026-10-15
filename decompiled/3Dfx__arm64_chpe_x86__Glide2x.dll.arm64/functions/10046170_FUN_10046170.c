/*
 * FUN_10046170 at 10046170
 * undefined FUN_10046170(void)
 * Address ranges: 10046170-1004661f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10046170(int param_1,undefined4 param_2,undefined1 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int extraout_w10;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *local_70 [4];
  undefined8 local_60;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar5 = *(undefined1 *)(param_1 + 0x2a74);
  FUN_10046a98(param_1 + 0x3780,0,0);
  FUN_10043e88(param_1 + 0x32b8,0,2);
  FUN_100254d8(param_1);
  FUN_100239d8(param_1);
  if ((*(int *)(param_1 + 0x2a40) == 0) || (*(int *)(param_1 + 0x2a44) != 1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  DAT_1009f344 = *(undefined1 *)(param_1 + 0x2a9c);
  if ((bVar6) || (DAT_1009f364 = 0, (*(uint *)(param_1 + 0x2bec) & 0xff0000) == 0)) {
    DAT_1009f364 = 0xf;
  }
  DAT_1009f4b4 = *(undefined4 *)(param_1 + 0x2adc);
  DAT_1009f460._0_4_ = *(int *)(param_1 + 0x2a40);
  DAT_1009f460._4_4_ = *(int *)(param_1 + 0x2a44);
  puVar1 = (undefined4 *)(param_1 + 0x3184);
  piVar2 = (int *)(param_1 + 0x3180);
  FUN_10066cc0(*piVar2,*puVar1,&DAT_1009f320);
  FUN_10067028(*piVar2,*puVar1,&DAT_1009f460,uVar5);
  uVar10 = FUN_10067300(*piVar2,*puVar1,&DAT_1009f498);
  uVar10 = FUN_1002be40(uVar10,*(undefined4 *)(param_1 + 0x2964));
  iVar8 = FUN_1002be40(uVar10,*(undefined4 *)(param_1 + 0x2968));
  iVar3 = param_1 + extraout_w10 * 0x104 + 0x33f4;
  if (extraout_w10 == -1) {
    iVar3 = 0;
  }
  iVar4 = param_1 + iVar8 * 0x104 + 0x33f4;
  if (iVar8 == -1) {
    iVar4 = 0;
  }
  if (iVar3 == 0) {
    uVar12 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar11 = 0;
  }
  else {
    uVar12 = *(uint *)(iVar3 + 0x28);
    uVar11 = *(uint *)(iVar3 + 0x2c);
    uVar14 = *(uint *)(iVar3 + 0x20);
    uVar13 = *(uint *)(iVar3 + 0x24);
  }
  fStack_54 = (float)uVar11;
  local_58 = (float)uVar12;
  local_60 = 0;
  local_50 = 0;
  local_4c = 0x3f800000;
  FUN_10067670(*piVar2,*puVar1,&local_60);
  uVar15 = FUN_1002c008(param_1,param_2,param_3,param_4);
  *(byte *)(param_1 + 0x37a0) = *(byte *)(param_1 + 0x37a0) | 1;
  FUN_10023058(param_1);
  FUN_10023908(*(int *)(param_1 + 0x33f0),5,*(undefined4 *)(param_1 + 0x376c),
               *(undefined4 *)(param_1 + 0x3760),*(undefined4 *)(param_1 + 0x3750));
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar8 = (*extraout_w11)(uVar9,*(undefined4 *)(param_1 + 0x3774),0,4,0,local_70);
  if (-1 < iVar8) {
    *local_70[0] = 0;
    local_70[0][1] = 0;
    local_70[0][2] = uVar15;
    local_70[0][3] = 0;
    local_70[0][4] = (float)uVar14;
    local_70[0][5] = 0;
    local_70[0][6] = uVar15;
    local_70[0][7] = 0;
    local_70[0][8] = 0;
    local_70[0][9] = (float)uVar13;
    local_70[0][10] = uVar15;
    local_70[0][0xb] = 0;
    local_70[0][0xc] = (float)uVar14;
    local_70[0][0xd] = (float)uVar13;
    local_70[0][0xe] = uVar15;
    local_70[0][0xf] = 0;
    uVar9 = (*pcVar7)();
    (*extraout_w11_00)(uVar9,*(undefined4 *)(param_1 + 0x3774),0);
  }
  FUN_10041748(*(int *)(param_1 + 0x33f0) + 0x3780);
  uVar9 = (*pcVar7)();
  (*extraout_w11_01)(uVar9,4,0);
  FUN_1002c118(param_1,iVar3,iVar4,DAT_1009f344,DAT_1009f364);
  FUN_10044130(param_1 + 0x32b8);
  (*(code *)PTR_FUN_1009d090)(*piVar2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x2bc0) = 0x1010101;
  return;
}

