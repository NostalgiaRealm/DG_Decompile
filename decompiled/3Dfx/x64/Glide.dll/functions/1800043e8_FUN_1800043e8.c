/*
 * FUN_1800043e8 at 1800043e8
 * undefined __fastcall FUN_1800043e8(undefined8 * param_1)
 * Address ranges: 1800043e8-18000442b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800043e8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0xd);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_18000445c((longlong)param_1,'\0');
      FUN_1800040b4((longlong)param_1);
      FUN_180004190(param_1);
      FUN_18005dbc0(param_1);
    }
  }
  return;
}

