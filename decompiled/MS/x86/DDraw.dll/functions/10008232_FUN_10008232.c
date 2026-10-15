/*
 * FUN_10008232 at 10008232
 * int * __stdcall FUN_10008232(int * param_1, int * param_2, int * param_3, char param_4, int param_5, int param_6, int param_7, uint param_8, int * param_9, int * param_10)
 * Address ranges: 10008232-100083c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10008232(int *param_1,int *param_2,int *param_3,char param_4,int param_5,int param_6,
                  int param_7,uint param_8,int *param_9,int *param_10)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  BOOL BVar5;
  undefined4 uVar6;
  LPRECT ptVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  tagRECT local_2c [2];
  int local_8;
  
  piVar13 = param_3;
  uVar11 = 1;
  local_8 = param_3[0xb] * param_8 + param_7;
  iVar8 = param_2[0xb] * param_6 + param_5;
  if (param_3[0x20] == 0) {
LAB_1000827f:
    bVar2 = true;
  }
  else {
    BVar5 = IsRectEmpty((RECT *)(local_8 * 0x1c + param_3[0x20] + 0xc));
    bVar2 = false;
    if (BVar5 != 0) goto LAB_1000827f;
  }
  if ((param_2[0x20] == 0) ||
     (BVar5 = IsRectEmpty((RECT *)(iVar8 * 0x1c + param_2[0x20] + 0xc)), BVar5 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_4 != '\0' || bVar1) {
LAB_100082bf:
    param_8 = 2;
  }
  else {
    cVar3 = (**(code **)(*param_2 + 0x54))();
    param_8 = 0;
    if (cVar3 != '\0') goto LAB_100082bf;
  }
  if ((!bVar2) && (cVar3 = (**(code **)(*param_3 + 0x54))(), cVar3 == '\0')) {
    uVar11 = 0;
  }
  piVar12 = (int *)(uVar11 | param_8);
  if ((((param_4 == '\0') && (cVar3 = (**(code **)(*param_2 + 0x4c))(), cVar3 != '\0')) &&
      (param_2[0x1d] != 0)) &&
     (((param_3[0x1d] != 0 &&
       (BVar5 = IsRectEmpty((RECT *)(param_3[0x18] + local_8 * 0x1c + 0xc)), BVar5 != 0)) &&
      (BVar5 = IsRectEmpty((RECT *)(iVar8 * 0x1c + param_2[0x18] + 0xc)), BVar5 != 0)))) {
    piVar12 = (int *)0x0;
  }
  param_3 = piVar12;
  iVar8 = piVar13[0x16];
  if (iVar8 == 0) {
    iVar8 = piVar13[0x15];
  }
  iVar9 = param_2[0x16];
  if (iVar9 == 0) {
    iVar9 = param_2[0x15];
  }
  iVar10 = piVar13[0x17];
  if (param_3 == (int *)0x0) {
    iVar9 = param_2[0x1d];
  }
  else if (param_3 != (int *)0x2) goto LAB_1000835d;
  iVar10 = piVar13[0x1f];
  iVar8 = piVar13[0x1d];
LAB_1000835d:
  param_1[1] = iVar8;
  param_1[2] = iVar9;
  *param_1 = iVar10;
  param_1[3] = (int)param_3;
  uVar6 = FUN_100081fd(param_2,piVar13);
  *(char *)(param_1 + 0x11) = (char)uVar6;
  uVar4 = FUN_10006992(piVar13[0xd]);
  *(undefined1 *)((int)param_1 + 0x47) = uVar4;
  ptVar7 = FUN_10020dba(local_2c,param_2,piVar13,param_9,param_10,(byte)param_3);
  piVar13 = param_1 + 8;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar13 = ptVar7->left;
    ptVar7 = (LPRECT)&ptVar7->top;
    piVar13 = piVar13 + 1;
  }
  piVar13 = param_1 + 0xc;
  FUN_10008121((int)param_1,(byte)param_5,piVar13,(byte)param_7,piVar13,param_1 + 8,piVar13);
  return param_1;
}

