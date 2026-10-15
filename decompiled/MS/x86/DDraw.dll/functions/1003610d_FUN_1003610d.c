/*
 * FUN_1003610d at 1003610d
 * LONG * __fastcall FUN_1003610d(int * param_1, RECT * param_2, LONG * param_3)
 * Address ranges: 1003610d-10036254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG * __fastcall FUN_1003610d(int *param_1,RECT *param_2,LONG *param_3)

{
  int iVar1;
  BOOL BVar2;
  HWND hWnd;
  RECT *pRVar3;
  tagRECT local_60;
  tagRECT local_50;
  tagRECT local_40;
  tagRECT local_30;
  RECT local_20;
  int *local_10;
  RECT *local_c;
  
  iVar1 = *param_1;
  *param_3 = param_2->left;
  param_3[1] = param_2->top;
  param_3[2] = param_2->right;
  param_3[3] = param_2->bottom;
  local_10 = param_1;
  local_c = param_2;
  iVar1 = (**(code **)(iVar1 + 0x38))();
  pRVar3 = local_c;
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = *(int *)(iVar1 + 0xc);
  local_20.bottom = *(int *)(iVar1 + 8);
  IntersectRect(&local_50,local_c,&local_20);
  BVar2 = EqualRect(&local_50,pRVar3);
  if ((((BVar2 == 0) && ((*(uint *)(iVar1 + 0x68) & 0x210) != 0)) &&
      ((*(uint *)(local_10[0x3f] + 0x104) >> 4 & 1) != 0)) &&
     ((hWnd = FUN_100245b0((void *)local_10[0x3f],'\0'), hWnd != (HWND)0x0 &&
      (BVar2 = GetClientRect(hWnd,&local_40), BVar2 != 0)))) {
    local_30.left = pRVar3->left;
    local_30.top = pRVar3->top;
    local_30.right = pRVar3->right;
    local_30.bottom = pRVar3->bottom;
    OffsetRect(&local_30,-pRVar3->left,-pRVar3->top);
    BVar2 = EqualRect(&local_40,&local_30);
    if (BVar2 == 0) {
      local_30.left = local_c->left;
      local_30.top = local_c->top;
      local_30.right = local_c->right;
      local_30.bottom = local_c->bottom;
      OffsetRect(&local_30,-(((local_40.left - local_20.right) + local_40.right) / 2),
                 -(((local_40.top - local_20.bottom) + local_40.bottom) / 2));
      IntersectRect(&local_60,&local_20,&local_30);
      BVar2 = EqualRect(&local_60,&local_30);
      if (BVar2 == 0) {
        return param_3;
      }
      pRVar3 = &local_30;
    }
    else {
      pRVar3 = &local_20;
    }
    *param_3 = pRVar3->left;
    param_3[1] = pRVar3->top;
    param_3[2] = pRVar3->right;
    param_3[3] = pRVar3->bottom;
  }
  return param_3;
}

