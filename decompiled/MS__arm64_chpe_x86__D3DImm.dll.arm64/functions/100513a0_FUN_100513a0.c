/*
 * FUN_100513a0 at 100513a0
 * undefined FUN_100513a0(void)
 * Address ranges: 100513a0-10051487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100513a0(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(uVar4);
  uVar4 = 0x88760250;
  if (((*(uint *)(iVar5 + 0x68) & 0x2001) != 0) &&
     (((*(char *)(*(int *)(param_1 + 0xa58) + 0x20) != '\0' ||
       (uVar4 = 0x887602eb, (*(uint *)(iVar5 + 0x68) >> 0xe & 1) != 0)) && (uVar4 = 0, param_3 != 0)
      ))) {
    (*pcVar3)();
    iVar5 = (*extraout_w11_00)(param_3);
    cVar2 = *(char *)(*(int *)(param_1 + 0xa58) + 0x20);
    if (cVar2 == '\0') {
      uVar1 = *(uint *)(iVar5 + 0x68) >> 0xe;
    }
    else {
      uVar1 = *(uint *)(iVar5 + 0x68) >> 0xb;
    }
    if (((uVar1 & 1) == 0) && (uVar4 = 0x887602e9, cVar2 == '\0')) {
      uVar4 = 0x887602ea;
    }
  }
  return uVar4;
}

