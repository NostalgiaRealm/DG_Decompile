/*
 * FUN_10044d40 at 10044d40
 * undefined __fastcall FUN_10044d40(int param_1)
 * Address ranges: 10044d40-10044d92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10044d40(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    piVar1 = *(int **)(param_1 + 0x2c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
    FUN_10047686(param_1);
    FUN_10002ca3(param_1 + 8);
    FUN_10044bc0(param_1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
    *(undefined1 *)(param_1 + 0x2d4) = 0;
  }
  return;
}

