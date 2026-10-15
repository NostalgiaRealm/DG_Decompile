/*
 * FUN_100666a0 at 100666a0
 * undefined FUN_100666a0(void)
 * Address ranges: 100666a0-10066807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100666a0(int param_1,undefined8 *param_2)

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
  
  iVar5 = *(int *)(param_1 + 0xf6b8);
  uVar12 = param_2[1];
  uVar11 = *param_2;
  uVar10 = param_2[2];
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_101308d0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_100667a4:
    if (cVar4 != '\0') goto LAB_100667cc;
  }
  else {
    puVar9 = (undefined4 *)FUN_10130778(puVar2,0x1c);
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
      puVar9[1] = 0x1c;
      puVar9[2] = param_1;
      *(undefined8 *)(puVar9 + 5) = uVar12;
      *(undefined8 *)(puVar9 + 3) = uVar11;
      *(undefined8 *)(puVar9 + 7) = uVar10;
      puVar3 = (undefined4 *)((int)puVar9 + 0x27U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10066810;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_100667a4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar12;
  *(undefined8 *)(piVar1 + 1) = uVar11;
  *(undefined8 *)(piVar1 + 5) = uVar10;
  FUN_10066810(piVar1);
LAB_100667cc:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

