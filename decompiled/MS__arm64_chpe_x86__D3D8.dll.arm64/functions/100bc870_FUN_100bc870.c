/*
 * FUN_100bc870 at 100bc870
 * undefined FUN_100bc870(void)
 * Address ranges: 100bc870-100bc99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc870(int param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_40 [4];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar2 == 0) {
      FUN_10006560(0);
    }
  }
  uVar4 = 0x8876086c;
  local_40[0] = param_2;
  if ((param_3 != (uint *)0x0) && (iVar2 = FUN_10011ab0(param_1 + -0x5798,local_40), iVar2 != 0)) {
    if (*(uint *)(param_1 + -0x5768) != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + -0x576c) + uVar3 * 4) == param_2) goto LAB_100bc94c;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + -0x5768));
    }
    uVar3 = 0xffffffff;
LAB_100bc94c:
    *param_3 = (uint)(uVar3 != 0xffffffff);
    uVar4 = 0;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar4;
}

