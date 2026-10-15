/*
 * FUN_10039140 at 10039140
 * undefined FUN_10039140(void)
 * Address ranges: 10039140-1003927f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039140(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  
  iVar4 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_10054e70(puVar2);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar7 = (undefined4 *)FUN_10054d18(puVar2,0xc08);
    if (puVar7 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar4 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar7[1] = 0xc08;
      puVar7[3] = param_1;
      uVar3 = (int)puVar7 + 0x13U & 0xfffffffc;
      puVar7[2] = uVar3;
      FUN_1007a780(uVar3,param_2,0xc00);
      *(undefined4 *)(uVar3 + 0xc00) = 0;
      *puVar7 = FUN_10039290;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + 0xc00);
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1003926c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar2);
  }
  puVar7 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar7 = param_2;
  puVar7[1] = param_1;
  FUN_10039290(puVar7);
LAB_1003926c:
  *puVar2 = 0;
  return;
}

