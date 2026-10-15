/*
 * FUN_10048f8c at 10048f8c
 * undefined __stdcall FUN_10048f8c(int param_1, LPRECT param_2, int * param_3)
 * Address ranges: 10048f8c-10049038
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048f8c(int param_1,LPRECT param_2,int *param_3)

{
  LPRECT ptVar1;
  uint uVar2;
  uint uVar3;
  int local_50;
  uint local_4c;
  tagRECT local_14;
  
  SetRect(param_2 + 2,0,0,*(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x18),
          *(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x28) == 1) || (*(int *)(param_1 + 0x28) == 2)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4),&local_50);
    SetRect(param_2,0,0,local_50,local_4c);
    if (param_3 == (int *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x14);
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    else {
      uVar3 = param_3[3] - param_3[1];
      uVar2 = param_3[2] - *param_3;
    }
    ptVar1 = FUN_10048e98(&local_14,*(undefined4 *)(param_1 + 0x24),uVar2,uVar3,
                          *(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),local_50,local_4c);
  }
  else {
    SetRect(param_2,0,0,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    ptVar1 = param_2;
  }
  param_2[1].left = ptVar1->left;
  param_2[1].top = ptVar1->top;
  param_2[1].right = ptVar1->right;
  param_2[1].bottom = ptVar1->bottom;
  return;
}

