/*
 * FUN_1002f407 at 1002f407
 * byte __thiscall FUN_1002f407(void * this, int param_1, uint param_2, uint * param_3, RECT * param_4)
 * Address ranges: 1002f407-1002f65c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_1002f407(void *this,int param_1,uint param_2,uint *param_3,RECT *param_4)

{
  LONG LVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_50 [8];
  tagRECT local_30;
  tagRECT local_20;
  uint local_10;
  uint local_c;
  byte local_5;
  
  local_5 = 0;
  iVar3 = FUN_100313c3((int)this + 0x150);
  local_10 = FUN_10031403(extraout_ECX);
  iVar7 = extraout_ECX_00;
  if (((*(uint *)(param_1 + 0x19c) >> 2 & 1) != 0) &&
     (*(int *)(param_1 + 0x1a0) == *(int *)((int)this + 0x1a0))) {
    uVar4 = FUN_10032056(param_3,iVar3,local_10);
    if (((char)uVar4 != '\0') &&
       (((param_4->left & iVar3 - 1U) == 0 && ((param_4->top & local_10 - 1) == 0))))
    goto LAB_1002f48b;
    iVar7 = (int)this + 0x150;
  }
  if ((*(uint *)((int)this + 0x19c) >> 2 & 1) != 0) {
    uVar5 = FUN_10031444(iVar7);
    if ((char)uVar5 == '\0') {
      return local_5;
    }
    uVar4 = FUN_1002c761(param_1);
    if (((char)uVar4 != '\0') && (uVar4 = FUN_1002c723((int)this), (char)uVar4 != '\0')) {
      return local_5;
    }
    local_c = 0;
    local_10 = 0;
    local_5 = 1;
    if (param_2 == 0) {
      return 1;
    }
    do {
      uVar4 = local_10;
      if (local_5 == 0) {
        return 0;
      }
      bVar2 = (byte)local_10;
      SetRect(&local_20,(int)*param_3 >> (bVar2 & 0x1f),(int)param_3[1] >> (bVar2 & 0x1f),
              (uint)((param_3[2] & local_c) != 0) + ((int)param_3[2] >> (bVar2 & 0x1f)),
              (uint)((param_3[3] & local_c) != 0) + ((int)param_3[3] >> (bVar2 & 0x1f)));
      SetRect(&local_30,param_4->left >> (bVar2 & 0x1f),param_4->top >> (bVar2 & 0x1f),
              (uint)((param_4->right & local_c) != 0) + (param_4->right >> (bVar2 & 0x1f)),
              (uint)((param_4->bottom & local_c) != 0) + (param_4->bottom >> (bVar2 & 0x1f)));
      BVar6 = IsRectEmpty(&local_20);
      if ((BVar6 == 0) && (BVar6 = IsRectEmpty(param_4), LVar1 = local_20.bottom, BVar6 == 0)) {
        puVar8 = local_50;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        local_5 = FUN_1002c9c1(this,(float *)&local_30,param_1,(float)local_20.top,
                               (float)local_20.right,(float)LVar1,local_50,0,(char *)0x0);
        param_1 = *(int *)(param_1 + 0x110);
        this = *(void **)((int)this + 0x110);
        local_c = local_c * 2 | 1;
        uVar4 = local_10;
      }
      local_10 = uVar4 + 1;
    } while (local_10 < param_2);
    return local_5;
  }
LAB_1002f48b:
  FUN_1003367e(this,param_1);
  FUN_1002c6bd(param_1,(int)this);
  bVar2 = FUN_10005b7a(*(undefined4 *)(*(int *)((int)this + 4) + 0x50),
                       *(undefined4 *)(*(int *)(param_1 + 4) + 0x50),
                       *(int **)(*(int *)((int)this + 4) + 0x4c));
  return bVar2;
}

