/*
 * FUN_1005f298 at 1005f298
 * undefined FUN_1005f298(void)
 * Address ranges: 1005f298-1005f393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f298(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((*(uint *)(param_1 + 0x5948) & 1) == 0) || (*(char *)(param_1 + 0x5955) != '\0')) {
    iVar2 = 0x590;
  }
  else {
    iVar2 = 0x578;
  }
  pfVar1 = (float *)(iVar2 + param_1);
  fVar6 = 2.0 / pfVar1[2];
  fVar5 = -2.0 / pfVar1[3];
  fVar4 = (*pfVar1 * -2.0) / pfVar1[2] - 1.0;
  fVar3 = (pfVar1[1] + pfVar1[1]) / pfVar1[3] + 1.0;
  if ((((fVar6 != *(float *)(param_1 + 0x4cc0)) || (fVar5 != *(float *)(param_1 + 0x4cc4))) ||
      (fVar4 != *(float *)(param_1 + 0x4cc8))) || (fVar3 != *(float *)(param_1 + 0x4ccc))) {
    *(float *)(param_1 + 0x4cc0) = fVar6;
    *(float *)(param_1 + 0x4cc4) = fVar5;
    *(float *)(param_1 + 0x4cc8) = fVar4;
    *(float *)(param_1 + 0x4ccc) = fVar3;
    *(undefined1 *)(param_1 + 0xd981) = 1;
  }
  return;
}

