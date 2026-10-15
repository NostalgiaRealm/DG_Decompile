/*
 * FUN_1800e6328 at 1800e6328
 * undefined FUN_1800e6328(void)
 * Address ranges: 1800e6328-1800e639b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800e6328(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x620);
  cVar2 = FUN_1800e5040(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd6d);
  *(char *)(param_2 + 0xd6d) = cVar2;
  *(byte *)(param_2 + 0xd6e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd6e);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x620);
  return cVar2;
}

