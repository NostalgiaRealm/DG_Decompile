/*
 * FUN_10038f00 at 10038f00
 * undefined FUN_10038f00(void)
 * Address ranges: 10038f00-100390cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038f00(int param_1,undefined4 param_2)

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
  ulonglong uVar10;
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [528];
  
  FUN_10033078(param_1 + 0x3440);
  FUN_1002ee78(param_1,auStack_260,param_2);
  uVar10 = FUN_1002f038(param_1,param_2,auStack_260);
  if ((uVar10 & 1) != 0) {
    FUN_100559d8(*(int *)(param_1 + 0x3188) + 0x11c0);
    FUN_1002f388(param_1,param_2,auStack_260);
    return;
  }
  FUN_1007ac00(auStack_240,param_2,0x20c);
  iVar5 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_100552f0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10039064:
    if (cVar4 != '\0') goto LAB_1003908c;
  }
  else {
    puVar9 = (undefined4 *)FUN_10055198(puVar2,0x210);
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
      puVar9[1] = 0x210;
      puVar9[2] = param_1;
      FUN_1007ac00(puVar9 + 3,auStack_240,0x20c);
      puVar3 = (undefined4 *)((int)puVar9 + 0x21bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_100390d0;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10039064;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  FUN_1007ac00(piVar1 + 1,auStack_240,0x20c);
  FUN_100390d0(piVar1);
LAB_1003908c:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

