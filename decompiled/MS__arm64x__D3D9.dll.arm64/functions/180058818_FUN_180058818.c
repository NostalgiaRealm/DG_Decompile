/*
 * FUN_180058818 at 180058818
 * undefined FUN_180058818(void)
 * Address ranges: 180058818-180058ae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058818(float param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
                  uint param_6,undefined1 param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 uVar7;
  float *pfVar8;
  ulonglong uVar9;
  
  if ((param_5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    *(uint *)(param_2 + 0x69c0) = param_6 >> 0x10 & 0xff;
    *(uint *)(param_2 + 0x69c4) = param_6 >> 8 & 0xff;
    *(uint *)(param_2 + 0x69c8) = param_6 & 0xff;
    *(uint *)(param_2 + 0x69cc) = param_6 >> 0x18;
    uVar7 = 0xf;
  }
  *(undefined1 *)(param_2 + 0xe04) = uVar7;
  bVar5 = (param_5 >> 1 & 1) == 0;
  if (bVar5) {
    param_1 = 0.0;
  }
  else {
    *(undefined8 *)(param_2 + 3000) = 0x800000001;
  }
  *(uint *)(param_2 + 0xbb4) = (uint)!bVar5;
  if ((param_5 >> 2 & 1) == 0) {
    *(undefined4 *)(param_2 + 0xbc0) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xbc0) = 1;
    *(undefined4 *)(param_2 + 0xbd0) = 3;
    *(undefined8 *)(param_2 + 0xbc8) = 0x300000003;
    *(undefined8 *)(param_2 + 0xbd8) = 0x300000003;
    *(undefined8 *)(param_2 + 0xbe0) = 0x800000003;
    *(undefined1 *)(param_2 + 0x75a1) = param_7;
  }
  *(undefined1 *)(param_2 + 0xf691) = 1;
  *(undefined1 *)(param_2 + 0xf68d) = 1;
  *(undefined2 *)(param_2 + 0xf68b) = 0x101;
  uVar9 = 0;
  if (param_3 != 0) {
    lVar2 = param_4 + 4;
    lVar3 = param_4 + 8;
    lVar4 = param_4 + 0xc;
    do {
      lVar6 = uVar9 * 0x10;
      pfVar8 = *(float **)(param_2 + 0x68);
      *pfVar8 = (float)*(int *)(param_4 + lVar6);
      pfVar8[1] = (float)*(int *)(lVar2 + lVar6);
      pfVar8[2] = param_1;
      pfVar8[3] = ((float)*(int *)(param_4 + lVar6) - *(float *)(param_2 + 0xeb0)) /
                  *(float *)(param_2 + 0xeb8);
      pfVar8[4] = ((float)*(int *)(lVar2 + lVar6) - *(float *)(param_2 + 0xeb4)) /
                  *(float *)(param_2 + 0xebc);
      pfVar8[5] = (float)*(int *)(lVar3 + lVar6);
      pfVar8[6] = (float)*(int *)(lVar2 + lVar6);
      pfVar8[7] = param_1;
      pfVar8[8] = ((float)*(int *)(lVar3 + lVar6) - *(float *)(param_2 + 0xeb0)) /
                  *(float *)(param_2 + 0xeb8);
      pfVar8[9] = ((float)*(int *)(lVar2 + lVar6) - *(float *)(param_2 + 0xeb4)) /
                  *(float *)(param_2 + 0xebc);
      pfVar8[10] = (float)*(int *)(param_4 + lVar6);
      pfVar8[0xb] = (float)*(int *)(lVar4 + lVar6);
      pfVar8[0xc] = param_1;
      pfVar8[0xd] = ((float)*(int *)(param_4 + lVar6) - *(float *)(param_2 + 0xeb0)) /
                    *(float *)(param_2 + 0xeb8);
      pfVar8[0xe] = ((float)*(int *)(lVar4 + lVar6) - *(float *)(param_2 + 0xeb4)) /
                    *(float *)(param_2 + 0xebc);
      pfVar8[0xf] = (float)*(int *)(lVar3 + lVar6);
      pfVar8[0x10] = (float)*(int *)(lVar2 + lVar6);
      pfVar8[0x11] = param_1;
      pfVar8[0x12] = ((float)*(int *)(lVar3 + lVar6) - *(float *)(param_2 + 0xeb0)) /
                     *(float *)(param_2 + 0xeb8);
      pfVar8[0x13] = ((float)*(int *)(lVar2 + lVar6) - *(float *)(param_2 + 0xeb4)) /
                     *(float *)(param_2 + 0xebc);
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
      pfVar8[0x14] = (float)*(int *)(param_4 + lVar6);
      pfVar8[0x15] = (float)*(int *)(lVar4 + lVar6);
      pfVar8[0x16] = param_1;
      pfVar8[0x17] = ((float)*(int *)(param_4 + lVar6) - *(float *)(param_2 + 0xeb0)) /
                     *(float *)(param_2 + 0xeb8);
      pfVar8[0x18] = ((float)*(int *)(lVar4 + lVar6) - *(float *)(param_2 + 0xeb4)) /
                     *(float *)(param_2 + 0xebc);
      pfVar8[0x19] = (float)*(int *)(lVar3 + lVar6);
      pfVar8[0x1a] = (float)*(int *)(lVar4 + lVar6);
      pfVar8[0x1b] = param_1;
      pfVar8[0x1c] = ((float)*(int *)(lVar3 + lVar6) - *(float *)(param_2 + 0xeb0)) /
                     *(float *)(param_2 + 0xeb8);
      pfVar8[0x1d] = ((float)*(int *)(lVar4 + lVar6) - *(float *)(param_2 + 0xeb4)) /
                     *(float *)(param_2 + 0xebc);
      *(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 0x78;
    } while (uVar1 < param_3);
  }
  *(uint *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + param_3 * 6;
  return;
}

