/*
 * FUN_10024198 at 10024198
 * undefined FUN_10024198(void)
 * Address ranges: 10024198-1002422b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024198(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 - 10;
  if ((*(byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x278) * 4) >> (ulonglong)(uVar3 & 7)
      & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0xabc) + param_2 * 0x40;
    FUN_1002f7f0(iVar2,iVar2 + 0x4280,1);
    pbVar1 = (byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x278) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
  return;
}

