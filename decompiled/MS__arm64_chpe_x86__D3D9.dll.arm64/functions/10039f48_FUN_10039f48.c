/*
 * FUN_10039f48 at 10039f48
 * undefined FUN_10039f48(void)
 * Address ranges: 10039f48-10039ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_10039f48(undefined1 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_40 [32];
  
  piVar1 = (int *)(DAT_10175b54 + 0x20);
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
  if (iVar4 + 1 == 1) {
    iVar4 = *(int *)(DAT_10175b54 + 0x1c);
    while (iVar4 != 0) {
      (*(code *)PTR_FUN_1016c238)(auStack_40,0,0,0,0x400000);
      iVar4 = *(int *)(DAT_10175b54 + 0x1c);
    }
  }
  *param_1 = 1;
  iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
  if (iVar4 == 0) {
    FUN_100071d0(0);
  }
  return param_1;
}

