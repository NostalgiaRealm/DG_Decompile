/*
 * FUN_1000f338 at 1000f338
 * undefined __fastcall FUN_1000f338(int param_1)
 * Address ranges: 1000f338-1000f3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f338(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = FUN_100118f8(*(void **)(param_1 + 0x365c),*(int *)(param_1 + 0x2b1c));
  if (uVar6 != 0xffffffff) {
    iVar7 = (**(code **)(**(int **)(param_1 + 0x365c) + 0x2c))(uVar6);
    piVar1 = (int *)(iVar7 + 0x2c);
    piVar2 = (int *)(iVar7 + 0x24);
    if ((*(int *)(iVar7 + 0x28) == *(int *)(iVar7 + 0x20)) && (*piVar1 == *piVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x2db2) = uVar5;
    fVar3 = (float)*(int *)(iVar7 + 0x20);
    if (*(int *)(iVar7 + 0x20) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)*(int *)(iVar7 + 0x28);
    if (*(int *)(iVar7 + 0x28) < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x2da0) = fVar4 / fVar3;
    fVar3 = (float)*piVar2;
    if (*piVar2 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)*piVar1;
    if (*piVar1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x2da4) = fVar4 / fVar3;
  }
  return;
}

