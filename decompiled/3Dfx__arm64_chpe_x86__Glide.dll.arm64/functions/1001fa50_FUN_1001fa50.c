/*
 * FUN_1001fa50 at 1001fa50
 * undefined FUN_1001fa50(void)
 * Address ranges: 1001fa50-1001fc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fa50(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int extraout_w1;
  undefined8 uVar7;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  ulonglong extraout_x12;
  int extraout_w13;
  uint extraout_w14;
  uint extraout_w15;
  int iVar8;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_6 + 4);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (((param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) &&
        (uVar6 = FUN_1001f360(uVar3), uVar6 < 9)) &&
       (uVar6 = FUN_1001f360(extraout_x12 & 0xffffffff),
       (uVar6 < 9 && extraout_w15 < 0x10) && extraout_w14 < 7)) {
      uVar6 = param_4 & 0xfffffff8;
      if (*(uint *)(extraout_w11 + 0x793) < (param_4 & 0xfffffff8)) {
        uVar6 = *(uint *)(extraout_w11 + 0x793);
      }
      iVar2 = extraout_w1 * 0x41 + *(int *)(extraout_w10 + 0xc);
      if ((((*(byte *)(iVar2 + 400) == param_5) &&
           (iVar8 = param_3 * 4, *(uint *)(iVar8 + iVar2 + 0x151 + 0x1f) == uVar6)) &&
          ((*(uint *)(iVar2 + 0x188) == extraout_w14 &&
           ((*(uint *)(iVar2 + 0x18c) == extraout_w15 && (*(int *)(iVar2 + 0x184) == extraout_w13)))
           ))) && (*(int *)(iVar2 + 0x180) == extraout_w12)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
        iVar8 = param_3 << 2;
      }
      *(uint *)(iVar2 + 0x151 + iVar8 + 0x1f) = uVar6;
      *(uint *)(iVar2 + 0x188) = extraout_w14;
      *(byte *)(iVar2 + 400) = (byte)param_5;
      *(uint *)(iVar2 + 0x18c) = extraout_w15;
      *(int *)(iVar2 + 0x184) = extraout_w13;
      *(int *)(iVar2 + 0x180) = extraout_w12;
      FUN_1001f760(extraout_w10,extraout_w1,uVar7);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

