/*
 * FUN_1002be80 at 1002be80
 * undefined FUN_1002be80(void)
 * Address ranges: 1002be80-1002c003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002be80(int param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar8 [16];
  
  uVar6 = FUN_1002be40(param_1,*(undefined4 *)(param_1 + 0x2964));
  uVar4 = *(undefined4 *)(param_1 + 0x2968);
  uVar7 = uVar6 & 0xffffffff;
  *extraout_w10 = (int)uVar6;
  iVar3 = FUN_1002be40(uVar6,uVar4);
  *param_3 = iVar3;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((int)uVar7 == -1) {
    iVar3 = 0;
  }
  else {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(uVar4,uVar7 & 0xffffffff);
  }
  if (*param_3 == -1) {
    iVar5 = 0;
  }
  else {
    auVar8 = (*pcVar2)();
    iVar5 = (*extraout_w11_00)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff);
  }
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) | 2;
  }
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) | 2;
  }
  if (iVar3 == 0) {
    iVar3 = iVar5;
  }
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0x20);
    if ((*(float *)(param_1 + 0x2bd0) != (float)uVar1) ||
       (*(float *)(param_1 + 0x2bd4) != (float)*(uint *)(iVar3 + 0x24))) {
      *(float *)(param_1 + 0x2bd4) = (float)*(uint *)(iVar3 + 0x24);
      *(float *)(param_1 + 0x2bd0) = (float)uVar1;
      *(undefined1 *)(param_1 + 0x3150) = 1;
    }
  }
  return;
}

