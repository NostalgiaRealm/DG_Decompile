/*
 * FUN_10078d10 at 10078d10
 * undefined FUN_10078d10(void)
 * Address ranges: 10078d10-10078eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078d10(int param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  float fVar7;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_2 + 0x18);
  fVar7 = (float)*(uint *)(param_2 + 0x14);
  if ((*(float *)(param_1 + 0x6910) != fVar7) || (*(float *)(param_1 + 0x6914) != (float)*puVar1)) {
    *(float *)(param_1 + 0x6910) = fVar7;
    *(float *)(param_1 + 0x6914) = (float)*puVar1;
    *(float *)(param_1 + 0xeb0) = (float)*(uint *)(param_2 + 0x14);
    *(float *)(param_1 + 0xeb4) = (float)*puVar1;
    (*pcVar2)();
    uVar3 = (*extraout_w11)(param_2,0);
    *(float *)(param_1 + 0xee0) = (float)uVar3;
    (*pcVar2)();
    uVar3 = (*extraout_w11_00)(param_2,0);
    *(float *)(param_1 + 0xee4) = (float)uVar3;
    FUN_10074c68(param_1);
    *(undefined1 *)(param_1 + 0xf66e) = 1;
    *(undefined1 *)(param_1 + 0xf671) = 1;
  }
  (*pcVar2)();
  iVar4 = (*extraout_w11_01)(param_2,0);
  (*pcVar2)();
  uVar5 = (*extraout_w11_02)(param_2,0);
  if ((iVar4 == *(int *)(param_1 + 0x7578)) && (iVar4 == *(int *)(param_1 + 0x757c))) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  *(int *)(param_1 + 0x7578) = iVar4;
  *(undefined4 *)(param_1 + 0x757c) = uVar5;
  *(byte *)(param_1 + 0x7645) = *(byte *)(param_1 + 0x7645) | bVar6;
  *(byte *)(param_1 + 0xf6a1) = *(byte *)(param_1 + 0xf6a1) | bVar6;
  return;
}

