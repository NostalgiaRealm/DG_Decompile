/*
 * FUN_10029fe8 at 10029fe8
 * undefined FUN_10029fe8(void)
 * Address ranges: 10029fe8-1002a197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10029fe8(undefined8 param_1,undefined8 *param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar1 = *(float *)(param_3 + 0x40);
  fVar5 = *(float *)(param_3 + 0x44);
  fVar3 = *(float *)(param_3 + 0x48);
  fVar4 = fVar5 * fVar5 + fVar1 * fVar1 + fVar3 * fVar3;
  param_2[1] = CONCAT44(0.0 / SQRT(fVar4),fVar3 / SQRT(fVar4));
  *param_2 = CONCAT44(fVar5 / SQRT(fVar4),fVar1 / SQRT(fVar4));
  uVar2 = *(undefined4 *)(param_3 + 0x5c);
  uVar6 = *(undefined4 *)(param_3 + 0x58);
  param_2[3] = (ulonglong)*(uint *)(param_3 + 0x54);
  param_2[2] = CONCAT44(uVar6,uVar2);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar6 = *(undefined4 *)(param_3 + 8);
  param_2[5] = CONCAT44(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4));
  param_2[4] = CONCAT44(uVar6,uVar2);
  uVar2 = *(undefined4 *)(param_3 + 0x2c);
  uVar6 = *(undefined4 *)(param_3 + 0x28);
  param_2[7] = CONCAT44(*(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x24));
  param_2[6] = CONCAT44(uVar6,uVar2);
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  uVar6 = *(undefined4 *)(param_3 + 0x18);
  param_2[9] = CONCAT44(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x14));
  param_2[8] = CONCAT44(uVar6,uVar2);
  fVar3 = (float)FUN_10001118(*(float *)(param_3 + 100) * 0.5);
  param_2[0xd] = CONCAT44(fVar3,fVar3);
  param_2[0xc] = CONCAT44(fVar3,fVar3);
  fVar4 = (float)FUN_10001118(*(float *)(param_3 + 0x60) * 0.5);
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

