/*
 * FUN_180046d48 at 180046d48
 * longlong * __fastcall FUN_180046d48(longlong param_1, longlong * param_2, uint param_3, int param_4)
 * Address ranges: 180046d48-180046d9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180046d48(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_3 >> 0x10) * 0x10);
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x50))(plVar1,local_res8);
    *param_2 = (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x20)) + *plVar1;
  }
  return param_2;
}

