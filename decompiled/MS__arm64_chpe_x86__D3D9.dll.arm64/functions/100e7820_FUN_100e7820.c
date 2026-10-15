/*
 * FUN_100e7820 at 100e7820
 * undefined FUN_100e7820(void)
 * Address ranges: 100e7820-100e78af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e7820(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  do {
    uVar4 = FUN_100e77a0(uVar6);
    iVar5 = FUN_10132550(param_2,uVar4,0x10);
    if (iVar5 == 0) {
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
      return 0;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  return 0x80004002;
}

