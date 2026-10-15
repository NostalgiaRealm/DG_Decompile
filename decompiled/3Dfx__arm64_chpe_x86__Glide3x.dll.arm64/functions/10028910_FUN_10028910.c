/*
 * FUN_10028910 at 10028910
 * undefined FUN_10028910(void)
 * Address ranges: 10028910-10028a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028910(int param_1)

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
  
  iVar5 = *(int *)(param_1 + 0x3308);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10045bd0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_100289f4:
    if (cVar4 != '\0') goto LAB_10028a04;
  }
  else {
    puVar9 = (undefined4 *)FUN_10045a78(puVar2,4);
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
      puVar9[1] = 4;
      puVar9[2] = param_1;
      puVar3 = (undefined4 *)((int)puVar9 + 0xfU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10028a50;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a00c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_100289f4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a00dc)(100);
    FUN_10045bd0(puVar2);
  }
  **(int **)(iVar5 + 0x12d0) = param_1;
LAB_10028a04:
  if (bVar8) {
    *puVar2 = 0;
  }
  FUN_100462b8(*(int *)(param_1 + 0x3308) + 0x11c0);
  return;
}

