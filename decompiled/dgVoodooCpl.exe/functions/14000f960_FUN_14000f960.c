/*
 * FUN_14000f960 at 14000f960
 * undefined __fastcall FUN_14000f960(longlong param_1, int param_2, int * param_3)
 * Address ranges: 14000f960-14000fc8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f960(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  uint uVar7;
  longlong lVar8;
  HDWP local_res8;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  
  if (param_2 != *(int *)(param_1 + 0x90)) {
    if (param_3 == (int *)0x0) {
      iVar5 = MulDiv(*(int *)(param_1 + 0x20),param_2,*(int *)(param_1 + 0x1c));
      iVar4 = MulDiv(*(int *)(param_1 + 0x24),param_2,*(int *)(param_1 + 0x1c));
      iVar2 = MulDiv(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20),param_2,
                     *(int *)(param_1 + 0x1c));
      iVar3 = MulDiv(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24),param_2,
                     *(int *)(param_1 + 0x1c));
    }
    else {
      iVar2 = MulDiv(*(int *)(param_1 + 0x3c),param_2,*(int *)(param_1 + 0x1c));
      iVar2 = *(int *)(param_1 + 0x44) + iVar2;
      iVar4 = *(int *)(param_1 + 0x48);
      iVar3 = MulDiv(*(int *)(param_1 + 0x40),param_2,*(int *)(param_1 + 0x1c));
      iVar3 = iVar3 + iVar4;
      iVar4 = ((param_3[3] + param_3[1]) - iVar3) / 2;
      iVar5 = ((param_3[2] - iVar2) + *param_3) / 2;
    }
    SetWindowPos(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x18),(HWND)0x0,iVar5,iVar4,iVar2,iVar3,
                 0x214);
    if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0) &&
       (*(longlong *)(param_1 + 0x30) != 0)) {
      local_30 = *(undefined4 *)(param_1 + 0x1c);
      local_38 = *(longlong *)(param_1 + 0x30);
      local_2c = param_2;
      WVar6 = FUN_14000fc90((longlong *)(param_1 + 0x60),&local_38);
      SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x20),0x30,WVar6,0);
      if (*(int *)(param_1 + 0x38) != -1) {
        iVar2 = MulDiv(*(int *)(param_1 + 0x38),param_2,*(int *)(param_1 + 0x1c));
        SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x20),0x418,0,(longlong)iVar2);
      }
    }
    local_res8 = BeginDeferWindowPos(*(int *)(param_1 + 0x58) + 1);
    if (*(int *)(param_1 + 0x58) != 0) {
      uVar7 = 0;
      do {
        lVar8 = (ulonglong)uVar7 * 0x20;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18 + lVar8);
        if (lVar1 != 0) {
          local_30 = *(undefined4 *)(param_1 + 0x1c);
          local_38 = lVar1;
          local_2c = param_2;
          WVar6 = FUN_14000fc90((longlong *)(param_1 + 0x60),&local_38);
          SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x50) + lVar8),0x30,WVar6,0);
        }
        lVar1 = *(longlong *)(param_1 + 0x50);
        iVar3 = MulDiv(*(int *)(lVar1 + 0x14 + lVar8) - *(int *)(lVar1 + 0xc + lVar8),param_2,
                       *(int *)(param_1 + 0x1c));
        iVar4 = MulDiv(*(int *)(lVar1 + 0x10 + lVar8) - *(int *)(lVar1 + 8 + lVar8),param_2,
                       *(int *)(param_1 + 0x1c));
        iVar5 = MulDiv(*(int *)(lVar1 + 0xc + lVar8),param_2,*(int *)(param_1 + 0x1c));
        iVar2 = *(int *)(lVar1 + 8 + lVar8);
        if (local_res8 == (HDWP)0x0) {
          iVar2 = MulDiv(iVar2,param_2,*(int *)(param_1 + 0x1c));
          SetWindowPos(*(HWND *)(lVar1 + lVar8),(HWND)0x0,iVar2,iVar5,iVar4,iVar3,0x214);
        }
        else {
          iVar2 = MulDiv(iVar2,param_2,*(int *)(param_1 + 0x1c));
          local_res8 = DeferWindowPos(local_res8,*(HWND *)(lVar1 + lVar8),(HWND)0x0,iVar2,iVar5,
                                      iVar4,iVar3,0x214);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x58));
    }
    InvalidateRect(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x18),(RECT *)0x0,1);
    if (local_res8 != (HDWP)0x0) {
      EndDeferWindowPos(local_res8);
    }
    *(int *)(param_1 + 0x90) = param_2;
  }
  return;
}

