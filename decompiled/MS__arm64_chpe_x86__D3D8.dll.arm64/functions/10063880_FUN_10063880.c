/*
 * FUN_10063880 at 10063880
 * undefined FUN_10063880(void)
 * Address ranges: 10063880-10063b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063880(int param_1,uint param_2,int *param_3)

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
  *(int *)(iVar4 + 0x52bc) = *param_3;
  *(int *)(iVar4 + 0x5270) = param_3[1];
  *(int *)(iVar4 + 0x5274) = param_3[2];
  *(int *)(iVar4 + 0x5278) = param_3[3];
  *(int *)(iVar4 + 0x5280) = param_3[5];
  *(int *)(iVar4 + 0x5284) = param_3[6];
  *(int *)(iVar4 + 0x5288) = param_3[7];
  *(int *)(iVar4 + 0x5290) = param_3[9];
  *(int *)(iVar4 + 0x5294) = param_3[10];
  *(int *)(iVar4 + 0x5298) = param_3[0xb];
  *(int *)(iVar4 + 0x52a0) = param_3[0xd];
  *(int *)(iVar4 + 0x52a4) = param_3[0xe];
  *(int *)(iVar4 + 0x52a8) = param_3[0xf];
  fVar6 = (float)param_3[0x10];
  fVar8 = (float)param_3[0x11];
  fVar7 = (float)param_3[0x12];
  fVar6 = (float)FUN_10001138(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  *(float *)(iVar4 + 0x52b0) = (float)param_3[0x10] / fVar6;
  *(float *)(iVar4 + 0x52b4) = (float)param_3[0x11] / fVar6;
  *(float *)(iVar4 + 0x52b8) = (float)param_3[0x12] / fVar6;
  *(int *)(iVar4 + 0x527c) = param_3[0x13];
  fVar6 = (float)param_3[0x14];
  if ((float)param_3[0x14] == 0.0) {
    fVar6 = 1e-07;
  }
  *(float *)(iVar4 + 0x528c) = fVar6;
  *(int *)(iVar4 + 0x52c4) = param_3[0x15];
  *(int *)(iVar4 + 0x52c8) = param_3[0x16];
  *(int *)(iVar4 + 0x52cc) = param_3[0x17];
  fVar6 = (float)FUN_10001118((float)param_3[0x19] * 0.5);
  *(float *)(iVar4 + 0x52ac) = fVar6;
  fVar6 = (float)FUN_10001118((float)param_3[0x18] * 0.5);
  *(float *)(iVar4 + 0x529c) = fVar6;
  fVar6 = fVar6 - *(float *)(iVar4 + 0x52ac);
  *(float *)(iVar4 + 0x52c0) = fVar6;
  if (fVar6 <= 0.0) {
    *(float *)(iVar4 + 0x52c0) = 1.0;
  }
  *(uint *)(iVar4 + 0x52d0) = (uint)((char)param_3[0x1a] != '\0');
  pbVar2 = (byte *)(iVar1 + param_2 + 0x604);
  *(undefined1 *)(param_1 + 0xd981) = 1;
  pbVar5 = (byte *)(((int)param_2 >> 3) + iVar1 + (*pbVar2 + 0x17d) * 4);
  *pbVar5 = *pbVar5 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  uVar3 = *(int *)(iVar4 + 0x52bc) - 1U & 3;
  *pbVar2 = (byte)uVar3;
  pbVar2 = (byte *)(((int)param_2 >> 3) + iVar1 + (uVar3 + 0x17d) * 4);
  *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(param_2 & 7));
  *(undefined1 *)(param_1 + 0xd9aa) = 1;
  return;
}

