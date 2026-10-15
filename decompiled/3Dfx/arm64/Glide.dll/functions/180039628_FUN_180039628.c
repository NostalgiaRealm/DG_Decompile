/*
 * FUN_180039628 at 180039628
 * undefined __cdecl FUN_180039628(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180039628-18003968b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039628(longlong param_1,byte param_2,byte param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180038ea8(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_18001e6a0(*(longlong *)(param_1 + 0x60));
    FUN_180038e48(param_1);
    FUN_180038d28(param_1,param_2,param_3);
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0) + 0x620));
  }
  return;
}

