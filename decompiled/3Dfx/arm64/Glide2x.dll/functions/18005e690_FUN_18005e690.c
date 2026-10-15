/*
 * FUN_18005e690 at 18005e690
 * int __cdecl FUN_18005e690(undefined8 * param_1)
 * Address ranges: 18005e690-18005e6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005e690(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1800608a0((uint *)(param_1 + 3));
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_180066238;
    thunk_FUN_18005fbc8((LPVOID)param_1[2]);
    FUN_18005fbc8(param_1);
  }
  return iVar1;
}

