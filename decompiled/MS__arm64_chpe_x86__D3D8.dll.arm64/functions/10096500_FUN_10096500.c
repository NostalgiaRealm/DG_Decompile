/*
 * FUN_10096500 at 10096500
 * undefined FUN_10096500(void)
 * Address ranges: 10096500-100966f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10096500(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

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
  
  iVar5 = *(int *)(param_5 + 0x1cf04);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_100fd300(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1009664c:
    if (cVar4 != '\0') goto LAB_100966ac;
  }
  else {
    puVar9 = (undefined4 *)FUN_100fd1a8(puVar2,0x24);
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
      puVar9[1] = 0x24;
      puVar9[2] = param_5;
      puVar9[3] = param_6;
      puVar9[4] = param_7;
      puVar9[5] = param_8;
      puVar9[6] = param_9;
      puVar9[7] = param_1;
      puVar9[8] = param_2;
      puVar9[9] = param_3;
      puVar9[10] = param_4;
      puVar3 = (undefined4 *)((int)puVar9 + 0x2fU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10096700;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1009664c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_5;
  piVar1[1] = param_6;
  piVar1[2] = param_7;
  piVar1[3] = param_8;
  piVar1[4] = param_9;
  piVar1[5] = param_1;
  piVar1[6] = param_2;
  piVar1[7] = param_3;
  piVar1[8] = param_4;
  FUN_10096700(piVar1);
LAB_100966ac:
  if (bVar8) {
    *puVar2 = 0;
  }
  return 1;
}

