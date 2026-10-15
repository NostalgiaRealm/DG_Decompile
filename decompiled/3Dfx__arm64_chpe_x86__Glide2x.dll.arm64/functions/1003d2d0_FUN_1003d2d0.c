/*
 * FUN_1003d2d0 at 1003d2d0
 * undefined FUN_1003d2d0(void)
 * Address ranges: 1003d2d0-1003d43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d2d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined4 *puVar11;
  
  FUN_10032bf8(param_1 + 0x3440);
  iVar7 = *(int *)(param_1 + 0xd8);
  iVar8 = *(int *)(param_1 + 0x3188);
  puVar4 = (undefined4 *)(iVar8 + 0x11c0);
  FUN_10054e70(puVar4);
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    uVar1 = iVar7 + 3;
    iVar2 = (uVar1 & 0xfffffffc) + 8;
    puVar11 = (undefined4 *)FUN_10054d18(puVar4,iVar2);
    if (puVar11 != (undefined4 *)0x0) {
      piVar3 = (int *)(iVar8 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
        if (bVar10) {
          *piVar3 = *piVar3 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar11[1] = iVar2;
      puVar11[3] = param_1;
      uVar6 = (int)puVar11 + 0x13U & 0xfffffffc;
      puVar11[2] = uVar6;
      FUN_1007a780(uVar6,param_2,iVar7);
      puVar5 = (undefined4 *)((uVar1 & 0xfffffffc) + uVar6);
      *puVar5 = 0;
      *puVar11 = FUN_1003d450;
      puVar4[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = puVar5;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *puVar4 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar8 + 0x1220));
        return;
      }
      goto LAB_1003d424;
    }
    *puVar4 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar4);
  }
  puVar11 = *(undefined4 **)(iVar8 + 0x12d0);
  *puVar11 = param_2;
  puVar11[1] = param_1;
  FUN_1003d450(puVar11);
LAB_1003d424:
  *puVar4 = 0;
  return;
}

