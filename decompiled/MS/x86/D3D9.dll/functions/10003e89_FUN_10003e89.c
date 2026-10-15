/*
 * FUN_10003e89 at 10003e89
 * undefined __fastcall FUN_10003e89(char * param_1)
 * Address ranges: 10003e89-10003ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10003e89(char *param_1)

{
  if (*param_1 != '\0') {
    LeaveCriticalSection(DAT_100deaa4);
    return;
  }
  DAT_100deaa4[1].LockCount = 0;
  return;
}

