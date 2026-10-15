/*
 * FUN_100a5540 at 100a5540
 * undefined FUN_100a5540(void)
 * Address ranges: 100a5540-100a56f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a5540(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar11 = param_3[4];
  uVar15 = param_4[1];
  uVar13 = *param_4;
  uVar5 = *param_1;
  uVar12 = param_4[2];
  iVar6 = param_1[1];
  uVar18 = param_3[1];
  uVar17 = *param_3;
  uVar16 = param_3[3];
  uVar14 = param_3[2];
  puVar2 = (undefined4 *)(iVar6 + 0x11c0);
  FUN_100fd300(puVar2);
  cVar4 = *(char *)(iVar6 + 0x12ec);
  bVar9 = true;
  if (cVar4 == '\0') {
LAB_100a5678:
    if (cVar4 != '\0') goto LAB_100a56bc;
  }
  else {
    puVar10 = (undefined4 *)FUN_100fd1a8(puVar2,0x48);
    if (puVar10 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar6 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar10[1] = 0x48;
      puVar10[2] = uVar5;
      puVar10[3] = param_2;
      *(undefined8 *)(puVar10 + 6) = uVar18;
      *(undefined8 *)(puVar10 + 4) = uVar17;
      *(undefined8 *)(puVar10 + 10) = uVar16;
      *(undefined8 *)(puVar10 + 8) = uVar14;
      *(undefined8 *)(puVar10 + 0xc) = uVar11;
      *(undefined8 *)(puVar10 + 0x10) = uVar15;
      *(undefined8 *)(puVar10 + 0xe) = uVar13;
      *(undefined8 *)(puVar10 + 0x12) = uVar12;
      puVar3 = (undefined4 *)((int)puVar10 + 0x53U & 0xfffffffc);
      *puVar3 = 0;
      *puVar10 = FUN_100a5700;
      puVar2[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar6 + 0x1220));
        bVar9 = false;
      }
      goto LAB_100a5678;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar2);
  }
  puVar10 = *(undefined4 **)(iVar6 + 0x12d0);
  *puVar10 = uVar5;
  puVar10[1] = param_2;
  *(undefined8 *)(puVar10 + 4) = uVar18;
  *(undefined8 *)(puVar10 + 2) = uVar17;
  *(undefined8 *)(puVar10 + 8) = uVar16;
  *(undefined8 *)(puVar10 + 6) = uVar14;
  *(undefined8 *)(puVar10 + 10) = uVar11;
  *(undefined8 *)(puVar10 + 0xe) = uVar15;
  *(undefined8 *)(puVar10 + 0xc) = uVar13;
  *(undefined8 *)(puVar10 + 0x10) = uVar12;
  FUN_100a5700(puVar10);
LAB_100a56bc:
  if (bVar9) {
    *puVar2 = 0;
  }
  return;
}

