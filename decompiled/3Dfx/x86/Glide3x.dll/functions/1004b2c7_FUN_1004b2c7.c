/*
 * FUN_1004b2c7 at 1004b2c7
 * undefined __thiscall FUN_1004b2c7(void * this, int param_1, int * param_2, int * param_3, int * param_4, int * param_5)
 * Address ranges: 1004b2c7-1004b3b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004b2c7(void *this,int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    piVar7 = &DAT_10058068;
    if (param_2 != (int *)0x0) {
      piVar7 = param_2;
    }
    piVar5 = &DAT_10058068;
    if (param_3 != (int *)0x0) {
      piVar5 = param_3;
    }
    piVar8 = &DAT_10058068;
    if (param_4 != (int *)0x0) {
      piVar8 = param_4;
    }
    piVar2 = &DAT_10058068;
    if (param_5 != (int *)0x0) {
      piVar2 = param_5;
    }
    iVar1 = (*piVar7 + *piVar5 + *piVar8 + *piVar2) * 4 + 4;
    if (*(uint *)((int)this + 8) < (uint)((*(int *)((int)this + 4) + iVar1) - *(int *)this)) {
      FUN_1004b1e0(this,iVar1);
    }
    piVar10 = *(int **)((int)this + 4);
    *piVar10 = param_1;
    iVar3 = *piVar7;
    piVar6 = piVar7;
    piVar9 = piVar10;
    while( true ) {
      piVar9 = piVar9 + 1;
      piVar6 = piVar6 + 1;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      *piVar9 = *piVar6;
    }
    iVar3 = *piVar7;
    piVar9 = piVar10 + iVar3 + 1;
    piVar7 = piVar5;
    for (iVar4 = *piVar5; piVar7 = piVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = *piVar7;
      piVar9 = piVar9 + 1;
    }
    iVar3 = iVar3 + *piVar5;
    piVar5 = piVar10 + iVar3 + 1;
    piVar7 = piVar8;
    for (iVar4 = *piVar8; piVar7 = piVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar7;
      piVar5 = piVar5 + 1;
    }
    iVar3 = iVar3 + *piVar8;
    piVar5 = piVar10 + iVar3 + 1;
    piVar7 = piVar2;
    for (iVar4 = *piVar2; piVar7 = piVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar7;
      piVar5 = piVar5 + 1;
    }
    piVar10 = piVar10 + iVar3 + *piVar2;
    piVar5 = &DAT_1005806c;
    piVar7 = piVar10;
    for (iVar3 = 0; piVar7 = piVar7 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
    }
    piVar7 = &DAT_1005806c;
    for (iVar3 = 0; piVar10 = piVar10 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + 1;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar1;
  }
  return;
}

