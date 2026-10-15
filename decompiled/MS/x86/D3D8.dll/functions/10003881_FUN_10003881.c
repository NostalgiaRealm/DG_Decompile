/*
 * FUN_10003881 at 10003881
 * undefined __fastcall FUN_10003881(char * param_1)
 * Address ranges: 10003881-1000389f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10003881(char *param_1)

{
  if (*param_1 != '\0') {
    LeaveCriticalSection(DAT_100ba2e4);
    return;
  }
  DAT_100ba2e4[1].LockCount = 0;
  return;
}

