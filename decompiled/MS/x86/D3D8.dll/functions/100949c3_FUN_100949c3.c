/*
 * FUN_100949c3 at 100949c3
 * undefined __fastcall FUN_100949c3(int param_1)
 * Address ranges: 100949c3-10094a15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100949c3(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    piVar1 = *(int **)(param_1 + 0x2c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
    FUN_100972c6(param_1);
    FUN_10097342(param_1 + 8);
    FUN_10094843(param_1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
    *(undefined1 *)(param_1 + 0x2d4) = 0;
  }
  return;
}

