/*
 * FUN_10070540 at 10070540
 * undefined FUN_10070540(void)
 * Address ranges: 10070540-100707d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10070540(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar9;
  ulonglong uVar10;
  ulonglong local_48;
  
  uVar6 = (*(code *)PTR_FUN_1016c084)();
  (*(code *)PTR_FUN_1016c108)(uVar6,1);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x80) == '\0') {
    piVar1 = (int *)(param_1 + 0x48);
    do {
      (*(code *)PTR_FUN_1016c074)(param_1 + 0x60);
      uVar10 = 0;
      if (*piVar1 != 0) {
        uVar6 = (*pcVar5)();
        uVar7 = (*extraout_w11)(uVar6);
        uVar9 = *(uint *)(param_1 + 0x34);
        uVar8 = (ulonglong)uVar9;
        if (uVar9 != 0xffffffff) {
          piVar2 = (int *)(param_1 + 0x28);
          local_48 = 0;
          do {
            piVar3 = (int *)(*piVar2 + uVar9 * 0x30);
            uVar10 = local_48;
            if ((*piVar3 == 0) ||
               (uVar10 = *(ulonglong *)(piVar3 + 4), uVar7 < *(ulonglong *)(piVar3 + 4))) break;
            if ((*(char *)((int)piVar3 + 0x2d) == '\0') &&
               (uVar8 = FUN_100707d8(uVar8,piVar3), (char)piVar3[0xb] != '\0')) {
              uVar8 = FUN_10071470(param_1 + 0x50,piVar3);
            }
            *piVar3 = 0;
            uVar4 = piVar3[10];
            if ((uVar4 != 0xffffffff) && (*(int *)(*piVar2 + uVar4 * 0x30) != 0)) {
              *(uint *)(param_1 + 0x34) = uVar4;
              piVar3[10] = *(uint *)(*piVar2 + *(int *)(param_1 + 0x38) * 0x30 + 0x28);
              *(uint *)(*piVar2 + *(int *)(param_1 + 0x38) * 0x30 + 0x28) = uVar9;
            }
            *piVar1 = *piVar1 + -1;
            uVar10 = local_48;
            uVar9 = uVar4;
          } while (uVar4 != 0xffffffff);
        }
      }
      (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x60);
      if (uVar10 != 0) {
        uVar6 = (*pcVar5)();
        (*extraout_w11_00)(uVar6,uVar10,*(undefined4 *)(param_1 + 0x7c));
      }
      (*(code *)PTR_FUN_1016c138)(*(undefined4 *)(param_1 + 0x7c),0xffffffff);
    } while (*(char *)(param_1 + 0x80) == '\0');
  }
  return 0;
}

