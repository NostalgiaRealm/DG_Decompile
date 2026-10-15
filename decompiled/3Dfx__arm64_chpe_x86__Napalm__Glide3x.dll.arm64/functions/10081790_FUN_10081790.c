/*
 * FUN_10081790 at 10081790
 * undefined FUN_10081790(void)
 * Address ranges: 10081790-100817f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10081790(undefined4 *param_1)

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
    *param_1 = &PTR_FUN_1009f73c;
    FUN_10083420(param_1[2]);
    FUN_100833b0(param_1,0x10);
  }
  return iVar2;
}

