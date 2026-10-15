/*
 * FUN_10056720 at 10056720
 * undefined FUN_10056720(void)
 * Address ranges: 10056720-100567ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056720(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 != (uint *)0x0) && ((*param_2 >> 2 & 1) == 0)) {
    if ((*param_2 & 1) != 0) {
      *(uint *)(param_1 + 0x1f0) = param_2[1] & 0xfff;
      *(uint *)(param_1 + 500) = param_2[1] >> 0xc & 0xfff;
    }
    if ((*param_2 >> 1 & 1) != 0) {
      *(uint *)(param_1 + 0x1fc) = param_2[3];
      *(uint *)(param_1 + 0x1f8) = param_2[2];
      *(uint *)(param_1 + 0x204) = param_2[5];
      *(uint *)(param_1 + 0x200) = param_2[4];
    }
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

