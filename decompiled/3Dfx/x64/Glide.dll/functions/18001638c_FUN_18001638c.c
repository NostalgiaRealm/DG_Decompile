/*
 * FUN_18001638c at 18001638c
 * uint __fastcall FUN_18001638c(longlong param_1)
 * Address ranges: 18001638c-1800163bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001638c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_180015564(param_1);
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

