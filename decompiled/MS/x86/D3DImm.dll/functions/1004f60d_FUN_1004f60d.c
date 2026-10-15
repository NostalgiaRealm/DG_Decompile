/*
 * FUN_1004f60d at 1004f60d
 * undefined __fastcall FUN_1004f60d(int * param_1)
 * Address ranges: 1004f60d-1004f62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004f60d(int *param_1)

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
      FUN_1005152d((int)piVar1);
                    /* WARNING: Could not recover jumptable at 0x1004f62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))();
      return;
    }
  }
  return;
}

