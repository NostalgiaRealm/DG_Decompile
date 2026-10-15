/*
 * FUN_1800e37b8 at 1800e37b8
 * undefined FUN_1800e37b8(void)
 * Address ranges: 1800e37b8-1800e382b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e37b8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = lVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar1 + 0x620);
  if (param_2 == *(longlong **)(lVar2 + 0x708)) {
    *(undefined8 *)(lVar2 + 0x708) = 0;
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar1 + 0x620);
  return;
}

