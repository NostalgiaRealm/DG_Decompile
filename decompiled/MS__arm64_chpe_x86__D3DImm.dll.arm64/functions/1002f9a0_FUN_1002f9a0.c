/*
 * FUN_1002f9a0 at 1002f9a0
 * undefined FUN_1002f9a0(void)
 * Address ranges: 1002f9a0-1002faff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f9a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *puVar10;
  
  iVar5 = *(int *)(*(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x38) * 8);
  iVar6 = *(int *)(param_1 + 0x1d54);
  puVar2 = (undefined4 *)(iVar6 + 0x11c0);
  FUN_10081528(puVar2);
  cVar4 = *(char *)(iVar6 + 0x12ec);
  bVar9 = true;
  if (cVar4 == '\0') {
LAB_1002faa4:
    if (cVar4 != '\0') goto LAB_1002fac4;
  }
  else {
    puVar10 = (undefined4 *)FUN_100813d0(puVar2,8);
    if (puVar10 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar6 + 0x12e8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar10[1] = 8;
      puVar10[2] = param_1;
      puVar10[3] = iVar5;
      puVar3 = (undefined4 *)((int)puVar10 + 0x13U & 0xfffffffc);
      *puVar3 = 0;
      *puVar10 = FUN_1002fb10;
      puVar2[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar6 + 0x1220));
        bVar9 = false;
      }
      goto LAB_1002faa4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar6 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = iVar5;
  FUN_1002fb10(piVar1);
LAB_1002fac4:
  if (bVar9) {
    *puVar2 = 0;
  }
  return;
}

