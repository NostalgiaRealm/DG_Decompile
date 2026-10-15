/*
 * FUN_10026ec0 at 10026ec0
 * undefined FUN_10026ec0(void)
 * Address ranges: 10026ec0-10027047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10026ec0(int param_1,ulonglong param_2)

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
    FUN_100256f0(param_1 + 0x3f50);
  }
  iVar5 = *(int *)(param_1 + 0x3308);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10045bd0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10026fe8:
    if (cVar4 != '\0') goto LAB_10027008;
  }
  else {
    puVar10 = (undefined4 *)FUN_10045a78(puVar2,8);
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
      *puVar10 = FUN_10027060;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a00c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10026fe8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a00dc)(100);
    FUN_10045bd0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = uVar9;
  FUN_10027060(piVar1);
LAB_10027008:
  if (bVar8) {
    *puVar2 = 0;
  }
  return 1;
}

