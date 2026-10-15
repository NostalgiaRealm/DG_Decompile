/*
 * FUN_10014f27 at 10014f27
 * undefined __thiscall FUN_10014f27(void * this, int * param_1, int * param_2)
 * Address ranges: 10014f27-10014fee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014f27(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = FUN_10014ecc(this);
  if (((char)uVar4 == '\0') && (uVar4 = FUN_10014ecc(param_2), (char)uVar4 == '\0')) {
    iVar9 = *(int *)(extraout_EDX + 0x14);
    iVar1 = *(int *)(extraout_ECX + 0xc);
    iVar2 = *(int *)(extraout_ECX + 0x14);
    iVar8 = *(int *)(extraout_EDX + 0x10);
    iVar3 = *(int *)(extraout_ECX + 0x10);
    iVar6 = *(int *)(extraout_EDX + 0xc);
    iVar5 = *(int *)this;
    if (*(int *)this < *param_2) {
      iVar5 = *param_2;
    }
    iVar7 = *(int *)(extraout_EDX + 4);
    if (*(int *)(extraout_EDX + 4) < *(int *)(extraout_ECX + 4)) {
      iVar7 = *(int *)(extraout_ECX + 4);
    }
    iVar10 = *(int *)(extraout_EDX + 8);
    if (*(int *)(extraout_EDX + 8) < *(int *)(extraout_ECX + 8)) {
      iVar10 = *(int *)(extraout_ECX + 8);
    }
    *param_1 = iVar5;
    if (iVar1 < iVar6) {
      iVar6 = iVar1;
    }
    param_1[1] = iVar7;
    param_1[2] = iVar10;
    param_1[3] = iVar6;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
    param_1[4] = iVar8;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
    param_1[5] = iVar9;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

