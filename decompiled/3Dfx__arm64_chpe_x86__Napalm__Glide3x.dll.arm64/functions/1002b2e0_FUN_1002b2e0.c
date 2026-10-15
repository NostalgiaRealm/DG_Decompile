/*
 * FUN_1002b2e0 at 1002b2e0
 * undefined FUN_1002b2e0(void)
 * Address ranges: 1002b2e0-1002b44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b2e0(int param_1,int param_2,int param_3)

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
  
  FUN_100226d8(param_1 + 0x3940);
  iVar5 = *(int *)(param_1 + 0x3688);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_1004b290(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002b3e8:
    if (cVar4 != '\0') goto LAB_1002b410;
  }
  else {
    puVar9 = (undefined4 *)FUN_1004b138(puVar2,0xc);
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
      puVar9[1] = 0xc;
      puVar9[2] = param_1;
      puVar9[3] = param_2;
      puVar9[4] = param_3;
      puVar3 = (undefined4 *)((int)puVar9 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1002b450;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002b3e8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  FUN_1002b450(piVar1);
LAB_1002b410:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

