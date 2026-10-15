/*
 * FUN_100c4760 at 100c4760
 * undefined FUN_100c4760(void)
 * Address ranges: 100c4760-100c4b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c4760(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int extraout_w12;
  int *extraout_w13;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 local_78;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  
  local_44 = (int *)(param_1 + -0x80);
  local_68 = *local_44 + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0;
  local_64 = FUN_100c4198(param_1 + -0xc0);
  iVar16 = param_2[5];
  iVar15 = param_2[6];
  local_78 = 0;
  local_70 = 0;
  iVar17 = param_2[8];
  iVar14 = param_2[7];
  iVar9 = FUN_101308d0(local_68 + 0x1880);
  if (*(char *)(iVar9 + 300) == '\0') {
    iVar9 = (int)local_78;
    iVar13 = 0;
  }
  else {
    piVar1 = param_2 + 1;
    iVar9 = 4;
    if (*extraout_w13 != 0) {
      iVar9 = 8;
    }
    uVar12 = FUN_10120108(extraout_w12 + 0x1bb0,iVar9 * *piVar1 * *param_2,&local_78);
    iVar9 = (int)local_78;
    iVar13 = local_70;
    if ((uVar12 & 1) != 0) {
      iVar10 = FUN_10062e80(*piVar1,*param_2 << 2,iVar16,iVar15,local_78 & 0xffffffff,*param_2 << 2)
      ;
      iVar15 = *param_2 << 2;
      iVar16 = iVar9;
      iVar13 = local_70;
      if (iVar14 != 0) {
        FUN_10062e80(*piVar1,iVar15,iVar14,iVar17,iVar10,iVar15);
        iVar17 = *param_2 << 2;
        iVar14 = iVar10;
        iVar13 = local_70;
      }
    }
  }
  iVar8 = local_68;
  local_48 = local_78._4_4_;
  local_4c = param_2[4];
  local_50 = param_2[3];
  local_54 = param_2[2];
  local_58 = param_2[1];
  local_5c = *param_2;
  bVar7 = true;
  local_60 = *(int *)(param_1 + 0x20);
  puVar2 = (undefined4 *)(local_68 + 0x1880);
  iVar10 = *local_44;
  cVar4 = *(char *)(local_68 + 0x19ac);
  if (cVar4 == '\0') {
LAB_100c4a58:
    if (cVar4 != '\0') goto LAB_100c4b08;
  }
  else {
    puVar11 = (undefined4 *)FUN_10130778(puVar2,0x3c);
    if (puVar11 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar8 + 0x19a8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar11[1] = 0x3c;
      puVar11[2] = iVar10;
      puVar11[3] = local_64;
      puVar11[4] = local_60;
      puVar11[5] = local_5c;
      puVar11[6] = local_58;
      puVar11[7] = local_54;
      puVar11[8] = local_50;
      puVar11[9] = local_4c;
      puVar11[10] = iVar16;
      puVar11[0xb] = iVar15;
      puVar11[0xc] = iVar14;
      puVar11[0xd] = iVar17;
      puVar11[0xe] = iVar9;
      puVar11[0xf] = local_48;
      puVar11[0x10] = iVar13;
      puVar3 = (undefined4 *)((int)puVar11 + 0x47U & 0xfffffffc);
      *puVar3 = 0;
      *puVar11 = FUN_100c4b50;
      puVar2[*(int *)(iVar8 + 0x19a4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar8 + 0x19ad) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar8 + 0x18e0));
        bVar7 = false;
      }
      goto LAB_100c4a58;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar8 + 0x1990);
  *piVar1 = iVar10;
  piVar1[1] = local_64;
  piVar1[2] = local_60;
  piVar1[3] = local_5c;
  piVar1[4] = local_58;
  piVar1[5] = local_54;
  piVar1[6] = local_50;
  piVar1[7] = local_4c;
  piVar1[8] = iVar16;
  piVar1[9] = iVar15;
  piVar1[10] = iVar14;
  piVar1[0xb] = iVar17;
  piVar1[0xc] = iVar9;
  piVar1[0xd] = local_48;
  piVar1[0xe] = iVar13;
  FUN_100c4b50(piVar1);
LAB_100c4b08:
  if (bVar7) {
    *puVar2 = 0;
  }
  return;
}

