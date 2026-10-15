/*
 * FUN_100695f0 at 100695f0
 * undefined FUN_100695f0(void)
 * Address ranges: 100695f0-100696eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_100695f0(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  
  if (*(int *)(param_1 + 0x910) == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x908) + 1;
    *(longlong *)(param_1 + 0x908) = lVar4;
    FUN_10068758(param_1);
    FUN_10068908(param_1);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar1 = *(int *)(param_1 + 0x910);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_38 = (*extraout_w11)(uVar3);
    local_30 = (undefined4)lVar4;
    local_38 = local_38 + (ulonglong)(uint)(iVar1 << 3);
    local_48 = local_38 + 4;
    local_40 = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_50 = 0x200000002;
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,2,&local_48,&local_50);
  }
  return lVar4;
}

