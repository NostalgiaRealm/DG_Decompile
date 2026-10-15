/*
 * FUN_10021058 at 10021058
 * undefined FUN_10021058(void)
 * Address ranges: 10021058-100210bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021058(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  if (param_4 >> 2 != 0) {
    do {
      puVar3 = param_2 + 1;
      uVar5 = *param_2;
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 2;
      param_3[1] = CONCAT44((int)((ulonglong)*puVar3 >> 0x20) + param_5,(int)*puVar3 + param_5);
      *param_3 = CONCAT44((int)((ulonglong)uVar5 >> 0x20) + param_5,(int)uVar5 + param_5);
      param_3 = param_3 + 2;
    } while (uVar4 < param_4 >> 2);
  }
  uVar4 = 0;
  if ((param_4 & 3) != 0) {
    do {
      iVar1 = uVar4 * 4;
      iVar2 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(int *)((int)param_3 + iVar2) = *(int *)((int)param_2 + iVar1) + param_5;
    } while (uVar4 < (param_4 & 3));
  }
  return;
}

