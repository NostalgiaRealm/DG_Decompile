/*
 * FUN_10060610 at 10060610
 * undefined FUN_10060610(void)
 * Address ranges: 10060610-100606bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060610(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x80070057;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x9cc);
    piVar2 = (int *)(iVar1 + 0x944);
    if (((*piVar2 == param_2) || (piVar2 = (int *)(iVar1 + 0x948), *piVar2 == param_2)) ||
       (piVar2 = (int *)(iVar1 + 0x94c), *piVar2 == param_2)) {
      *piVar2 = 0;
    }
    FUN_10081d50(param_2,0x40);
    uVar3 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

