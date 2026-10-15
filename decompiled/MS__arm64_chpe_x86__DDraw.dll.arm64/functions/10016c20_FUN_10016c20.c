/*
 * FUN_10016c20 at 10016c20
 * undefined FUN_10016c20(void)
 * Address ranges: 10016c20-10016cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016c20(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x151) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    FUN_10010fe0(param_1 + 0xe8,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_10010fe0(param_1 + 0x108,*(undefined4 *)(param_1 + 0x20),*puVar1);
    uVar6 = FUN_10033d60(param_1);
    FUN_10010fe0(param_1 + 0x128,uVar6,*puVar1);
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
  FUN_10012d20(param_1);
  return;
}

