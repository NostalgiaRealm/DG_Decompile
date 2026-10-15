/*
 * FUN_18000b438 at 18000b438
 * undefined1 __cdecl FUN_18000b438(longlong param_1)
 * Address ranges: 18000b438-18000b487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18000b438(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x50);
    }
    if (*pcVar1 != ' ' && *pcVar1 != '\t') break;
    pcVar1 = (char *)FUN_18000ae18(param_1);
    *(char **)(param_1 + 0x40) = pcVar1;
  }
  return 1;
}

