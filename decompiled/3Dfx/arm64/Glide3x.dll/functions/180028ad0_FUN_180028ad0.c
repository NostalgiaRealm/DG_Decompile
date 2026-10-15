/*
 * FUN_180028ad0 at 180028ad0
 * undefined __cdecl FUN_180028ad0(longlong * param_1, undefined4 param_2, uint param_3, uint param_4, longlong * param_5)
 * Address ranges: 180028ad0-180028b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028ad0(longlong *param_1,undefined4 param_2,uint param_3,uint param_4,longlong *param_5)

{
  byte bVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x43bc) = param_2;
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,2);
  bVar1 = FUN_18000c0a0((longlong *)param_1[0x661],param_3,param_4,param_5,0,0);
  if ((bVar1 & 1) != 0) {
    if ((*(uint *)((longlong)param_1 + 0x2be4) >> 1 & 1) != 0) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
    (**(code **)(*(longlong *)param_1[0x660] + 0x90))();
  }
  return;
}

