/*
 * FUN_10031510 at 10031510
 * undefined FUN_10031510(void)
 * Address ranges: 10031510-1003164f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10031510(int *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  char local_30 [16];
  
  if (*(int *)*param_1 == -0x7fffffff) {
    FUN_10030448(local_30);
    uVar5 = 0;
    if (DAT_101387ac != 0) {
      do {
        uVar4 = FUN_10034e40(*(undefined4 *)(DAT_101387a8 + uVar5 * 4),
                             *(undefined4 *)(*param_1 + 0x18));
        if ((uVar4 & 1) != 0) {
          if (local_30[0] == '\0') {
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
          return 0xffffffff;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_101387ac);
    }
    if (local_30[0] == '\0') {
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
  }
  return 0;
}

