/*
 * FUN_100418e0 at 100418e0
 * undefined FUN_100418e0(void)
 * Address ranges: 100418e0-100419ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100418e0(ulonglong param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if ((param_1 & 1) == 0) {
    do {
      iVar1 = DAT_100c297c + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x100c297c,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_100c297c = iVar1;
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar1 == 0) {
      if (DAT_100c2978 != 0) {
        DAT_100c2968 = 1;
        (*(code *)PTR_FUN_100ba168)(DAT_100c2978,0xffffffff);
        (*(code *)PTR_FUN_100ba06c)(DAT_100c2978);
      }
      DAT_100c2974 = 0;
      DAT_100c2978 = 0;
      DAT_100c2968 = 0;
    }
  }
  else {
    (*(code *)PTR_FUN_100ba14c)(DAT_100c2978,0);
    (*(code *)PTR_FUN_100ba098)(0,DAT_100c2970,0xffffffff);
  }
  return;
}

