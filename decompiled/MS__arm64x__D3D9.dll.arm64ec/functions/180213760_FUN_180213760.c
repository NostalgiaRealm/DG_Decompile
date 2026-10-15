/*
 * FUN_180213760 at 180213760
 * undefined FUN_180213760(void)
 * Address ranges: 180213760-1802137fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180213760(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar5 = 0;
    do {
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar3 = 0;
      uVar6 = (1 << (ulonglong)(param_2 & 0x1f)) + 0xff;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x30) + uVar5);
      do {
        uVar4 = (uint)uVar5;
        if ((uVar6 & bVar1) == 0) {
          uVar2 = uVar4 | (uVar3 | param_2 << 2) << 0x12 | 0x10000;
          if ((param_3 & 1) != 0) {
            *(byte *)(*(longlong *)(param_1 + 0x30) + uVar5) = bVar1 | (byte)uVar6;
          }
          if (*(byte *)(param_1 + 0x39) <= uVar4) {
            *(char *)(param_1 + 0x39) = (char)uVar5 + '\x01';
          }
          break;
        }
        uVar3 = uVar3 + 1;
        uVar6 = (uVar6 & 0xff) << 1;
      } while (uVar3 <= 4 - param_2);
      uVar5 = (ulonglong)(uVar4 + 1);
    } while (uVar4 + 1 < (uint)*(byte *)(param_1 + 0x38));
  }
  return uVar2;
}

