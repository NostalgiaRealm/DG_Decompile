/*
 * FUN_100be410 at 100be410
 * undefined FUN_100be410(void)
 * Address ranges: 100be410-100be5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100be410(int param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  uint *puVar4;
  undefined1 *puVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + -0x20);
  puVar4 = (uint *)&DAT_00000b0c;
  if (*piVar1 != 0) {
    puVar4 = (uint *)(*piVar1 + -0x4dd4);
  }
  if (((*puVar4 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar8 = true;
    iVar9 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar9 == 0) {
      FUN_10006560(0);
    }
  }
  piVar2 = (int *)(param_1 + -0x40);
  if (*piVar2 != 0) {
    if ((*(int *)(param_1 + -0xc) != 0) &&
       (((*(uint *)(param_1 + -0x18) >> 9 & 1) != 0 || (*(char *)(param_1 + -1) != '\0')))) {
      pcVar3 = &DAT_00000010;
      if (*piVar1 != 0) {
        pcVar3 = (char *)(*piVar1 + -0x58d0);
      }
      if (*pcVar3 != '\0') {
        uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar10);
        *piVar2 = 0;
        if (*(char *)(param_1 + -4) != '\0') {
          puVar4 = (uint *)&DAT_00005898;
          if (*piVar1 != 0) {
            puVar4 = (uint *)(*piVar1 + -0x48);
          }
          *puVar4 = *puVar4 & 0xfffffffe;
        }
        goto LAB_100be5a0;
      }
    }
    *piVar2 = 0;
    piVar2 = (int *)(param_1 - 0x30);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    iVar9 = *piVar1;
    piVar1 = (int *)&DAT_000057b8;
    if (iVar9 != 0) {
      piVar1 = (int *)(iVar9 + -0x128);
    }
    if (*piVar1 == param_1 + -0x4c) {
      puVar5 = &DAT_000058bc;
      if (iVar9 != 0) {
        puVar5 = (undefined1 *)(iVar9 + -0x24);
      }
      *puVar5 = 1;
    }
  }
LAB_100be5a0:
  if (bVar8) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return 0;
}

