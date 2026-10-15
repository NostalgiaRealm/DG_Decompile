/*
 * FUN_1001c1b1 at 1001c1b1
 * uint __fastcall FUN_1001c1b1(undefined4 param_1, char param_2, char param_3, char param_4)
 * Address ranges: 1001c1b1-1001c1da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001c1b1(undefined4 param_1,char param_2,char param_3,char param_4)

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

