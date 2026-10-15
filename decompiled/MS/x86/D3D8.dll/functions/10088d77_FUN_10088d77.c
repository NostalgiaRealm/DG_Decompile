/*
 * FUN_10088d77 at 10088d77
 * undefined1 __fastcall FUN_10088d77(int param_1)
 * Address ranges: 10088d77-10088d9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10088d77(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x24);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return *(undefined1 *)(param_1 + 0x2c);
    }
    if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) break;
    pcVar1 = (char *)FUN_10088c05(param_1);
    *(char **)(param_1 + 0x24) = pcVar1;
  }
  return 1;
}

