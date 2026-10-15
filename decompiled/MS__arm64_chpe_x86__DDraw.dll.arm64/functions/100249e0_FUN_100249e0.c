/*
 * FUN_100249e0 at 100249e0
 * undefined FUN_100249e0(void)
 * Address ranges: 100249e0-10024b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100249e0(int param_1,int param_2,int param_3)

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
  
  if (*(int *)(param_1 + -0xa4) - 0x19U < 2) {
    return;
  }
  iVar5 = *(int *)(param_1 + -0x7c);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_1008fd30(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10024aec:
    if (cVar4 != '\0') goto LAB_10024b14;
  }
  else {
    puVar9 = (undefined4 *)FUN_1008fbd8(puVar2,0xc);
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
      puVar9[2] = param_1 + -0xc0;
      puVar9[3] = param_2;
      puVar9[4] = param_3;
      puVar3 = (undefined4 *)((int)puVar9 + 0x17U & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10024b60;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10024aec;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1 + -0xc0;
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  FUN_10024b60(piVar1);
LAB_10024b14:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

