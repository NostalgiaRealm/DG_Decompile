/*
 * FUN_18002d760 at 18002d760
 * ushort __fastcall FUN_18002d760(longlong param_1, ushort param_2, ushort param_3, ushort param_4, ushort param_5, byte param_6, char param_7)
 * Address ranges: 18002d760-18002d86c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_18002d760(longlong param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                    byte param_6,char param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((((((((byte)param_2 & 0xf0) == 0xf0) && ((param_6 & ((param_2 & 0x1000) != 0) + 7U) != 0)) ||
        ((((byte)param_3 & 0xf0) == 0xf0 && ((param_6 & ((param_3 & 0x1000) != 0) + 7U) != 0)))) ||
       ((((byte)param_4 & 0xf0) == 0xf0 && ((param_6 & ((param_4 & 0x1000) != 0) + 7U) != 0)))) ||
      ((((byte)param_5 & 0xf0) == 0xf0 && ((param_6 & ((param_5 & 0x1000) != 0) + 7U) != 0)))) ||
     (*(char *)(param_1 + 0xac) != '\0')) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa8) != 0) {
      return 0xf0;
    }
    uVar1 = 0;
  }
  if (param_7 != '\0') {
    *(undefined1 *)(param_1 + 0xac) = uVar1;
  }
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x98 + uVar4 * 4) == 0) {
      iVar2 = 1;
      if (param_6 == 7) {
        iVar2 = 3;
      }
      if (param_6 == 0xf) {
        iVar2 = 4;
      }
      uVar3 = FUN_180056854(param_1,iVar2,'\x01');
      *(uint *)(param_1 + 0x98 + uVar4 * 4) = uVar3;
      return (ushort)uVar4 | 0x80;
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < 4);
  return 0xf0;
}

