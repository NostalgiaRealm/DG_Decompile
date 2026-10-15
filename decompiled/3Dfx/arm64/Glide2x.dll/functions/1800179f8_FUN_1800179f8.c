/*
 * FUN_1800179f8 at 1800179f8
 * uint __cdecl FUN_1800179f8(longlong param_1)
 * Address ranges: 1800179f8-180017a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800179f8(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = FUN_180016a28(param_1);
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

