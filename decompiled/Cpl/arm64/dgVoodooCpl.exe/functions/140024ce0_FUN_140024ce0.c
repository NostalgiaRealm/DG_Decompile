/*
 * FUN_140024ce0 at 140024ce0
 * uint __cdecl FUN_140024ce0(byte * param_1, byte * param_2)
 * Address ranges: 140024ce0-140024d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_140024ce0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  while( true ) {
    uVar4 = (uint)bVar1;
    uVar3 = (uint)bVar2;
    if (uVar4 != uVar3) break;
    if (*param_2 == 0) goto LAB_140024d10;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    param_2 = param_2 + 1;
    bVar2 = *param_2;
  }
  if ((int)(uVar4 - uVar3) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_140024d10:
    uVar3 = (uint)(uVar4 != uVar3);
  }
  return uVar3;
}

