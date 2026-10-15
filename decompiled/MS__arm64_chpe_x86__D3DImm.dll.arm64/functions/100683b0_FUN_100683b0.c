/*
 * FUN_100683b0 at 100683b0
 * undefined FUN_100683b0(void)
 * Address ranges: 100683b0-10068563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100683b0(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  code *extraout_w11;
  uint uVar9;
  
  uVar6 = 0x80070057;
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0x9c);
    uVar6 = 0x887602f0;
    if (*puVar1 != 0) {
      piVar2 = (int *)(param_1 + 0x98);
      uVar9 = 0;
      do {
        if ((*(char *)(*piVar2 + 5 + uVar9 * 8) != '\0') &&
           (piVar4 = (int *)(*(int *)(param_1 + 0x8c) + *(int *)(*piVar2 + uVar9 * 8) * 8),
           *piVar4 == param_2)) {
          *(undefined4 *)(piVar4[1] + 0x9c) = 0;
          uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar6);
          puVar3 = (uint *)(param_1 + 0x90);
          *(undefined1 *)(*piVar2 + uVar9 * 8 + 4) = 1;
          *(undefined1 *)(*piVar2 + uVar9 * 8 + 5) = 0;
          uVar8 = *puVar3;
          uVar7 = *(uint *)(*piVar2 + uVar9 * 8);
          if (uVar7 < uVar8) {
            uVar7 = uVar7 + 1;
            if (uVar7 < uVar8) {
              do {
                puVar5 = (undefined8 *)(*(int *)(param_1 + 0x8c) + uVar7 * 8);
                uVar7 = uVar7 + 1;
                puVar5[-1] = *puVar5;
                uVar8 = *puVar3;
              } while (uVar7 < uVar8);
            }
            *puVar3 = uVar8 - 1;
          }
          uVar7 = uVar9 + 1;
          if (uVar7 < *puVar1) {
            do {
              puVar3 = (uint *)(*piVar2 + uVar7 * 8);
              uVar8 = *puVar3;
              if (*(uint *)(*piVar2 + uVar9 * 8) <= uVar8) {
                *puVar3 = uVar8 - 1;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *puVar1);
          }
          *(undefined1 *)(param_1 + 0xd3) = 1;
          return 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar1);
    }
  }
  return uVar6;
}

