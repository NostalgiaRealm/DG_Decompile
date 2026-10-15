/*
 * FUN_1003ba20 at 1003ba20
 * undefined FUN_1003ba20(void)
 * Address ranges: 1003ba20-1003bba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ba20(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined1 auStack_170 [320];
  
  FUN_10033078(param_1 + 0x3440);
  FUN_1007ac00(auStack_170,param_2,0x135);
  iVar4 = *(int *)(param_1 + 0x3188);
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_100552f0(puVar2);
  cVar3 = *(char *)(iVar4 + 0x12ec);
  bVar7 = true;
  if (cVar3 == '\0') {
LAB_1003bb3c:
    if (cVar3 != '\0') goto LAB_1003bb64;
  }
  else {
    puVar8 = (undefined4 *)FUN_10055198(puVar2,0x13c);
    if (puVar8 != (undefined4 *)0x0) {
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
      puVar8[1] = 0x13c;
      puVar8[2] = param_1;
      FUN_1007ac00(puVar8 + 3,auStack_170,0x135);
      *(undefined4 *)((uint)(puVar8 + 0x51) & 0xfffffffc) = 0;
      *puVar8 = FUN_1003bbb0;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] =
           (undefined4 *)((uint)(puVar8 + 0x51) & 0xfffffffc);
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar4 + 0x1220));
        bVar7 = false;
      }
      goto LAB_1003bb3c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_100552f0(puVar2);
  }
  piVar1 = *(int **)(iVar4 + 0x12d0);
  *piVar1 = param_1;
  FUN_1007ac00(piVar1 + 1,auStack_170,0x135);
  FUN_1003bbb0(piVar1);
LAB_1003bb64:
  if (bVar7) {
    *puVar2 = 0;
  }
  return;
}

