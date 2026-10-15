/*
 * FUN_10036f10 at 10036f10
 * undefined FUN_10036f10(void)
 * Address ranges: 10036f10-10037237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036f10(int param_1,int param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  code *extraout_w11;
  float fVar9;
  float fVar10;
  float fVar11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  iVar1 = param_1 + 0x80;
  iVar8 = iVar1 + param_2 * 0x70;
  *(int *)(iVar8 + 0xfbc) = *param_3;
  *(int *)(iVar8 + 0xf70) = param_3[1];
  *(int *)(iVar8 + 0xf74) = param_3[2];
  *(int *)(iVar8 + 0xf78) = param_3[3];
  *(int *)(iVar8 + 0xf80) = param_3[5];
  *(int *)(iVar8 + 0xf84) = param_3[6];
  *(int *)(iVar8 + 0xf88) = param_3[7];
  *(int *)(iVar8 + 0xf90) = param_3[9];
  *(int *)(iVar8 + 0xf94) = param_3[10];
  *(int *)(iVar8 + 0xf98) = param_3[0xb];
  *(int *)(iVar8 + 4000) = param_3[0xd];
  *(int *)(iVar8 + 0xfa4) = param_3[0xe];
  *(int *)(iVar8 + 0xfa8) = param_3[0xf];
  fVar9 = (float)param_3[0x10];
  fVar11 = (float)param_3[0x11];
  fVar10 = (float)param_3[0x12];
  fVar9 = (float)FUN_10001138(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
  *(float *)(iVar8 + 0xfb0) = (float)param_3[0x10] / fVar9;
  *(float *)(iVar8 + 0xfb4) = (float)param_3[0x11] / fVar9;
  *(float *)(iVar8 + 0xfb8) = (float)param_3[0x12] / fVar9;
  *(int *)(iVar8 + 0xf7c) = param_3[0x13];
  fVar9 = (float)param_3[0x14];
  if ((float)param_3[0x14] == 0.0) {
    fVar9 = 1e-07;
  }
  *(float *)(iVar8 + 0xf8c) = fVar9;
  *(int *)(iVar8 + 0xfc4) = param_3[0x15];
  *(int *)(iVar8 + 0xfc8) = param_3[0x16];
  *(int *)(iVar8 + 0xfcc) = param_3[0x17];
  fVar9 = (float)FUN_10001118((float)param_3[0x19] * 0.5);
  *(float *)(iVar8 + 0xfac) = fVar9;
  fVar9 = (float)FUN_10001118((float)param_3[0x18] * 0.5);
  *(float *)(iVar8 + 0xf9c) = fVar9;
  fVar9 = fVar9 - *(float *)(iVar8 + 0xfac);
  *(float *)(iVar8 + 0xfc0) = fVar9;
  if (fVar9 <= 0.0) {
    *(float *)(iVar8 + 0xfc0) = 1.0;
  }
  *(uint *)(iVar8 + 0xfd0) = (uint)((char)param_3[0x1a] != '\0');
  pbVar2 = (byte *)(iVar1 + param_2 + 0x420);
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  uVar3 = (-(uint)(*pbVar2 >> 7) & 8) + param_2;
  pbVar5 = (byte *)(((int)uVar3 >> 3) + iVar1 + ((*pbVar2 & 3) + 0x104) * 4);
  *pbVar5 = *pbVar5 & ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
  uVar3 = *(int *)(iVar8 + 0xfbc) - 1U & 3;
  bVar4 = (byte)uVar3;
  *pbVar2 = bVar4;
  bVar6 = (char)param_3[0x1a] == '\0';
  bVar7 = 0x80;
  if (bVar6) {
    bVar7 = 0;
  }
  *pbVar2 = bVar7 | bVar4;
  iVar8 = 8;
  if (bVar6) {
    iVar8 = 0;
  }
  pbVar2 = (byte *)((iVar8 + param_2 >> 3) + iVar1 + (uVar3 + 0x104) * 4);
  *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(iVar8 + param_2 & 7));
  *(undefined1 *)(param_1 + 0x1d4a) = 1;
  return;
}

