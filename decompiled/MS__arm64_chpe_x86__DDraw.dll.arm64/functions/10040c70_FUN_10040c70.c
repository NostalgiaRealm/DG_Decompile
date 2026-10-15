/*
 * FUN_10040c70 at 10040c70
 * undefined FUN_10040c70(void)
 * Address ranges: 10040c70-10040ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10040c70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  piVar1 = param_1 + 1;
  if (*(char *)((int)param_1 + 0xb) == '\0') {
    uVar11 = 0;
    uVar9 = (uint)*(ushort *)(param_1 + 2);
    if (uVar9 != 0) {
      do {
        puVar2 = param_1 + uVar11 * 7 + 3;
        iVar7 = FUN_10091750(&DAT_100b1a30,puVar2,0x10);
        if (iVar7 == 0) {
          if (puVar2 == (undefined4 *)0x0) {
            return 0;
          }
          piVar4 = (int *)puVar2[4];
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
            iVar8 = iVar3;
            if (iVar3 == 0) {
              iVar8 = 1;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
            if (bVar6) {
              *piVar1 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar3 != 0) {
            DataMemoryBarrier(2,2);
            Yield();
            do {
              iVar3 = *piVar1;
              iVar8 = iVar3;
              if (iVar3 == 0) {
                iVar8 = 1;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar6) {
                *piVar1 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
          }
          if ((iVar7 == 0) && (*(char *)((int)param_1 + 10) == '\0')) {
            puVar2[6] = 0;
          }
          iVar8 = 0;
          uVar11 = 0;
          uVar9 = (uint)*(ushort *)(param_1 + 2);
          if (uVar9 != 0) {
            do {
              uVar10 = 0;
              if (uVar11 != 0) {
                do {
                  if (param_1[uVar11 * 7 + 7] == param_1[uVar10 * 7 + 7]) goto LAB_10040e00;
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
              }
              if (uVar10 == uVar11) {
                iVar8 = *(int *)piVar1[uVar11 * 7 + 6] + iVar8;
              }
LAB_10040e00:
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar9);
            if (iVar8 != 0) goto LAB_10040e14;
          }
          *(char *)((int)param_1 + 0xb) = '\x01';
LAB_10040e14:
          *piVar1 = 0;
          if (iVar8 != 0) {
            return iVar7;
          }
          iVar8 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
          if (iVar8 == 0) {
            FUN_10001c10(0);
          }
          puVar2 = param_1 + 0x12;
          iVar8 = FUN_10091750(puVar2,&DAT_100b17f0,0x10);
          if (iVar8 == 0) {
            DAT_100c2964 = 0;
          }
          else {
            iVar8 = FUN_10091750(puVar2,0x100b1800,0x10);
            if (iVar8 == 0) {
              DAT_100c2960 = 0;
            }
            else {
              iVar8 = FUN_10091750(puVar2,&DAT_100b1810,0x10);
              if (iVar8 == 0) {
                DAT_100c295c = 0;
              }
            }
          }
          if (param_1 != (undefined4 *)0x0) {
            *param_1 = &PTR_FUN_100b2640;
            FUN_10091460(param_1,0x58);
          }
          (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
          return iVar7;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
  }
  return 0;
}

