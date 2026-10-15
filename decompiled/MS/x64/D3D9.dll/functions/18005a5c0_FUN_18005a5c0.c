/*
 * FUN_18005a5c0 at 18005a5c0
 * undefined __fastcall FUN_18005a5c0(longlong param_1)
 * Address ranges: 18005a5c0-18005a6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a5c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((*(byte *)(param_1 + 0x7654) & 1) == 0) || (*(char *)(param_1 + 0x7662) != '\0')) {
    lVar1 = 0xec8;
    lVar2 = 0xed0;
    lVar3 = 0xed4;
    lVar4 = 0xecc;
  }
  else {
    lVar1 = 0xeb0;
    lVar2 = 0xeb8;
    lVar3 = 0xebc;
    lVar4 = 0xeb4;
  }
  fVar8 = 2.0 / *(float *)(lVar2 + param_1);
  fVar6 = (*(float *)(lVar1 + param_1) * -2.0) / *(float *)(lVar2 + param_1) - 1.0;
  fVar7 = -2.0 / *(float *)(lVar3 + param_1);
  fVar5 = (*(float *)(lVar4 + param_1) + *(float *)(lVar4 + param_1)) / *(float *)(lVar3 + param_1)
          + 1.0;
  if ((((fVar8 != *(float *)(param_1 + 0x6950)) || (fVar7 != *(float *)(param_1 + 0x6954))) ||
      (fVar6 != *(float *)(param_1 + 0x6958))) || (fVar5 != *(float *)(param_1 + 0x695c))) {
    *(float *)(param_1 + 0x6950) = fVar8;
    *(float *)(param_1 + 0x6954) = fVar7;
    *(float *)(param_1 + 0x6958) = fVar6;
    *(float *)(param_1 + 0x695c) = fVar5;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  return;
}

