/*
 * FUN_1002c7b0 at 1002c7b0
 * undefined FUN_1002c7b0(void)
 * Address ranges: 1002c7b0-1002c913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002c7b0(int param_1)

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
  undefined4 local_40 [4];
  
  local_40[0] = 0;
  iVar5 = *(int *)(param_1 + 0x3688);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_1004b290(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002c8a4:
    if (cVar4 != '\0') goto LAB_1002c8c8;
  }
  else {
    puVar9 = (undefined4 *)FUN_1004b138(puVar2,8);
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
      puVar9[3] = local_40;
      puVar3 = (undefined4 *)((int)puVar9 + 0x13U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1002c920;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002c8a4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = (int)local_40;
  FUN_1002c920(piVar1);
LAB_1002c8c8:
  if (bVar8) {
    *puVar2 = 0;
  }
  FUN_1004b978(*(int *)(param_1 + 0x3688) + 0x11c0);
  return local_40[0];
}

