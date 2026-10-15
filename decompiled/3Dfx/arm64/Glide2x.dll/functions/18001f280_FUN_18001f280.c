/*
 * FUN_18001f280 at 18001f280
 * uint __cdecl FUN_18001f280(longlong param_1, uint param_2)
 * Address ranges: 18001f280-18001f2c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001f280(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    param_2 = param_2 >> 0x18 | param_2 << 8;
  }
  else if (iVar1 == 1) {
    uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    param_2 = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  else if (iVar1 == 3) {
    param_2 = param_2 >> 0x10 & 0xff00 | (param_2 & 0xffffff00) << 0x10 | param_2 & 0xff00ff;
  }
  return param_2;
}

