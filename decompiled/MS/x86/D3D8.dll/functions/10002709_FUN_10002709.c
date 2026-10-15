/*
 * FUN_10002709 at 10002709
 * uint __fastcall FUN_10002709(byte * param_1, uint param_2)
 * Address ranges: 10002709-1000272d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10002709(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  int iVar3;
  
  iVar3 = 0;
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0xff) {
      return in_EAX & 0xffffff00;
    }
    pbVar1 = param_1 + iVar3;
    in_EAX = (uint)*pbVar1;
    if (in_EAX == param_2) break;
    iVar3 = iVar3 + 1;
    bVar2 = pbVar1[1];
  }
  return 1;
}

