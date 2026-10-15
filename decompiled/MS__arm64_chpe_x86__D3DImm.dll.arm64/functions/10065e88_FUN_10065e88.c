/*
 * FUN_10065e88 at 10065e88
 * undefined FUN_10065e88(void)
 * Address ranges: 10065e88-10066067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10065e88(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(char *)((int)param_1 + 7) == '\0') {
    uVar11 = 0;
    uVar9 = (uint)*(ushort *)(param_1 + 1);
    if (uVar9 != 0) {
      do {
        piVar1 = param_1 + uVar11 * 7 + 2;
        uVar7 = FUN_10081e90(param_2,piVar1,0x10);
        if ((int)uVar7 == 0) {
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          piVar4 = (int *)piVar1[4];
          do {
            iVar2 = *piVar4 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar4),0x10);
            if (bVar6) {
              *piVar4 = iVar2;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            iVar3 = *param_1;
            iVar8 = iVar3;
            if (iVar3 == 0) {
              iVar8 = 1;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
            if (bVar6) {
              *param_1 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar3 != 0) {
            DataMemoryBarrier(2,2);
            Yield();
            do {
              iVar3 = *param_1;
              iVar8 = iVar3;
              if (iVar3 == 0) {
                iVar8 = 1;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
              if (bVar6) {
                *param_1 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
          }
          if ((iVar2 == 0) && (*(char *)((int)param_1 + 6) == '\0')) {
            FUN_10065d68(uVar7,piVar1,piVar1[6]);
            piVar1[6] = 0;
          }
          iVar8 = 0;
          uVar11 = 0;
          uVar9 = (uint)*(ushort *)(param_1 + 1);
          if (uVar9 != 0) {
            do {
              uVar10 = 0;
              if (uVar11 != 0) {
                do {
                  if (param_1[uVar11 * 7 + 6] == param_1[uVar10 * 7 + 6]) goto LAB_10066020;
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
              }
              if (uVar10 == uVar11) {
                iVar8 = *(int *)param_1[uVar11 * 7 + 6] + iVar8;
              }
LAB_10066020:
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar9);
            if (iVar8 != 0) goto LAB_10066034;
          }
          *(char *)((int)param_1 + 7) = '\x01';
LAB_10066034:
          *param_1 = 0;
          if (iVar8 != 0) {
            return iVar2;
          }
          FUN_10066070(param_1);
          return iVar2;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
  }
  return 0;
}

