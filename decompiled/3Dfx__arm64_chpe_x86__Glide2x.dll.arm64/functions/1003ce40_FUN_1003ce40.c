/*
 * FUN_1003ce40 at 1003ce40
 * undefined FUN_1003ce40(void)
 * Address ranges: 1003ce40-1003cf9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ce40(int param_1,undefined8 *param_2)

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
  
  FUN_10032bf8(param_1 + 0x3440);
  uVar11 = param_2[1];
  uVar10 = *param_2;
  iVar5 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10054e70(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1003cf44:
    if (cVar4 != '\0') goto LAB_1003cf68;
  }
  else {
    puVar9 = (undefined4 *)FUN_10054d18(puVar2,0x14);
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
      puVar9[1] = 0x14;
      puVar9[2] = param_1;
      *(undefined8 *)(puVar9 + 5) = uVar11;
      *(undefined8 *)(puVar9 + 3) = uVar10;
      puVar3 = (undefined4 *)((int)puVar9 + 0x1fU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1003cfb0;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1003cf44;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  *(undefined8 *)(piVar1 + 3) = uVar11;
  *(undefined8 *)(piVar1 + 1) = uVar10;
  FUN_1003cfb0(piVar1);
LAB_1003cf68:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

