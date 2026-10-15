/*
 * FUN_10056357 at 10056357
 * undefined __stdcall FUN_10056357(int param_1)
 * Address ranges: 10056357-10056378;10056388-1005638c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Switch with 1 destination removed at 0x10056372 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_10056357(int param_1)

{
  uint uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x1af) != '\0') {
    cVar2 = '\0';
    uVar1 = 0;
    do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      *(char *)(param_1 + 0x136 + uVar1) = cVar2;
      cVar2 = cVar2 + '\x01';
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x11);
  }
  return;
}

