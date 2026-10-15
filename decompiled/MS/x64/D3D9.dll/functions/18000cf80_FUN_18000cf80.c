/*
 * FUN_18000cf80 at 18000cf80
 * undefined __fastcall FUN_18000cf80(longlong param_1, longlong * param_2, uint * param_3)
 * Address ranges: 18000cf80-18000cfbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cf80(longlong param_1,longlong *param_2,uint *param_3)

{
  byte *pbVar1;
  
  if ((char)param_3[1] == '\0') {
    FUN_1800019cc(param_2,0x8f0200000000,*param_3,-1,0,0);
  }
  else {
    pbVar1 = (byte *)(param_1 + 0x10 + ((longlong)(int)(uint)(byte)*param_3 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)*param_3 & 7));
  }
  return;
}

