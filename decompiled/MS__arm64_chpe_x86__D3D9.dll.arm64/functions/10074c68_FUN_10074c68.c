/*
 * FUN_10074c68 at 10074c68
 * undefined FUN_10074c68(void)
 * Address ranges: 10074c68-10074d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074c68(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((*(uint *)(param_1 + 0x7634) & 1) == 0) || (*(char *)(param_1 + 0x7642) != '\0')) {
    iVar2 = 0xea8;
  }
  else {
    iVar2 = 0xe90;
  }
  pfVar1 = (float *)(iVar2 + param_1);
  fVar6 = 2.0 / pfVar1[2];
  fVar5 = -2.0 / pfVar1[3];
  fVar4 = (*pfVar1 * -2.0) / pfVar1[2] - 1.0;
  fVar3 = (pfVar1[1] + pfVar1[1]) / pfVar1[3] + 1.0;
  if ((((fVar6 != *(float *)(param_1 + 0x6930)) || (fVar5 != *(float *)(param_1 + 0x6934))) ||
      (fVar4 != *(float *)(param_1 + 0x6938))) || (fVar3 != *(float *)(param_1 + 0x693c))) {
    *(float *)(param_1 + 0x6930) = fVar6;
    *(float *)(param_1 + 0x6934) = fVar5;
    *(float *)(param_1 + 0x6938) = fVar4;
    *(float *)(param_1 + 0x693c) = fVar3;
    *(undefined1 *)(param_1 + 0xf671) = 1;
  }
  return;
}

