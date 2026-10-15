/*
 * FUN_180062070 at 180062070
 * int __cdecl FUN_180062070(undefined8 * param_1)
 * Address ranges: 180062070-1800620c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180062070(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1800643d0((uint *)(param_1 + 3));
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_18006a4c8;
    thunk_FUN_180063700((LPVOID)param_1[2]);
    FUN_180063700(param_1);
  }
  return iVar1;
}

