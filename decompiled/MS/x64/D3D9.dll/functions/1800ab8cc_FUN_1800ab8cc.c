/*
 * FUN_1800ab8cc at 1800ab8cc
 * undefined __fastcall FUN_1800ab8cc(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, char param_5)
 * Address ranges: 1800ab8cc-1800ab994
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ab8cc(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (param_5 == '\0') {
    while (lVar2 = *param_1, cVar1 == '\0') {
      cVar1 = (**(code **)(lVar2 + 0xa8))(param_1,param_2,param_3,param_4,0);
    }
    while (cVar1 = (**(code **)(lVar2 + 0xa8))(param_1,param_2,param_3,param_4,0), cVar1 != '\0') {
      lVar2 = *param_1;
    }
  }
  else {
    while (lVar2 = *param_1, cVar1 != '\0') {
      cVar1 = (**(code **)(lVar2 + 0xa8))(param_1,param_2,param_3,param_4,0);
    }
    while (cVar1 = (**(code **)(lVar2 + 0xa8))(param_1,param_2,param_3,param_4,0), cVar1 == '\0') {
      lVar2 = *param_1;
    }
  }
  return;
}

