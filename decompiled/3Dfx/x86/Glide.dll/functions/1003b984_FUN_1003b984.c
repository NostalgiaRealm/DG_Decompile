/*
 * FUN_1003b984 at 1003b984
 * undefined __fastcall FUN_1003b984(int * param_1)
 * Address ranges: 1003b984-1003b9a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003b984(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = param_1 + 2;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      FUN_10002edb((int)piVar1);
                    /* WARNING: Could not recover jumptable at 0x1003b9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))();
      return;
    }
  }
  return;
}

