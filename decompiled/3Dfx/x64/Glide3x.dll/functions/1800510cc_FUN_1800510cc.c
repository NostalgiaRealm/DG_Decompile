/*
 * FUN_1800510cc at 1800510cc
 * undefined __fastcall FUN_1800510cc(undefined8 param_1, longlong param_2, RECT * param_3, int param_4, int param_5, float * param_6, float * param_7)
 * Address ranges: 1800510cc-1800512e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800510cc(undefined8 param_1,longlong param_2,RECT *param_3,int param_4,int param_5,
                  float *param_6,float *param_7)

{
  BOOL BVar1;
  int iVar2;
  LPRECT lprc;
  int iVar3;
  int yTop;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  tagRECT local_c8;
  tagRECT local_b8;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  
  BVar1 = IsRectEmpty(param_3);
  lprc = &local_c8;
  if (BVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x24) * param_3->bottom;
    iVar4 = *(int *)(param_2 + 0x20) * param_3->right;
    yTop = *(int *)(param_2 + 0x24) * param_3->top;
    iVar3 = *(int *)(param_2 + 0x20) * param_3->left;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1c);
    yTop = 0;
    iVar4 = *(int *)(param_2 + 0x18);
    iVar3 = 0;
  }
  SetRect(lprc,iVar3,yTop,iVar4,iVar2);
  FUN_1800515ac(lprc,param_2,&local_b8,&local_c8.left);
  (**(code **)(**(longlong **)(param_2 + 8) + 0x60))();
  iVar2 = *(int *)(param_2 + 0xc50);
  iVar4 = *(int *)(param_2 + 0xc48);
  *param_7 = (float)local_a8;
  fVar7 = (float)(local_a0 - local_a8);
  param_7[1] = (float)local_a4;
  param_7[2] = fVar7;
  fVar8 = (float)(local_9c - local_a4);
  param_7[3] = fVar8;
  iVar4 = (((*(int *)(param_2 + 0xc40) - iVar2 * iVar4) - local_c8.left / *(int *)(param_2 + 0x20))
          * (local_a0 - local_a8)) /
          (int)((uint)(local_c8.right - local_c8.left) / *(uint *)(param_2 + 0x20));
  iVar3 = (((*(int *)(param_2 + 0xc44) - iVar2 * *(int *)(param_2 + 0xc4c)) -
           local_c8.top / *(int *)(param_2 + 0x24)) * (local_9c - local_a4)) /
          (int)((uint)(local_c8.bottom - local_c8.top) / *(uint *)(param_2 + 0x24));
  fVar6 = (float)(int)(iVar4 * 2 | 1) / fVar7 - 1.0;
  fVar5 = 1.0 - (float)(int)(iVar3 * 2 | 1) / fVar8;
  param_6[2] = 0.0;
  param_6[3] = 0.0;
  param_6[6] = 1.0;
  param_6[7] = 0.0;
  param_6[10] = 0.0;
  param_6[0xb] = 1.0;
  param_6[0xe] = 1.0;
  param_6[0xf] = 1.0;
  fVar7 = (float)(int)((iVar2 * param_4 + iVar4) * 2 | 1) / fVar7 - 1.0;
  fVar8 = 1.0 - (float)(int)((iVar2 * param_5 + iVar3) * 2 | 1) / fVar8;
  *param_6 = fVar6;
  param_6[1] = fVar5;
  param_6[5] = fVar5;
  param_6[8] = fVar6;
  param_6[4] = fVar7;
  param_6[9] = fVar8;
  param_6[0xd] = fVar8;
  param_6[0xc] = fVar7;
  return;
}

