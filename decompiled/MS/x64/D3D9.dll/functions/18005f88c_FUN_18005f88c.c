/*
 * FUN_18005f88c at 18005f88c
 * undefined __fastcall FUN_18005f88c(longlong param_1, uint param_2, longlong param_3, ulonglong param_4, uint param_5, float param_6, undefined1 param_7)
 * Address ranges: 18005f88c-18005fc0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f88c(longlong param_1,uint param_2,longlong param_3,ulonglong param_4,uint param_5,
                  float param_6,undefined1 param_7)

{
  int iVar1;
  float *pfVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if ((param_4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    *(uint *)(param_1 + 0x69c0) = param_5 >> 0x10 & 0xff;
    *(uint *)(param_1 + 0x69c4) = param_5 >> 8 & 0xff;
    *(uint *)(param_1 + 0x69c8) = param_5 & 0xff;
    uVar3 = 0xf;
    *(uint *)(param_1 + 0x69cc) = param_5 >> 0x18;
  }
  *(undefined1 *)(param_1 + 0xe04) = uVar3;
  bVar6 = (param_4 & 2) == 0;
  if (bVar6) {
    param_6 = 0.0;
  }
  else {
    *(undefined4 *)(param_1 + 3000) = 1;
    *(undefined4 *)(param_1 + 0xbbc) = 8;
  }
  *(uint *)(param_1 + 0xbb4) = (uint)!bVar6;
  if ((param_4 & 4) == 0) {
    *(undefined4 *)(param_1 + 0xbc0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xbc0) = 1;
    *(undefined4 *)(param_1 + 0xbd0) = 3;
    *(undefined4 *)(param_1 + 0xbc8) = 3;
    *(undefined4 *)(param_1 + 0xbcc) = 3;
    *(undefined4 *)(param_1 + 0xbe0) = 3;
    *(undefined4 *)(param_1 + 0xbd8) = 3;
    *(undefined4 *)(param_1 + 0xbdc) = 3;
    *(undefined1 *)(param_1 + 0x75a1) = param_7;
    *(undefined4 *)(param_1 + 0xbe4) = 8;
  }
  *(undefined1 *)(param_1 + 0xf691) = 1;
  *(undefined2 *)(param_1 + 0xf68b) = 0x101;
  *(undefined1 *)(param_1 + 0xf68d) = 1;
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      pfVar2 = *(float **)(param_1 + 0x68);
      *pfVar2 = (float)*(int *)(param_3 + uVar5 * 0x10);
      iVar1 = *(int *)(param_3 + 4 + uVar5 * 0x10);
      pfVar2[2] = param_6;
      pfVar2[1] = (float)iVar1;
      pfVar2[3] = ((float)*(int *)(param_3 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb0)) /
                  *(float *)(param_1 + 0xeb8);
      pfVar2[4] = ((float)*(int *)(param_3 + 4 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb4)) /
                  *(float *)(param_1 + 0xebc);
      pfVar2[5] = (float)*(int *)(param_3 + 8 + uVar5 * 0x10);
      iVar1 = *(int *)(param_3 + 4 + uVar5 * 0x10);
      pfVar2[7] = param_6;
      pfVar2[6] = (float)iVar1;
      pfVar2[8] = ((float)*(int *)(param_3 + 8 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb0)) /
                  *(float *)(param_1 + 0xeb8);
      pfVar2[9] = ((float)*(int *)(param_3 + 4 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb4)) /
                  *(float *)(param_1 + 0xebc);
      pfVar2[10] = (float)*(int *)(param_3 + uVar5 * 0x10);
      iVar1 = *(int *)(param_3 + 0xc + uVar5 * 0x10);
      pfVar2[0xc] = param_6;
      pfVar2[0xb] = (float)iVar1;
      pfVar2[0xd] = ((float)*(int *)(param_3 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb0)) /
                    *(float *)(param_1 + 0xeb8);
      pfVar2[0xe] = ((float)*(int *)(param_3 + 0xc + uVar5 * 0x10) - *(float *)(param_1 + 0xeb4)) /
                    *(float *)(param_1 + 0xebc);
      pfVar2[0xf] = (float)*(int *)(param_3 + 8 + uVar5 * 0x10);
      iVar1 = *(int *)(param_3 + 4 + uVar5 * 0x10);
      pfVar2[0x11] = param_6;
      pfVar2[0x10] = (float)iVar1;
      pfVar2[0x12] = ((float)*(int *)(param_3 + 8 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb0)) /
                     *(float *)(param_1 + 0xeb8);
      pfVar2[0x13] = ((float)*(int *)(param_3 + 4 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb4)) /
                     *(float *)(param_1 + 0xebc);
      pfVar2[0x14] = (float)*(int *)(param_3 + uVar5 * 0x10);
      iVar1 = *(int *)(param_3 + 0xc + uVar5 * 0x10);
      pfVar2[0x16] = param_6;
      pfVar2[0x15] = (float)iVar1;
      uVar4 = (int)uVar5 + 1;
      pfVar2[0x17] = ((float)*(int *)(param_3 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb0)) /
                     *(float *)(param_1 + 0xeb8);
      pfVar2[0x18] = ((float)*(int *)(param_3 + 0xc + uVar5 * 0x10) - *(float *)(param_1 + 0xeb4)) /
                     *(float *)(param_1 + 0xebc);
      pfVar2[0x19] = (float)*(int *)(param_3 + 8 + uVar5 * 0x10);
      iVar1 = *(int *)(param_3 + 0xc + uVar5 * 0x10);
      pfVar2[0x1b] = param_6;
      pfVar2[0x1a] = (float)iVar1;
      pfVar2[0x1c] = ((float)*(int *)(param_3 + 8 + uVar5 * 0x10) - *(float *)(param_1 + 0xeb0)) /
                     *(float *)(param_1 + 0xeb8);
      pfVar2[0x1d] = ((float)*(int *)(param_3 + 0xc + uVar5 * 0x10) - *(float *)(param_1 + 0xeb4)) /
                     *(float *)(param_1 + 0xebc);
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 0x78;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_2);
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + param_2 * 6;
  return;
}

