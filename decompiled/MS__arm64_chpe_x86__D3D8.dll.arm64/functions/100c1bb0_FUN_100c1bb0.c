/*
 * FUN_100c1bb0 at 100c1bb0
 * undefined FUN_100c1bb0(void)
 * Address ranges: 100c1bb0-100c1cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100c1bb0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if ((*(char *)(param_1 + -0x10) != '\0') && (param_2 < *(ushort *)(param_1 + -0x98))) {
    puVar1 = (uint *)&DAT_00000b0c;
    if (*(int *)(param_1 + -0xb4) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + -0xb4) + -0x4dd4);
    }
    if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
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
    uVar4 = FUN_1001d128(*(undefined4 *)(param_1 + param_2 * 4 + -0x90),param_3,param_4,param_5);
    if (bVar2) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar4;
}

