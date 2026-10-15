/*
 * FUN_10036530 at 10036530
 * undefined FUN_10036530(void)
 * Address ranges: 10036530-10036737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10036530(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  code *extraout_w11;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(char *)(param_1 + 0xb) == '\0') {
    uVar11 = 0;
    uVar9 = (uint)*(ushort *)(param_1 + 8);
    if (uVar9 != 0) {
      do {
        iVar8 = param_1 + 0xc + uVar11 * 0x1c;
        iVar7 = FUN_10091750(&DAT_100b1a30,iVar8,0x10);
        if (iVar7 == 0) {
          if (iVar8 == 0) {
            return 0;
          }
          piVar4 = *(int **)(iVar8 + 0x10);
          do {
            iVar7 = *piVar4 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar4),0x10);
            if (bVar6) {
              *piVar4 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            iVar3 = *piVar1;
            iVar2 = iVar3;
            if (iVar3 == 0) {
              iVar2 = 1;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar6) {
              *piVar1 = iVar2;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar3 != 0) {
            DataMemoryBarrier(2,2);
            Yield();
            do {
              iVar3 = *piVar1;
              iVar2 = iVar3;
              if (iVar3 == 0) {
                iVar2 = 1;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar6) {
                *piVar1 = iVar2;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
          }
          if ((iVar7 == 0) && (*(char *)(param_1 + 10) == '\0')) {
            *(undefined4 *)(iVar8 + 0x18) = 0;
          }
          iVar8 = 0;
          uVar11 = 0;
          uVar9 = (uint)*(ushort *)(param_1 + 8);
          if (uVar9 != 0) {
            do {
              uVar10 = 0;
              if (uVar11 != 0) {
                do {
                  if (*(int *)(param_1 + 0x1c + uVar11 * 0x1c) ==
                      *(int *)(param_1 + 0x1c + uVar10 * 0x1c)) goto LAB_100366c0;
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
              }
              if (uVar10 == uVar11) {
                iVar8 = *(int *)piVar1[uVar11 * 7 + 6] + iVar8;
              }
LAB_100366c0:
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar9);
            if (iVar8 != 0) goto LAB_100366d4;
          }
          *(char *)(param_1 + 0xb) = '\x01';
LAB_100366d4:
          *piVar1 = 0;
          if (iVar8 != 0) {
            return iVar7;
          }
          FUN_10036320(param_1);
          if (param_1 == 0) {
            return iVar7;
          }
          (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(param_1,1);
          return iVar7;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
  }
  return 0;
}

