/*
 * FUN_10055f30 at 10055f30
 * undefined FUN_10055f30(void)
 * Address ranges: 10055f30-10056027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055f30(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (((param_2 < 8 && param_3 != 0) && param_3 < 0x19) &&
     (*(char *)(*(int *)(param_1 + 8) + param_3 * 0xc) != '\0')) {
    if ((*(char *)(param_1 + 0x224) == '\0') && (param_3 - 1 < 6)) {
      *(byte *)(param_1 + 0xa84) =
           *(int *)(param_2 * 100 + param_3 * 4 + param_1 + 0x4f4) == param_4 &
           *(byte *)(param_1 + 0xa84);
    }
    FUN_10001ff0(param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

