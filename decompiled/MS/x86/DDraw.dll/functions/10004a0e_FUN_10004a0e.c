/*
 * FUN_10004a0e at 10004a0e
 * undefined __thiscall FUN_10004a0e(void * this, int * param_1, int param_2, RECT * param_3, int param_4)
 * Address ranges: 10004a0e-10004bf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004a0e(void *this,int *param_1,int param_2,RECT *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_50;
  LONG local_4c;
  LONG LStack_48;
  LONG LStack_44;
  LONG LStack_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined1 local_30;
  tagRECT local_2c;
  int *local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_1c = this;
  FUN_100049bf(this,(LPARAM)param_1);
  local_14 = (**(code **)(*(int *)this + 0x14))();
  if (local_14 != 0) {
    iVar5 = (**(code **)(*(int *)this + 0x10))();
    iVar9 = DAT_1006c210;
    local_8 = DAT_1006c210;
    local_18 = (int *)(&DAT_1006c2b0)[iVar5 * 0x8a];
    iVar5 = param_4;
    if ((param_4 == 0) && (iVar5 = 1, *(char *)(DAT_1006c210 + 0x7ea) == '\0')) {
      iVar5 = param_4;
    }
    param_4 = iVar5;
    iVar5 = *(int *)(DAT_1006c210 + 0x933);
    local_10 = *(uint *)(DAT_1006c210 + 0x937);
    local_c = 0;
    if (((iVar5 == 3) || ((iVar5 == 2 && (*(int *)(param_2 + 0x34) == 0x10)))) ||
       ((iVar5 == 1 &&
        ((*(int *)(param_2 + 0x34) == 0x10 &&
         (cVar4 = (**(code **)(**(int **)(param_2 + 4) + 0x1c))
                            (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)),
         cVar4 != '\0')))))) {
      if (*(int *)(iVar9 + 0x92f) == 1) {
        local_c = 2;
      }
      else if (*(int *)(iVar9 + 0x92f) == 2) {
        local_c = 4;
      }
      if (local_10 == 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        uVar2 = *(uint *)(param_2 + 0x1c);
        piVar3 = *(int **)(param_2 + 4);
        uVar6 = (**(code **)(*piVar3 + 8))();
        uVar6 = uVar6 / uVar1;
        local_10 = (**(code **)(*piVar3 + 0xc))();
        local_10 = local_10 / uVar2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        if (local_10 == 0) {
          local_10 = 1;
        }
        iVar9 = local_8;
        if (uVar6 < local_10) {
          local_10 = uVar6;
        }
      }
    }
    (**(code **)(**(int **)(param_2 + 4) + 0x20))
              (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),0);
    SetRectEmpty(&local_2c);
    if (((param_3 != (RECT *)0x0) && (BVar7 = IsRectEmpty(param_3), BVar7 == 0)) &&
       (((*(byte *)(iVar9 + 0x826) & 4) != 0 ||
        (cVar4 = (**(code **)(*param_1 + 0x14))(), cVar4 != '\0')))) {
      local_2c.left = param_3->left;
      local_2c.top = param_3->top;
      local_2c.right = param_3->right;
      local_2c.bottom = param_3->bottom;
    }
    FUN_10005b55(param_2);
    uVar8 = FUN_10005b55(param_2);
    if ((char)uVar8 == '\0') {
      local_34 = 0;
    }
    else {
      local_34 = *(undefined4 *)(local_8 + 0x802);
    }
    local_30 = *(undefined1 *)(local_8 + 0x7e7);
    local_50 = *(undefined4 *)(param_2 + 4);
    local_3c = local_c;
    local_38 = local_10;
    local_4c = local_2c.left;
    LStack_48 = local_2c.top;
    LStack_44 = local_2c.right;
    LStack_40 = local_2c.bottom;
    (**(code **)(*local_18 + 0x7c))(local_14,param_1,param_4,&local_50);
    this = local_1c;
  }
  iVar9 = (**(code **)(*(int *)this + 0x10))();
  iVar9 = (**(code **)(*(int *)(&DAT_1006c2b0)[iVar9 * 0x8a] + 0x1c))();
  if (iVar9 != 1) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}

