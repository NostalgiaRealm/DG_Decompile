/*
 * FUN_1002a8f0 at 1002a8f0
 * undefined FUN_1002a8f0(void)
 * Address ranges: 1002a8f0-1002aa77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002a8f0(int param_1,ulonglong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = (uint)param_2;
  if ((0x21 < uVar9) || ((0x260800000U >> (param_2 & 0x3f) & 1) == 0)) {
    if (uVar9 != 0x29) {
      return 0;
    }
    FUN_10029120(param_1 + 0x42e8);
  }
  iVar5 = *(int *)(param_1 + 0x3688);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_1004b290(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002aa18:
    if (cVar4 != '\0') goto LAB_1002aa38;
  }
  else {
    puVar10 = (undefined4 *)FUN_1004b138(puVar2,8);
    if (puVar10 != (undefined4 *)0x0) {
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
      puVar10[1] = 8;
      puVar10[2] = param_1;
      puVar10[3] = uVar9;
      puVar3 = (undefined4 *)((int)puVar10 + 0x13U & 0xfffffffc);
      *puVar3 = 0;
      *puVar10 = FUN_1002aa90;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002aa18;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = uVar9;
  FUN_1002aa90(piVar1);
LAB_1002aa38:
  if (bVar8) {
    *puVar2 = 0;
  }
  return 1;
}

