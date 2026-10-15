/*
 * FUN_10018130 at 10018130
 * undefined FUN_10018130(void)
 * Address ranges: 10018130-10018477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10018130(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined2 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  
  piVar1 = (int *)(param_1 + 0xd05c);
  do {
    cVar13 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar15) {
      *piVar1 = *piVar1 + 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  DataMemoryBarrier(2,3);
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  puVar2 = (undefined4 *)&DAT_00000010;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + -0xb0);
  }
  local_6c = 0;
  uStack_8c = *puVar2;
  local_64 = 0;
  local_5c = 0;
  local_58 = 0;
  puVar2 = (undefined4 *)&DAT_000000e0;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x20);
  }
  local_88 = *puVar2;
  local_54 = 0xffffffff00000000;
  local_4c = 0xffffffff;
  local_90 = param_1;
  puVar18 = (undefined4 *)FUN_1006e920(*(undefined4 *)(param_1 + 0xcf00),&local_90);
  iVar17 = param_4[8];
  iVar4 = *param_4;
  iVar5 = param_4[7];
  iVar6 = param_4[6];
  iVar7 = param_4[5];
  iVar8 = param_4[4];
  iVar9 = param_4[3];
  iVar10 = param_4[2];
  iVar11 = param_4[1];
  iVar12 = *(int *)(param_1 + 0xcf04);
  puVar2 = (undefined4 *)(iVar12 + 0x11c0);
  FUN_1008fd30(puVar2);
  cVar13 = *(char *)(iVar12 + 0x12ec);
  bVar15 = true;
  if (cVar13 == '\0') {
LAB_1001836c:
    if (cVar13 != '\0') goto LAB_100183f8;
  }
  else {
    puVar19 = (undefined4 *)FUN_1008fbd8(puVar2,0x30);
    if (puVar19 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar12 + 0x12e8);
      do {
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar16) {
          *piVar1 = *piVar1 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      DataMemoryBarrier(2,3);
      puVar19[1] = 0x30;
      puVar19[2] = param_1;
      puVar19[3] = param_2;
      puVar19[4] = param_3;
      puVar19[5] = iVar4;
      puVar19[6] = iVar11;
      puVar19[7] = iVar10;
      puVar19[8] = iVar9;
      puVar19[9] = iVar8;
      puVar19[10] = iVar7;
      puVar19[0xb] = iVar6;
      puVar19[0xc] = iVar5;
      *(char *)(puVar19 + 0xd) = (char)iVar17;
      puVar3 = (undefined4 *)((int)puVar19 + 0x3bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar19 = FUN_10018480;
      puVar2[*(int *)(iVar12 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar12 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar12 + 0x1220));
        bVar15 = false;
      }
      goto LAB_1001836c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar2);
  }
  piVar1 = *(int **)(iVar12 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = iVar4;
  piVar1[4] = iVar11;
  piVar1[5] = iVar10;
  piVar1[6] = iVar9;
  piVar1[7] = iVar8;
  piVar1[8] = iVar7;
  piVar1[9] = iVar6;
  piVar1[10] = iVar5;
  *(char *)(piVar1 + 0xb) = (char)iVar17;
  FUN_10018480(piVar1);
LAB_100183f8:
  if (bVar15) {
    *puVar2 = 0;
  }
  if (param_3 != 0) {
    FUN_10090418(*(int *)(param_1 + 0xcf04) + 0x11c0);
  }
  if (puVar18 != (undefined4 *)0x0) {
    FUN_100703b8(*(undefined4 *)(param_1 + 0xcf00),puVar18);
    FUN_1006f598(*(undefined4 *)(param_1 + 0xcf00),*puVar18,0);
  }
  return 1;
}

