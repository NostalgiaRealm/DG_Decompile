/*
 * FUN_100c0410 at 100c0410
 * undefined FUN_100c0410(void)
 * Address ranges: 100c0410-100c042b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c0410(int param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *(char *)(param_1 + 0x3d) = '\x02';
  }
  return;
}

