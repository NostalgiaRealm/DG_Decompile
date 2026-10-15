/*
 * FUN_1800fc448 at 1800fc448
 * undefined FUN_1800fc448(void)
 * Address ranges: 1800fc448-1800fc4a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800fc448(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1b500);
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
  pcVar2 = __imp_KERNEL32_dll_LeaveCriticalSection;
  uVar1 = *(undefined1 *)(lVar3 + 0x50);
  *(undefined1 *)(lVar3 + 0x50) = param_2;
  (*pcVar2)(lVar3 + 0x28);
  return uVar1;
}

