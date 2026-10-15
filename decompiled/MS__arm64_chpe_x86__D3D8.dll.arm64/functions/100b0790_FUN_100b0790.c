/*
 * FUN_100b0790 at 100b0790
 * undefined FUN_100b0790(void)
 * Address ranges: 100b0790-100b08c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b0790(undefined8 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char local_40 [4];
  undefined1 auStack_3c [4];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_10030448(local_40);
  FUN_10121020(auStack_3c);
  iVar4 = FUN_100af250(param_2);
  if (iVar4 != 0) {
    local_28 = 0;
    local_38 = 0;
    local_1c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    local_20 = (undefined4)*(undefined8 *)(param_3 + 0x18);
    local_30 = *(undefined4 *)(iVar4 + 0x6c);
    uStack_2c = *(undefined4 *)(iVar4 + 0x70);
    FUN_1001a490(iVar4 + 8,param_3);
  }
  FUN_10120f70(auStack_3c);
  if (local_40[0] == '\0') {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  else {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  piVar1 = (int *)(DAT_1013d014 + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return;
}

