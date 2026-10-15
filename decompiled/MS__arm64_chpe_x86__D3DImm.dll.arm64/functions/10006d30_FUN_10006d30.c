/*
 * FUN_10006d30 at 10006d30
 * undefined FUN_10006d30(void)
 * Address ranges: 10006d30-10006dbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006d30(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 - 10;
  if ((*(byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x244) * 4) >> (ulonglong)(uVar3 & 7)
      & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x9cc) + param_2 * 0x40;
    FUN_100126d8(iVar2,iVar2 + 0x380,1);
    pbVar1 = (byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x244) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
  return;
}

