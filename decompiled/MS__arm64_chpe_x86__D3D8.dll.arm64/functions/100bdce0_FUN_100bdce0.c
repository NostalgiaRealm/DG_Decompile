/*
 * FUN_100bdce0 at 100bdce0
 * undefined FUN_100bdce0(void)
 * Address ranges: 100bdce0-100bdda3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bdce0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  while( true ) {
    uVar4 = FUN_100bdb90(uVar6);
    iVar5 = FUN_100ff610(param_2,uVar4,0x10);
    if (iVar5 == 0) break;
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return 0x80004002;
    }
  }
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  if (iVar5 + 1 != 1) {
    return 0;
  }
  piVar1 = (int *)&DAT_000058e4;
  if (*(int *)(param_1 + -0x20) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + -0x20) + 4);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return 0;
}

