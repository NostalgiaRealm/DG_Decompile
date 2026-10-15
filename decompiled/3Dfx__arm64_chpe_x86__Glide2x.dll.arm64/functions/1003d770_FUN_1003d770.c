/*
 * FUN_1003d770 at 1003d770
 * undefined FUN_1003d770(void)
 * Address ranges: 1003d770-1003d9f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1003d770(int param_1,int param_2,int param_3,undefined1 param_4,int param_5,int param_6,
            int param_7,int param_8,undefined1 param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined1 local_50;
  undefined1 local_4f;
  char local_4e;
  int local_4c;
  int iStack_48;
  
  piVar2 = (int *)(param_1 + 0x3188);
  local_4f = param_4;
  local_4c = param_2;
  iStack_48 = param_3;
  if (*(int *)(*piVar2 + 0x12e8) == 0) {
    uVar9 = FUN_1002cee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  iVar5 = *piVar2;
  local_50 = 0;
  puVar3 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10054e70(puVar3);
  bVar8 = true;
  local_4e = *(char *)(iVar5 + 0x12ec) == '\0';
  if (*(char *)(iVar5 + 0x12ec) == '\0') {
LAB_1003d924:
    if (local_4e == '\0') goto LAB_1003d998;
  }
  else {
    puVar10 = (undefined4 *)FUN_10054d18(puVar3,0x28);
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
      puVar10[1] = 0x28;
      puVar10[2] = param_1;
      puVar10[3] = local_4c;
      puVar10[4] = iStack_48;
      *(undefined1 *)(puVar10 + 5) = local_4f;
      puVar10[6] = param_5;
      puVar10[7] = param_6;
      puVar10[8] = param_7;
      puVar10[9] = param_8;
      *(undefined1 *)(puVar10 + 10) = param_9;
      puVar10[0xb] = &local_50;
      puVar4 = (undefined4 *)((int)puVar10 + 0x33U & 0xfffffffc);
      *puVar4 = 0;
      *puVar10 = FUN_1003da00;
      puVar3[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1003d924;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar3);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = local_4c;
  piVar1[2] = iStack_48;
  *(undefined1 *)(piVar1 + 3) = local_4f;
  piVar1[4] = param_5;
  piVar1[5] = param_6;
  piVar1[6] = param_7;
  piVar1[7] = param_8;
  *(undefined1 *)(piVar1 + 8) = param_9;
  piVar1[9] = (int)&local_50;
  FUN_1003da00(piVar1);
LAB_1003d998:
  if (bVar8) {
    *puVar3 = 0;
  }
  FUN_10055558(*piVar2 + 0x11c0);
  return local_50;
}

