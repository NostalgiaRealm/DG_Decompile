/*
 * FUN_1004f060 at 1004f060
 * undefined __fastcall FUN_1004f060(int param_1)
 * Address ranges: 1004f060-1004f166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004f060(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((*(byte *)(param_1 + 0x7634) & 1) == 0) ||
     (iVar3 = 0xe90, *(char *)(param_1 + 0x7642) != '\0')) {
    iVar3 = 0xea8;
  }
  fVar4 = *(float *)(iVar3 + 8 + param_1);
  fVar1 = *(float *)(iVar3 + 0xc + param_1);
  fVar7 = 2.0 / fVar4;
  fVar2 = *(float *)(iVar3 + 4 + param_1);
  fVar5 = (*(float *)(iVar3 + param_1) * -2.0) / fVar4 - 1.0;
  fVar6 = -2.0 / fVar1;
  fVar4 = (fVar2 + fVar2) / fVar1 + 1.0;
  if ((((fVar7 == *(float *)(param_1 + 0x6930)) && (fVar6 == *(float *)(param_1 + 0x6934))) &&
      (fVar5 == *(float *)(param_1 + 0x6938))) && (fVar4 == *(float *)(param_1 + 0x693c))) {
    return;
  }
  *(float *)(param_1 + 0x6930) = fVar7;
  *(float *)(param_1 + 0x6934) = fVar6;
  *(float *)(param_1 + 0x6938) = fVar5;
  *(float *)(param_1 + 0x693c) = fVar4;
  *(undefined1 *)(param_1 + 0xf671) = 1;
  return;
}

