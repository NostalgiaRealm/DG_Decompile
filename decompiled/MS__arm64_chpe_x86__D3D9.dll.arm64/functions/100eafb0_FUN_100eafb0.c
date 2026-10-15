/*
 * FUN_100eafb0 at 100eafb0
 * undefined FUN_100eafb0(void)
 * Address ranges: 100eafb0-100eb07b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100eafb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  while (iVar4 = FUN_10132550(param_2,uVar5 * 0x10 + 0x101632f0,0x10), iVar4 != 0) {
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return 0x80004002;
    }
  }
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  if (iVar4 + 1 != 1) {
    return 0;
  }
  piVar1 = (int *)&DAT_000066bc;
  if (*(int *)(param_1 + -0x3c) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + -0x3c) + 8);
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

