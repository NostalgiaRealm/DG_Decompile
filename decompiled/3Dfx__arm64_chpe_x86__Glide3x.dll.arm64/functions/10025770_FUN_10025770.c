/*
 * FUN_10025770 at 10025770
 * undefined FUN_10025770(void)
 * Address ranges: 10025770-1002591b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025770(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_90 [80];
  
  FUN_10021d18(param_1 + 0x35c0);
  *(int *)(param_1 + 0x4278) = param_2;
  iVar8 = FUN_10025518(param_1 + 0x3f50,param_3,auStack_90);
  iVar4 = *(int *)(param_1 + 0x3308);
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_10045bd0(puVar2);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    iVar5 = iVar8 * 4;
    puVar9 = (undefined4 *)FUN_10045a78(puVar2,iVar5 + 0x10);
    if (puVar9 != (undefined4 *)0x0) {
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
      puVar9[1] = iVar5 + 0x10;
      puVar9[3] = param_1;
      puVar9[4] = iVar8;
      puVar9[5] = param_2;
      uVar3 = (int)puVar9 + 0x1bU & 0xfffffffc;
      puVar9[2] = uVar3;
      FUN_1007e4a0(uVar3,auStack_90,iVar5);
      *(undefined4 *)(uVar3 + iVar5) = 0;
      *puVar9 = FUN_10025920;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (undefined4 *)(uVar3 + iVar5);
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a00c4)(*(undefined4 *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_10025900;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a00dc)(100);
    FUN_10045bd0(puVar2);
  }
  piVar1 = *(int **)(iVar4 + 0x12d0);
  *piVar1 = (int)auStack_90;
  piVar1[1] = param_1;
  piVar1[2] = iVar8;
  piVar1[3] = param_2;
  FUN_10025920(piVar1);
LAB_10025900:
  *puVar2 = 0;
  return;
}

