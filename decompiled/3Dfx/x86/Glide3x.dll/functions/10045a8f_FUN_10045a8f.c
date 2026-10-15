/*
 * FUN_10045a8f at 10045a8f
 * LPRECT __stdcall FUN_10045a8f(LPRECT param_1, undefined4 param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, uint param_8)
 * Address ranges: 10045a8f-10045b6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_10045a8f(LPRECT param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                   uint param_6,int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  
  SetRect(param_1,0,0,param_7,param_8);
  switch(param_2) {
  case 1:
  case 4:
    iVar2 = (int)(param_7 - param_3) / 2;
    param_1->left = iVar2;
    param_1->right = iVar2 + param_3;
    iVar2 = (int)(param_8 - param_4) / 2;
    param_1->top = iVar2;
    param_1->bottom = param_4 + iVar2;
    return param_1;
  case 2:
  case 3:
  case 8:
    break;
  case 5:
  case 6:
  case 7:
    if ((param_3 / param_5 < 0x501) && (param_4 / param_6 < 0x401)) {
      param_3 = (param_4 << 2) / 3;
    }
    break;
  default:
    goto switchD_10045abf_default;
  }
  uVar1 = (param_4 * param_7) / param_3;
  if (param_8 < uVar1) {
    uVar1 = (param_3 * param_8) / param_4;
    iVar2 = (int)(param_7 - uVar1) / 2;
    param_1->left = iVar2;
    param_1->right = iVar2 + uVar1;
  }
  else {
    iVar2 = (int)(param_8 - uVar1) / 2;
    param_1->top = iVar2;
    param_1->bottom = iVar2 + uVar1;
  }
switchD_10045abf_default:
  return param_1;
}

