/*
 * FUN_100416c0 at 100416c0
 * undefined __fastcall FUN_100416c0(int param_1)
 * Address ranges: 100416c0-100417c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100416c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((*(byte *)(param_1 + 0x5948) & 1) == 0) ||
     (iVar3 = 0x578, *(char *)(param_1 + 0x5955) != '\0')) {
    iVar3 = 0x590;
  }
  fVar4 = *(float *)(iVar3 + 8 + param_1);
  fVar1 = *(float *)(iVar3 + 0xc + param_1);
  fVar7 = 2.0 / fVar4;
  fVar2 = *(float *)(iVar3 + 4 + param_1);
  fVar5 = (*(float *)(iVar3 + param_1) * -2.0) / fVar4 - 1.0;
  fVar6 = -2.0 / fVar1;
  fVar4 = (fVar2 + fVar2) / fVar1 + 1.0;
  if ((((fVar7 == *(float *)(param_1 + 0x4cc0)) && (fVar6 == *(float *)(param_1 + 0x4cc4))) &&
      (fVar5 == *(float *)(param_1 + 0x4cc8))) && (fVar4 == *(float *)(param_1 + 0x4ccc))) {
    return;
  }
  *(float *)(param_1 + 0x4cc0) = fVar7;
  *(float *)(param_1 + 0x4cc4) = fVar6;
  *(float *)(param_1 + 0x4cc8) = fVar5;
  *(float *)(param_1 + 0x4ccc) = fVar4;
  *(undefined1 *)(param_1 + 0xd981) = 1;
  return;
}

