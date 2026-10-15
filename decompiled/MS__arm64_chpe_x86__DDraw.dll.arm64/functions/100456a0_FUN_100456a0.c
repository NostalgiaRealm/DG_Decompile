/*
 * FUN_100456a0 at 100456a0
 * undefined FUN_100456a0(void)
 * Address ranges: 100456a0-100459c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100456a0(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined **ppuVar10;
  uint uVar11;
  
  uVar4 = *(ushort *)(param_1 + 1);
  uVar11 = 0;
  if (uVar4 != 0) {
    do {
      piVar3 = param_1 + uVar11 * 7 + 2;
      iVar7 = FUN_10091750(param_2,piVar3,0x10);
      if (iVar7 == 0) {
        if (piVar3 == (int *)0x0) {
          return -0x7fffbffe;
        }
        do {
          iVar9 = *param_1;
          iVar7 = iVar9;
          if (iVar9 == 0) {
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
        while (iVar9 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
          do {
            iVar9 = *param_1;
            iVar7 = iVar9;
            if (iVar9 == 0) {
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
        if (*piVar1 != 0) goto LAB_1004597c;
        piVar2 = (int *)0x0;
        if (param_1 != (int *)0x0) {
          piVar2 = param_1 + -0xb;
        }
        iVar7 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
        if (iVar7 == 0) {
          puVar8 = (undefined4 *)FUN_100913c0(8);
          if (puVar8 == (undefined4 *)0x0) goto LAB_10045960;
          ppuVar10 = &PTR_FUN_100b2be0;
LAB_1004594c:
          *puVar8 = ppuVar10;
          puVar8[1] = piVar2;
        }
        else {
          iVar7 = FUN_10091750(param_2,&DAT_100b1860,0x10);
          if (iVar7 == 0) {
            puVar8 = (undefined4 *)FUN_100913c0(8);
            if (puVar8 != (undefined4 *)0x0) {
              puVar8[1] = piVar2;
              ppuVar10 = &PTR_FUN_100b2b50;
LAB_10045820:
              *puVar8 = ppuVar10;
              goto LAB_10045964;
            }
          }
          else {
            iVar7 = FUN_10091750(param_2,&DAT_100b1870,0x10);
            if (iVar7 == 0) {
              puVar8 = (undefined4 *)FUN_100913c0(8);
              if (puVar8 != (undefined4 *)0x0) {
                puVar8[1] = piVar2;
                ppuVar10 = &PTR_FUN_100b2ab4;
                goto LAB_10045820;
              }
            }
            else {
              iVar7 = FUN_10091750(param_2,&DAT_100b1880,0x10);
              if (iVar7 == 0) {
                puVar8 = (undefined4 *)FUN_100913c0(8);
                if (puVar8 != (undefined4 *)0x0) {
                  puVar8[1] = piVar2;
                  ppuVar10 = &PTR_FUN_100b2a14;
                  goto LAB_10045820;
                }
              }
              else {
                iVar7 = FUN_10091750(param_2,&DAT_100b1890,0x10);
                if (iVar7 == 0) {
                  puVar8 = (undefined4 *)FUN_100913c0(8);
                  if (puVar8 != (undefined4 *)0x0) {
                    puVar8[1] = piVar2;
                    ppuVar10 = &PTR_FUN_100b2960;
                    goto LAB_10045820;
                  }
                }
                else {
                  iVar7 = FUN_10091750(param_2,&DAT_100b18a0,0x10);
                  if (iVar7 == 0) {
                    puVar8 = (undefined4 *)FUN_100913c0(8);
                    if (puVar8 != (undefined4 *)0x0) {
                      puVar8[1] = piVar2;
                      ppuVar10 = &PTR_FUN_100b289c;
                      goto LAB_10045820;
                    }
                  }
                  else {
                    iVar9 = FUN_10091750(param_2,&DAT_100b18d0,0x10);
                    iVar7 = -0x7fffbffe;
                    if (iVar9 != 0) goto LAB_1004597c;
                    puVar8 = (undefined4 *)FUN_100913c0(8);
                    if (puVar8 != (undefined4 *)0x0) {
                      ppuVar10 = &PTR_FUN_100b2bec;
                      goto LAB_1004594c;
                    }
                  }
                }
              }
            }
          }
LAB_10045960:
          puVar8 = (undefined4 *)0x0;
        }
LAB_10045964:
        *piVar1 = (int)puVar8;
        iVar7 = 0;
        if (puVar8 == (undefined4 *)0x0) {
          iVar7 = -0x7ff8fff2;
        }
LAB_1004597c:
        *param_1 = 0;
        piVar3 = (int *)piVar3[4];
        if (iVar7 < 0) {
          iVar9 = *piVar3;
        }
        else {
          do {
            iVar9 = *piVar3 + 1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
            if (bVar6) {
              *piVar3 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
        }
        if (param_3 != (int *)0x0) {
          *param_3 = *piVar1;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar9;
        }
        return iVar7;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  return -0x7fffbffe;
}

