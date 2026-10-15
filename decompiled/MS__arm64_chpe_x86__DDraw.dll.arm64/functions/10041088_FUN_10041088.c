/*
 * FUN_10041088 at 10041088
 * undefined FUN_10041088(void)
 * Address ranges: 10041088-10041227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10041088(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = *(ushort *)(param_1 + 1);
  uVar9 = 0;
  if (uVar4 != 0) {
    do {
      piVar3 = param_1 + uVar9 * 7 + 2;
      iVar7 = FUN_10091750(param_2,piVar3,0x10);
      if (iVar7 == 0) {
        if (piVar3 == (int *)0x0) {
          return -0x7fffbffe;
        }
        do {
          iVar8 = *param_1;
          iVar7 = iVar8;
          if (iVar8 == 0) {
            iVar7 = 1;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
          if (bVar6) {
            *param_1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar8 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
          do {
            iVar8 = *param_1;
            iVar7 = iVar8;
            if (iVar8 == 0) {
              iVar7 = 1;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
            if (bVar6) {
              *param_1 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
        }
        piVar1 = piVar3 + 6;
        iVar7 = 0;
        if (*piVar1 == 0) {
          piVar2 = (int *)0x0;
          if (param_1 != (int *)0x0) {
            piVar2 = param_1 + -1;
          }
          iVar7 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
          if ((iVar7 == 0) ||
             (iVar8 = FUN_10091750(param_2,&DAT_100b1a40,0x10), iVar7 = -0x7fffbffe, iVar8 == 0)) {
            iVar7 = 0;
            *piVar1 = (int)piVar2;
          }
        }
        *param_1 = 0;
        piVar3 = (int *)piVar3[4];
        if (iVar7 < 0) {
          iVar8 = *piVar3;
        }
        else {
          do {
            iVar8 = *piVar3 + 1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
            if (bVar6) {
              *piVar3 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
        }
        if (param_3 != (int *)0x0) {
          *param_3 = *piVar1;
        }
        if (param_4 == (int *)0x0) {
          return iVar7;
        }
        *param_4 = iVar8;
        return iVar7;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  return -0x7fffbffe;
}

