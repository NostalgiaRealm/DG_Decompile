/*
 * FUN_1004c930 at 1004c930
 * undefined FUN_1004c930(void)
 * Address ranges: 1004c930-1004ca1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c930(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = FUN_1004d790(param_1 + 0x150);
  if ((uVar5 & 1) != 0) {
    piVar1 = (int *)(param_1 + 4);
    *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) & 0xfffffff7;
    for (; iVar4 = param_1, *(int *)(param_1 + 0x10c) != 0; param_1 = *(int *)(param_1 + 0x10c)) {
    }
    do {
      if ((*(uint *)(iVar4 + 0x1bc) & 0xfe00) != 0x200) {
        *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) & 0xfffffff7;
      }
      piVar2 = (int *)(iVar4 + 0x110);
      iVar4 = *piVar2;
    } while (*piVar2 != 0);
    uVar6 = 0;
    do {
      piVar2 = (int *)(param_1 + 0x120 + uVar6 * 4);
      while (iVar4 = *piVar2, iVar4 != 0) {
        uVar3 = *(uint *)(*piVar1 + 200);
        if ((uVar3 >> 3 & 1) == 0) break;
        if ((*(uint *)(iVar4 + 0x1bc) & 0xfe00) != 0x200) {
          *(uint *)(*piVar1 + 200) = uVar3 & 0xfffffff7;
        }
        piVar2 = (int *)(iVar4 + 0x110);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
  }
  return;
}

