/*
 * FUN_180012460 at 180012460
 * undefined FUN_180012460(void)
 * Address ranges: 180012460-18001257b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180012460(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  fVar1 = *(float *)(param_3 + 0x40);
  fVar7 = *(float *)(param_3 + 0x44);
  fVar3 = *(float *)(param_3 + 0x48);
  fVar4 = fVar7 * fVar7 + fVar1 * fVar1 + fVar3 * fVar3;
  uVar2 = *(undefined4 *)(param_3 + 0x5c);
  uVar5 = *(uint *)(param_3 + 0x54);
  uVar8 = *(undefined4 *)(param_3 + 0x58);
  param_2[1] = CONCAT44(0.0 / SQRT(fVar4),fVar3 / SQRT(fVar4));
  *param_2 = CONCAT44(fVar7 / SQRT(fVar4),fVar1 / SQRT(fVar4));
  param_2[3] = (ulonglong)uVar5;
  param_2[2] = CONCAT44(uVar8,uVar2);
  uVar8 = *(undefined4 *)(param_3 + 0xc);
  uVar11 = *(undefined4 *)(param_3 + 8);
  uVar9 = *(undefined4 *)(param_3 + 0x24);
  uVar12 = *(undefined4 *)(param_3 + 0x28);
  uVar2 = *(undefined4 *)(param_3 + 0x2c);
  uVar6 = *(undefined4 *)(param_3 + 0x30);
  uVar10 = *(undefined4 *)(param_3 + 0x14);
  uVar13 = *(undefined4 *)(param_3 + 0x18);
  param_2[5] = CONCAT44(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4));
  param_2[4] = CONCAT44(uVar11,uVar8);
  param_2[7] = CONCAT44(uVar6,uVar9);
  param_2[6] = CONCAT44(uVar12,uVar2);
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  param_2[9] = CONCAT44(*(undefined4 *)(param_3 + 0x20),uVar10);
  param_2[8] = CONCAT44(uVar13,uVar2);
  fVar3 = (float)FUN_1800011f0(*(float *)(param_3 + 100) * 0.5);
  param_2[0xd] = CONCAT44(fVar3,fVar3);
  param_2[0xc] = CONCAT44(fVar3,fVar3);
  fVar4 = (float)FUN_1800011f0(*(float *)(param_3 + 0x60) * 0.5);
  param_2[0xf] = CONCAT44(fVar4,fVar4);
  param_2[0xe] = CONCAT44(fVar4,fVar4);
  fVar1 = 1.0;
  if (0.0 < fVar4 - fVar3) {
    fVar1 = fVar4 - fVar3;
  }
  param_2[0xb] = CONCAT44(fVar1,fVar1);
  param_2[10] = CONCAT44(fVar1,fVar1);
  return param_2;
}

