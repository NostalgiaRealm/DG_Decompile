/*
 * FUN_1003b120 at 1003b120
 * undefined FUN_1003b120(void)
 * Address ranges: 1003b120-1003b277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003b120(int param_1,undefined2 param_2)

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
  
  FUN_10033078(param_1 + 0x3440);
  iVar5 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_100552f0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1003b21c:
    if (cVar4 != '\0') goto LAB_1003b23c;
  }
  else {
    puVar9 = (undefined4 *)FUN_10055198(puVar2,8);
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
      puVar9[1] = 8;
      puVar9[2] = param_1;
      *(undefined2 *)(puVar9 + 3) = param_2;
      puVar3 = (undefined4 *)((int)puVar9 + 0x13U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1003b280;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1003b21c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  *(undefined2 *)(piVar1 + 1) = param_2;
  FUN_1003b280(piVar1);
LAB_1003b23c:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

