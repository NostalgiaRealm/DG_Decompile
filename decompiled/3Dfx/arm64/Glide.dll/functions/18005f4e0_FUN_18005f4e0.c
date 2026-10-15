/*
 * FUN_18005f4e0 at 18005f4e0
 * int __cdecl FUN_18005f4e0(undefined8 * param_1)
 * Address ranges: 18005f4e0-18005f533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005f4e0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1800616f0((uint *)(param_1 + 3));
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_180067238;
    thunk_FUN_180060a18((LPVOID)param_1[2]);
    FUN_180060a18(param_1);
  }
  return iVar1;
}

