/*
 * FUN_18004f908 at 18004f908
 * undefined __fastcall FUN_18004f908(longlong param_1, ulonglong param_2, int param_3, longlong param_4, longlong param_5, longlong param_6)
 * Address ranges: 18004f908-18004fa02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f908(longlong param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x18c0;
  if (param_3 != *(int *)(lVar2 + 0xb98 + param_1)) {
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_3);
    *(int *)(lVar2 + 0xb98 + param_1) = param_3;
  }
  if (param_4 != *(longlong *)(lVar2 + 0xba0 + param_1)) {
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x88))(plVar1,param_4);
    *(longlong *)(lVar2 + 0xba0 + param_1) = param_4;
  }
  if (param_5 != *(longlong *)(lVar2 + 0xba8 + param_1)) {
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x58))(plVar1,param_5,0,0);
    *(longlong *)(lVar2 + 0xba8 + param_1) = param_5;
  }
  if (param_6 != *(longlong *)(lVar2 + 0xbb0 + param_1)) {
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_6,0,0);
    *(longlong *)(lVar2 + 0xbb0 + param_1) = param_6;
  }
  if (*(longlong *)(lVar2 + 3000 + param_1) != 0) {
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0xb8))(plVar1,0,0,0);
    *(undefined8 *)(lVar2 + 3000 + param_1) = 0;
  }
  return;
}

