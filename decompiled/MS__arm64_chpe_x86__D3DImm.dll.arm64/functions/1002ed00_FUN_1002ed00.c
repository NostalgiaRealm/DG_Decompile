/*
 * FUN_1002ed00 at 1002ed00
 * undefined FUN_1002ed00(void)
 * Address ranges: 1002ed00-1002ee83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ed00(int param_1,undefined8 *param_2)

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
  undefined8 uVar18;
  
  uVar10 = param_2[8];
  uVar17 = param_2[1];
  uVar15 = *param_2;
  uVar13 = param_2[3];
  uVar11 = param_2[2];
  uVar18 = param_2[5];
  uVar16 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  iVar5 = *(int *)(param_1 + 0x1d54);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10081528(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002ee18:
    if (cVar4 != '\0') goto LAB_1002ee4c;
  }
  else {
    puVar9 = (undefined4 *)FUN_100813d0(puVar2,0x4c);
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
      puVar9[1] = 0x4c;
      puVar9[2] = param_1;
      *(undefined8 *)(puVar9 + 5) = uVar17;
      *(undefined8 *)(puVar9 + 3) = uVar15;
      *(undefined8 *)(puVar9 + 9) = uVar13;
      *(undefined8 *)(puVar9 + 7) = uVar11;
      *(undefined8 *)(puVar9 + 0xd) = uVar18;
      *(undefined8 *)(puVar9 + 0xb) = uVar16;
      *(undefined8 *)(puVar9 + 0x11) = uVar14;
      *(undefined8 *)(puVar9 + 0xf) = uVar12;
      *(undefined8 *)(puVar9 + 0x13) = uVar10;
      puVar3 = (undefined4 *)((int)puVar9 + 0x57U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1002ee90;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002ee18;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar17;
  *(undefined8 *)(piVar1 + 1) = uVar15;
  *(undefined8 *)(piVar1 + 7) = uVar13;
  *(undefined8 *)(piVar1 + 5) = uVar11;
  *(undefined8 *)(piVar1 + 0xb) = uVar18;
  *(undefined8 *)(piVar1 + 9) = uVar16;
  *(undefined8 *)(piVar1 + 0xf) = uVar14;
  *(undefined8 *)(piVar1 + 0xd) = uVar12;
  *(undefined8 *)(piVar1 + 0x11) = uVar10;
  FUN_1002ee90(piVar1);
LAB_1002ee4c:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

