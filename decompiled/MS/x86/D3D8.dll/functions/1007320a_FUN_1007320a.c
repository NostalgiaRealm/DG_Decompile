/*
 * FUN_1007320a at 1007320a
 * uint __fastcall FUN_1007320a(undefined4 param_1, char param_2, char param_3, char param_4)
 * Address ranges: 1007320a-10073233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1007320a(undefined4 param_1,char param_2,char param_3,char param_4)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    return 1;
  case 5:
    if (param_2 != '\0') {
      return 1;
    }
    if (param_3 != param_4) {
      return 1;
    }
  }
  return 0;
}

