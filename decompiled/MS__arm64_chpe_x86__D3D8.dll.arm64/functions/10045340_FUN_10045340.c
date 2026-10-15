/*
 * FUN_10045340 at 10045340
 * undefined FUN_10045340(void)
 * Address ranges: 10045340-1004562f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045340(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar15 = 0;
    iVar8 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
    if (*(uint *)(param_1 + 0x28) != 0) {
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x24) + uVar15 * 8);
        iVar6 = *(int *)(param_1 + 8);
        puVar2 = (undefined4 *)(iVar8 + 0x1880);
        FUN_100fd300(puVar2);
        cVar4 = *(char *)(iVar8 + 0x19ac);
        bVar11 = true;
        if (cVar4 == '\0') {
LAB_10045494:
          if (cVar4 == '\0') goto LAB_10045498;
        }
        else {
          puVar12 = (undefined4 *)FUN_100fd1a8(puVar2,8);
          if (puVar12 != (undefined4 *)0x0) {
            piVar1 = (int *)(iVar8 + 0x19a8);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
              if (bVar10) {
                *piVar1 = *piVar1 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            DataMemoryBarrier(2,3);
            puVar12[1] = 8;
            puVar12[2] = iVar6;
            puVar12[3] = iVar5;
            puVar3 = (undefined4 *)((int)puVar12 + 0x13U & 0xfffffffc);
            *puVar3 = 0;
            *puVar12 = FUN_10045640;
            puVar2[*(int *)(iVar8 + 0x19a4) * 5 + 0x1a] = puVar3;
            if (*(char *)(iVar8 + 0x19ad) != '\0') {
              *puVar2 = 0;
              (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar8 + 0x18e0));
              bVar11 = false;
            }
            goto LAB_10045494;
          }
          *puVar2 = 0;
          (*(code *)PTR_FUN_10134114)(100);
          FUN_100fd300(puVar2);
LAB_10045498:
          piVar1 = *(int **)(iVar8 + 0x1990);
          *piVar1 = iVar6;
          piVar1[1] = iVar5;
          FUN_10045640(piVar1);
        }
        if (bVar11) {
          *puVar2 = 0;
        }
        iVar5 = *(int *)(param_1 + 4);
        if (*(char *)(param_1 + 0x21) == '\0') {
          puVar14 = (uint *)(iVar5 + 0xd8);
          uVar7 = *puVar14;
          if (uVar7 != 0) {
            uVar13 = 0;
            do {
              if (*(int *)(*(int *)(iVar5 + 0xd4) + uVar13 * 4) == param_1) {
                if (uVar13 != 0xffffffff) {
                  uVar13 = uVar13 + 1;
                  if (uVar13 < uVar7) {
                    do {
                      puVar2 = (undefined4 *)(*(int *)(iVar5 + 0xd4) + uVar13 * 4);
                      uVar13 = uVar13 + 1;
                      puVar2[-1] = *puVar2;
                    } while (uVar13 < *puVar14);
                  }
                  goto LAB_100455ec;
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar7);
          }
        }
        else {
          puVar14 = (uint *)(iVar5 + 0xe4);
          uVar7 = *puVar14;
          if (uVar7 != 0) {
            uVar13 = 0;
            do {
              if (*(int *)(*(int *)(iVar5 + 0xe0) + uVar13 * 4) == param_1) {
                if (uVar13 != 0xffffffff) {
                  uVar13 = uVar13 + 1;
                  if (uVar13 < uVar7) {
                    do {
                      puVar2 = (undefined4 *)(*(int *)(iVar5 + 0xe0) + uVar13 * 4);
                      uVar13 = uVar13 + 1;
                      puVar2[-1] = *puVar2;
                    } while (uVar13 < *puVar14);
                  }
LAB_100455ec:
                  *puVar14 = *puVar14 - 1;
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar7);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 0x28));
    }
  }
  else {
    FUN_10044af8(param_1);
  }
  return;
}

