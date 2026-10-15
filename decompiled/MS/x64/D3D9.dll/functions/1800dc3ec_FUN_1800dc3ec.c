/*
 * FUN_1800dc3ec at 1800dc3ec
 * undefined __fastcall FUN_1800dc3ec(longlong param_1, ulonglong param_2, int param_3, longlong param_4, longlong param_5, longlong param_6, longlong param_7)
 * Address ranges: 1800dc3ec-1800dc4ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dc3ec(longlong param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7)

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
  if (param_7 != *(longlong *)(lVar2 + 3000 + param_1)) {
    plVar1 = *(longlong **)(lVar2 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_7,0,0);
    *(longlong *)(lVar2 + 3000 + param_1) = param_7;
  }
  return;
}

