/*
 * FUN_1000285a at 1000285a
 * uint __fastcall FUN_1000285a(byte * param_1, uint param_2)
 * Address ranges: 1000285a-1000287e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000285a(byte *param_1,uint param_2)

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

