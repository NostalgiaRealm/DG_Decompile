/*
 * FUN_10057430 at 10057430
 * undefined FUN_10057430(void)
 * Address ranges: 10057430-10057503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10057430(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_40 [4];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x80070057;
  local_40[0] = param_2;
  if ((param_3 != (uint *)0x0) && (iVar1 = FUN_10005bc0(param_1 + 0x14c,local_40), iVar1 != 0)) {
    if (*(uint *)(param_1 + 0x17c) != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x178) + uVar2 * 4) == param_2) goto LAB_100574c4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x17c));
    }
    uVar2 = 0xffffffff;
LAB_100574c4:
    *param_3 = (uint)(uVar2 != 0xffffffff);
    uVar3 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

