/*
 * FUN_1001b370 at 1001b370
 * undefined FUN_1001b370(void)
 * Address ranges: 1001b370-1001b517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b370(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *extraout_w11;
  
  (*(code *)PTR_FUN_100a80bc)(*(undefined4 *)(param_1 + 0x130));
  DAT_100aaaf0 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x2b14);
  (*(code *)PTR_FUN_100a803c)(iVar4 + 0x4a0);
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
  (*(code *)PTR_FUN_100a8090)(iVar4 + 0x4a0);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar4 = *(int *)(param_1 + 4);
  FUN_100748c8(*(undefined4 *)(iVar4 + 0x2b14),*(undefined4 *)(iVar4 + 0x94),param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

