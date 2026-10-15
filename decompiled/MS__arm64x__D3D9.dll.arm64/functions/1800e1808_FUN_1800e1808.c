/*
 * FUN_1800e1808 at 1800e1808
 * undefined FUN_1800e1808(void)
 * Address ranges: 1800e1808-1800e18b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e1808(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x620);
  lVar3 = param_1 + (ulonglong)param_2 * 0x18c0;
  lVar1 = 0;
  lVar2 = lVar3 + 0x870;
  do {
    if (param_3 == *(longlong **)(lVar2 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  lVar3 = lVar3 + 0x810;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong **)(lVar3 + lVar2 * 8)) {
      *(undefined8 *)(lVar3 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xc);
  (**(code **)(*param_3 + 0x10))(param_3);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x620);
  return;
}

