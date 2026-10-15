/*
 * FUN_100425e8 at 100425e8
 * undefined __fastcall FUN_100425e8(int param_1)
 * Address ranges: 100425e8-1004263a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100425e8(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    piVar1 = *(int **)(param_1 + 0x2c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
    FUN_10044f2e(param_1);
    FUN_10002edb(param_1 + 8);
    FUN_10042468(param_1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
    *(undefined1 *)(param_1 + 0x2d4) = 0;
  }
  return;
}

