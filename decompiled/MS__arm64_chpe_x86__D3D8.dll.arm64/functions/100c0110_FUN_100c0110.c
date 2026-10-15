/*
 * FUN_100c0110 at 100c0110
 * undefined FUN_100c0110(void)
 * Address ranges: 100c0110-100c021b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0110(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  puVar1 = (uint *)&DAT_00000b0c;
  if (*(int *)(param_1 + -100) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + -100) + -0x4dd4);
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
  if (param_2 < *(ushort *)(param_1 + -0x48) && param_3 != 0) {
    uVar4 = FUN_100be7a0(*(int *)(param_1 + param_2 * 4 + 0x10) + 0x5c,&DAT_10129140,param_3);
  }
  if (bVar2) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar4;
}

