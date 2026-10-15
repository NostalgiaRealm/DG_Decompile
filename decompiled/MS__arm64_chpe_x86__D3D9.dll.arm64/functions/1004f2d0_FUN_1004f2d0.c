/*
 * FUN_1004f2d0 at 1004f2d0
 * undefined FUN_1004f2d0(void)
 * Address ranges: 1004f2d0-1004f4af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004f2d0(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 local_50 [4];
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 1;
  if (*(int *)(param_1 + 0x1c) == 1) {
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        puVar4 = (undefined4 *)(param_1 + 0x10);
        uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11_00)(uVar1,*puVar4);
        uVar1 = (*pcVar5)();
        iVar2 = (*extraout_w11_01)(uVar1,*puVar4,0,0,0);
        while (iVar2 == 1) {
          uVar1 = (*pcVar5)();
          iVar2 = (*extraout_w11_02)(uVar1,*puVar4,0,0,0);
        }
      }
      puVar4 = (undefined4 *)(param_1 + 0xc);
      uVar1 = (*pcVar5)();
      uVar3 = 5;
      pcVar5 = extraout_w11_03;
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 0xc);
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar3 = 4;
      pcVar5 = extraout_w11;
    }
    iVar2 = (*pcVar5)(uVar1,*puVar4,0,uVar3,0,local_50);
    if (iVar2 == -0x7789fde4) {
      uVar6 = 2;
    }
    else if (-1 < iVar2) {
      uVar6 = 0;
      *param_4 = local_50[0];
    }
  }
  return uVar6;
}

