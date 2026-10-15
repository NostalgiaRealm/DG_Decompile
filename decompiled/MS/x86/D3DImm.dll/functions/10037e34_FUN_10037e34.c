/*
 * FUN_10037e34 at 10037e34
 * undefined __stdcall FUN_10037e34(undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined1 * param_6)
 * Address ranges: 10037e34-10037ed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037e34(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  *param_5 = 3;
  *param_3 = 0;
  *param_4 = 0;
  *param_6 = 0xf;
  switch(param_2) {
  case 0:
    *param_3 = "POSITION";
    return;
  case 1:
    *param_4 = 9;
    break;
  default:
    goto switchD_10037e60_caseD_2;
  case 3:
    *param_4 = 8;
    break;
  case 5:
    *param_3 = "COLOR";
    return;
  case 6:
    *param_3 = "COLOR";
    *param_4 = 1;
    return;
  case 7:
    break;
  case 8:
    *param_4 = 1;
    break;
  case 9:
    *param_4 = 2;
    break;
  case 10:
    *param_4 = 3;
    break;
  case 0xb:
    *param_4 = 4;
    break;
  case 0xc:
    *param_4 = 5;
    break;
  case 0xd:
    *param_4 = 6;
    break;
  case 0xe:
    *param_4 = 7;
  }
  *param_3 = "TEXCOORD";
switchD_10037e60_caseD_2:
  return;
}

