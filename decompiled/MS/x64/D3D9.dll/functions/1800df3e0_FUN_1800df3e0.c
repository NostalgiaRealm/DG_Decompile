/*
 * FUN_1800df3e0 at 1800df3e0
 * LPRECT __fastcall FUN_1800df3e0(undefined8 param_1, LPRECT param_2, int param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8, uint param_9)
 * Address ranges: 1800df3e0-1800df500
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_1800df3e0(undefined8 param_1,LPRECT param_2,int param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_4;
  SetRect(param_2,0,0,param_8,param_9);
  if (param_3 == 1) {
LAB_1800df4ce:
    iVar1 = (int)(param_8 - param_4) / 2;
    param_2->left = iVar1;
    param_2->right = iVar1 + param_4;
    iVar1 = (int)(param_9 - param_5) / 2;
    param_2->top = iVar1;
    iVar1 = iVar1 + param_5;
  }
  else {
    if ((param_3 != 2) && (param_3 != 3)) {
      if (param_3 == 4) goto LAB_1800df4ce;
      if (((param_3 == 5) || (param_3 == 6)) || (param_3 == 7)) {
        if ((param_4 / param_6 < 0x501) && (param_5 / param_7 < 0x401)) {
          uVar3 = (ulonglong)(param_5 * 4) / 3;
        }
      }
      else if (param_3 != 8) {
        return param_2;
      }
    }
    uVar2 = (uint)((param_5 * param_8) / uVar3);
    if (param_9 < uVar2) {
      uVar2 = ((int)uVar3 * param_9) / param_5;
      iVar1 = (int)(param_8 - uVar2) / 2;
      param_2->left = iVar1;
      param_2->right = iVar1 + uVar2;
      return param_2;
    }
    iVar1 = (int)(param_9 - uVar2) / 2;
    param_2->top = iVar1;
    iVar1 = iVar1 + uVar2;
  }
  param_2->bottom = iVar1;
  return param_2;
}

