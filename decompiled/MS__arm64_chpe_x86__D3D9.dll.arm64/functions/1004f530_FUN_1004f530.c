/*
 * FUN_1004f530 at 1004f530
 * undefined FUN_1004f530(void)
 * Address ranges: 1004f530-1004f5d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1004f530(int param_1,undefined8 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  int local_30 [4];
  undefined8 local_20;
  
  bVar1 = *(int *)(param_1 + 0x1c) != 1;
  if (bVar1) {
    local_30[3] = param_3 + param_4;
    local_20 = 0x100000001;
    local_30[1] = 0;
    local_30[2] = 0;
    puVar3 = (undefined4 *)(param_1 + 0xc);
    local_30[0] = param_3;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar3,0,local_30);
  }
  return bVar1;
}

