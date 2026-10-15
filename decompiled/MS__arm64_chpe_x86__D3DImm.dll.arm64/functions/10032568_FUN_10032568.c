/*
 * FUN_10032568 at 10032568
 * undefined FUN_10032568(void)
 * Address ranges: 10032568-10032653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032568(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((*(uint *)(param_1 + 0x18f8) & 1) == 0) || (*(char *)(param_1 + 0x1905) != '\0')) {
    iVar2 = 0x39c;
  }
  else {
    iVar2 = 900;
  }
  pfVar1 = (float *)(iVar2 + param_1);
  fVar6 = 2.0 / pfVar1[2];
  fVar5 = -2.0 / pfVar1[3];
  fVar4 = (*pfVar1 * -2.0) / pfVar1[2] - 1.0;
  fVar3 = (pfVar1[1] + pfVar1[1]) / pfVar1[3] + 1.0;
  if ((((fVar6 != *(float *)(param_1 + 0x9a0)) || (fVar5 != *(float *)(param_1 + 0x9a4))) ||
      (fVar4 != *(float *)(param_1 + 0x9a8))) || (fVar3 != *(float *)(param_1 + 0x9ac))) {
    *(float *)(param_1 + 0x9a0) = fVar6;
    *(float *)(param_1 + 0x9a4) = fVar5;
    *(float *)(param_1 + 0x9a8) = fVar4;
    *(float *)(param_1 + 0x9ac) = fVar3;
    *(undefined1 *)(param_1 + 0x1d41) = 1;
  }
  return;
}

