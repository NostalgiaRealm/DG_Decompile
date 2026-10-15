/*
 * FUN_10050ffc at 10050ffc
 * undefined __fastcall FUN_10050ffc(int param_1)
 * Address ranges: 10050ffc-1005104e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10050ffc(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    piVar1 = *(int **)(param_1 + 0x2c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
    FUN_100514b1(param_1);
    FUN_1005152d(param_1 + 8);
    FUN_10050e7c(param_1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
    *(undefined1 *)(param_1 + 0x2d4) = 0;
  }
  return;
}

