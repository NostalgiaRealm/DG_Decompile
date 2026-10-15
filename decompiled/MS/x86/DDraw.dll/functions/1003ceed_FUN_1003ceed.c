/*
 * FUN_1003ceed at 1003ceed
 * undefined1 __fastcall FUN_1003ceed(int param_1)
 * Address ranges: 1003ceed-1003cf15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1003ceed(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x24);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x2c);
    }
    if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) break;
    pcVar1 = (char *)FUN_1003cd7b(param_1);
    *(char **)(param_1 + 0x24) = pcVar1;
  }
  return 1;
}

