/*
 * FUN_10011466 at 10011466
 * int * __thiscall FUN_10011466(void * this, int * param_1, int * param_2)
 * Address ranges: 10011466-10011510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10011466(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  uVar4 = FUN_10010fb2(this);
  if ((char)uVar4 == '\0') {
    iVar6 = *(int *)(extraout_EDX + 0x14);
    iVar1 = param_2[5];
    iVar8 = *(int *)(extraout_EDX + 0x10);
    iVar2 = param_2[4];
    iVar7 = *(int *)(extraout_EDX + 0xc);
    iVar3 = param_2[3];
    iVar5 = *(int *)this;
    if (*param_2 < *(int *)this) {
      iVar5 = *param_2;
    }
    iVar10 = *(int *)(extraout_EDX + 4);
    if (param_2[1] < *(int *)(extraout_EDX + 4)) {
      iVar10 = param_2[1];
    }
    iVar9 = *(int *)(extraout_EDX + 8);
    if (param_2[2] < *(int *)(extraout_EDX + 8)) {
      iVar9 = param_2[2];
    }
    *param_1 = iVar5;
    param_1[1] = iVar10;
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    param_1[2] = iVar9;
    param_1[3] = iVar7;
    if (iVar8 < iVar2) {
      iVar8 = iVar2;
    }
    param_1[4] = iVar8;
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
    param_1[5] = iVar6;
  }
  else {
    piVar11 = param_1;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *param_2;
      param_2 = param_2 + 1;
      piVar11 = piVar11 + 1;
    }
  }
  return param_1;
}

