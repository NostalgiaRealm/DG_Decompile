/*
 * FUN_1800110ec at 1800110ec
 * undefined1 __fastcall FUN_1800110ec(ulonglong param_1)
 * Address ranges: 1800110ec-18001110e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800110ec(ulonglong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1800057b0(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x5c) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

