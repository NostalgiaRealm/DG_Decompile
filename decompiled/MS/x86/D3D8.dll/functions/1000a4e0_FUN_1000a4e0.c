/*
 * FUN_1000a4e0 at 1000a4e0
 * undefined __fastcall FUN_1000a4e0(int param_1, int * param_2, uint * param_3)
 * Address ranges: 1000a4e0-1000a510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000a4e0(int param_1,int *param_2,uint *param_3)

{
  byte *pbVar1;
  
  if ((char)param_3[1] != '\0') {
    pbVar1 = (byte *)(param_1 + 0x10 + ((int)(uint)(byte)*param_3 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)*param_3 & 7));
    return;
  }
  FUN_1000199d(param_2,*param_3,0,0x8f02,0xffffffff,0,0);
  return;
}

