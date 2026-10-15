/*
 * FUN_100351f0 at 100351f0
 * undefined FUN_100351f0(void)
 * Address ranges: 100351f0-100353bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100351f0(int param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  float fVar7;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_2 + 0x18);
  fVar7 = (float)*(uint *)(param_2 + 0x14);
  if ((*(float *)(param_1 + 0x980) != fVar7) || (*(float *)(param_1 + 0x984) != (float)*puVar1)) {
    *(float *)(param_1 + 0x980) = fVar7;
    *(float *)(param_1 + 0x984) = (float)*puVar1;
    *(float *)(param_1 + 0x3a4) = (float)*(uint *)(param_2 + 0x14);
    *(float *)(param_1 + 0x3a8) = (float)*puVar1;
    (*pcVar2)();
    uVar3 = (*extraout_w11)(param_2,0);
    *(float *)(param_1 + 0x3d4) = (float)uVar3;
    (*pcVar2)();
    uVar3 = (*extraout_w11_00)(param_2,0);
    *(float *)(param_1 + 0x3d8) = (float)uVar3;
    FUN_10032568(param_1);
    *(undefined1 *)(param_1 + 0x1d3e) = 1;
    *(undefined1 *)(param_1 + 0x1d41) = 1;
  }
  (*pcVar2)();
  iVar4 = (*extraout_w11_01)(param_2,0);
  (*pcVar2)();
  iVar5 = (*extraout_w11_02)(param_2,0);
  if ((iVar4 == *(int *)(param_1 + 0x1838)) && (iVar4 == *(int *)(param_1 + 0x183c))) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  *(int *)(param_1 + 0x1838) = iVar4;
  *(int *)(param_1 + 0x183c) = iVar5;
  *(byte *)(param_1 + 0x1908) = bVar6 | *(byte *)(param_1 + 0x1908);
  return;
}

