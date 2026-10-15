/*
 * FUN_10029c30 at 10029c30
 * undefined FUN_10029c30(void)
 * Address ranges: 10029c30-10029cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029c30(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 - 10;
  if ((*(byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x329) * 4) >> (ulonglong)(uVar3 & 7)
      & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0xd80) + param_2 * 0x40;
    FUN_100392f0(iVar2,iVar2 + 0x4280,1);
    pbVar1 = (byte *)((uVar3 >> 3 & 3) + param_1 + ((uVar3 >> 5) + 0x329) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar3 & 7));
  }
  return;
}

