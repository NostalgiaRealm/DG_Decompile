/*
 * FUN_1005e375 at 1005e375
 * uint __stdcall FUN_1005e375(byte param_1)
 * Address ranges: 1005e375-1005e399
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005e375(byte param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 4;
  do {
    uVar1 = uVar1 & 0xff | 1 << (param_1 & 3);
    param_1 = param_1 >> 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

