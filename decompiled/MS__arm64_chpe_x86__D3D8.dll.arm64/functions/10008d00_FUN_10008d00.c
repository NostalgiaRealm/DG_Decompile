/*
 * FUN_10008d00 at 10008d00
 * undefined FUN_10008d00(void)
 * Address ranges: 10008d00-10008deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10008d00(int param_1,int param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  puVar1 = (undefined8 *)(param_1 + (param_2 + 0x122) * 0x10);
  uVar4 = 0;
  if ((param_4 & 0x3fffffff) != 0) {
    do {
      uVar5 = *puVar1;
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
      *param_3 = uVar5;
      param_3 = param_3 + 1;
    } while (uVar4 < (param_4 & 0x3fffffff) << 1);
  }
  if (bVar2) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return 0;
}

