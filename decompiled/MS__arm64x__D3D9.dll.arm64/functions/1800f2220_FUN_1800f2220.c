/*
 * FUN_1800f2220 at 1800f2220
 * undefined FUN_1800f2220(void)
 * Address ranges: 1800f2220-1800f2287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800f2220(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  uVar1 = 1;
  local_20[0] = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  lVar2 = FUN_1800f24c0(param_1 + 0x10,local_20);
  if (lVar2 != 0) {
    uVar1 = FUN_1800f1048(lVar2,lVar2,1);
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return uVar1;
}

