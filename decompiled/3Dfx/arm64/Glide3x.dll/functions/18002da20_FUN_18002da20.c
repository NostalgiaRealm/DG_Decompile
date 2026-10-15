/*
 * FUN_18002da20 at 18002da20
 * undefined __cdecl FUN_18002da20(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 18002da20-18002da27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002da20(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_18002d0f8(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_180011b28(*(longlong *)(param_1 + 0x280));
    FUN_18002d098(param_1);
    FUN_18002cf78(param_1,(byte)param_2,(byte)param_3);
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330) + 0x620))
    ;
  }
  return;
}

