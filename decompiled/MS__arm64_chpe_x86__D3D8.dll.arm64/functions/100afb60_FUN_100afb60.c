/*
 * FUN_100afb60 at 100afb60
 * undefined FUN_100afb60(void)
 * Address ranges: 100afb60-100afbff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100afb60(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar3 = FUN_100af100(uVar5);
    iVar4 = FUN_100ff610(param_2,uVar3,0x10);
    if (iVar4 == 0) {
      do {
        iVar4 = *param_1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(param_1),0x10);
        if (bVar2) {
          *param_1 = iVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if (param_4 != (int *)0x0) {
        *param_4 = iVar4 + 1;
      }
      *param_3 = param_1[2];
      return 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return 0x80004002;
}

