/*
 * FUN_100b5c80 at 100b5c80
 * undefined FUN_100b5c80(void)
 * Address ranges: 100b5c80-100b5e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100b5c80(int param_1,int param_2,int param_3,int param_4,int param_5,undefined8 *param_6,
            int param_7,int param_8,int param_9)

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
  
  uVar12 = param_6[1];
  uVar11 = *param_6;
  uVar10 = param_6[2];
  iVar5 = *(int *)(param_1 + 0x1cf04);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_100b5de4:
    if (cVar4 != '\0') goto LAB_100b5e50;
  }
  else {
    puVar9 = (undefined4 *)FUN_10130778(puVar2,0x38);
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
      puVar9[1] = 0x38;
      puVar9[2] = param_1;
      puVar9[3] = param_2;
      puVar9[4] = param_3;
      puVar9[5] = param_4;
      puVar9[6] = param_5;
      *(undefined8 *)(puVar9 + 9) = uVar12;
      *(undefined8 *)(puVar9 + 7) = uVar11;
      *(undefined8 *)(puVar9 + 0xb) = uVar10;
      puVar9[0xd] = param_7;
      puVar9[0xe] = param_8;
      puVar9[0xf] = param_9;
      puVar3 = (undefined4 *)((int)puVar9 + 0x43U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_100b5ea0;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_100b5de4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = param_4;
  piVar1[4] = param_5;
  *(undefined8 *)(piVar1 + 7) = uVar12;
  *(undefined8 *)(piVar1 + 5) = uVar11;
  *(undefined8 *)(piVar1 + 9) = uVar10;
  piVar1[0xb] = param_7;
  piVar1[0xc] = param_8;
  piVar1[0xd] = param_9;
  FUN_100b5ea0(piVar1);
LAB_100b5e50:
  if (bVar8) {
    *puVar2 = 0;
  }
  return 1;
}

