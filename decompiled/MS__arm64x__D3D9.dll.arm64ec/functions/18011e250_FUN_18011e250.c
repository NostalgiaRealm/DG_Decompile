/*
 * FUN_18011e250 at 18011e250
 * undefined FUN_18011e250(void)
 * Address ranges: 18011e250-18011e36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18011e250(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  fVar12 = *(float *)(param_3 + 0x40);
  fVar1 = *(float *)(param_3 + 0x44);
  fVar4 = *(float *)(param_3 + 0x48);
  fVar5 = fVar1 * fVar1 + fVar12 * fVar12 + fVar4 * fVar4;
  uVar13 = *(undefined4 *)(param_3 + 0x5c);
  uVar6 = *(uint *)(param_3 + 0x54);
  uVar2 = *(undefined4 *)(param_3 + 0x58);
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 8);
  param_2[1] = CONCAT44(0.0 / SQRT(fVar5),fVar4 / SQRT(fVar5));
  *param_2 = CONCAT44(fVar1 / SQRT(fVar5),fVar12 / SQRT(fVar5));
  param_2[3] = (ulonglong)uVar6;
  param_2[2] = CONCAT44(uVar2,uVar13);
  uVar10 = *(undefined4 *)(param_3 + 0xc);
  uVar8 = *(undefined4 *)(param_3 + 0x24);
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  uVar14 = *(undefined4 *)(param_3 + 0x2c);
  uVar11 = *(undefined4 *)(param_3 + 0x30);
  uVar9 = *(undefined4 *)(param_3 + 0x14);
  uVar13 = *(undefined4 *)(param_3 + 0x18);
  param_2[5] = CONCAT44(*(undefined4 *)(param_3 + 0x10),uVar7);
  param_2[4] = CONCAT44(uVar3,uVar10);
  param_2[7] = CONCAT44(uVar11,uVar8);
  param_2[6] = CONCAT44(uVar2,uVar14);
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  param_2[9] = CONCAT44(*(undefined4 *)(param_3 + 0x20),uVar9);
  param_2[8] = CONCAT44(uVar13,uVar2);
  fVar4 = (float)FUN_180104118(*(float *)(param_3 + 100) * 0.5);
  param_2[0xd] = CONCAT44(fVar4,fVar4);
  param_2[0xc] = CONCAT44(fVar4,fVar4);
  fVar5 = (float)FUN_180104118(*(float *)(param_3 + 0x60) * 0.5);
  param_2[0xf] = CONCAT44(fVar5,fVar5);
  param_2[0xe] = CONCAT44(fVar5,fVar5);
  fVar1 = 1.0;
  if (0.0 < fVar5 - fVar4) {
    fVar1 = fVar5 - fVar4;
  }
  param_2[0xb] = CONCAT44(fVar1,fVar1);
  param_2[10] = CONCAT44(fVar1,fVar1);
  return param_2;
}

