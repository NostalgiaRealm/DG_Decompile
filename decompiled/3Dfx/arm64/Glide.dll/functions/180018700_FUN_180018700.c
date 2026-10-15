/*
 * FUN_180018700 at 180018700
 * uint __cdecl FUN_180018700(longlong param_1)
 * Address ranges: 180018700-180018743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180018700(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = FUN_180017938(param_1);
  if ((bVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x827);
    uVar3 = 4;
    if (uVar1 < 6) {
      uVar3 = uVar1;
    }
  }
  return uVar3;
}

