/*
 * FUN_100663c0 at 100663c0
 * undefined FUN_100663c0(void)
 * Address ranges: 100663c0-100664f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100663c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (undefined4 *)(param_2 + 0xd68);
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3,0,&DAT_10097518,puVar1);
  if (-1 < iVar4) {
    local_44 = 0;
    local_50 = *(undefined4 *)(&DAT_10097958 + *(int *)(param_2 + 0x2c) * 4);
    local_4c = 4;
    uVar3 = (*pcVar2)();
    iVar4 = (*extraout_w11_00)(uVar3,*puVar1,&local_50);
    if (-1 < iVar4) {
      FUN_100658f0(param_1,param_2,param_3);
      return 1;
    }
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
    *puVar1 = 0;
  }
  return 0;
}

