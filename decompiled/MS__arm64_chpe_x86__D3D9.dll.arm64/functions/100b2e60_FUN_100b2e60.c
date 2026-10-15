/*
 * FUN_100b2e60 at 100b2e60
 * undefined FUN_100b2e60(void)
 * Address ranges: 100b2e60-100b31c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b2e60(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  piVar1 = (int *)(param_1 + 0x1d05c);
  do {
    cVar14 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar16) {
      *piVar1 = *piVar1 + 1;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  DataMemoryBarrier(2,3);
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  puVar2 = (undefined4 *)&DAT_00000010;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + -0xb0);
  }
  local_64 = 0;
  uStack_84 = *puVar2;
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  puVar2 = (undefined4 *)&DAT_000000e0;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x20);
  }
  local_80 = *puVar2;
  local_4c = 0xffffffff00000000;
  local_44 = 0xffffffff;
  puVar2 = (undefined4 *)(param_1 + 0x1cf00);
  local_88 = param_1;
  puVar19 = (undefined4 *)FUN_1010f710(*puVar2,&local_88);
  iVar5 = *param_4;
  iVar18 = param_4[8];
  iVar6 = param_4[7];
  iVar7 = param_4[6];
  iVar8 = param_4[5];
  iVar9 = param_4[4];
  iVar10 = param_4[3];
  iVar11 = param_4[2];
  iVar12 = param_4[1];
  iVar13 = *(int *)(param_1 + 0x1cf04);
  puVar3 = (undefined4 *)(iVar13 + 0x11c0);
  FUN_101308d0(puVar3);
  cVar14 = *(char *)(iVar13 + 0x12ec);
  bVar16 = true;
  if (cVar14 == '\0') {
LAB_100b30b4:
    if (cVar14 != '\0') goto LAB_100b3140;
  }
  else {
    puVar20 = (undefined4 *)FUN_10130778(puVar3,0x30);
    if (puVar20 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar13 + 0x12e8);
      do {
        cVar15 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar17) {
          *piVar1 = *piVar1 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      DataMemoryBarrier(2,3);
      puVar20[1] = 0x30;
      puVar20[2] = param_1;
      puVar20[3] = param_2;
      puVar20[4] = param_3;
      puVar20[5] = iVar5;
      puVar20[6] = iVar12;
      puVar20[7] = iVar11;
      puVar20[8] = iVar10;
      puVar20[9] = iVar9;
      puVar20[10] = iVar8;
      puVar20[0xb] = iVar7;
      puVar20[0xc] = iVar6;
      *(char *)(puVar20 + 0xd) = (char)iVar18;
      puVar4 = (undefined4 *)((int)puVar20 + 0x3bU & 0xfffffffc);
      *puVar4 = 0;
      *puVar20 = FUN_100b31d0;
      puVar3[*(int *)(iVar13 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar13 + 0x12ed) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar13 + 0x1220));
        bVar16 = false;
      }
      goto LAB_100b30b4;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar3);
  }
  piVar1 = *(int **)(iVar13 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = iVar5;
  piVar1[4] = iVar12;
  piVar1[5] = iVar11;
  piVar1[6] = iVar10;
  piVar1[7] = iVar9;
  piVar1[8] = iVar8;
  piVar1[9] = iVar7;
  piVar1[10] = iVar6;
  *(char *)(piVar1 + 0xb) = (char)iVar18;
  FUN_100b31d0(piVar1);
LAB_100b3140:
  if (bVar16) {
    *puVar3 = 0;
  }
  if (param_3 != 0) {
    FUN_10130fb8(*(int *)(param_1 + 0x1cf04) + 0x11c0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    FUN_101111a8(*puVar2,puVar19);
    FUN_10110388(*puVar2,*puVar19,0);
  }
  return 1;
}

