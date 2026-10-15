/*
 * FUN_10060780 at 10060780
 * undefined FUN_10060780(void)
 * Address ranges: 10060780-100607f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060780(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_10012520(param_2,param_3);
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

