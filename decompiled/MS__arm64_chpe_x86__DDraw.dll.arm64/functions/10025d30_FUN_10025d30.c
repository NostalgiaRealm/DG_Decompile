/*
 * FUN_10025d30 at 10025d30
 * undefined FUN_10025d30(void)
 * Address ranges: 10025d30-10025e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025d30(int param_1)

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
  
  iVar5 = *(int *)(param_1 + -0x7c);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_1008fd30(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10025e0c:
    if (cVar4 != '\0') goto LAB_10025e24;
  }
  else {
    puVar9 = (undefined4 *)FUN_1008fbd8(puVar2,4);
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
      puVar9[1] = 4;
      puVar9[2] = param_1 + -0xc0;
      puVar3 = (undefined4 *)((int)puVar9 + 0xfU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10025e60;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10025e0c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1 + -0xc0;
  FUN_10025e60(piVar1);
LAB_10025e24:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

