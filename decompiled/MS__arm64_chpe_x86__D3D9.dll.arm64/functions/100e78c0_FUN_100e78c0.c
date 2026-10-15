/*
 * FUN_100e78c0 at 100e78c0
 * undefined FUN_100e78c0(void)
 * Address ranges: 100e78c0-100e792b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e78c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = param_1 + 1;
  do {
    iVar2 = *piVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if ((param_1[2] + iVar2 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_1015fb7c;
    FUN_10132260(param_1,0x14);
  }
  return iVar2;
}

