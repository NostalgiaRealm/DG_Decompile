/*
 * FUN_1002a0d0 at 1002a0d0
 * undefined FUN_1002a0d0(void)
 * Address ranges: 1002a0d0-1002a46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a0d0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *puVar12;
  uint uVar13;
  
  if (param_3 != 0) {
    uVar13 = 0;
    if (param_3 == 0) {
      return;
    }
    uVar5 = 0x3f0;
    if (param_3 < 0x3f1) {
      uVar5 = param_3;
    }
    iVar7 = uVar5 * 0x10;
    do {
      iVar8 = *(int *)(param_2 + 0x1d54);
      puVar2 = (undefined4 *)(iVar8 + 0x11c0);
      FUN_10081528(puVar2);
      if (*(char *)(iVar8 + 0x12ec) == '\0') {
LAB_1002a3dc:
        piVar1 = *(int **)(iVar8 + 0x12d0);
        *piVar1 = param_4;
        piVar1[1] = param_2;
        piVar1[2] = uVar5;
        piVar1[3] = param_5;
        piVar1[4] = param_6;
        piVar1[5] = param_1;
        piVar1[6] = param_7;
        piVar1[7] = param_8;
        FUN_1002a4c0(piVar1);
LAB_1002a43c:
        *puVar2 = 0;
      }
      else {
        puVar12 = (undefined4 *)FUN_100813d0(puVar2,iVar7 + 0x20);
        if (puVar12 == (undefined4 *)0x0) {
          *puVar2 = 0;
          (*(code *)PTR_FUN_100a1074)(100);
          FUN_10081528(puVar2);
          goto LAB_1002a3dc;
        }
        piVar1 = (int *)(iVar8 + 0x12e8);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
        puVar12[1] = iVar7 + 0x20;
        puVar12[3] = param_2;
        puVar12[4] = uVar5;
        puVar12[5] = param_5;
        puVar12[6] = param_6;
        puVar12[7] = param_1;
        puVar12[8] = param_7;
        puVar12[9] = param_8;
        uVar4 = (int)puVar12 + 0x2bU & 0xfffffffc;
        puVar12[2] = uVar4;
        FUN_10081ee0(uVar4,param_4,iVar7);
        *(undefined4 *)(uVar4 + iVar7) = 0;
        *puVar12 = FUN_1002a4c0;
        puVar2[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar4 + iVar7);
        if (*(char *)(iVar8 + 0x12ed) == '\0') goto LAB_1002a43c;
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar8 + 0x1220));
      }
      uVar13 = uVar5 + uVar13;
      param_4 = iVar7 + param_4;
      if (param_3 <= uVar13) {
        return;
      }
    } while( true );
  }
  iVar7 = *(int *)(param_2 + 0x1d54);
  puVar2 = (undefined4 *)(iVar7 + 0x11c0);
  FUN_10081528(puVar2);
  cVar6 = *(char *)(iVar7 + 0x12ec);
  bVar11 = true;
  if (cVar6 == '\0') {
LAB_1002a208:
    if (cVar6 != '\0') goto LAB_1002a24c;
  }
  else {
    puVar12 = (undefined4 *)FUN_100813d0(puVar2,0x18);
    if (puVar12 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar7 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = 0x18;
      puVar12[2] = param_2;
      puVar12[3] = param_5;
      puVar12[4] = param_6;
      puVar12[5] = param_1;
      puVar12[6] = param_7;
      puVar12[7] = param_8;
      puVar3 = (undefined4 *)((int)puVar12 + 0x23U & 0xfffffffc);
      *puVar3 = 0;
      *puVar12 = FUN_1002a480;
      puVar2[*(int *)(iVar7 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar7 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar7 + 0x1220));
        bVar11 = false;
      }
      goto LAB_1002a208;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar7 + 0x12d0);
  *piVar1 = param_2;
  piVar1[1] = param_5;
  piVar1[2] = param_6;
  piVar1[3] = param_1;
  piVar1[4] = param_7;
  piVar1[5] = param_8;
  FUN_1002a480(piVar1);
LAB_1002a24c:
  if (bVar11) {
    *puVar2 = 0;
  }
  return;
}

