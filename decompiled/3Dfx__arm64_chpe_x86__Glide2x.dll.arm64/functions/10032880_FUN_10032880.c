/*
 * FUN_10032880 at 10032880
 * undefined FUN_10032880(void)
 * Address ranges: 10032880-10032973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10032880(int param_1,int param_2,ulonglong param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  undefined4 local_20 [4];
  
  iVar1 = param_1 + param_2 * 0x120;
  if ((param_3 & 1) == 0) {
    FUN_10030ec8(param_1,iVar1 + 0x140,param_4);
  }
  else {
    FUN_10030f88(param_1,param_2,0,0,*(undefined4 *)(iVar1 + 0x160),*(undefined4 *)(iVar1 + 0x164),0
                 ,0,0);
  }
  local_20[0] = 0;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,0,0,local_20);
  if (-1 < iVar3) {
    *(undefined4 *)(iVar1 + 0x1ac) = local_20[0];
    *(undefined4 *)(iVar1 + 0x1b0) = *(undefined4 *)(iVar1 + 0x140 + (uint)param_4 * 0x20 + 0xf8);
  }
  return -1 < iVar3;
}

