/*
 * FUN_18005f050 at 18005f050
 * undefined __fastcall FUN_18005f050(longlong * param_1, int param_2, undefined8 * param_3)
 * Address ranges: 18005f050-18005f0c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f050(longlong *param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  plVar1 = param_1;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    break;
  default:
    if (0xff < param_2 - 10U) goto LAB_18005f09a;
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
LAB_18005f09a:
  FUN_18005dc10(plVar1,(longlong)(param_1 + 0x16),(longlong)(param_1 + 0x1ed0),param_2,param_3);
  return;
}

