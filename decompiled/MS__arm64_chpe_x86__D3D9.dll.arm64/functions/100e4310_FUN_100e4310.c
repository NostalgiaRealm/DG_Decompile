/*
 * FUN_100e4310 at 100e4310
 * undefined FUN_100e4310(void)
 * Address ranges: 100e4310-100e443f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4310(int param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_40 [4];
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar2 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar4 = 0x8876086c;
  local_40[0] = param_2;
  if ((param_3 != (uint *)0x0) && (iVar2 = FUN_10012e10(param_1 + -0x63c8,local_40), iVar2 != 0)) {
    if (*(uint *)(param_1 + -0x6398) != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + -0x639c) + uVar3 * 4) == param_2) goto LAB_100e43ec;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + -0x6398));
    }
    uVar3 = 0xffffffff;
LAB_100e43ec:
    *param_3 = (uint)(uVar3 != 0xffffffff);
    uVar4 = 0;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar4;
}

