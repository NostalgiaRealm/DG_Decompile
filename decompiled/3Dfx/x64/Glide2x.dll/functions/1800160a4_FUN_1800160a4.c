/*
 * FUN_1800160a4 at 1800160a4
 * uint __fastcall FUN_1800160a4(longlong param_1)
 * Address ranges: 1800160a4-1800160d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800160a4(longlong param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_180015224(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x827);
    if (5 < uVar2) {
      uVar2 = 4;
    }
  }
  return uVar2;
}

