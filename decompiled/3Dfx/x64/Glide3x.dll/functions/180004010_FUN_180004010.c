/*
 * FUN_180004010 at 180004010
 * undefined __fastcall FUN_180004010(undefined8 * param_1)
 * Address ranges: 180004010-180004053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004010(undefined8 *param_1)

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
      FUN_180004084((longlong)param_1,'\0');
      FUN_180003cd4((longlong)param_1);
      FUN_180003f0c(param_1);
      FUN_180060ac0(param_1);
    }
  }
  return;
}

