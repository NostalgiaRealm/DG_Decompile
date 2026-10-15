/*
 * FUN_100914d0 at 100914d0
 * undefined FUN_100914d0(void)
 * Address ranges: 100914d0-10091573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100914d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x151) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    FUN_1008b890(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_1008b890(param_1 + 0x108,*(undefined4 *)(param_1 + 0x20),*puVar1);
    uVar6 = FUN_100ae1a0(param_1);
    FUN_1008b890(param_1 + 0x128,uVar6,*puVar1);
    piVar2 = (int *)(*(int *)(param_1 + 0x40) + 0x49c);
    do {
      iVar3 = *piVar2;
      if (iVar3 == param_1) {
        iVar3 = 0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar5) {
        *piVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  FUN_1008d5d0(param_1);
  return;
}

