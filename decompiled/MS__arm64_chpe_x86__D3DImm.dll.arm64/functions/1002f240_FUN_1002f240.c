/*
 * FUN_1002f240 at 1002f240
 * undefined FUN_1002f240(void)
 * Address ranges: 1002f240-1002f427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f240(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7,undefined1 param_8)

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
  
  if (7 < param_2) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x1d54);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10081528(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_1002f38c:
    if (cVar4 != '\0') goto LAB_1002f3e4;
  }
  else {
    puVar9 = (undefined4 *)FUN_100813d0(puVar2,0x20);
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
      puVar9[1] = 0x20;
      puVar9[2] = param_1;
      puVar9[3] = param_2;
      puVar9[4] = param_3;
      puVar9[5] = param_4;
      puVar9[6] = param_5;
      puVar9[7] = param_6;
      *(undefined1 *)(puVar9 + 8) = param_7;
      *(undefined1 *)(puVar9 + 9) = param_8;
      puVar3 = (undefined4 *)((int)puVar9 + 0x2bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1002f430;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_1002f38c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  piVar1[3] = param_4;
  piVar1[4] = param_5;
  piVar1[5] = param_6;
  *(undefined1 *)(piVar1 + 6) = param_7;
  *(undefined1 *)(piVar1 + 7) = param_8;
  FUN_1002f430(piVar1);
LAB_1002f3e4:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

