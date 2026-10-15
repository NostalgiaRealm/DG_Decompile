/*
 * FUN_180053350 at 180053350
 * bool __cdecl FUN_180053350(longlong param_1, longlong param_2)
 * Address ranges: 180053350-1800533c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180053350(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x0;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  bVar2 = FUN_180051f70(extraout_x0,param_2);
  cVar1 = *(char *)(param_2 + 0xd6d);
  *(bool *)(param_2 + 0xd6d) = bVar2;
  *(byte *)(param_2 + 0xd6e) = bVar2 != (bool)cVar1 | *(byte *)(param_2 + 0xd6e);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return bVar2;
}

