/*
 * FUN_10030024 at 10030024
 * undefined1 __fastcall FUN_10030024(int param_1)
 * Address ranges: 10030024-1003004c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10030024(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x24);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x2c);
    }
    if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) break;
    pcVar1 = (char *)FUN_1002feb2(param_1);
    *(char **)(param_1 + 0x24) = pcVar1;
  }
  return 1;
}

