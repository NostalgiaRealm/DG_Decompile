/*
 * FUN_1001c840 at 1001c840
 * undefined FUN_1001c840(void)
 * Address ranges: 1001c840-1001c9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c840(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar5 [16];
  
  iVar3 = FUN_1001c518(*(undefined4 *)(param_1 + 0x32dc),*(undefined4 *)(param_1 + 0x29e0));
  *param_2 = iVar3;
  iVar4 = FUN_1001c518(*(undefined4 *)(param_1 + 0x32dc),*(undefined4 *)(param_1 + 0x29e4));
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar3 = *param_2;
  *param_3 = iVar4;
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  else {
    auVar5 = (*pcVar2)();
    iVar3 = (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
  }
  if (*param_3 == -1) {
    iVar4 = 0;
  }
  else {
    auVar5 = (*pcVar2)();
    iVar4 = (*extraout_w11_00)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
  }
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) | 2;
  }
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) | 2;
  }
  if (iVar3 == 0) {
    iVar3 = iVar4;
  }
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0x20);
    if ((*(float *)(param_1 + 0x2c70) != (float)uVar1) ||
       (*(float *)(param_1 + 0x2c74) != (float)*(uint *)(iVar3 + 0x24))) {
      *(float *)(param_1 + 0x2c74) = (float)*(uint *)(iVar3 + 0x24);
      *(float *)(param_1 + 0x2c70) = (float)uVar1;
      *(undefined1 *)(param_1 + 0x32d0) = 1;
    }
  }
  return;
}

