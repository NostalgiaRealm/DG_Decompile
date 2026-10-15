/*
 * FUN_1009d0b0 at 1009d0b0
 * undefined FUN_1009d0b0(void)
 * Address ranges: 1009d0b0-1009d2a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d0b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

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
  
  uVar10 = param_6[4];
  uVar14 = param_7[1];
  uVar12 = *param_7;
  uVar11 = param_7[2];
  uVar17 = param_6[1];
  uVar16 = *param_6;
  uVar15 = param_6[3];
  uVar13 = param_6[2];
  iVar5 = *(int *)(*param_1 + 0x44);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_100fd300(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1009d20c:
    if (cVar4 != '\0') goto LAB_1009d260;
  }
  else {
    puVar9 = (undefined4 *)FUN_100fd1a8(puVar2,0x50);
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
      puVar9[1] = 0x50;
      puVar9[2] = param_2;
      puVar9[3] = param_3;
      puVar9[4] = param_4;
      puVar9[5] = param_5;
      *(undefined8 *)(puVar9 + 8) = uVar17;
      *(undefined8 *)(puVar9 + 6) = uVar16;
      *(undefined8 *)(puVar9 + 0xc) = uVar15;
      *(undefined8 *)(puVar9 + 10) = uVar13;
      *(undefined8 *)(puVar9 + 0xe) = uVar10;
      *(undefined8 *)(puVar9 + 0x12) = uVar14;
      *(undefined8 *)(puVar9 + 0x10) = uVar12;
      *(undefined8 *)(puVar9 + 0x14) = uVar11;
      puVar3 = (undefined4 *)((int)puVar9 + 0x5bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1009d2b0;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1009d20c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar2);
  }
  puVar9 = *(undefined4 **)(iVar5 + 0x12d0);
  *puVar9 = param_2;
  puVar9[1] = param_3;
  puVar9[2] = param_4;
  puVar9[3] = param_5;
  *(undefined8 *)(puVar9 + 6) = uVar17;
  *(undefined8 *)(puVar9 + 4) = uVar16;
  *(undefined8 *)(puVar9 + 10) = uVar15;
  *(undefined8 *)(puVar9 + 8) = uVar13;
  *(undefined8 *)(puVar9 + 0xc) = uVar10;
  *(undefined8 *)(puVar9 + 0x10) = uVar14;
  *(undefined8 *)(puVar9 + 0xe) = uVar12;
  *(undefined8 *)(puVar9 + 0x12) = uVar11;
  FUN_1009d2b0(puVar9);
LAB_1009d260:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

