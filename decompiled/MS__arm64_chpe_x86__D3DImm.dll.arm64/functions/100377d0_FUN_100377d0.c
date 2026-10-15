/*
 * FUN_100377d0 at 100377d0
 * undefined FUN_100377d0(void)
 * Address ranges: 100377d0-10037c57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100377d0(float param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 undefined1 param_7)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  float *pfVar11;
  uint uVar12;
  undefined1 uVar13;
  
  if ((param_5 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    *(uint *)(param_2 + 0xa10) = param_6 >> 0x10 & 0xff;
    *(uint *)(param_2 + 0xa14) = param_6 >> 8 & 0xff;
    *(uint *)(param_2 + 0xa18) = param_6 & 0xff;
    *(uint *)(param_2 + 0xa1c) = param_6 >> 0x18;
    uVar13 = 0xf;
  }
  *(undefined1 *)(param_2 + 0x358) = uVar13;
  bVar10 = (param_5 >> 1 & 1) == 0;
  if (bVar10) {
    param_1 = 0.0;
  }
  else {
    *(undefined8 *)(param_2 + 0x2cc) = 0x800000001;
  }
  *(uint *)(param_2 + 0x2c8) = (uint)!bVar10;
  if ((param_5 >> 2 & 1) == 0) {
    *(undefined4 *)(param_2 + 0x2d4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x2d4) = 1;
    *(undefined1 *)(param_2 + 0x1841) = param_7;
    *(undefined4 *)(param_2 + 0x2e4) = 3;
    *(undefined8 *)(param_2 + 0x2dc) = 0x300000003;
    *(undefined8 *)(param_2 + 0x2f4) = 0x800000003;
    *(undefined8 *)(param_2 + 0x2ec) = 0x300000003;
  }
  *(undefined1 *)(param_2 + 0x1d41) = 1;
  *(undefined1 *)(param_2 + 0x1d3d) = 1;
  *(undefined2 *)(param_2 + 0x1d3b) = 0x101;
  uVar12 = 0;
  if (param_3 != 0) {
    piVar1 = (int *)(param_2 + 0x4c);
    pfVar2 = (float *)(param_2 + 0x388);
    pfVar3 = (float *)(param_2 + 900);
    pfVar4 = (float *)(param_2 + 0x38c);
    pfVar5 = (float *)(param_2 + 0x390);
    do {
      piVar6 = (int *)(param_4 + uVar12 * 0x10);
      pfVar11 = (float *)*piVar1;
      piVar7 = (int *)(param_4 + 4 + uVar12 * 0x10);
      *pfVar11 = (float)*piVar6;
      pfVar11[1] = (float)*piVar7;
      pfVar11[2] = param_1;
      pfVar11[3] = ((float)*piVar6 - *pfVar3) / *pfVar4;
      pfVar11[4] = ((float)*piVar7 - *pfVar2) / *pfVar5;
      piVar8 = (int *)(param_4 + 8 + uVar12 * 0x10);
      pfVar11[5] = (float)*piVar8;
      pfVar11[6] = (float)*piVar7;
      pfVar11[7] = param_1;
      pfVar11[8] = ((float)*piVar8 - *pfVar3) / *pfVar4;
      pfVar11[9] = ((float)*piVar7 - *pfVar2) / *pfVar5;
      pfVar11[10] = (float)*piVar6;
      piVar9 = (int *)(param_4 + 0xc + uVar12 * 0x10);
      pfVar11[0xb] = (float)*piVar9;
      pfVar11[0xc] = param_1;
      pfVar11[0xd] = ((float)*piVar6 - *pfVar3) / *pfVar4;
      pfVar11[0xe] = ((float)*piVar9 - *pfVar2) / *pfVar5;
      pfVar11[0xf] = (float)*piVar8;
      pfVar11[0x10] = (float)*piVar7;
      pfVar11[0x11] = param_1;
      pfVar11[0x12] = ((float)*piVar8 - *pfVar3) / *pfVar4;
      pfVar11[0x13] = ((float)*piVar7 - *pfVar2) / *pfVar5;
      pfVar11[0x14] = (float)*piVar6;
      pfVar11[0x15] = (float)*piVar9;
      pfVar11[0x16] = param_1;
      pfVar11[0x17] = ((float)*piVar6 - *pfVar3) / *pfVar4;
      pfVar11[0x18] = ((float)*piVar9 - *pfVar2) / *pfVar5;
      pfVar11[0x19] = (float)*piVar8;
      pfVar11[0x1a] = (float)*piVar9;
      pfVar11[0x1b] = param_1;
      uVar12 = uVar12 + 1;
      pfVar11[0x1c] = ((float)*piVar8 - *pfVar3) / *pfVar4;
      pfVar11[0x1d] = ((float)*piVar9 - *pfVar2) / *pfVar5;
      *piVar1 = *piVar1 + 0x78;
    } while (uVar12 < param_3);
  }
  *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + param_3 * 6;
  return;
}

