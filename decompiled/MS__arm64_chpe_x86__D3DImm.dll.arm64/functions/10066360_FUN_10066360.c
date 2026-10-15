/*
 * FUN_10066360 at 10066360
 * undefined FUN_10066360(void)
 * Address ranges: 10066360-100665cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10066360(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuVar9;
  uint uVar10;
  
  uVar3 = *(ushort *)(param_1 + 1);
  uVar10 = 0;
  if (uVar3 != 0) {
    do {
      piVar2 = param_1 + uVar10 * 7 + 2;
      iVar6 = FUN_10081e90(param_2,piVar2,0x10);
      if (iVar6 == 0) {
        if (piVar2 == (int *)0x0) {
          return -0x7fffbffe;
        }
        do {
          iVar8 = *param_1;
          iVar6 = iVar8;
          if (iVar8 == 0) {
            iVar6 = 1;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
          if (bVar5) {
            *param_1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar8 != 0) {
          DataMemoryBarrier(2,2);
          Yield();
          do {
            iVar8 = *param_1;
            iVar6 = iVar8;
            if (iVar8 == 0) {
              iVar6 = 1;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
            if (bVar5) {
              *param_1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
        piVar1 = piVar2 + 6;
        iVar6 = 0;
        if (*piVar1 != 0) goto LAB_10066584;
        iVar6 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)FUN_10081cb0(8);
          if (puVar7 == (undefined4 *)0x0) goto LAB_10066568;
          *puVar7 = &PTR_FUN_1009cd48;
          puVar7[1] = param_1;
        }
        else {
          iVar6 = FUN_10081e90(param_2,&DAT_1009c4f0,0x10);
          if (iVar6 == 0) {
            puVar7 = (undefined4 *)FUN_10081cb0(8);
            if (puVar7 != (undefined4 *)0x0) {
              puVar7[1] = param_1;
              ppuVar9 = &PTR_FUN_1009cd24;
LAB_1006655c:
              *puVar7 = ppuVar9;
              goto LAB_1006656c;
            }
          }
          else {
            iVar6 = FUN_10081e90(param_2,&DAT_1009c500,0x10);
            if (iVar6 == 0) {
              puVar7 = (undefined4 *)FUN_10081cb0(8);
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[1] = param_1;
                ppuVar9 = &PTR_FUN_1009cd0c;
                goto LAB_1006655c;
              }
            }
            else {
              iVar8 = FUN_10081e90(param_2,&DAT_1009c510,0x10);
              iVar6 = -0x7fffbffe;
              if (iVar8 != 0) goto LAB_10066584;
              puVar7 = (undefined4 *)FUN_10081cb0(8);
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[1] = param_1;
                ppuVar9 = &PTR_FUN_1009ccf4;
                goto LAB_1006655c;
              }
            }
          }
LAB_10066568:
          puVar7 = (undefined4 *)0x0;
        }
LAB_1006656c:
        *piVar1 = (int)puVar7;
        iVar6 = 0;
        if (puVar7 == (undefined4 *)0x0) {
          iVar6 = -0x7ff8fff2;
        }
LAB_10066584:
        *param_1 = 0;
        piVar2 = (int *)piVar2[4];
        if (iVar6 < 0) {
          iVar8 = *piVar2;
        }
        else {
          do {
            iVar8 = *piVar2 + 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
            if (bVar5) {
              *piVar2 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
        if (param_3 != (int *)0x0) {
          *param_3 = *piVar1;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar8;
        }
        return iVar6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return -0x7fffbffe;
}

