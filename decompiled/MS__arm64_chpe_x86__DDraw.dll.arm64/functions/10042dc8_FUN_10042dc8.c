/*
 * FUN_10042dc8 at 10042dc8
 * undefined FUN_10042dc8(void)
 * Address ranges: 10042dc8-10042f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10042dc8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  code *extraout_w11;
  uint uVar11;
  
  piVar1 = (int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar6 = *(ushort *)(param_1 + 0x30);
    uVar11 = 0;
    if (uVar6 != 0) {
      do {
        iVar9 = param_1 + 0x34 + uVar11 * 0x1c;
        uVar10 = FUN_10091750(param_2,iVar9,0x10);
        if ((int)uVar10 == 0) {
          if (iVar9 == 0) {
            return 0;
          }
          piVar5 = *(int **)(iVar9 + 0x10);
          do {
            iVar2 = *piVar5 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar5),0x10);
            if (bVar8) {
              *piVar5 = iVar2;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
          do {
            iVar4 = *piVar1;
            iVar3 = iVar4;
            if (iVar4 == 0) {
              iVar3 = 1;
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar8) {
              *piVar1 = iVar3;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar4 != 0) {
            DataMemoryBarrier(2,2);
            Yield();
            do {
              iVar4 = *piVar1;
              iVar3 = iVar4;
              if (iVar4 == 0) {
                iVar3 = 1;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar8) {
                *piVar1 = iVar3;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            DataMemoryBarrier(2,3);
          }
          if ((iVar2 == 0) && (*(char *)(param_1 + 0x32) == '\0')) {
            FUN_10041c18(uVar10,iVar9,*(undefined4 *)(iVar9 + 0x18));
            *(undefined4 *)(iVar9 + 0x18) = 0;
          }
          iVar9 = FUN_1003d888(piVar1);
          if (iVar9 == 0) {
            *(char *)(param_1 + 0x33) = '\x01';
          }
          *piVar1 = 0;
          if (iVar9 != 0) {
            return iVar2;
          }
          (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(param_1,0,0);
          return iVar2;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
    }
  }
  return 0;
}

