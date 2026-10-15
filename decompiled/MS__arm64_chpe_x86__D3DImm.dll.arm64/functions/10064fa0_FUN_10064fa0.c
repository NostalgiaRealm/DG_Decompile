/*
 * FUN_10064fa0 at 10064fa0
 * undefined FUN_10064fa0(void)
 * Address ranges: 10064fa0-1006512b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10064fa0(int *param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  uVar6 = *(ushort *)(param_1 + 1);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      piVar5 = param_1 + uVar10 * 7 + 2;
      iVar9 = FUN_10081e90(param_2,piVar5,0x10);
      if (iVar9 == 0) {
        iVar9 = 0;
        if (piVar5 == (int *)0x0) {
          return -0x7fffbffe;
        }
        do {
          iVar4 = *param_1;
          iVar2 = iVar4;
          if (iVar4 == 0) {
            iVar2 = 1;
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
          if (bVar8) {
            *param_1 = iVar2;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar4 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
          do {
            iVar4 = *param_1;
            iVar2 = iVar4;
            if (iVar4 == 0) {
              iVar2 = 1;
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
            if (bVar8) {
              *param_1 = iVar2;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
        }
        piVar1 = piVar5 + 6;
        if (*piVar1 == 0) {
          if (param_5 != 0) {
            piVar5[4] = *(int *)(param_5 + 0x10);
          }
          piVar3 = (int *)0x0;
          if (param_1 != (int *)0x0) {
            piVar3 = param_1 + -1;
          }
          iVar9 = FUN_10062550(piVar3,param_2,piVar1);
        }
        *param_1 = 0;
        piVar5 = (int *)piVar5[4];
        if (iVar9 < 0) {
          iVar2 = *piVar5;
        }
        else {
          do {
            iVar2 = *piVar5 + 1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar5),0x10);
            if (bVar8) {
              *piVar5 = iVar2;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          DataMemoryBarrier(2,3);
        }
        if (param_3 != (int *)0x0) {
          *param_3 = *piVar1;
        }
        if (param_4 == (int *)0x0) {
          return iVar9;
        }
        *param_4 = iVar2;
        return iVar9;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  return -0x7fffbffe;
}

