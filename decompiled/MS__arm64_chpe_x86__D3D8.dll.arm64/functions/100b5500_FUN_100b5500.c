/*
 * FUN_100b5500 at 100b5500
 * undefined FUN_100b5500(void)
 * Address ranges: 100b5500-100b557f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100b5500(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  *param_2 = param_1 + 0x44;
  param_2[1] = param_1 + 0x44;
  uVar1 = *(uint *)(param_1 + 0x5940);
  param_2[2] = 0;
  if (((uVar1 & 1) != 0) && (iVar2 = FUN_100bd300(param_1 + 0x58f8,uVar1), iVar2 != 0)) {
    *param_2 = iVar2 + 4;
    param_2[1] = iVar2 + 0xb4;
    param_2[2] = *(int *)(iVar2 + 0x164);
  }
  return param_2;
}

