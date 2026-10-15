/*
 * FUN_1001dfba at 1001dfba
 * undefined __fastcall FUN_1001dfba(int param_1)
 * Address ranges: 1001dfba-1001e067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001dfba(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  
  iVar6 = FUN_1001c7a6(*(int *)(param_1 + 0x2964));
  if (iVar6 != -1) {
    iVar6 = (**(code **)(**(int **)(param_1 + 0x315c) + 0x2c))(iVar6);
    piVar1 = (int *)(iVar6 + 0x2c);
    piVar2 = (int *)(iVar6 + 0x24);
    if ((*(int *)(iVar6 + 0x28) == *(int *)(iVar6 + 0x20)) && (*piVar1 == *piVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x2bca) = uVar5;
    fVar3 = (float)*(int *)(iVar6 + 0x20);
    if (*(int *)(iVar6 + 0x20) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)*(int *)(iVar6 + 0x28);
    if (*(int *)(iVar6 + 0x28) < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x2bb8) = fVar4 / fVar3;
    fVar3 = (float)*piVar2;
    if (*piVar2 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = (float)*piVar1;
    if (*piVar1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0x2bbc) = fVar4 / fVar3;
  }
  return;
}

