/*
 * FUN_180164290 at 180164290
 * undefined FUN_180164290(void)
 * Address ranges: 180164290-180164373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180164290(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((*(uint *)(param_1 + 0x7654) & 1) == 0) || (*(char *)(param_1 + 0x7662) != '\0')) {
    lVar4 = 0xec8;
    lVar3 = 0xed0;
    lVar2 = 0xed4;
    lVar1 = 0xecc;
  }
  else {
    lVar4 = 0xeb0;
    lVar3 = 0xeb8;
    lVar2 = 0xebc;
    lVar1 = 0xeb4;
  }
  fVar5 = 2.0 / *(float *)(lVar3 + param_1);
  fVar6 = -2.0 / *(float *)(lVar2 + param_1);
  fVar7 = (*(float *)(lVar4 + param_1) * -2.0) / *(float *)(lVar3 + param_1) - 1.0;
  fVar8 = (*(float *)(lVar1 + param_1) + *(float *)(lVar1 + param_1)) / *(float *)(lVar2 + param_1)
          + 1.0;
  if ((((fVar5 != *(float *)(param_1 + 0x6950)) || (fVar6 != *(float *)(param_1 + 0x6954))) ||
      (fVar7 != *(float *)(param_1 + 0x6958))) || (fVar8 != *(float *)(param_1 + 0x695c))) {
    *(float *)(param_1 + 0x6950) = fVar5;
    *(float *)(param_1 + 0x6954) = fVar6;
    *(float *)(param_1 + 0x6958) = fVar7;
    *(float *)(param_1 + 0x695c) = fVar8;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  return;
}

