/*
 * FUN_180043390 at 180043390
 * longlong __fastcall FUN_180043390(longlong param_1, longlong param_2, undefined8 * param_3, uint param_4, byte param_5)
 * Address ranges: 180043390-180043438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180043390(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4,
                      byte param_5)

{
  longlong local_28;
  undefined8 *local_20;
  
  FUN_1800e8198(param_2,&local_28,param_5 + 1,
                *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78));
  if (local_20 != (undefined8 *)0x0) {
    if (param_5 != 0) {
      FUN_1800fbec0(local_20,param_3,(ulonglong)param_4);
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    return local_28;
  }
  return 0;
}

