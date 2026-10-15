/*
 * FUN_100064e6 at 100064e6
 * undefined1 __fastcall FUN_100064e6(int param_1)
 * Address ranges: 100064e6-1000650e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100064e6(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x24);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x2c);
    }
    if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) break;
    pcVar1 = (char *)FUN_10006374(param_1);
    *(char **)(param_1 + 0x24) = pcVar1;
  }
  return 1;
}

