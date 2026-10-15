/*
 * FUN_100180e8 at 100180e8
 * undefined FUN_100180e8(void)
 * Address ranges: 100180e8-100181ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100180e8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*(int *)(param_1 + 0xa0) == *param_3) && (*(int *)(param_1 + 0xa4) == param_3[1])) &&
      (*(int *)(param_1 + 0xb4) == param_3[4])) &&
     (((*(int *)(param_1 + 0xb8) == param_3[5] &&
       (iVar1 = *(int *)(param_1 + 4), *(int *)(iVar1 + 0x1c) == *(int *)(param_2 + 0x1c))) &&
      ((*(int *)(iVar1 + 0x18) == *(int *)(param_2 + 0x18) &&
       (((*(uint *)(iVar1 + 0xc2) ^ *(uint *)(param_2 + 0xc2)) >> 2 & 1) == 0)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

