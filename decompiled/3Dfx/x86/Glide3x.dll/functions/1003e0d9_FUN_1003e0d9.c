/*
 * FUN_1003e0d9 at 1003e0d9
 * undefined __fastcall FUN_1003e0d9(int * param_1)
 * Address ranges: 1003e0d9-1003e0fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003e0d9(int *param_1)

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
      FUN_10002ca3((int)piVar1);
                    /* WARNING: Could not recover jumptable at 0x1003e0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))();
      return;
    }
  }
  return;
}

