/*
 * FUN_180049da4 at 180049da4
 * longlong * __fastcall FUN_180049da4(longlong param_1, longlong * param_2, longlong * param_3, uint param_4, undefined8 * param_5)
 * Address ranges: 180049da4-180049e08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180049da4(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 *param_5)

{
  bool bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    bVar1 = FUN_180057114(param_3,param_4,param_2);
    if (bVar1) {
      FUN_18005f1b0((undefined8 *)*param_2,param_5,(ulonglong)param_4);
      *(uint *)(param_2 + 4) = param_4;
      *(undefined8 *)((longlong)param_2 + 0x24) = 0;
    }
  }
  return param_2;
}

