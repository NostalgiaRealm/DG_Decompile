/*
 * FUN_1005f2d0 at 1005f2d0
 * undefined FUN_1005f2d0(void)
 * Address ranges: 1005f2d0-1005f377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1005f2d0(int param_1,longlong *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *extraout_w11;
  undefined1 auStack_30 [16];
  
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = 0;
  if (iVar1 != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    plVar3 = (longlong *)(*extraout_w11)(uVar2,auStack_30);
    *param_2 = *plVar3 + (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x18));
  }
  return param_2;
}

