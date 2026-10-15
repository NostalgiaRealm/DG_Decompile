/*
 * FUN_10070390 at 10070390
 * undefined FUN_10070390(void)
 * Address ranges: 10070390-1007053b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070390(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *extraout_w11;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7);
    *(int *)(param_1 + 8) = 0;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x1304);
  piVar1 = (int *)(iVar5 + 0x954);
  puVar2 = (uint *)(iVar5 + 0x958);
  uVar6 = *puVar2;
  if (uVar6 != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(*piVar1 + uVar8 * 4) == param_1) {
        if (uVar8 != 0xffffffff) {
          uVar8 = uVar8 + 1;
          if (uVar8 < uVar6) {
            do {
              puVar4 = (undefined4 *)(*piVar1 + uVar8 * 4);
              uVar8 = uVar8 + 1;
              puVar4[-1] = *puVar4;
            } while (uVar8 < *puVar2);
          }
          *puVar2 = *puVar2 - 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  puVar3 = (undefined8 *)(param_1 + 0x78);
  (*(code *)PTR_FUN_1016c10c)(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)puVar3,0xffffffff,0);
  (*(code *)PTR_FUN_1016c06c)(param_1 + 0x60);
  (*(code *)PTR_FUN_1016c048)(*(undefined4 *)puVar3);
  (*(code *)PTR_FUN_1016c048)(*(undefined4 *)(param_1 + 0x7c));
  *puVar3 = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0) {
    FUN_101209e0(iVar5);
    FUN_10132260(iVar5,0x24);
  }
  *(int *)(param_1 + 0x10) = 0;
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 != 0) {
    FUN_101209e0(iVar5);
    FUN_10132260(iVar5,0x24);
  }
  *(int *)(param_1 + 0xc) = 0;
  return;
}

