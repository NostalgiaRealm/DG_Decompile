/*
 * FUN_100242cc at 100242cc
 * ushort __fastcall FUN_100242cc(uint param_1, int param_2, ushort param_3, ushort param_4, char param_5, int param_6)
 * Address ranges: 100242cc-10024436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall
FUN_100242cc(uint param_1,int param_2,ushort param_3,ushort param_4,char param_5,int param_6)

{
  ushort uVar1;
  
  uVar1 = FUN_10024296(0,param_2);
  if ((((param_6 != 1) && (param_6 != 2)) && (param_6 != 3)) && (param_6 != 4)) goto LAB_100243b2;
  if ((param_1 & 1) != 0) {
    uVar1 = FUN_10024296(param_3 | (-(ushort)((param_1 & 0x200) != 0 || param_5 != '\0') & 0x1000) +
                                   0x2010,param_2);
  }
  if (((param_6 == 1) || (param_6 == 2)) || (param_6 == 3)) {
    if ((char)param_1 < '\0') {
      uVar1 = FUN_10024296(-(ushort)((param_1 & 0x200) != 0 || param_5 != '\0') & 0x1000 | param_4,
                           param_2);
    }
    if (((param_6 != 1) && (param_6 != 2)) && (param_6 != 3)) goto LAB_10024380;
  }
  else {
LAB_10024380:
    if (param_6 != 4) goto LAB_100243b2;
  }
  if ((param_1 & 0x40) != 0) {
    uVar1 = FUN_10024296((-(ushort)((param_1 & 0x200) != 0 || param_5 != '\0') & 0x1000) + 0x2040,
                         param_2);
  }
LAB_100243b2:
  if (param_6 == 3) {
    if ((param_1 & 0x10) != 0) {
      uVar1 = FUN_10024296(param_3 | 0x30,param_2);
    }
    if ((param_1 & 0x20) != 0) {
      uVar1 = FUN_10024296(param_3 | 0x20,param_2);
    }
  }
  else if ((param_6 != 1) && (param_6 != 2)) {
    return uVar1;
  }
  if ((param_1 & 0x100) != 0) {
    uVar1 = FUN_10024296(param_3 | (-(ushort)((param_1 & 0x200) != 0 || param_5 != '\0') & 0x1000) +
                                   0x2060,param_2);
  }
  return uVar1;
}

