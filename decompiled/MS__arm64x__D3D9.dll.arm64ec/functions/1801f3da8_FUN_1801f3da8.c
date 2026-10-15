/*
 * FUN_1801f3da8 at 1801f3da8
 * undefined FUN_1801f3da8(void)
 * Address ranges: 1801f3da8-1801f3df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1801f3da8(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x50);
    }
    if (*pcVar1 != ' ' && *pcVar1 != '\t') break;
    pcVar1 = (char *)FUN_1801f3740(param_1);
    *(char **)(param_1 + 0x40) = pcVar1;
  }
  return 1;
}

