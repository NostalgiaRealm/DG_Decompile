/*
 * FUN_100ee190 at 100ee190
 * undefined FUN_100ee190(void)
 * Address ranges: 100ee190-100ee3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ee190(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x35) == '\0') {
    iVar1 = param_1 + 0x14;
    do {
      (*(code *)PTR_FUN_10134138)(*(undefined4 *)(param_1 + 0x10),0xffffffff);
      (*(code *)PTR_FUN_10134070)(iVar1);
      if (*(int *)(param_1 + 8) != 0) {
        piVar2 = (int *)(param_1 + 0x2c);
        puVar3 = (uint *)(param_1 + 8);
        do {
          if (*(char *)(param_1 + 0x34) == '\0') {
            uVar9 = *puVar3;
            iVar5 = **(int **)(param_1 + 4);
            if (uVar9 != 0) {
              uVar8 = 1;
              if (1 < uVar9) {
                do {
                  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + uVar8 * 4);
                  uVar8 = uVar8 + 1;
                  puVar4[-1] = *puVar4;
                  uVar9 = *puVar3;
                } while (uVar8 < uVar9);
              }
              *puVar3 = uVar9 - 1;
            }
            if (*(char *)(param_1 + 0x35) == '\0') {
              *piVar2 = iVar5;
              (*pcVar6)();
              uVar7 = (*extraout_w11)(iVar5);
              *(undefined4 *)(param_1 + 0x30) = uVar7;
              (*(code *)PTR_FUN_101340bc)(iVar1);
              (*pcVar6)();
              (*extraout_w11_00)(iVar5);
              (*pcVar6)();
              (*extraout_w11_01)(iVar5,1);
              piVar2[0] = 0;
              piVar2[1] = 0;
              goto LAB_100ee38c;
            }
            if (iVar5 != 0) {
              (*pcVar6)();
              (*extraout_w11_02)(iVar5,1);
            }
          }
          else {
            (*(code *)PTR_FUN_101340bc)(iVar1);
            (*(code *)PTR_FUN_10134114)(1);
LAB_100ee38c:
            (*(code *)PTR_FUN_10134070)(iVar1);
          }
        } while (*(int *)(param_1 + 8) != 0);
      }
      (*(code *)PTR_FUN_101340bc)(iVar1);
    } while (*(char *)(param_1 + 0x35) == '\0');
  }
  return 0;
}

