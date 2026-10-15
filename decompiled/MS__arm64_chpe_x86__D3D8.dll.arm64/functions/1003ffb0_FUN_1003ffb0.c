/*
 * FUN_1003ffb0 at 1003ffb0
 * undefined FUN_1003ffb0(void)
 * Address ranges: 1003ffb0-100400ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ffb0(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  code *extraout_w11;
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = *param_2;
  puVar1 = (uint *)(param_1 + 0xd9fc);
  for (uVar5 = *puVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
    if ((*(ulonglong *)(*(int *)(param_1 + 0xd9f4) + uVar5 * 0x18 + -0x18) & 0x7fffffff) ==
        ((ulonglong)uVar4 & 0x7fffffff)) {
      uVar8 = (*pcVar7)();
      (*extraout_w11)(uVar8);
      uVar9 = *puVar1;
      uVar6 = uVar5;
      if (uVar5 < uVar9) {
        do {
          uVar2 = uVar6 + 1;
          puVar3 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + uVar6 * 0x18);
          puVar3[-2] = puVar3[1];
          puVar3[-3] = *puVar3;
          puVar3[-1] = puVar3[2];
          uVar9 = *puVar1;
          uVar6 = uVar2;
        } while (uVar2 < uVar9);
      }
      *puVar1 = uVar9 - 1;
    }
  }
  return;
}

