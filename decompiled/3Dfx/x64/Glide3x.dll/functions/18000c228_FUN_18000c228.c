/*
 * FUN_18000c228 at 18000c228
 * longlong __fastcall FUN_18000c228(longlong param_1, longlong param_2, undefined8 * param_3, uint param_4, byte param_5)
 * Address ranges: 18000c228-18000c2c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000c228(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4,
                      byte param_5)

{
  longlong local_28;
  undefined8 *local_20;
  
  FUN_180044ae8(param_2 + 0x40,&local_28,param_5 + 1,
                *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78));
  if (local_20 == (undefined8 *)0x0) {
    local_28 = 0;
  }
  else {
    if (param_5 != 0) {
      FUN_180061330(local_20,param_3,(ulonglong)param_4);
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
  }
  return local_28;
}

