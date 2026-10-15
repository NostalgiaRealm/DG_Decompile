/*
 * FUN_100ab970 at 100ab970
 * undefined FUN_100ab970(void)
 * Address ranges: 100ab970-100ab9c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab970(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  uVar1 = param_2 + param_3 * 0x10;
  param_1 = param_1 + ((uVar1 >> 5) + 2) * 4;
  if ((param_4 & 1) == 0) {
    pbVar3 = (byte *)((uVar1 >> 3 & 3) + param_1);
    bVar2 = *pbVar3 & ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
  }
  else {
    pbVar3 = (byte *)((uVar1 >> 3 & 3) + param_1);
    bVar2 = *pbVar3 | (byte)(1 << (ulonglong)(uVar1 & 7));
  }
  *pbVar3 = bVar2;
  return;
}

