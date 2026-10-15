/*
 * FUN_1006bac6 at 1006bac6
 * undefined __stdcall FUN_1006bac6(int param_1)
 * Address ranges: 1006bac6-1006bae7;1006baf7-1006bafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Switch with 1 destination removed at 0x1006bae1 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1006bac6(int param_1)

{
  uint uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x1b3) != '\0') {
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

