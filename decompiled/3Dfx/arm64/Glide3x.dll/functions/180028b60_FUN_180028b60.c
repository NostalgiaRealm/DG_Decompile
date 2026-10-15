/*
 * FUN_180028b60 at 180028b60
 * undefined __cdecl FUN_180028b60(longlong * param_1, undefined4 param_2, uint param_3, uint param_4, longlong param_5, uint param_6)
 * Address ranges: 180028b60-180028bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028b60(longlong *param_1,undefined4 param_2,uint param_3,uint param_4,longlong param_5,
                  uint param_6)

{
  byte bVar1;
  longlong local_30 [2];
  
  *(undefined4 *)((longlong)param_1 + 0x43bc) = param_2;
  if (param_6 != 0) {
    local_30[0] = param_5;
    (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
    bVar1 = FUN_18000c0a0((longlong *)param_1[0x661],param_3,param_4,local_30,param_6,0);
    if ((bVar1 & 1) != 0) {
      if ((*(uint *)((longlong)param_1 + 0x2be4) >> 1 & 1) != 0) {
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
      (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
    }
  }
  return;
}

