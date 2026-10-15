/*
 * FUN_100b7a22 at 100b7a22
 * undefined __stdcall FUN_100b7a22(int param_1, RECT * param_2, int param_3, int param_4, float * param_5, float * param_6)
 * Address ranges: 100b7a22-100b7c1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b7a22(int param_1,RECT *param_2,int param_3,int param_4,float *param_5,float *param_6)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int xLeft;
  int iVar8;
  undefined1 local_80 [60];
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_14;
  
  BVar1 = IsRectEmpty(param_2);
  if (BVar1 == 0) {
    iVar2 = param_2->bottom * *(int *)(param_1 + 0x1c);
    iVar3 = param_2->right * *(int *)(param_1 + 0x18);
    iVar8 = param_2->top * *(int *)(param_1 + 0x1c);
    xLeft = param_2->left * *(int *)(param_1 + 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x10);
    iVar8 = 0;
    xLeft = 0;
  }
  SetRect(&local_14,xLeft,iVar8,iVar3,iVar2);
  FUN_100b7e88(param_1,&local_44,&local_14.left);
  (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4),local_80);
  *param_6 = (float)local_34;
  fVar6 = (float)(local_2c - local_34);
  iVar2 = *(int *)(param_1 + 0xc40);
  param_6[2] = fVar6;
  param_6[1] = (float)local_30;
  fVar7 = (float)(local_28 - local_30);
  iVar3 = *(int *)(param_1 + 0xc48);
  param_6[3] = fVar7;
  iVar3 = (((*(int *)(param_1 + 0xc38) - local_14.left / *(int *)(param_1 + 0x18)) - iVar2 * iVar3)
          * (local_2c - local_34)) /
          (int)((uint)(local_14.right - local_14.left) / *(uint *)(param_1 + 0x18));
  iVar2 = *(int *)(param_1 + 0xc48);
  iVar8 = (((*(int *)(param_1 + 0xc3c) - local_14.top / *(int *)(param_1 + 0x1c)) -
           *(int *)(param_1 + 0xc44) * iVar2) * (local_28 - local_30)) /
          (int)((uint)(local_14.bottom - local_14.top) / *(uint *)(param_1 + 0x1c));
  fVar5 = (float)(int)(iVar3 * 2 | 1) / fVar6 - 1.0;
  fVar4 = 1.0 - (float)(int)(iVar8 * 2 | 1) / fVar7;
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  param_5[6] = 1.0;
  param_5[7] = 0.0;
  param_5[10] = 0.0;
  param_5[0xb] = 1.0;
  param_5[0xe] = 1.0;
  param_5[0xf] = 1.0;
  fVar6 = (float)(int)((iVar2 * param_3 + iVar3) * 2 | 1) / fVar6 - 1.0;
  *param_5 = fVar5;
  fVar7 = 1.0 - (float)(int)((iVar2 * param_4 + iVar8) * 2 | 1) / fVar7;
  param_5[1] = fVar4;
  param_5[5] = fVar4;
  param_5[8] = fVar5;
  param_5[4] = fVar6;
  param_5[9] = fVar7;
  param_5[0xc] = fVar6;
  param_5[0xd] = fVar7;
  return;
}

