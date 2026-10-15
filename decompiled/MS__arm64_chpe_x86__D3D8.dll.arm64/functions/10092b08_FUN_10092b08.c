/*
 * FUN_10092b08 at 10092b08
 * undefined FUN_10092b08(void)
 * Address ranges: 10092b08-10092c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10092b08(undefined8 *param_1)

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
      goto LAB_10092b94;
    }
    do {
      puVar6 = (undefined4 *)(*(int *)((int)param_1 + 4) + uVar7 * 0x10 + 0xc);
LAB_10092b94:
      FUN_100e8578(iVar3 + iVar2 * 0x16c0 + 0x1d00,*puVar6);
      uVar5 = (*pcVar4)();
      (*extraout_w11)(uVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar1);
  }
  FUN_100fed00(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

