/*
 * FUN_1004cdaa at 1004cdaa
 * bool __fastcall FUN_1004cdaa(int param_1)
 * Address ranges: 1004cdaa-1004cde6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1004cdaa(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1004d33b((void *)(param_1 + 0x50),(uint *)&stack0x00000004);
  if (piVar1 != (int *)0x0) {
    *(undefined1 *)(*piVar1 * 0x30 + 0x2d + *(int *)(param_1 + 0x28)) = 1;
    FUN_1004d37a((void *)(param_1 + 0x50),(uint *)&stack0x00000004);
  }
  return piVar1 != (int *)0x0;
}

