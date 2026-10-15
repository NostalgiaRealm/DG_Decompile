/*
 * FUN_10063750 at 10063750
 * undefined FUN_10063750(void)
 * Address ranges: 10063750-1006389f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063750(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x1efc) != '\0') {
    if (*(uint *)(param_1 + 0xd0) != 0) {
      uVar4 = 0;
      do {
        if (param_2 == *(int *)(*(int *)(param_1 + 0xcc) + uVar4 * 4)) {
          puVar1 = (uint *)(param_1 + 0xd0);
          uVar5 = *puVar1;
          if (uVar4 < uVar5) {
            uVar4 = uVar4 + 1;
            if (uVar4 < uVar5) {
              do {
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0xcc) + uVar4 * 4);
                uVar4 = uVar4 + 1;
                puVar3[-1] = *puVar3;
                uVar5 = *puVar1;
              } while (uVar4 < uVar5);
            }
            *puVar1 = uVar5 - 1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0xd0));
    }
    if ((*(uint *)(param_2 + 0x70) & 0x10800) == 0x10000) {
      puVar3 = (undefined4 *)(param_2 + 0x10);
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2,*puVar3);
      uVar4 = 0;
      if (*(uint *)(param_1 + 0xa0) != 0) {
        do {
          FUN_10054600(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar4 * 4),param_2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0xa0));
      }
    }
  }
  return;
}

