/*
 * FUN_10060980 at 10060980
 * undefined FUN_10060980(void)
 * Address ranges: 10060980-10060a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060980(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x88760082;
  if (param_2 != 0) {
    uVar2 = 0x80070057;
    if (((*(int *)(param_3 + 0x84) == param_1) &&
        (uVar2 = 0x88760305, *(char *)(param_3 + 0xd0) != '\0')) &&
       ((param_4 == 1 || (uVar2 = 0x80070057, param_4 == 2)))) {
      uVar2 = 0x80004005;
      uVar3 = FUN_1005e4c0(param_1,param_2,param_3,param_4 == 1);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_1005e880(param_1,param_2,param_4 == 1);
        FUN_10060200(param_1,0);
        FUN_1005e750(param_1,param_2);
      }
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

