/*
 * FUN_100569bf at 100569bf
 * uint __fastcall FUN_100569bf(int param_1, int param_2, char param_3)
 * Address ranges: 100569bf-10056a5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100569bf(int param_1,int param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar3 = 0;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x34) != '\0') {
    do {
      if (uVar4 != 0) {
        return uVar4;
      }
      bVar1 = *(byte *)(uVar3 + *(int *)(param_1 + 0x30));
      local_8 = 0;
      bVar2 = ('\x01' << ((byte)param_2 & 0x1f)) - 1;
      do {
        if ((bVar2 & bVar1) == 0) {
          uVar4 = (param_2 << 2 | local_8) << 0x12 | uVar3 | 0x10000;
          if (param_3 != '\0') {
            *(byte *)(uVar3 + *(int *)(param_1 + 0x30)) = bVar1 | bVar2;
          }
          if (*(byte *)(param_1 + 0x35) <= uVar3) {
            *(char *)(param_1 + 0x35) = (char)uVar3 + '\x01';
          }
          break;
        }
        bVar2 = bVar2 * '\x02';
        local_8 = local_8 + 1;
      } while (local_8 <= 4U - param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x34));
  }
  return uVar4;
}

