/*
 * FUN_100bbbd0 at 100bbbd0
 * undefined FUN_100bbbd0(void)
 * Address ranges: 100bbbd0-100bbd37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100bbbd0(int param_1,longlong *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0xe0);
  if (uVar2 < 0xe) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    lVar6 = (*extraout_w11)(uVar5);
    iVar1 = iVar3 + uVar2 * 4;
    *param_2 = lVar6 + (ulonglong)(uint)((int)*(char *)(iVar1 + 0x3c) << 0xc);
    uVar5 = (*pcVar4)();
    lVar6 = (*extraout_w11_00)(uVar5);
    *param_3 = lVar6 + (ulonglong)(uint)((int)*(char *)(iVar1 + 0x3d) << 0xc);
    uVar5 = (*pcVar4)();
    lVar6 = (*extraout_w11_01)(uVar5);
    *param_4 = lVar6 + (ulonglong)(uint)((int)*(char *)(iVar1 + 0x3e) << 0xc);
    uVar5 = (*pcVar4)();
    lVar6 = (*extraout_w11_02)(uVar5);
    *param_5 = lVar6 + (ulonglong)(uint)((int)*(char *)(iVar1 + 0x3f) << 0xc);
  }
  return *(undefined4 *)(iVar3 + 0x1cf08);
}

