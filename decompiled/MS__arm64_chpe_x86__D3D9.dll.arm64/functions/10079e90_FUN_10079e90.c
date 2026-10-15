/*
 * FUN_10079e90 at 10079e90
 * undefined FUN_10079e90(void)
 * Address ranges: 10079e90-1007a187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079e90(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  code *extraout_w11;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x90;
  iVar4 = iVar1 + param_2 * 0x70;
  *(int *)(iVar4 + 0x6f4c) = *param_3;
  *(int *)(iVar4 + 0x6f00) = param_3[1];
  *(int *)(iVar4 + 0x6f04) = param_3[2];
  *(int *)(iVar4 + 0x6f08) = param_3[3];
  *(int *)(iVar4 + 0x6f10) = param_3[5];
  *(int *)(iVar4 + 0x6f14) = param_3[6];
  *(int *)(iVar4 + 0x6f18) = param_3[7];
  *(int *)(iVar4 + 0x6f20) = param_3[9];
  *(int *)(iVar4 + 0x6f24) = param_3[10];
  *(int *)(iVar4 + 0x6f28) = param_3[0xb];
  *(int *)(iVar4 + 0x6f30) = param_3[0xd];
  *(int *)(iVar4 + 0x6f34) = param_3[0xe];
  *(int *)(iVar4 + 0x6f38) = param_3[0xf];
  fVar6 = (float)param_3[0x10];
  fVar8 = (float)param_3[0x11];
  fVar7 = (float)param_3[0x12];
  fVar6 = (float)FUN_10001138(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  *(float *)(iVar4 + 0x6f40) = (float)param_3[0x10] / fVar6;
  *(float *)(iVar4 + 0x6f44) = (float)param_3[0x11] / fVar6;
  *(float *)(iVar4 + 0x6f48) = (float)param_3[0x12] / fVar6;
  *(int *)(iVar4 + 0x6f0c) = param_3[0x13];
  fVar6 = (float)param_3[0x14];
  if ((float)param_3[0x14] == 0.0) {
    fVar6 = 1e-07;
  }
  *(float *)(iVar4 + 0x6f1c) = fVar6;
  *(int *)(iVar4 + 0x6f54) = param_3[0x15];
  *(int *)(iVar4 + 0x6f58) = param_3[0x16];
  *(int *)(iVar4 + 0x6f5c) = param_3[0x17];
  fVar6 = (float)FUN_10001118((float)param_3[0x19] * 0.5);
  *(float *)(iVar4 + 0x6f3c) = fVar6;
  fVar6 = (float)FUN_10001118((float)param_3[0x18] * 0.5);
  *(float *)(iVar4 + 0x6f2c) = fVar6;
  fVar6 = fVar6 - *(float *)(iVar4 + 0x6f3c);
  *(float *)(iVar4 + 0x6f50) = fVar6;
  if (fVar6 <= 0.0) {
    *(float *)(iVar4 + 0x6f50) = 1.0;
  }
  *(uint *)(iVar4 + 0x6f60) = (uint)((char)param_3[0x1a] != '\0');
  pbVar2 = (byte *)(iVar1 + param_2 + 0xf28);
  *(undefined1 *)(param_1 + 0xf671) = 1;
  pbVar5 = (byte *)(((int)param_2 >> 3) + iVar1 + (*pbVar2 + 0x3c6) * 4);
  *pbVar5 = *pbVar5 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  uVar3 = *(int *)(iVar4 + 0x6f4c) - 1U & 3;
  *pbVar2 = (byte)uVar3;
  pbVar2 = (byte *)(((int)param_2 >> 3) + iVar1 + (uVar3 + 0x3c6) * 4);
  *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(param_2 & 7));
  *(undefined1 *)(param_1 + 0xf6a5) = 1;
  return;
}

