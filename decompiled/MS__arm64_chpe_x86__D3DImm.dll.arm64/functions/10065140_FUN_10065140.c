/*
 * FUN_10065140 at 10065140
 * undefined FUN_10065140(void)
 * Address ranges: 10065140-100652bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10065140(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = ZEXT48(param_1);
  if (*(char *)((int)param_1 + 7) == '\0') {
    uVar4 = *(ushort *)(param_1 + 1);
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        piVar1 = param_1 + uVar9 * 7 + 2;
        iVar7 = FUN_10081e90(param_2,piVar1,0x10);
        if (iVar7 == 0) {
          if (piVar1 == (int *)0x0) {
            return false;
          }
          piVar3 = (int *)piVar1[4];
          do {
            iVar7 = *piVar3 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
            if (bVar6) {
              *piVar3 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            iVar2 = *param_1;
            iVar8 = iVar2;
            if (iVar2 == 0) {
              iVar8 = 1;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(uVar10,0x10);
            if (bVar6) {
              *param_1 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar2 != 0) {
            DataMemoryBarrier(2,2);
            Yield();
            do {
              iVar2 = *param_1;
              iVar8 = iVar2;
              if (iVar2 == 0) {
                iVar8 = 1;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(uVar10,0x10);
              if (bVar6) {
                *param_1 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
          }
          if ((iVar7 == 0) && (*(char *)((int)param_1 + 6) == '\0')) {
            piVar3 = (int *)0x0;
            if (param_1 != (int *)0x0) {
              piVar3 = param_1 + -1;
            }
            FUN_10062690(piVar3,piVar1,piVar1[6]);
            piVar1[6] = 0;
          }
          iVar8 = FUN_10059900(uVar10);
          if (iVar8 == 0) {
            *(char *)((int)param_1 + 7) = '\x01';
          }
          *param_1 = 0;
          if (param_3 != (int *)0x0) {
            *param_3 = iVar7;
          }
          if (param_4 == (int *)0x0) {
            return iVar8 == 0;
          }
          *param_4 = iVar8;
          return iVar8 == 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
  }
  return false;
}

