/*
 * FUN_1004b300 at 1004b300
 * undefined FUN_1004b300(void)
 * Address ranges: 1004b300-1004b3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b300(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  uVar1 = param_3 & 0xf0;
  if (uVar1 < 0x30) {
    if (uVar1 == 0x10) {
      param_1 = (param_3 & 0xf) + param_1;
      pbVar3 = (byte *)(param_1 + 0x38);
      *pbVar3 = *pbVar3 | 7;
      pbVar3 = (byte *)(param_1 + 0xa5);
    }
    else {
      if (uVar1 != 0x20) {
        return;
      }
      param_1 = (param_3 & 0xf) + param_1;
      pbVar3 = (byte *)(param_1 + 0x38);
      *pbVar3 = *pbVar3 | 7;
      pbVar3 = (byte *)(param_1 + 0xab);
    }
  }
  else {
    if (0x30 < uVar1) {
      if (uVar1 != 0x40) {
        return;
      }
      bVar2 = 7;
      if ((param_3 & 0x1000) != 0) {
        bVar2 = 8;
      }
      *(byte *)(param_1 + 0x3b) = bVar2 | *(byte *)(param_1 + 0x3b);
      return;
    }
    param_1 = (param_3 & 0xf) + param_1;
    pbVar3 = (byte *)(param_1 + 0x38);
    *pbVar3 = *pbVar3 | 7;
    pbVar3 = (byte *)(param_1 + 0xa8);
  }
  if (param_2 < *pbVar3) {
    *pbVar3 = (byte)param_2;
  }
  return;
}

