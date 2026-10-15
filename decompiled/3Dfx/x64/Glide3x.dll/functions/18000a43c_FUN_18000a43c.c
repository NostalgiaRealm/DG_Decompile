/*
 * FUN_18000a43c at 18000a43c
 * undefined __fastcall FUN_18000a43c(longlong * param_1, uint param_2, uint param_3, longlong param_4, uint param_5, char param_6)
 * Address ranges: 18000a43c-18000a4c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a43c(longlong *param_1,uint param_2,uint param_3,longlong param_4,uint param_5,
                  char param_6)

{
  char cVar1;
  undefined4 in_register_00000084;
  longlong local_res20;
  
  if (param_5 != 0) {
    local_res20 = param_4;
    (**(code **)(*(longlong *)param_1[0x660] + 0x50))
              ((longlong *)param_1[0x660],0,
               CONCAT71((int7)(CONCAT44(in_register_00000084,param_3) >> 8),2));
    cVar1 = FUN_180009840((longlong *)param_1[0x661],(ulonglong)param_2,param_3,&local_res20,param_5
                          ,param_6);
    if (cVar1 != '\0') {
      if ((*(byte *)((longlong)param_1 + 0x2be4) & 2) != 0) {
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
    }
  }
  return;
}

