/*
 * FUN_1800387d0 at 1800387d0
 * undefined __cdecl FUN_1800387d0(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 1800387d0-1800387d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800387d0(longlong param_1,byte param_2,byte param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180038058(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_18001d850(*(longlong *)(param_1 + 0x60));
    FUN_180037ff8(param_1);
    FUN_180037ed8(param_1,param_2,param_3);
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0) + 0x620));
  }
  return;
}

