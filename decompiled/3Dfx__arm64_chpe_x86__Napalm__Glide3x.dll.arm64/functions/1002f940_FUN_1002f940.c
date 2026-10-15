/*
 * FUN_1002f940 at 1002f940
 * undefined FUN_1002f940(void)
 * Address ranges: 1002f940-1002faaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f940(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined4 *puVar11;
  
  FUN_100226d8(param_1 + 0x3940);
  iVar7 = *(int *)(param_1 + 0xdc);
  iVar8 = *(int *)(param_1 + 0x3688);
  puVar4 = (undefined4 *)(iVar8 + 0x11c0);
  FUN_1004b290(puVar4);
  if (*(char *)(iVar8 + 0x12ec) != '\0') {
    uVar1 = iVar7 + 3;
    iVar2 = (uVar1 & 0xfffffffc) + 8;
    puVar11 = (undefined4 *)FUN_1004b138(puVar4,iVar2);
    if (puVar11 != (undefined4 *)0x0) {
      piVar3 = (int *)(iVar8 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
        if (bVar10) {
          *piVar3 = *piVar3 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar11[1] = iVar2;
      puVar11[3] = param_1;
      uVar6 = (int)puVar11 + 0x13U & 0xfffffffc;
      puVar11[2] = uVar6;
      FUN_10083b40(uVar6,param_2,iVar7);
      puVar5 = (undefined4 *)((uVar1 & 0xfffffffc) + uVar6);
      *puVar5 = 0;
      *puVar11 = FUN_1002fac0;
      puVar4[*(int *)(iVar8 + 0x12e4) * 5 + 0x1a] = puVar5;
      if (*(char *)(iVar8 + 0x12ed) != '\0') {
        *puVar4 = 0;
        (*(code *)PTR_FUN_100a80c4)(*(undefined4 *)(iVar8 + 0x1220));
        return;
      }
      goto LAB_1002fa94;
    }
    *puVar4 = 0;
    (*(code *)PTR_FUN_100a80dc)(100);
    FUN_1004b290(puVar4);
  }
  puVar11 = *(undefined4 **)(iVar8 + 0x12d0);
  *puVar11 = param_2;
  puVar11[1] = param_1;
  FUN_1002fac0(puVar11);
LAB_1002fa94:
  *puVar4 = 0;
  return;
}

