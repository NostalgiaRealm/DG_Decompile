/*
 * FUN_18005c3b0 at 18005c3b0
 * int __fastcall FUN_18005c3b0(undefined8 * param_1)
 * Address ranges: 18005c3b0-18005c3f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005c3b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined8 *)0x0)) {
    *param_1 = &PTR_FUN_180065228;
    FUN_18005dbc0((LPVOID)param_1[2]);
    FUN_18005dbc0(param_1);
  }
  return iVar2 + -1;
}

