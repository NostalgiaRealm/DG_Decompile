/*
 * FUN_180051678 at 180051678
 * undefined __cdecl FUN_180051678(longlong param_1, ulonglong param_2, int param_3, longlong param_4, longlong param_5, longlong param_6)
 * Address ranges: 180051678-18005177f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051678(longlong param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  longlong lVar1;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  if (param_3 != *(int *)(lVar1 + 0xb98)) {
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0xc0))(*(longlong **)(lVar1 + 0x6b8),param_3);
    *(int *)(lVar1 + 0xb98) = param_3;
  }
  if (param_4 != *(longlong *)(lVar1 + 0xba0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x88))(*(longlong **)(lVar1 + 0x6b8),param_4);
    *(longlong *)(lVar1 + 0xba0) = param_4;
  }
  if (param_5 != *(longlong *)(lVar1 + 0xba8)) {
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x58))(*(longlong **)(lVar1 + 0x6b8),param_5,0,0);
    *(longlong *)(lVar1 + 0xba8) = param_5;
  }
  if (param_6 != *(longlong *)(lVar1 + 0xbb0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0x48))(*(longlong **)(lVar1 + 0x6b8),param_6,0,0);
    *(longlong *)(lVar1 + 0xbb0) = param_6;
  }
  if (*(longlong *)(lVar1 + 3000) != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x6b8) + 0xb8))(*(longlong **)(lVar1 + 0x6b8),0,0,0);
    *(undefined8 *)(lVar1 + 3000) = 0;
  }
  return;
}

