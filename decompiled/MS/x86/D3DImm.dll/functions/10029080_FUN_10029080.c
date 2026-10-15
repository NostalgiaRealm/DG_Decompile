/*
 * FUN_10029080 at 10029080
 * undefined __fastcall FUN_10029080(int param_1)
 * Address ranges: 10029080-10029186
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10029080(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((*(byte *)(param_1 + 0x18f8) & 1) == 0) || (iVar3 = 900, *(char *)(param_1 + 0x1905) != '\0')
     ) {
    iVar3 = 0x39c;
  }
  fVar4 = *(float *)(iVar3 + 8 + param_1);
  fVar1 = *(float *)(iVar3 + 0xc + param_1);
  fVar7 = 2.0 / fVar4;
  fVar2 = *(float *)(iVar3 + 4 + param_1);
  fVar5 = (*(float *)(iVar3 + param_1) * -2.0) / fVar4 - 1.0;
  fVar6 = -2.0 / fVar1;
  fVar4 = (fVar2 + fVar2) / fVar1 + 1.0;
  if ((((fVar7 == *(float *)(param_1 + 0x9a0)) && (fVar6 == *(float *)(param_1 + 0x9a4))) &&
      (fVar5 == *(float *)(param_1 + 0x9a8))) && (fVar4 == *(float *)(param_1 + 0x9ac))) {
    return;
  }
  *(float *)(param_1 + 0x9a0) = fVar7;
  *(float *)(param_1 + 0x9a4) = fVar6;
  *(float *)(param_1 + 0x9a8) = fVar5;
  *(float *)(param_1 + 0x9ac) = fVar4;
  *(undefined1 *)(param_1 + 0x1d41) = 1;
  return;
}

