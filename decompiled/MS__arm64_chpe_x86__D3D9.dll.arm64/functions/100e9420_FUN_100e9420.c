/*
 * FUN_100e9420 at 100e9420
 * undefined FUN_100e9420(void)
 * Address ranges: 100e9420-100e94db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e9420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = FUN_100cf9f8(*(undefined4 *)(param_1 + 0x118),0,0,param_1 + -8,param_2,0,0,param_4,param_5
                      );
  if (iVar4 != 0) {
    uVar5 = FUN_1001ce70(iVar4,param_3);
    if ((uVar5 & 1) == 0) {
      FUN_100e85d0(iVar4);
      FUN_10132260(iVar4,0x90);
      iVar4 = 0;
    }
    else {
      piVar1 = (int *)(iVar4 + 0x78);
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

