/*
 * FUN_1000d5ac at 1000d5ac
 * undefined1 __fastcall FUN_1000d5ac(int param_1)
 * Address ranges: 1000d5ac-1000d5c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1000d5ac(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_1000403e();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x38) != '\0')) {
    return 1;
  }
  return 0;
}

