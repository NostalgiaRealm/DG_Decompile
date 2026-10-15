/*
 * FUN_10037888 at 10037888
 * undefined FUN_10037888(void)
 * Address ranges: 10037888-100378fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10037888(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  piVar1 = (int *)(DAT_100c2958 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  iVar4 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar4 == 0) {
    FUN_10001c10(1);
  }
  DAT_100c296c = DAT_100c296c + 1;
  return param_1;
}

