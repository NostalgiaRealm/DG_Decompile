/*
 * FUN_10060aa0 at 10060aa0
 * undefined FUN_10060aa0(void)
 * Address ranges: 10060aa0-10060b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060aa0(int param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x88760082;
  if ((param_2 != 0) && (param_5 != 0)) {
    uVar3 = 0x80070057;
    if ((*(int *)(param_3 + 0x84) == param_1) &&
       (uVar3 = 0x88760305, *(char *)(param_3 + 0xd0) != '\0')) {
      uVar3 = 0x80004005;
      uVar2 = FUN_1005e4c0(param_1,param_2,param_3,0);
      if ((uVar2 & 1) != 0) {
        FUN_1005f410(param_1,param_2,param_5);
        FUN_1005e750(param_1,param_2);
        uVar3 = 0;
        *(undefined8 *)(param_2 + 0x7c) = 0;
        *(undefined8 *)(param_2 + 0x74) = 0;
        *(undefined8 *)(param_2 + 0x84) = 0;
      }
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

