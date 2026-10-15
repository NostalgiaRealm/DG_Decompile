/*
 * FUN_1002bb20 at 1002bb20
 * undefined __stdcall FUN_1002bb20(int param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 1002bb20-1002bd69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002bb20(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  float10 fVar6;
  undefined1 auVar7 [10];
  float fVar8;
  
  iVar5 = param_3 * 0x70;
  *(undefined4 *)(iVar5 + 0xfbc + param_1) = *param_4;
  *(undefined4 *)(iVar5 + 0xf70 + param_1) = param_4[1];
  *(undefined4 *)(iVar5 + 0xf74 + param_1) = param_4[2];
  *(undefined4 *)(iVar5 + 0xf78 + param_1) = param_4[3];
  *(undefined4 *)(iVar5 + 0xf80 + param_1) = param_4[5];
  *(undefined4 *)(iVar5 + 0xf84 + param_1) = param_4[6];
  *(undefined4 *)(iVar5 + 0xf88 + param_1) = param_4[7];
  *(undefined4 *)(iVar5 + 0xf90 + param_1) = param_4[9];
  *(undefined4 *)(iVar5 + 0xf94 + param_1) = param_4[10];
  *(undefined4 *)(iVar5 + 0xf98 + param_1) = param_4[0xb];
  *(undefined4 *)(iVar5 + 4000 + param_1) = param_4[0xd];
  *(undefined4 *)(iVar5 + 0xfa4 + param_1) = param_4[0xe];
  *(undefined4 *)(iVar5 + 0xfa8 + param_1) = param_4[0xf];
  fVar6 = FUN_1005c6fa((float)param_4[0x11] * (float)param_4[0x11] +
                       (float)param_4[0x10] * (float)param_4[0x10] +
                       (float)param_4[0x12] * (float)param_4[0x12]);
  fVar8 = (float)fVar6;
  *(float *)(iVar5 + 0xfb0 + param_1) = (float)param_4[0x10] / fVar8;
  *(float *)(iVar5 + 0xfb4 + param_1) = (float)param_4[0x11] / fVar8;
  *(float *)(iVar5 + 0xfb8 + param_1) = (float)param_4[0x12] / fVar8;
  *(undefined4 *)(iVar5 + 0xf7c + param_1) = param_4[0x13];
  fVar8 = (float)param_4[0x14];
  if (fVar8 == 0.0) {
    fVar8 = 1e-07;
  }
  *(float *)(iVar5 + 0xf8c + param_1) = fVar8;
  *(undefined4 *)(iVar5 + 0xfc4 + param_1) = param_4[0x15];
  *(undefined4 *)(iVar5 + 0xfc8 + param_1) = param_4[0x16];
  *(undefined4 *)(iVar5 + 0xfcc + param_1) = param_4[0x17];
  auVar7 = FUN_1005c722((float)param_4[0x19] * 0.5);
  *(float *)(iVar5 + 0xfac + param_1) = (float)(float10)auVar7;
  auVar7 = FUN_1005c722((float)param_4[0x18] * 0.5);
  *(float *)(iVar5 + 0xf9c + param_1) = (float)(float10)auVar7;
  fVar8 = (float)(float10)auVar7 - *(float *)(iVar5 + 0xfac + param_1);
  *(float *)(iVar5 + 0xfc0 + param_1) = fVar8;
  if (fVar8 <= 0.0) {
    *(undefined4 *)(iVar5 + 0xfc0 + param_1) = 0x3f800000;
  }
  *(uint *)(iVar5 + 0xfd0 + param_1) = (uint)(*(char *)(param_4 + 0x1a) != '\0');
  *(undefined1 *)(param_2 + 0x11) = 1;
  bVar4 = *(byte *)(param_1 + 0x420 + param_3);
  uVar3 = ((int)(char)bVar4 >> 0x1f & 8U) + param_3;
  pbVar2 = (byte *)(((bVar4 & 3) << 2 | 0x410) + param_1 + ((int)uVar3 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
  uVar3 = *(int *)(iVar5 + 0xfbc + param_1) - 1U & 3;
  bVar4 = (byte)uVar3;
  *(byte *)(param_1 + 0x420 + param_3) = bVar4;
  cVar1 = *(char *)(param_4 + 0x1a);
  *(byte *)(param_1 + 0x420 + param_3) = -(cVar1 != '\0') & 0x80U | bVar4;
  iVar5 = 0;
  if (cVar1 != '\0') {
    iVar5 = 8;
  }
  pbVar2 = (byte *)((uVar3 * 4 | 0x410) + param_1 + (iVar5 + param_3 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (iVar5 + param_3 & 7U);
  *(undefined1 *)(param_2 + 0x1a) = 1;
  return;
}

