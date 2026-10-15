/*
 * FUN_100ec460 at 100ec460
 * undefined FUN_100ec460(void)
 * Address ranges: 100ec460-100ec507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ec460(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar4 = FUN_10132550(param_2,uVar5 * 0x10 + 0x10163350,0x10);
    if (iVar4 == 0) {
      piVar1 = (int *)(param_1 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
      *param_3 = *(undefined4 *)(param_1 + 0xc);
      FUN_100ed0a0(*(int *)(param_1 + -0x30) + 200);
      return 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return 0x80004002;
}

