/*
 * FUN_10024437 at 10024437
 * ushort __fastcall FUN_10024437(uint param_1, int param_2, ushort param_3, ushort param_4, ushort param_5, char param_6, int param_7)
 * Address ranges: 10024437-1002450c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall
FUN_10024437(uint param_1,int param_2,ushort param_3,ushort param_4,ushort param_5,char param_6,
            int param_7)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = FUN_10024296(0,param_2);
  uVar2 = param_1 & 0x200;
  if ((param_1 & 1) != 0) {
    uVar1 = FUN_10024296(-(ushort)(param_6 != '\0' || uVar2 != 0) & 0x1000 | param_3,param_2);
  }
  if ((param_1 & 0x40) != 0) {
    uVar1 = FUN_10024296((-(ushort)(param_6 != '\0' || uVar2 != 0) & 0x1000) + 0x2040,param_2);
  }
  if ((param_1 & 8) != 0) {
    uVar1 = FUN_10024296((-(ushort)(param_6 != '\0' || uVar2 != 0) & 0x1000) + 0x2050,param_2);
  }
  if (param_6 == '\0') {
    if (((param_7 == 3) || (param_7 == 4)) && ((param_1 & 2) != 0)) {
      uVar1 = param_4 | 0x1000;
    }
    if ((param_7 == 3) && ((param_1 & 4) != 0)) {
      uVar1 = param_5 | 0x1000;
    }
  }
  return uVar1;
}

