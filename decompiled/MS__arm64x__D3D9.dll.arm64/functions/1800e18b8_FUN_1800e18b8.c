/*
 * FUN_1800e18b8 at 1800e18b8
 * undefined FUN_1800e18b8(void)
 * Address ranges: 1800e18b8-1800e193f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e18b8(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x620);
  lVar1 = param_1 + (ulonglong)param_2 * 0x18c0 + 0xa70;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong **)(lVar1 + lVar2 * 8)) {
      *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x620);
  return;
}

