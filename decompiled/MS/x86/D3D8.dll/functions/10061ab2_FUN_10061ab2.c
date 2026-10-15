/*
 * FUN_10061ab2 at 10061ab2
 * undefined4 * __stdcall FUN_10061ab2(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5, char param_6, byte param_7)
 * Address ranges: 10061ab2-10061b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10061ab2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            byte param_5,char param_6,byte param_7)

{
  int iVar1;
  
  iVar1 = 5;
  if ((param_5 & 0x40) != 0) {
    iVar1 = param_7 + 5;
  }
  if (param_6 != '\0') {
    iVar1 = 9;
  }
  *param_1 = param_4;
  param_1[1] = iVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      param_1[5] = param_3;
    }
    else if (iVar1 != 9) {
      return param_1;
    }
  }
  param_1[3] = 0xffffffff;
  return param_1;
}

