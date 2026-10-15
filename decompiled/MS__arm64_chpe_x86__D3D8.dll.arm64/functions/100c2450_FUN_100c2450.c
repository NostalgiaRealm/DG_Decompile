/*
 * FUN_100c2450 at 100c2450
 * undefined FUN_100c2450(void)
 * Address ranges: 100c2450-100c2563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100c2450(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  uint local_40 [4];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_6 != 1) {
    return 0;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar4 = (*extraout_w11)(param_2,param_3,param_4,0);
  iVar5 = FUN_100fef80(uVar4,0x1012d348);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else {
    iVar5 = FUN_100fef80(uVar4,s_false_1012d350);
    if (iVar5 == 0) {
      *param_5 = 0;
      return 1;
    }
    local_40[0] = 0;
    (*pcVar1)();
    cVar3 = (*extraout_w11_00)(param_2,param_3,param_4,0,local_40);
    if (cVar3 == '\0') {
      return 0;
    }
    if (1 < local_40[0]) {
      return 0;
    }
    bVar2 = local_40[0] != 0;
  }
  *param_5 = bVar2;
  return 1;
}

