/*
 * FUN_10028110 at 10028110
 * undefined FUN_10028110(void)
 * Address ranges: 10028110-10028297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028110(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_40 [4];
  
  FUN_10021d18(param_1 + 0x35c0);
  piVar2 = (int *)(param_1 + 0x3308);
  iVar6 = *piVar2;
  puVar3 = (undefined4 *)(iVar6 + 0x11c0);
  FUN_10045bd0(puVar3);
  cVar5 = *(char *)(iVar6 + 0x12ec);
  bVar9 = true;
  if (cVar5 == '\0') {
LAB_10028200:
    if (cVar5 != '\0') goto LAB_10028218;
  }
  else {
    puVar10 = (undefined4 *)FUN_10045a78(puVar3,4);
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
      puVar10[1] = 4;
      puVar10[2] = param_1;
      puVar4 = (undefined4 *)((int)puVar10 + 0xfU & 0xfffffffc);
      *puVar4 = 0;
      *puVar10 = FUN_100280c0;
      puVar3[*(int *)(iVar6 + 0x12e4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar6 + 0x12ed) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_100a00c4)(*(undefined4 *)(iVar6 + 0x1220));
        bVar9 = false;
      }
      goto LAB_10028200;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_100a00dc)(100);
    FUN_10045bd0(puVar3);
  }
  piVar1 = *(int **)(iVar6 + 0x12d0);
  *piVar1 = param_1;
  FUN_100280c0(piVar1);
LAB_10028218:
  if (bVar9) {
    *puVar3 = 0;
  }
  iVar6 = *piVar2;
  local_40[0] = 0;
  puVar3 = (undefined4 *)(iVar6 + 0x121c);
  iVar11 = (*(code *)PTR_FUN_100a0060)(*puVar3,local_40);
  if (iVar11 == 0) {
    *puVar3 = 0;
    *(undefined4 *)(iVar6 + 0x12e8) = 0;
  }
  FUN_100462b8(*piVar2 + 0x11c0);
  return;
}

