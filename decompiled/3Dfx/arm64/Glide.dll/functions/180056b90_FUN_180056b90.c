/*
 * FUN_180056b90 at 180056b90
 * uint __cdecl FUN_180056b90(longlong param_1, uint param_2, byte param_3)
 * Address ranges: 180056b90-180056c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180056b90(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar4 = 0;
    do {
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar6 = 0;
      uVar5 = (1 << (ulonglong)(param_2 & 0x1f)) + 0xff;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x30) + uVar4);
      do {
        uVar3 = (uint)uVar4;
        if ((uVar5 & bVar1) == 0) {
          uVar2 = uVar3 | (uVar6 | param_2 << 2) << 0x12 | 0x10000;
          if ((param_3 & 1) != 0) {
            *(byte *)(*(longlong *)(param_1 + 0x30) + uVar4) = bVar1 | (byte)uVar5;
          }
          if (*(byte *)(param_1 + 0x39) <= uVar3) {
            *(char *)(param_1 + 0x39) = (char)uVar4 + '\x01';
          }
          break;
        }
        uVar6 = uVar6 + 1;
        uVar5 = (uVar5 & 0xff) << 1;
      } while (uVar6 <= 4 - param_2);
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < (uint)*(byte *)(param_1 + 0x38));
  }
  return uVar2;
}

