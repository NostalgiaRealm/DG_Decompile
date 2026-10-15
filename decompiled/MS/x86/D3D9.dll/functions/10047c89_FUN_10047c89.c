/*
 * FUN_10047c89 at 10047c89
 * undefined4 __thiscall FUN_10047c89(void * this, int * param_1, int param_2)
 * Address ranges: 10047c89-10047dd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10047c89(void *this,int *param_1,int param_2)

{
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  char extraout_AL_02;
  char extraout_AL_03;
  int iVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined1 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  
  piVar7 = (int *)(*param_1 + -0xc0);
  if (*param_1 == 0) {
    piVar7 = (int *)0x0;
  }
  piVar8 = (int *)(param_1[1] + -0xc0);
  if (param_1[1] == 0) {
    piVar8 = (int *)0x0;
  }
  piVar9 = (int *)(param_1[2] + -0xc0);
  iVar1 = param_1[3];
  if (param_1[2] == 0) {
    piVar9 = (int *)0x0;
  }
  piVar13 = (int *)(iVar1 + -0xc0);
  if (iVar1 == 0) {
    piVar13 = (int *)0x0;
  }
  iVar11 = 1;
  uVar10 = 1;
  if (param_2 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)(param_2 + -0xc0);
    if (piVar12 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar12 + 0x54))();
      param_1._3_1_ = (byte)iVar1;
      goto LAB_10047cff;
    }
  }
  param_1._3_1_ = 1;
LAB_10047cff:
  if (piVar7 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar7 + 0x54))();
    iVar11 = iVar1;
  }
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (piVar8 == (int *)0x0) {
    bVar4 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar8 + 0x54))();
    bVar4 = (byte)uVar2;
    uVar3 = (undefined3)((uint)uVar2 >> 8);
  }
  if (piVar9 == (int *)0x0) {
    bVar5 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar9 + 0x54))();
    bVar5 = (byte)uVar2;
    uVar3 = (undefined3)((uint)uVar2 >> 8);
  }
  if (piVar13 == (int *)0x0) {
    bVar6 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar13 + 0x54))();
    bVar6 = (byte)uVar2;
    uVar3 = (undefined3)((uint)uVar2 >> 8);
  }
  if (((param_1._3_1_ & (byte)iVar11 & bVar4 & bVar5 & bVar6) == 0) &&
     ((((((FUN_100cef50(*(int *)((int)this + 0xf6b8) + 0x11c0), uVar3 = extraout_var,
          piVar7 != (int *)0x0 &&
          ((**(code **)(*piVar7 + 0x74))(), uVar3 = extraout_var_00, extraout_AL == '\0')) ||
         ((piVar8 != (int *)0x0 &&
          ((**(code **)(*piVar8 + 0x74))(), uVar3 = extraout_var_01, extraout_AL_00 == '\0')))) ||
        ((piVar9 != (int *)0x0 &&
         ((**(code **)(*piVar9 + 0x74))(), uVar3 = extraout_var_02, extraout_AL_01 == '\0')))) ||
       ((piVar13 != (int *)0x0 &&
        ((**(code **)(*piVar13 + 0x74))(), uVar3 = extraout_var_03, extraout_AL_02 == '\0')))) ||
      ((piVar12 != (int *)0x0 &&
       ((**(code **)(*piVar12 + 0x74))(), uVar3 = extraout_var_04, extraout_AL_03 == '\0')))))) {
    uVar10 = 0;
  }
  return CONCAT31(uVar3,uVar10);
}

