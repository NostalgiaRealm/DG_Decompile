/*
 * FUN_180026f30 at 180026f30
 * undefined __fastcall FUN_180026f30(longlong param_1)
 * Address ranges: 180026f30-180026f7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026f30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = lVar2 * 0x170;
    if ((*(char *)(lVar1 + 0x1e1 + param_1) != '\0') &&
       (*(longlong *)(lVar1 + 0x1a8 + param_1) != 0)) {
      FUN_180027e90(param_1 + 0x148 + lVar1);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}

