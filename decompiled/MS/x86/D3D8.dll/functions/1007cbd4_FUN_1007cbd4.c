/*
 * FUN_1007cbd4 at 1007cbd4
 * undefined1 __stdcall FUN_1007cbd4(int param_1)
 * Address ranges: 1007cbd4-1007cbf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1007cbd4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) || (cVar1 == '\x03')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

