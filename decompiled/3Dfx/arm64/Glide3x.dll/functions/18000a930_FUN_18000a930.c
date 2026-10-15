/*
 * FUN_18000a930 at 18000a930
 * uint __cdecl FUN_18000a930(longlong param_1)
 * Address ranges: 18000a930-18000a973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000a930(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = FUN_180009768(param_1);
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

