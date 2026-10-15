/*
 * FUN_10036320 at 10036320
 * undefined FUN_10036320(void)
 * Address ranges: 10036320-10036493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036320(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar4 == 0) {
    FUN_10001c10(0);
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 != 0) {
    uVar6 = *(uint *)(iVar4 + 0x144);
    if (*(char *)(iVar4 + 0x14f) == '\0') {
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          piVar2 = (int *)(*(int *)(iVar4 + 0x140) + uVar5 * 4);
          if (*piVar2 == param_1) {
            *piVar2 = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(iVar4 + 0x144));
      }
    }
    else {
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          if (*(int *)(*(int *)(iVar4 + 0x140) + uVar5 * 4) == param_1) {
            puVar1 = (uint *)(iVar4 + 0x144);
            uVar6 = *puVar1;
            if (uVar5 < uVar6) {
              uVar5 = uVar5 + 1;
              if (uVar5 < uVar6) {
                do {
                  puVar3 = (undefined4 *)(*(int *)(iVar4 + 0x140) + uVar5 * 4);
                  uVar5 = uVar5 + 1;
                  puVar3[-1] = *puVar3;
                  uVar6 = *puVar1;
                } while (uVar5 < uVar6);
              }
              *puVar1 = uVar6 - 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      uVar6 = 0;
      if (*(uint *)(iVar4 + 300) != 0) {
        do {
          piVar2 = (int *)(*(int *)(*(int *)(iVar4 + 0x128) + uVar6 * 4) + 0x104);
          if (*piVar2 == param_1) {
            *piVar2 = 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(iVar4 + 300));
      }
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return;
}

