/*
 * FUN_18005ef60 at 18005ef60
 * undefined __fastcall FUN_18005ef60(longlong * param_1, uint param_2, undefined4 param_3, uint param_4)
 * Address ranges: 18005ef60-18005efd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ef60(longlong *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (param_2 < 8) {
    switch(param_3) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      (**(code **)(*param_1 + 0x1d8))(param_1,0);
    }
    FUN_18005cf50((longlong)param_1,(longlong)(param_1 + 0x16),(longlong)(param_1 + 0x1ed0),param_2,
                  param_3,param_4);
  }
  return;
}

