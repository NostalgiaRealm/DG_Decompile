/*
 * FUN_1800d7a28 at 1800d7a28
 * undefined FUN_1800d7a28(void)
 * Address ranges: 1800d7a28-1800d7a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800d7a28(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x50);
    }
    if (*pcVar1 != ' ' && *pcVar1 != '\t') break;
    pcVar1 = (char *)FUN_1800d7418(param_1);
    *(char **)(param_1 + 0x40) = pcVar1;
  }
  return 1;
}

