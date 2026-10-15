/*
 * FUN_1800e2ac8 at 1800e2ac8
 * undefined FUN_1800e2ac8(void)
 * Address ranges: 1800e2ac8-1800e2bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2ac8(longlong param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  if (param_3 != *(int *)(param_1 + 0xb98)) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xc0))(*(longlong **)(param_1 + 0x6b8),param_3);
    *(int *)(param_1 + 0xb98) = param_3;
  }
  if (param_4 != *(longlong *)(param_1 + 0xba0)) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x88))(*(longlong **)(param_1 + 0x6b8),param_4);
    *(longlong *)(param_1 + 0xba0) = param_4;
  }
  if (param_5 != *(longlong *)(param_1 + 0xba8)) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x58))
              (*(longlong **)(param_1 + 0x6b8),param_5,0,0);
    *(longlong *)(param_1 + 0xba8) = param_5;
  }
  if (param_6 != *(longlong *)(param_1 + 0xbb0)) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x48))
              (*(longlong **)(param_1 + 0x6b8),param_6,0,0);
    *(longlong *)(param_1 + 0xbb0) = param_6;
  }
  if (param_7 != *(longlong *)(param_1 + 3000)) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xb8))
              (*(longlong **)(param_1 + 0x6b8),param_7,0,0);
    *(longlong *)(param_1 + 3000) = param_7;
  }
  return;
}

