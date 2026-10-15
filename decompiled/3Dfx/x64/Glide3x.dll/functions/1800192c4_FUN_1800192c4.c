/*
 * FUN_1800192c4 at 1800192c4
 * undefined __fastcall FUN_1800192c4(longlong param_1)
 * Address ranges: 1800192c4-180019311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800192c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = lVar2 * 0x170;
    if ((*(char *)(lVar1 + 0x1e1 + param_1) != '\0') &&
       (*(longlong *)(lVar1 + 0x1a8 + param_1) != 0)) {
      FUN_18001a1fc(param_1 + 0x148 + lVar1);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  return;
}

