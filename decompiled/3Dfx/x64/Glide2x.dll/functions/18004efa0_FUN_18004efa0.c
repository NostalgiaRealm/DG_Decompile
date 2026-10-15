/*
 * FUN_18004efa0 at 18004efa0
 * undefined __fastcall FUN_18004efa0(undefined8 param_1, longlong param_2, LPRECT param_3, int * param_4)
 * Address ranges: 18004efa0-18004f09e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004efa0(undefined8 param_1,longlong param_2,LPRECT param_3,int *param_4)

{
  LPRECT ptVar1;
  uint uVar2;
  uint uVar3;
  LONG LVar4;
  LONG LVar5;
  LONG LVar6;
  LONG LVar7;
  tagRECT local_68;
  int local_58;
  uint local_54;
  
  SetRect(param_3 + 2,0,0,*(uint *)(param_2 + 0x18) / *(uint *)(param_2 + 0x20),
          *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24));
  if (*(int *)(param_2 + 0x30) - 1U < 2) {
    (**(code **)(**(longlong **)(param_2 + 8) + 0x60))(*(longlong **)(param_2 + 8),&local_58);
    SetRect(param_3,0,0,local_58,local_54);
    if (param_4 == (int *)0x0) {
      uVar2 = *(uint *)(param_2 + 0x1c);
      uVar3 = *(uint *)(param_2 + 0x18);
    }
    else {
      uVar2 = param_4[3] - param_4[1];
      uVar3 = param_4[2] - *param_4;
    }
    ptVar1 = FUN_18004ee7c((ulonglong)uVar2,&local_68,*(int *)(param_2 + 0x2c),uVar3,uVar2,
                           *(uint *)(param_2 + 0x20),*(uint *)(param_2 + 0x24),local_58,local_54);
    LVar4 = ptVar1->left;
    LVar5 = ptVar1->top;
    LVar6 = ptVar1->right;
    LVar7 = ptVar1->bottom;
  }
  else {
    SetRect(param_3,0,0,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c));
    LVar4 = param_3->left;
    LVar5 = param_3->top;
    LVar6 = param_3->right;
    LVar7 = param_3->bottom;
  }
  param_3[1].left = LVar4;
  param_3[1].top = LVar5;
  param_3[1].right = LVar6;
  param_3[1].bottom = LVar7;
  return;
}

