/*
 * FUN_10067de0 at 10067de0
 * undefined FUN_10067de0(void)
 * Address ranges: 10067de0-10067fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10067de0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(char *)(param_1 + 0xb) == '\0') {
    uVar12 = 0;
    uVar10 = (uint)*(ushort *)(param_1 + 8);
    if (uVar10 != 0) {
      do {
        iVar9 = param_1 + 0xc + uVar12 * 0x1c;
        uVar8 = FUN_10081e90(param_2,iVar9,0x10);
        if ((int)uVar8 == 0) {
          if (iVar9 == 0) {
            return 0;
          }
          piVar5 = *(int **)(iVar9 + 0x10);
          do {
            iVar2 = *piVar5 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar5),0x10);
            if (bVar7) {
              *piVar5 = iVar2;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          DataMemoryBarrier(2,3);
          do {
            iVar4 = *piVar1;
            iVar3 = iVar4;
            if (iVar4 == 0) {
              iVar3 = 1;
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar7) {
              *piVar1 = iVar3;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
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
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar7) {
                *piVar1 = iVar3;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            DataMemoryBarrier(2,3);
          }
          if ((iVar2 == 0) && (*(char *)(param_1 + 10) == '\0')) {
            FUN_10067cb8(uVar8,iVar9,*(undefined4 *)(iVar9 + 0x18));
            *(undefined4 *)(iVar9 + 0x18) = 0;
          }
          iVar9 = 0;
          uVar12 = 0;
          uVar10 = (uint)*(ushort *)(param_1 + 8);
          if (uVar10 != 0) {
            do {
              uVar11 = 0;
              if (uVar12 != 0) {
                do {
                  if (*(int *)(param_1 + 0x1c + uVar12 * 0x1c) ==
                      *(int *)(param_1 + 0x1c + uVar11 * 0x1c)) goto LAB_10067f78;
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar12);
              }
              if (uVar11 == uVar12) {
                iVar9 = *(int *)piVar1[uVar12 * 7 + 6] + iVar9;
              }
LAB_10067f78:
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar10);
            if (iVar9 != 0) goto LAB_10067f8c;
          }
          *(char *)(param_1 + 0xb) = '\x01';
LAB_10067f8c:
          *piVar1 = 0;
          if (iVar9 != 0) {
            return iVar2;
          }
          FUN_10067fd0(param_1);
          return iVar2;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
    }
  }
  return 0;
}

