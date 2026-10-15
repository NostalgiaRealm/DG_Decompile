/*
 * FUN_10039890 at 10039890
 * undefined FUN_10039890(void)
 * Address ranges: 10039890-10039b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10039890(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *extraout_w11;
  uint uVar12;
  
  piVar1 = (int *)(param_1 + 0x44);
  iVar9 = FUN_1003d508(piVar1,param_2);
  iVar4 = *(int *)(iVar9 + 0x18);
  iVar9 = 0;
  bVar8 = false;
  if (*(char *)(param_1 + 0x4b) == '\0') {
    uVar6 = *(ushort *)(param_1 + 0x48);
    uVar12 = 0;
    if (uVar6 != 0) {
LAB_10039900:
      iVar11 = param_1 + 0x4c + uVar12 * 0x1c;
      iVar10 = FUN_10091750(param_2,iVar11,0x10);
      if (iVar10 != 0) goto code_r0x10039920;
      bVar8 = false;
      uVar3 = ZEXT48(piVar1);
      if (iVar11 != 0) {
        piVar5 = *(int **)(iVar11 + 0x10);
        do {
          iVar9 = *piVar5 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar5),0x10);
          if (bVar8) {
            *piVar5 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        do {
          iVar2 = *piVar1;
          iVar10 = iVar2;
          if (iVar2 == 0) {
            iVar10 = 1;
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(uVar3,0x10);
          if (bVar8) {
            *piVar1 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar2 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
          do {
            iVar2 = *piVar1;
            iVar10 = iVar2;
            if (iVar2 == 0) {
              iVar10 = 1;
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(uVar3,0x10);
            if (bVar8) {
              *piVar1 = iVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
        }
        if ((iVar9 == 0) && (*(char *)(param_1 + 0x4a) == '\0')) {
          FUN_100382d8(iVar11,iVar11,*(undefined4 *)(iVar11 + 0x18));
          *(undefined4 *)(iVar11 + 0x18) = 0;
        }
        iVar11 = FUN_1003d888(uVar3);
        bVar8 = iVar11 == 0;
        if (iVar11 == 0) {
          *(char *)(param_1 + 0x4b) = '\x01';
        }
        *piVar1 = 0;
        if (iVar9 != 0) goto LAB_10039ad4;
      }
    }
  }
LAB_10039a08:
  uVar12 = 0;
  if (*(uint *)(param_1 + 300) != 0) {
    do {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x128) + uVar12 * 4) + 0x100);
      if (*piVar1 == iVar4) {
        *piVar1 = 0;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 300));
  }
  uVar12 = 0;
  if (*(uint *)(param_1 + 0x138) != 0) {
    do {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x134) + uVar12 * 4) + 4);
      if (*piVar1 == iVar4) {
        *piVar1 = 0;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x138));
  }
  uVar12 = 0;
  if (*(uint *)(param_1 + 0x144) != 0) {
    do {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x140) + uVar12 * 4) + 0x44);
      if (*piVar1 == iVar4) {
        *piVar1 = 0;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x144));
  }
LAB_10039ad4:
  if (bVar8) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    if (((DAT_100c2940 == 0) && (DAT_100c2944 == '\0')) && (DAT_100c291c != 0)) {
      DAT_100c291c = 0;
      (*(code *)PTR_FUN_100ba0a8)(DAT_100c2918);
      DAT_100c2918 = 0;
    }
  }
  return iVar9;
code_r0x10039920:
  uVar12 = uVar12 + 1;
  if (uVar6 <= uVar12) goto code_r0x1003992c;
  goto LAB_10039900;
code_r0x1003992c:
  bVar8 = false;
  goto LAB_10039a08;
}

