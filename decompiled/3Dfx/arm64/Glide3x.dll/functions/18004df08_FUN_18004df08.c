/*
 * FUN_18004df08 at 18004df08
 * longlong * __cdecl FUN_18004df08(longlong param_1, longlong * param_2, uint param_3, int param_4)
 * Address ranges: 18004df08-18004df83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18004df08(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_2 = 0;
  if (iVar1 != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_3 >> 0x10) * 0x10);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))(plVar2,auStack_30);
    *param_2 = *plVar2 + (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x20));
  }
  return param_2;
}

