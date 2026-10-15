/*
 * FUN_1801506e0 at 1801506e0
 * undefined FUN_1801506e0(void)
 * Address ranges: 1801506e0-180150773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801506e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  int param_5,uint param_6)

{
  uint uVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_6 & 1) == 0) {
    sVar2 = (short)param_5;
    for (uVar1 = param_4 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_3[1] = CONCAT26((short)((ulonglong)uVar5 >> 0x30) + sVar2,
                            CONCAT24((short)((ulonglong)uVar5 >> 0x20) + sVar2,
                                     CONCAT22((short)((ulonglong)uVar5 >> 0x10) + sVar2,
                                              (short)uVar5 + sVar2)));
      *param_3 = CONCAT26((short)((ulonglong)uVar4 >> 0x30) + sVar2,
                          CONCAT24((short)((ulonglong)uVar4 >> 0x20) + sVar2,
                                   CONCAT22((short)((ulonglong)uVar4 >> 0x10) + sVar2,
                                            (short)uVar4 + sVar2)));
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
    uVar3 = 0;
    if ((param_4 & 7) != 0) {
      do {
        *(short *)((longlong)param_3 + uVar3 * 2) =
             *(short *)((longlong)param_2 + uVar3 * 2) + sVar2;
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < (param_4 & 7));
    }
  }
  else {
    for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar4 = *param_2;
      param_3[1] = CONCAT44((int)((ulonglong)param_2[1] >> 0x20) + param_5,(int)param_2[1] + param_5
                           );
      *param_3 = CONCAT44((int)((ulonglong)uVar4 >> 0x20) + param_5,(int)uVar4 + param_5);
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
    uVar3 = 0;
    if ((param_4 & 3) != 0) {
      do {
        *(int *)((longlong)param_3 + uVar3 * 4) = *(int *)((longlong)param_2 + uVar3 * 4) + param_5;
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < (param_4 & 3));
      return;
    }
  }
  return;
}

