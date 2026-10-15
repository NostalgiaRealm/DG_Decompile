/*
 * FUN_10022db8 at 10022db8
 * undefined FUN_10022db8(void)
 * Address ranges: 10022db8-10022fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022db8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  FUN_1008fd30(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10022f14:
    if (cVar4 != '\0') goto LAB_10022f68;
  }
  else {
    puVar9 = (undefined4 *)FUN_1008fbd8(puVar2,0x50);
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
      *puVar9 = FUN_10022fb0;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10022f14;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar2);
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
  FUN_10022fb0(puVar9);
LAB_10022f68:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

