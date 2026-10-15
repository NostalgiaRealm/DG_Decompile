/*
 * FUN_1006ec30 at 1006ec30
 * undefined FUN_1006ec30(void)
 * Address ranges: 1006ec30-1006ece3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1006ec30(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (*(byte *)(param_1 + 0x34) != 0) {
    uVar6 = 0;
    do {
      if (uVar4 != 0) {
        return uVar4;
      }
      uVar5 = 0;
      pbVar1 = (byte *)(uVar6 + *(int *)(param_1 + 0x30));
      bVar2 = *pbVar1;
      uVar3 = (1 << (ulonglong)(param_2 & 0x1f)) + 0xff;
      do {
        if ((uVar3 & 0xff & (uint)bVar2) == 0) {
          uVar4 = uVar6 | (uVar5 | param_2 << 2) << 0x12 | 0x10000;
          if ((param_3 & 1) != 0) {
            *pbVar1 = (byte)uVar3 | bVar2;
          }
          if (*(byte *)(param_1 + 0x35) <= uVar6) {
            *(byte *)(param_1 + 0x35) = (char)uVar6 + 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        uVar3 = (uVar3 & 0xff) << 1;
      } while (uVar5 <= 4 - param_2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x34));
  }
  return uVar4;
}

