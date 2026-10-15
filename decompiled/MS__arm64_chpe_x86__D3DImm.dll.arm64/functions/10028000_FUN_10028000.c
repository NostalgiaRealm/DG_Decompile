/*
 * FUN_10028000 at 10028000
 * undefined FUN_10028000(void)
 * Address ranges: 10028000-100280c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028000(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  short sVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = 0;
  if ((param_6 & 1) == 0) {
    sVar4 = (short)param_5;
    if (param_4 >> 3 != 0) {
      do {
        uVar7 = param_2[1];
        uVar6 = *param_2;
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 2;
        param_3[1] = CONCAT26((short)((ulonglong)uVar7 >> 0x30) + sVar4,
                              CONCAT24((short)((ulonglong)uVar7 >> 0x20) + sVar4,
                                       CONCAT22((short)((ulonglong)uVar7 >> 0x10) + sVar4,
                                                (short)uVar7 + sVar4)));
        *param_3 = CONCAT26((short)((ulonglong)uVar6 >> 0x30) + sVar4,
                            CONCAT24((short)((ulonglong)uVar6 >> 0x20) + sVar4,
                                     CONCAT22((short)((ulonglong)uVar6 >> 0x10) + sVar4,
                                              (short)uVar6 + sVar4)));
        param_3 = param_3 + 2;
      } while (uVar5 < param_4 >> 3);
    }
    uVar5 = 0;
    if ((param_4 & 7) != 0) {
      do {
        iVar1 = uVar5 * 2;
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(short *)((int)param_3 + iVar2) = *(short *)((int)param_2 + iVar1) + sVar4;
      } while (uVar5 < (param_4 & 7));
    }
  }
  else {
    if (param_4 >> 2 != 0) {
      do {
        puVar3 = param_2 + 1;
        uVar6 = *param_2;
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 2;
        param_3[1] = CONCAT44((int)((ulonglong)*puVar3 >> 0x20) + param_5,(int)*puVar3 + param_5);
        *param_3 = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + param_5,(int)uVar6 + param_5);
        param_3 = param_3 + 2;
      } while (uVar5 < param_4 >> 2);
    }
    uVar5 = 0;
    if ((param_4 & 3) != 0) {
      do {
        iVar1 = uVar5 * 4;
        iVar2 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(int *)((int)param_3 + iVar2) = *(int *)((int)param_2 + iVar1) + param_5;
      } while (uVar5 < (param_4 & 3));
      return;
    }
  }
  return;
}

