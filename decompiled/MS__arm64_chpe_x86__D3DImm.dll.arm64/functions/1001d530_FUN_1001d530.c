/*
 * FUN_1001d530 at 1001d530
 * undefined FUN_1001d530(void)
 * Address ranges: 1001d530-1001d723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d530(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *puVar12;
  uint uVar13;
  
  uVar13 = 0;
  piVar1 = (int *)(param_1 + 0x24);
  iVar8 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
  if (*(uint *)(param_1 + 0x28) != 0) {
    puVar3 = (undefined4 *)(iVar8 + 0x1880);
    piVar2 = (int *)(iVar8 + 0x19a8);
    do {
      iVar6 = *(int *)(*piVar1 + uVar13 * 8);
      FUN_10081528(puVar3);
      bVar11 = true;
      cVar5 = *(char *)(iVar8 + 0x19ac);
      if (cVar5 == '\0') {
LAB_1001d688:
        if (cVar5 == '\0') goto LAB_1001d68c;
      }
      else {
        puVar12 = (undefined4 *)FUN_100813d0(puVar3,8);
        if (puVar12 != (undefined4 *)0x0) {
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
            if (bVar10) {
              *piVar2 = *piVar2 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          DataMemoryBarrier(2,3);
          puVar12[1] = 8;
          puVar12[2] = iVar8 + 0x1be8;
          puVar12[3] = iVar6;
          puVar4 = (undefined4 *)((int)puVar12 + 0x13U & 0xfffffffc);
          *puVar4 = 0;
          *puVar12 = FUN_1001cf40;
          puVar3[*(int *)(iVar8 + 0x19a4) * 5 + 0x1a] = puVar4;
          if (*(char *)(iVar8 + 0x19ad) != '\0') {
            *puVar3 = 0;
            (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar8 + 0x18e0));
            bVar11 = false;
          }
          goto LAB_1001d688;
        }
        *puVar3 = 0;
        (*(code *)PTR_FUN_100a1074)(100);
        FUN_10081528(puVar3);
LAB_1001d68c:
        piVar7 = *(int **)(iVar8 + 0x1990);
        *piVar7 = iVar8 + 0x1be8;
        piVar7[1] = iVar6;
        FUN_1001cf40(piVar7);
      }
      if (bVar11) {
        *puVar3 = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x28));
  }
  FUN_10081dc0(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

