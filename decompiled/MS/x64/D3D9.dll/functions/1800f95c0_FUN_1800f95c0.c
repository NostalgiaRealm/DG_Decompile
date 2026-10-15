/*
 * FUN_1800f95c0 at 1800f95c0
 * undefined __fastcall FUN_1800f95c0(longlong param_1, HWND param_2, longlong param_3, char param_4)
 * Address ranges: 1800f95c0-1800f971d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f95c0(longlong param_1,HWND param_2,longlong param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  LONG_PTR LVar3;
  LONG_PTR LVar4;
  uint uVar5;
  longlong *plVar6;
  longlong dwNewLong;
  bool bVar7;
  int local_48;
  int local_44 [3];
  
  uVar2 = GetWindowLongPtrW(param_2,-0x10);
  if (((uVar2 >> 0x1c & 1) != 0) || (param_4 != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x8c2);
    uVar5 = uVar1 & 1;
    dwNewLong = (-(ulonglong)(uVar5 != 0) & 0xfffffffffffffd00) + 0x40300;
    uVar2 = (-(ulonglong)(uVar5 != 0) & 0xffffffffff310000) + 0x10cf0000;
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
      plVar6 = *(longlong **)(param_3 + 0x10);
      local_44[0] = 0;
      local_48 = 0;
      (**(code **)(*plVar6 + 0x10))(plVar6,local_44,&local_48);
      FUN_1800f9720(plVar6,param_2,param_3,local_44[0],local_48,*(char *)(param_1 + 0x824));
    }
  }
  return;
}

