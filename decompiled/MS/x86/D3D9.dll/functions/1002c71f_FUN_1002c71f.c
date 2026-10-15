/*
 * FUN_1002c71f at 1002c71f
 * undefined __thiscall FUN_1002c71f(void * this, int * param_1, int param_2, RECT * param_3, int param_4)
 * Address ranges: 1002c71f-1002c944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c71f(void *this,int *param_1,int param_2,RECT *param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  HWND pHVar6;
  uint uVar7;
  BOOL BVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 local_50;
  LONG local_4c;
  LONG LStack_48;
  LONG LStack_44;
  LONG LStack_40;
  undefined4 local_3c;
  HWND local_38;
  undefined4 local_34;
  undefined1 local_30;
  tagRECT local_2c;
  int *local_1c;
  int local_18;
  int *local_14;
  HWND local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = this;
  local_10 = (HWND)(**(code **)(*(int *)this + 0x14))();
  iVar10 = DAT_100dea74;
  if (local_10 != (HWND)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_100dea74 + 0x318);
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(iVar10 + 0x759) != '\0') {
      SendMessageW(local_10,0x401,0x44454745,(LPARAM)param_1);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  local_18 = (**(code **)(*(int *)this + 0x14))();
  if (local_18 != 0) {
    iVar4 = (**(code **)(*(int *)this + 0x10))();
    iVar10 = DAT_100dea74;
    local_8 = DAT_100dea74;
    local_1c = (int *)(&DAT_100df2e8)[iVar4 * 0x8a];
    iVar4 = param_4;
    if ((param_4 == 0) && (iVar4 = 1, *(char *)(DAT_100dea74 + 0x7ea) == '\0')) {
      iVar4 = param_4;
    }
    param_4 = iVar4;
    iVar4 = *(int *)(DAT_100dea74 + 0x933);
    local_10 = *(HWND *)(DAT_100dea74 + 0x937);
    local_c = 0;
    if (((iVar4 == 3) || ((iVar4 == 2 && (*(int *)(param_2 + 0x34) == 0x10)))) ||
       ((iVar4 == 1 &&
        ((*(int *)(param_2 + 0x34) == 0x10 &&
         (cVar3 = (**(code **)(**(int **)(param_2 + 4) + 0x1c))
                            (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)),
         cVar3 != '\0')))))) {
      if (*(int *)(iVar10 + 0x92f) == 1) {
        local_c = 2;
      }
      else if (*(int *)(iVar10 + 0x92f) == 2) {
        local_c = 4;
      }
      if (local_10 == (HWND)0x0) {
        uVar7 = *(uint *)(param_2 + 0x18);
        uVar1 = *(uint *)(param_2 + 0x1c);
        piVar2 = *(int **)(param_2 + 4);
        uVar5 = (**(code **)(*piVar2 + 8))();
        pHVar6 = (HWND)(uVar5 / uVar7);
        uVar7 = (**(code **)(*piVar2 + 0xc))();
        local_10 = (HWND)(uVar7 / uVar1);
        if (pHVar6 == (HWND)0x0) {
          pHVar6 = (HWND)0x1;
        }
        if (local_10 == (HWND)0x0) {
          local_10 = (HWND)0x1;
        }
        this = local_14;
        iVar10 = local_8;
        if (pHVar6 < local_10) {
          local_10 = pHVar6;
        }
      }
    }
    (**(code **)(**(int **)(param_2 + 4) + 0x20))
              (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),0);
    SetRectEmpty(&local_2c);
    if (((param_3 != (RECT *)0x0) && (BVar8 = IsRectEmpty(param_3), BVar8 == 0)) &&
       (((*(byte *)(iVar10 + 0x826) & 4) != 0 ||
        (cVar3 = (**(code **)(*param_1 + 0x14))(), cVar3 != '\0')))) {
      local_2c.left = param_3->left;
      local_2c.top = param_3->top;
      local_2c.right = param_3->right;
      local_2c.bottom = param_3->bottom;
    }
    FUN_1002d85a(param_2);
    uVar9 = FUN_1002d85a(param_2);
    if ((char)uVar9 == '\0') {
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
    (**(code **)(*local_1c + 0x7c))(local_18,param_1,param_4,&local_50);
  }
  iVar10 = (**(code **)(*(int *)this + 0x10))();
  iVar10 = (**(code **)(*(int *)(&DAT_100df2e8)[iVar10 * 0x8a] + 0x1c))();
  if (iVar10 != 1) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}

