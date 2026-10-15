/*
 * FUN_10007770 at 10007770
 * undefined FUN_10007770(void)
 * Address ranges: 10007770-10007933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10007770(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  iVar3 = 0x34;
  if (*param_3 != 4) {
    iVar3 = 0x40;
  }
  pfVar1 = (float *)(iVar3 + (int)param_3);
  fVar2 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = fVar6 * fVar6 + fVar2 * fVar2 + fVar4 * fVar4;
  param_2[1] = CONCAT44(0.0 / SQRT(fVar5),fVar4 / SQRT(fVar5));
  *param_2 = CONCAT44(fVar6 / SQRT(fVar5),fVar2 / SQRT(fVar5));
  iVar3 = param_3[0x17];
  iVar7 = param_3[0x16];
  param_2[3] = (ulonglong)(uint)param_3[0x15];
  param_2[2] = CONCAT44(iVar7,iVar3);
  iVar3 = param_3[3];
  iVar7 = param_3[2];
  param_2[5] = CONCAT44(param_3[4],param_3[1]);
  param_2[4] = CONCAT44(iVar7,iVar3);
  iVar3 = param_3[0xb];
  iVar7 = param_3[10];
  param_2[7] = CONCAT44(param_3[0xc],param_3[9]);
  param_2[6] = CONCAT44(iVar7,iVar3);
  iVar3 = param_3[7];
  iVar7 = param_3[6];
  param_2[9] = CONCAT44(param_3[8],param_3[5]);
  param_2[8] = CONCAT44(iVar7,iVar3);
  fVar4 = (float)FUN_10001118((float)param_3[0x19] * 0.5);
  param_2[0xd] = CONCAT44(fVar4,fVar4);
  param_2[0xc] = CONCAT44(fVar4,fVar4);
  fVar5 = (float)FUN_10001118((float)param_3[0x18] * 0.5);
  param_2[0xf] = CONCAT44(fVar5,fVar5);
  param_2[0xe] = CONCAT44(fVar5,fVar5);
  fVar2 = 1.0;
  if (0.0 < fVar5 - fVar4) {
    fVar2 = fVar5 - fVar4;
  }
  param_2[0xb] = CONCAT44(fVar2,fVar2);
  param_2[10] = CONCAT44(fVar2,fVar2);
  return param_2;
}

