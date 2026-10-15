/*
 * FUN_1009462b at 1009462b
 * uint __stdcall FUN_1009462b(int param_1, int param_2, tagRECT * param_3, undefined4 param_4)
 * Address ranges: 1009462b-100947b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1009462b(int param_1,int param_2,tagRECT *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  tagRECT *ptVar4;
  uint uVar5;
  char local_39;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  
  uVar5 = 0x8876086c;
  if (param_2 != 0) {
    FUN_10003e40(&local_39,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    cVar2 = FUN_10002819(*(int *)(param_2 + -0x34));
    if (cVar2 == '\0') {
      uVar5 = -(uint)(*(int *)(param_2 + -0x28) != 0) & 0x8876086c;
    }
    else {
      uVar5 = 0x8876086c;
    }
    SetRect(&local_28,0,0,*(int *)(param_2 + -0x1c),*(int *)(param_2 + -0x18));
    ptVar4 = &local_28;
    if (param_3 != (tagRECT *)0x0) {
      ptVar4 = param_3;
    }
    local_38.left = ptVar4->left;
    local_38.top = ptVar4->top;
    local_38.right = ptVar4->right;
    local_38.bottom = ptVar4->bottom;
    IntersectRect(&local_18,&local_38,&local_28);
    if ((-1 < (int)uVar5) && (BVar3 = EqualRect(&local_18,&local_38), BVar3 == 0)) {
      uVar5 = 0x8876086c;
    }
    if (-1 < (int)uVar5) {
      if ((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 0xb & 1) != 0) {
        uVar5 = 0x8876086c;
      }
      if ((-1 < (int)uVar5) && (*(char *)(param_1 + -0x17) == '\0')) {
        iVar1 = *(int *)(param_2 + -0x58);
        FUN_100124b2((void *)(param_2 + -0x5c),0);
        cVar2 = (**(code **)(**(int **)(param_1 + -0x58cc) + 0x80))
                          (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),
                           *(undefined4 *)(*(int *)(param_2 + -0x58) + 0x50),param_4,
                           (float)local_38.left,(float)local_38.top,(float)local_38.right,
                           (float)local_38.bottom);
        if (cVar2 == '\0') {
          uVar5 = 0x88760827;
        }
        if (*(int *)(*(int *)(param_2 + -0x58) + 0x50) != 0) {
          FUN_100071bf(*(void **)(param_2 + -0x44),param_2 + -0x5c);
        }
      }
    }
    FUN_10003e89(&local_39);
  }
  return uVar5;
}

