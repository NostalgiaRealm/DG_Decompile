/*
 * FUN_1006d930 at 1006d930
 * undefined FUN_1006d930(void)
 * Address ranges: 1006d930-1006dab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006d930(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 *puVar8;
  
  iVar4 = *(int *)(param_1 + 0xf6b8);
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_101308d0(puVar2);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    iVar5 = (param_3 - param_2) * 0x10;
    puVar8 = (undefined4 *)FUN_10130778(puVar2,iVar5 + 0x10);
    if (puVar8 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar4 + 0x12e8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar8[1] = iVar5 + 0x10;
      puVar8[3] = param_1;
      puVar8[4] = param_2;
      puVar8[5] = param_3;
      uVar3 = (int)puVar8 + 0x1bU & 0xfffffffc;
      puVar8[2] = uVar3;
      FUN_101325a0(uVar3,param_4,iVar5);
      *(undefined4 *)(uVar3 + iVar5) = 0;
      *puVar8 = FUN_1006dac0;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + iVar5);
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1006da98;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar2);
  }
  puVar8 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar8 = param_4;
  puVar8[1] = param_1;
  puVar8[2] = param_2;
  puVar8[3] = param_3;
  FUN_1006dac0(puVar8);
LAB_1006da98:
  *puVar2 = 0;
  return;
}

