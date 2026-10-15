/*
 * FUN_180054248 at 180054248
 * uint __fastcall FUN_180054248(longlong param_1, int param_2, char param_3)
 * Address ranges: 180054248-1800542e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180054248(longlong param_1,int param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar6 = 0;
    do {
      if (uVar4 != 0) {
        return uVar4;
      }
      uVar3 = 0;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x30) + uVar6);
      bVar2 = ('\x01' << ((byte)param_2 & 0x1f)) - 1;
      do {
        uVar5 = (uint)uVar6;
        if ((bVar2 & bVar1) == 0) {
          uVar4 = (param_2 * 4 | uVar3) << 0x12 | uVar5 | 0x10000;
          if (param_3 != '\0') {
            *(byte *)(*(longlong *)(param_1 + 0x30) + uVar6) = bVar1 | bVar2;
          }
          if (*(byte *)(param_1 + 0x39) <= uVar5) {
            *(char *)(param_1 + 0x39) = (char)uVar6 + '\x01';
          }
          break;
        }
        bVar2 = bVar2 * '\x02';
        uVar3 = uVar3 + 1;
      } while (uVar3 <= 4U - param_2);
      uVar6 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < (uint)*(byte *)(param_1 + 0x38));
  }
  return uVar4;
}

