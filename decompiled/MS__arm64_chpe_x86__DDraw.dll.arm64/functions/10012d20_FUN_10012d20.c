/*
 * FUN_10012d20 at 10012d20
 * undefined FUN_10012d20(void)
 * Address ranges: 10012d20-10012dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012d20(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0xd8) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    uVar6 = FUN_10033d60(param_1);
    FUN_10010fe0(param_1 + 0xac,uVar6,*puVar1);
    FUN_10010fe0(param_1 + 0x48,*(undefined4 *)(param_1 + 0x2c),*puVar1);
    FUN_10010fe0(param_1 + 0x68,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_100914d0(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(char *)(param_1 + 0xd8) = '\0';
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
  return;
}

