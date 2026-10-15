/*
 * FUN_18000feb8 at 18000feb8
 * bool __fastcall FUN_18000feb8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000feb8-18000fef4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000feb8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  FUN_18000fd5c(param_1,param_2,param_3,param_4);
  bVar1 = FUN_18000f12c(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return bVar1;
}

