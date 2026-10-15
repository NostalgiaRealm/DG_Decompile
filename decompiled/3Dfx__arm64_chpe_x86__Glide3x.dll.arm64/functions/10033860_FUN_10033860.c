/*
 * FUN_10033860 at 10033860
 * undefined FUN_10033860(void)
 * Address ranges: 10033860-1003395b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10033860(int param_1,int param_2,ulonglong param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar1 = param_1 + param_2 * 0x104;
  if ((param_3 & 1) != 0) {
    FUN_10031fd8(param_1,param_2,0,0,*(undefined4 *)(iVar1 + 0x15c),*(undefined4 *)(iVar1 + 0x160),0
                 ,0,0);
  }
  puVar4 = (undefined4 *)(iVar1 + (uint)param_4 * 4 + 0x238);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,*puVar4,0,3,0,&local_30);
  if (-1 < iVar3) {
    *(undefined4 *)(iVar1 + 0x1a8) = local_30;
    *(undefined4 *)(iVar1 + 0x1ac) = uStack_2c;
  }
  return -1 < iVar3;
}

