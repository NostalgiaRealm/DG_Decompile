/*
 * FUN_1002cc14 at 1002cc14
 * undefined1 __fastcall FUN_1002cc14(int param_1)
 * Address ranges: 1002cc14-1002cc3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1002cc14(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x24);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x2c);
    }
    if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) break;
    pcVar1 = (char *)FUN_1002caa2(param_1);
    *(char **)(param_1 + 0x24) = pcVar1;
  }
  return 1;
}

