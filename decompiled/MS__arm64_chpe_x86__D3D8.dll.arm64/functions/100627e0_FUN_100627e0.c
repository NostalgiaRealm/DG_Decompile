/*
 * FUN_100627e0 at 100627e0
 * undefined FUN_100627e0(void)
 * Address ranges: 100627e0-100629ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100627e0(int param_1,int param_2)

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
  if ((*(float *)(param_1 + 0x4ca0) != fVar7) || (*(float *)(param_1 + 0x4ca4) != (float)*puVar1)) {
    *(float *)(param_1 + 0x4ca0) = fVar7;
    *(float *)(param_1 + 0x4ca4) = (float)*puVar1;
    *(float *)(param_1 + 0x598) = (float)*(uint *)(param_2 + 0x14);
    *(float *)(param_1 + 0x59c) = (float)*puVar1;
    (*pcVar2)();
    uVar3 = (*extraout_w11)(param_2,0);
    *(float *)(param_1 + 0x5c8) = (float)uVar3;
    (*pcVar2)();
    uVar3 = (*extraout_w11_00)(param_2,0);
    *(float *)(param_1 + 0x5cc) = (float)uVar3;
    FUN_1005f298(param_1);
    *(undefined1 *)(param_1 + 0xd97e) = 1;
    *(undefined1 *)(param_1 + 0xd981) = 1;
  }
  (*pcVar2)();
  iVar4 = (*extraout_w11_01)(param_2,0);
  (*pcVar2)();
  uVar5 = (*extraout_w11_02)(param_2,0);
  if ((iVar4 == *(int *)(param_1 + 0x5888)) && (iVar4 == *(int *)(param_1 + 0x588c))) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  *(int *)(param_1 + 0x5888) = iVar4;
  *(undefined4 *)(param_1 + 0x588c) = uVar5;
  *(byte *)(param_1 + 0x5958) = bVar6 | *(byte *)(param_1 + 0x5958);
  return;
}

