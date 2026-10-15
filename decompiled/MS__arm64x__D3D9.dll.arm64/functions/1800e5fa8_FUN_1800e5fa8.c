/*
 * FUN_1800e5fa8 at 1800e5fa8
 * undefined FUN_1800e5fa8(void)
 * Address ranges: 1800e5fa8-1800e6027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e5fa8(longlong *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x28) < param_3) {
      (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0xc4);
      (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0xc4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

