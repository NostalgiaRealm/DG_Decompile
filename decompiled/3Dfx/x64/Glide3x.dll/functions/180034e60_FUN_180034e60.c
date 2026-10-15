/*
 * FUN_180034e60 at 180034e60
 * undefined8 __fastcall FUN_180034e60(longlong param_1)
 * Address ranges: 180034e60-180034eaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180034e60(longlong param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 0x40);
  do {
    if (pcVar3 == (char *)0x0) {
      uVar1 = *(undefined1 *)(param_1 + 0x50);
LAB_180034ea6:
      return CONCAT71((int7)((ulonglong)pcVar3 >> 8),uVar1);
    }
    if ((*pcVar3 != ' ') && (*pcVar3 != '\t')) {
      uVar1 = 1;
      goto LAB_180034ea6;
    }
    *(char **)(param_1 + 0x40) = pcVar3 + 1;
    if (pcVar3 + 1 == *(char **)(param_1 + 0x48)) {
      uVar2 = FUN_180034e04(param_1);
      if ((char)uVar2 == '\0') {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x40);
  } while( true );
}

