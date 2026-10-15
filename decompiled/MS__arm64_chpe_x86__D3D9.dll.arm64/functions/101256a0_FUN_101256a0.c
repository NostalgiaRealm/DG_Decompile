/*
 * FUN_101256a0 at 101256a0
 * undefined FUN_101256a0(void)
 * Address ranges: 101256a0-10125707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_101256a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = param_1 + 3;
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
  if ((iVar2 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_10160364;
    FUN_101322d0(param_1[2]);
    FUN_10132260(param_1,0x10);
  }
  return iVar2;
}

