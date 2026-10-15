/*
 * FUN_100b42a6 at 100b42a6
 * undefined __fastcall FUN_100b42a6(int * param_1)
 * Address ranges: 100b42a6-100b42c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b42a6(int *param_1)

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
      FUN_100b9973((int)piVar1);
                    /* WARNING: Could not recover jumptable at 0x100b42c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))();
      return;
    }
  }
  return;
}

