/*
 * FUN_180005490 at 180005490
 * undefined __fastcall FUN_180005490(longlong param_1, HWND param_2, longlong param_3, undefined1 param_4)
 * Address ranges: 180005490-180005607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005490(longlong param_1,HWND param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  LONG_PTR LVar3;
  LONG_PTR LVar4;
  longlong *plVar5;
  uint uVar6;
  longlong dwNewLong;
  bool bVar7;
  int local_res20 [2];
  int local_38 [4];
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  uVar2 = GetWindowLongPtrW(param_2,-0x10);
  if ((uVar2 >> 0x1c & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x8c2);
    uVar6 = uVar1 & 1;
    dwNewLong = (-(ulonglong)(uVar6 != 0) & 0xfffffffffffffd00) + 0x40300;
    uVar2 = (-(ulonglong)(uVar6 != 0) & 0xffffffffff310000) + 0x10cf0000;
    LVar3 = GetWindowLongPtrW(param_2,-0x14);
    if (LVar3 != dwNewLong) {
      SetWindowLongPtrW(param_2,-0x14,dwNewLong);
    }
    LVar4 = GetWindowLongPtrW(param_2,-0x10);
    bVar7 = ((uint)LVar4 & 0x10cf0000) != uVar2;
    if (bVar7) {
      SetWindowLongPtrW(param_2,-0x10,uVar2);
    }
    SetWindowPos(param_2,(HWND)((ulonglong)(uVar1 >> 1) | 0xfffffffffffffffe),0,0,0,0,0x41b);
    if ((bVar7 || LVar3 != dwNewLong) ||
       ((*(int *)(param_3 + 0x18) == 0 && (*(int *)(param_3 + 0x1c) == 0)))) {
      plVar5 = *(longlong **)(param_3 + 0x10);
      local_38[0] = 0;
      local_res20[0] = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5,local_38,local_res20);
      FUN_180005608(plVar5,param_2,param_3,local_38[0],local_res20[0],*(char *)(param_1 + 0x824));
    }
  }
  return;
}

