/*
 * FUN_100d14a0 at 100d14a0
 * undefined FUN_100d14a0(void)
 * Address ranges: 100d14a0-100d1553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d14a0(uint *param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      iVar5 = FUN_10132550(param_2,param_1 + uVar6 * 4 + 4,0x10);
      if (iVar5 == 0) {
        puVar1 = param_1 + 1;
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(puVar1),0x10);
          if (bVar4) {
            *puVar1 = uVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar6 + 1;
        }
        *param_3 = param_1[3];
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return 0x80004002;
}

