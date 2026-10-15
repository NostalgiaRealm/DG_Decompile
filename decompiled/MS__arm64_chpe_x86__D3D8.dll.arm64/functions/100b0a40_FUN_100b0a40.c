/*
 * FUN_100b0a40 at 100b0a40
 * undefined FUN_100b0a40(void)
 * Address ranges: 100b0a40-100b0b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100b0a40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = 0;
  if (param_1 != 0) {
    iVar5 = param_1 + 0x78;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = *(int *)(param_1 + 0x14) + -0x58e0;
  }
  iVar5 = FUN_100aeca8(iVar2,iVar5,param_1,0,param_4,param_3,param_2,*(undefined4 *)(param_1 + 0x5c)
                       ,*(undefined1 *)(param_1 + 0x6c));
  *(int *)(param_3 * 4 + param_2 * 0x40 + param_1 + 0x88) = iVar5;
  if ((iVar5 != 0) && (uVar6 = FUN_10017b70(iVar5,0), (uVar6 & 1) != 0)) {
    piVar1 = (int *)(iVar5 + 100);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return iVar5 != 0;
}

