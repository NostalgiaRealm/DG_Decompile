/*
 * FUN_100c4b50 at 100c4b50
 * undefined FUN_100c4b50(void)
 * Address ranges: 100c4b50-100c4c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c4b50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
            (param_1[9],param_1[10],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
             param_1[8]);
  (*extraout_w11)(iVar1,iVar2);
  FUN_10110388(iVar1,iVar3,0);
  if (param_1[0xc] != 0) {
    FUN_10120738(iVar1 + *(int *)(iVar2 + 8) * 0x16c0 + 0x1bb0,param_1[0xe],param_1[0xc],
                 param_1[0xd]);
  }
  return;
}

