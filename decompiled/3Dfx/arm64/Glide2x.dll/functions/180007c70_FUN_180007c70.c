/*
 * FUN_180007c70 at 180007c70
 * undefined __cdecl FUN_180007c70(longlong param_1, HWND param_2, longlong param_3)
 * Address ranges: 180007c70-180007dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007c70(longlong param_1,HWND param_2,longlong param_3)

{
  longlong dwNewLong;
  ulonglong dwNewLong_00;
  uint uVar1;
  bool bVar2;
  LONG_PTR LVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int local_50;
  int aiStack_4c [3];
  
  LVar3 = GetWindowLongPtrW(param_2,-0x10);
  if (((uint)LVar3 >> 0x1c & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x8c2);
    bVar2 = (uVar1 & 1) == 0;
    dwNewLong = 0x40000;
    if (bVar2) {
      dwNewLong = 0x40300;
    }
    dwNewLong_00 = 0x10000000;
    if (bVar2) {
      dwNewLong_00 = 0x10cf0000;
    }
    LVar3 = GetWindowLongPtrW(param_2,-0x14);
    if (LVar3 != dwNewLong) {
      SetWindowLongPtrW(param_2,-0x14,dwNewLong);
    }
    uVar4 = GetWindowLongPtrW(param_2,-0x10);
    bVar2 = (uVar4 & 0x10cf0000) != dwNewLong_00;
    if (bVar2) {
      SetWindowLongPtrW(param_2,-0x10,dwNewLong_00);
    }
    SetWindowPos(param_2,(HWND)((ulonglong)(uVar1 >> 1) | 0xfffffffffffffffe),0,0,0,0,0x41b);
    if ((bVar2 || LVar3 != dwNewLong) ||
       ((*(int *)(param_3 + 0x18) == 0 && (*(int *)(param_3 + 0x1c) == 0)))) {
      local_50 = 0;
      aiStack_4c[0] = 0;
      uVar5 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
                        (*(longlong **)(param_3 + 0x10),aiStack_4c,&local_50);
      FUN_180007de0(uVar5,param_2,param_3,aiStack_4c[0],local_50,
                    (ulonglong)*(byte *)(param_1 + 0x824));
    }
  }
  return;
}

