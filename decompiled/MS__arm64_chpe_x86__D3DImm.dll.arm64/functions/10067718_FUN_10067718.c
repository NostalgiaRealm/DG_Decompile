/*
 * FUN_10067718 at 10067718
 * undefined FUN_10067718(void)
 * Address ranges: 10067718-1006782b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10067718(int param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar6 = 0x80070057;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    uVar6 = 0x8876080c;
    if (*(char *)(param_1 + 0x134) == '\0') {
      piVar1 = (int *)(param_1 + 0xc);
      if ((*piVar1 == 0) && (*(int *)(param_1 + 8) == 0)) {
        piVar2 = (int *)(param_1 + 0x1c);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar5) {
            *piVar2 = iVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar3 + 1 != 1) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return 0x887601ae;
        }
        *piVar1 = *(int *)(param_1 + 4);
      }
      uVar6 = 0;
      *param_3 = *piVar1;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x10);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x130) = 0;
      if (*(char *)(param_1 + 0x138) != '\0') {
        *(char *)(param_1 + 0x138) = '\0';
        *(undefined1 *)(param_1 + 0x137) = 0;
      }
      *(byte *)(param_1 + 0x137) = (byte)(param_2 >> 0xc) & 1 | *(byte *)(param_1 + 0x137);
    }
  }
  return uVar6;
}

