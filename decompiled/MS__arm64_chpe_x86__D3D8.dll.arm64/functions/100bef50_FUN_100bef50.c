/*
 * FUN_100bef50 at 100bef50
 * undefined FUN_100bef50(void)
 * Address ranges: 100bef50-100bf00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bef50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = FUN_100aeca8(*(undefined4 *)(param_1 + 0xe4),0,0,param_1 + -8,param_2,0,0,param_4,param_5)
  ;
  if (iVar4 != 0) {
    uVar5 = FUN_10017b70(iVar4,param_3);
    if ((uVar5 & 1) == 0) {
      FUN_100be690(iVar4);
      FUN_100fec90(iVar4,0x7c);
      iVar4 = 0;
    }
    else {
      piVar1 = (int *)(iVar4 + 100);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
    }
  }
  return iVar4;
}

