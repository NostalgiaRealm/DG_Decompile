/*
 * FUN_1001adb0 at 1001adb0
 * undefined FUN_1001adb0(void)
 * Address ranges: 1001adb0-1001af57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001adb0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *extraout_w11;
  
  (*(code *)PTR_FUN_100a00bc)(*(undefined4 *)(param_1 + 0x130));
  DAT_100a2920 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x29d8);
  (*(code *)PTR_FUN_100a003c)(iVar4 + 0x4a0);
  puVar1 = (uint *)(iVar4 + 0x4c8);
  if (*puVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(int *)(iVar4 + 0x4c4) + uVar5 * 4) == param_1) {
        if (uVar5 != 0xffffffff) {
          uVar6 = 0;
          if (*(uint *)(iVar4 + 0x4bc) != 0) {
            do {
              piVar2 = (int *)(*(int *)(*(int *)(iVar4 + 0x4b8) + uVar6 * 4) + 0xd60);
              if (*piVar2 == param_1) {
                *piVar2 = 0;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(uint *)(iVar4 + 0x4bc));
          }
          uVar6 = *puVar1;
          if (uVar5 < uVar6) {
            uVar5 = uVar5 + 1;
            if (uVar5 < uVar6) {
              do {
                puVar3 = (undefined4 *)(*(int *)(iVar4 + 0x4c4) + uVar5 * 4);
                uVar5 = uVar5 + 1;
                puVar3[-1] = *puVar3;
                uVar6 = *puVar1;
              } while (uVar5 < uVar6);
            }
            *puVar1 = uVar6 - 1;
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  (*(code *)PTR_FUN_100a0090)(iVar4 + 0x4a0);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar4 = *(int *)(param_1 + 4);
  FUN_1006f228(*(undefined4 *)(iVar4 + 0x29d8),*(undefined4 *)(iVar4 + 0x94),param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

