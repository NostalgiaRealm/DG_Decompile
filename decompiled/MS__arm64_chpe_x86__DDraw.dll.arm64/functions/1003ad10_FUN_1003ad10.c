/*
 * FUN_1003ad10 at 1003ad10
 * undefined FUN_1003ad10(void)
 * Address ranges: 1003ad10-1003addb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003ad10(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  undefined4 uVar6;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar6 = 0x80070057;
  if (param_2 != (uint *)0x0) {
    uVar6 = 0;
    puVar5 = (undefined4 *)(param_1 + 0x120);
    puVar4 = &DAT_100bbc50 + *(int *)(param_1 + 0x11c) * 0xa4;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar1 = (*extraout_w11)(uVar3,*puVar5,*(undefined4 *)(puVar4 + 0x1c),
                            *(undefined4 *)(puVar4 + 0x18),0);
    *param_2 = (uint)(cVar1 != '\0');
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar6;
}

