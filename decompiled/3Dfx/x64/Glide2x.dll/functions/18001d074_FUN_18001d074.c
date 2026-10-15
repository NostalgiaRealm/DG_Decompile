/*
 * FUN_18001d074 at 18001d074
 * bool __fastcall FUN_18001d074(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d074-18001d0b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18001d074(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  FUN_18001cf18(param_1,param_2,param_3,param_4);
  bVar1 = FUN_18001c2a0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return bVar1;
}

