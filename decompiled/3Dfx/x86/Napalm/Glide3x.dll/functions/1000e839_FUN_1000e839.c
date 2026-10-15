/*
 * FUN_1000e839 at 1000e839
 * undefined1 __fastcall FUN_1000e839(int param_1)
 * Address ranges: 1000e839-1000e851
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1000e839(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_10004240();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x38) != '\0')) {
    return 1;
  }
  return 0;
}

