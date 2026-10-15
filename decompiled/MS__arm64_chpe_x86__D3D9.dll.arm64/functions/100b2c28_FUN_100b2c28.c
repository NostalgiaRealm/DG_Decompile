/*
 * FUN_100b2c28 at 100b2c28
 * undefined FUN_100b2c28(void)
 * Address ranges: 100b2c28-100b2d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b2c28(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *extraout_w11;
  undefined4 *puVar6;
  uint uVar7;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 1);
  if (*puVar1 != 0) {
    iVar2 = *(int *)((int)param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 2);
    uVar7 = 0;
    if (*puVar1 == 0) {
      puVar6 = (undefined4 *)&DAT_00000004;
      goto LAB_100b2cb4;
    }
    do {
      puVar6 = (undefined4 *)(*(int *)((int)param_1 + 4) + uVar7 * 0x10 + 0xc);
LAB_100b2cb4:
      FUN_1011adc8(iVar3 + iVar2 * 0x16c0 + 0x1d00,*puVar6);
      uVar5 = (*pcVar4)();
      (*extraout_w11)(uVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar1);
  }
  FUN_101322d0(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

