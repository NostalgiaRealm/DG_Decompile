/*
 * FUN_10067990 at 10067990
 * undefined FUN_10067990(void)
 * Address ranges: 10067990-10067bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10067990(int *param_1,undefined4 param_2,int *param_3,int *param_4)

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
      iVar7 = FUN_10081e90(param_2,piVar3,0x10);
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
        if (*piVar1 != 0) goto LAB_10067b80;
        piVar2 = (int *)0x0;
        if (param_1 != (int *)0x0) {
          piVar2 = param_1 + -8;
        }
        iVar7 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
        if (iVar7 == 0) {
          puVar8 = (undefined4 *)FUN_10081cb0(8);
          if (puVar8 == (undefined4 *)0x0) goto LAB_10067b64;
          puVar8[1] = piVar2;
          ppuVar10 = &PTR_FUN_1009cddc;
LAB_10067b58:
          *puVar8 = ppuVar10;
        }
        else {
          iVar7 = FUN_10081e90(param_2,&DAT_1009c560,0x10);
          if (iVar7 == 0) {
            puVar8 = (undefined4 *)FUN_10081cb0(8);
            if (puVar8 != (undefined4 *)0x0) {
              puVar8[1] = piVar2;
              ppuVar10 = &PTR_FUN_1009cdbc;
              goto LAB_10067b58;
            }
          }
          else {
            iVar9 = FUN_10081e90(param_2,&DAT_1009c570,0x10);
            iVar7 = -0x7fffbffe;
            if (iVar9 != 0) goto LAB_10067b80;
            puVar8 = (undefined4 *)FUN_10081cb0(8);
            if (puVar8 != (undefined4 *)0x0) {
              puVar8[1] = piVar2;
              ppuVar10 = &PTR_FUN_1009cd98;
              goto LAB_10067b58;
            }
          }
LAB_10067b64:
          puVar8 = (undefined4 *)0x0;
        }
        *piVar1 = (int)puVar8;
        iVar7 = 0;
        if (puVar8 == (undefined4 *)0x0) {
          iVar7 = -0x7ff8fff2;
        }
LAB_10067b80:
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

