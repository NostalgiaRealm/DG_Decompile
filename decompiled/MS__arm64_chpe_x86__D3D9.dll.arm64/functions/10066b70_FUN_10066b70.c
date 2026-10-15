/*
 * FUN_10066b70 at 10066b70
 * undefined FUN_10066b70(void)
 * Address ranges: 10066b70-10066dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066b70(int param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar15 = *param_5;
  iVar5 = *(int *)(param_5 + 1);
  uVar16 = *(undefined8 *)((int)param_4 + 0x24);
  iVar6 = *(int *)((int)param_4 + 0x2c);
  uVar19 = param_4[3];
  iVar7 = *(int *)(param_4 + 4);
  uVar18 = *(undefined8 *)((int)param_4 + 0xc);
  iVar8 = *(int *)((int)param_4 + 0x14);
  uVar17 = *param_4;
  iVar9 = *(int *)(param_1 + 0xf6b8);
  iVar10 = *(int *)(param_4 + 1);
  puVar2 = (undefined4 *)(iVar9 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar9 + 0x12ec);
  bVar13 = true;
  if (cVar4 == '\0') {
LAB_10066d10:
    if (cVar4 != '\0') goto LAB_10066d90;
  }
  else {
    puVar14 = (undefined4 *)FUN_10130778(puVar2,0x48);
    if (puVar14 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar9 + 0x12e8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      DataMemoryBarrier(2,3);
      puVar14[1] = 0x48;
      puVar14[2] = param_1;
      puVar14[3] = param_2;
      puVar14[4] = param_3;
      *(undefined8 *)(puVar14 + 5) = uVar17;
      puVar14[7] = iVar10;
      *(undefined8 *)(puVar14 + 8) = uVar18;
      puVar14[10] = iVar8;
      *(undefined8 *)(puVar14 + 0xb) = uVar19;
      puVar14[0xd] = iVar7;
      *(undefined8 *)(puVar14 + 0xe) = uVar16;
      puVar14[0x10] = iVar6;
      *(undefined8 *)(puVar14 + 0x11) = uVar15;
      puVar14[0x13] = iVar5;
      puVar3 = (undefined4 *)((int)puVar14 + 0x53U & 0xfffffffc);
      *puVar3 = 0;
      *puVar14 = FUN_10066de0;
      puVar2[*(int *)(iVar9 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar9 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar9 + 0x1220));
        bVar13 = false;
      }
      goto LAB_10066d10;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar9 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  *(undefined8 *)(piVar1 + 3) = uVar17;
  piVar1[5] = iVar10;
  *(undefined8 *)(piVar1 + 6) = uVar18;
  piVar1[8] = iVar8;
  *(undefined8 *)(piVar1 + 9) = uVar19;
  piVar1[0xb] = iVar7;
  *(undefined8 *)(piVar1 + 0xc) = uVar16;
  piVar1[0xe] = iVar6;
  *(undefined8 *)(piVar1 + 0xf) = uVar15;
  piVar1[0x11] = iVar5;
  FUN_10066de0(piVar1);
LAB_10066d90:
  if (bVar13) {
    *puVar2 = 0;
  }
  return;
}

