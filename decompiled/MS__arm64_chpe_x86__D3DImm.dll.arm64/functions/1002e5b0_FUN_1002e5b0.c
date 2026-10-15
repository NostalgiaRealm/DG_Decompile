/*
 * FUN_1002e5b0 at 1002e5b0
 * undefined FUN_1002e5b0(void)
 * Address ranges: 1002e5b0-1002e737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e5b0(int param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar16 = param_3[1];
  uVar14 = *param_3;
  uVar12 = param_3[3];
  uVar10 = param_3[2];
  iVar5 = *(int *)(param_1 + 0x1d54);
  uVar17 = param_3[5];
  uVar15 = param_3[4];
  uVar13 = param_3[7];
  uVar11 = param_3[6];
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10081528(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002e6c8:
    if (cVar4 != '\0') goto LAB_1002e6fc;
  }
  else {
    puVar9 = (undefined4 *)FUN_100813d0(puVar2,0x48);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar5 + 0x12e8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = 0x48;
      puVar9[2] = param_1;
      puVar9[3] = param_2;
      *(undefined8 *)(puVar9 + 6) = uVar16;
      *(undefined8 *)(puVar9 + 4) = uVar14;
      *(undefined8 *)(puVar9 + 10) = uVar12;
      *(undefined8 *)(puVar9 + 8) = uVar10;
      *(undefined8 *)(puVar9 + 0xe) = uVar17;
      *(undefined8 *)(puVar9 + 0xc) = uVar15;
      *(undefined8 *)(puVar9 + 0x12) = uVar13;
      *(undefined8 *)(puVar9 + 0x10) = uVar11;
      puVar3 = (undefined4 *)((int)puVar9 + 0x53U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1002e740;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002e6c8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  *(undefined8 *)(piVar1 + 4) = uVar16;
  *(undefined8 *)(piVar1 + 2) = uVar14;
  *(undefined8 *)(piVar1 + 8) = uVar12;
  *(undefined8 *)(piVar1 + 6) = uVar10;
  *(undefined8 *)(piVar1 + 0xc) = uVar17;
  *(undefined8 *)(piVar1 + 10) = uVar15;
  *(undefined8 *)(piVar1 + 0x10) = uVar13;
  *(undefined8 *)(piVar1 + 0xe) = uVar11;
  FUN_1002e740(piVar1);
LAB_1002e6fc:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

