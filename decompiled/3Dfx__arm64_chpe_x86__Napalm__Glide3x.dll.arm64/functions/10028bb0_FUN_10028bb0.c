/*
 * FUN_10028bb0 at 10028bb0
 * undefined FUN_10028bb0(void)
 * Address ranges: 10028bb0-10028d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028bb0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  
  FUN_100226d8(param_2 + 0x3940);
  iVar5 = *(int *)(param_2 + 0x3688);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_1004b290(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10028cd8:
    if (cVar4 != '\0') goto LAB_10028d14;
  }
  else {
    puVar9 = (undefined4 *)FUN_1004b138(puVar2,0x14);
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
      puVar9[2] = param_2;
      puVar9[3] = param_3;
      puVar9[4] = param_4;
      puVar9[5] = param_5;
      puVar9[6] = param_1;
      puVar3 = (undefined4 *)((int)puVar9 + 0x1fU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10028d60;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10028cd8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_2;
  piVar1[1] = param_3;
  piVar1[2] = param_4;
  piVar1[3] = param_5;
  piVar1[4] = param_1;
  FUN_10028d60(piVar1);
LAB_10028d14:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

