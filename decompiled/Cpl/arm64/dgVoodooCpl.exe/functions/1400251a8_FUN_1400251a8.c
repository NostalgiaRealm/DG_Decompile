/*
 * FUN_1400251a8 at 1400251a8
 * uint __cdecl FUN_1400251a8(ushort * param_1, ushort * param_2)
 * Address ranges: 1400251a8-1400251e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1400251a8(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  while( true ) {
    uVar4 = (uint)uVar1;
    uVar3 = (uint)uVar2;
    if (uVar4 != uVar3) break;
    if (*param_2 == 0) goto LAB_1400251d8;
    param_1 = param_1 + 1;
    uVar1 = *param_1;
    param_2 = param_2 + 1;
    uVar2 = *param_2;
  }
  if ((int)(uVar4 - uVar3) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_1400251d8:
    uVar3 = (uint)(uVar4 != uVar3);
  }
  return uVar3;
}

