/*
 * FUN_1800e5470 at 1800e5470
 * undefined FUN_1800e5470(void)
 * Address ranges: 1800e5470-1800e54bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800e5470(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x620);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x618);
    *(longlong *)(param_1 + 0x618) = param_3;
    bVar1 = lVar2 != param_3;
  }
  return bVar1;
}

