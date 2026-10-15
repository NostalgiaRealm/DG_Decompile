/*
 * FUN_10022d7c at 10022d7c
 * undefined __fastcall FUN_10022d7c(int param_1)
 * Address ranges: 10022d7c-10022dda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022d7c(int param_1)

{
  uint *puVar1;
  char cVar2;
  HWND pHVar3;
  int *piVar4;
  
  pHVar3 = FUN_100245b0((void *)(param_1 + -0x10),'\0');
  if (pHVar3 != (HWND)0x0) {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x30))(pHVar3,0,0,4,2,2,0,0,0);
    if (piVar4 != (int *)0x0) {
      cVar2 = FUN_10025316((void *)(param_1 + -0x10));
      if ((cVar2 == '\0') && (*(int *)(param_1 + 0xe4) != 0)) {
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 200);
        *puVar1 = *puVar1 | 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x10022dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 0x10))();
      return;
    }
  }
  return;
}

