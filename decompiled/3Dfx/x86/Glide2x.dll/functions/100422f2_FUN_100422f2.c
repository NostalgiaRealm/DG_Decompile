/*
 * FUN_100422f2 at 100422f2
 * uint * __stdcall FUN_100422f2(uint * param_1, int * param_2, int * param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8, int param_9)
 * Address ranges: 100422f2-100424f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_100422f2(uint *param_1,int *param_2,int *param_3,uint param_4,uint param_5,uint param_6,
                   uint param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  BOOL BVar5;
  LPRECT ptVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  tagRECT local_18;
  void *local_8;
  
  param_1[2] = param_4;
  param_1[3] = param_5;
  SetRect((LPRECT)(param_1 + 4),0,0,param_2[6] * param_4,param_2[7] * param_5);
  if (param_2[9] == 7) {
    SetRect((LPRECT)(param_1 + 4),0,0,param_2[6] * 0x140,param_2[7] * 200);
  }
  else {
    BVar5 = IsRectEmpty((RECT *)(param_3 + 3));
    if (BVar5 == 0) {
      SetRect((LPRECT)(param_1 + 4),param_3[3] * param_2[6],param_3[4] * param_2[7],
              param_3[5] * param_2[6],param_3[6] * param_2[7]);
    }
  }
  uVar8 = param_1[6];
  uVar7 = param_1[4];
  uVar1 = param_1[7];
  uVar2 = param_1[5];
  *(bool *)((int)param_1 + 0x31) = param_8 != param_9;
  if (((((param_1[4] == 0) && (param_1[5] == 0)) && (param_1[6] == param_6)) &&
      (param_1[7] == param_7)) &&
     (((*(char *)((int)param_2 + 0xd5d) == '\0' || (param_2[10] != 2)) ||
      ((param_1[7] << 2) / 3 == param_1[6])))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar3;
  SetRect((LPRECT)(param_1 + 8),0,0,param_6,param_7);
  if ((char)param_1[0xc] != '\0') {
    ptVar6 = FUN_10042fa7(&local_18,param_2[9],uVar8 - uVar7,uVar1 - uVar2,param_2[6],param_2[7],
                          param_6,param_7);
    ((LPRECT)(param_1 + 8))->left = ptVar6->left;
    param_1[9] = ptVar6->top;
    param_1[10] = ptVar6->right;
    param_1[0xb] = ptVar6->bottom;
  }
  uVar9 = 2;
  if ((param_1[10] - param_1[8] == uVar8 - uVar7) && (param_1[0xb] - param_1[9] == uVar1 - uVar2)) {
    param_7 = 0;
  }
  else {
    param_7 = param_3[7] << 3;
  }
  bVar4 = FUN_100440cd(local_8,param_2);
  if (((param_3[1] == 100) && (param_3[2] == 100)) &&
     ((((bVar4 && ((char)param_2[0x356] == '\0')) ||
       ((*param_3 == 100 && (*(char *)((int)param_2 + 0xd59) != '\0')))) &&
      ((param_2[9] != 6 && ((param_2[9] != 7 && (param_2[9] != 8)))))))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  if (((uint)param_2[6] < 2) && ((uint)param_2[7] < 2)) {
    uVar9 = 0;
  }
  if ((param_2[9] == 6) || (param_2[9] == 8)) {
    uVar7 = 4;
  }
  else {
    uVar7 = 0;
  }
  uVar7 = uVar9 | uVar8 | uVar7;
  param_1[1] = uVar7;
  *param_1 = uVar7 | param_7;
  return param_1;
}

