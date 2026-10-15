/*
 * FUN_10060a10 at 10060a10
 * undefined FUN_10060a10(void)
 * Address ranges: 10060a10-10060a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060a10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = param_1 + 0x1378;
  uVar3 = FUN_10046360(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_100462b8(iVar1);
  }
  piVar2 = (int *)(param_1 + 0x14bc);
  FUN_10063900(*piVar2 + 4,0);
  iVar1 = *piVar2;
  FUN_1005a278(*(undefined4 *)(iVar1 + 0x8e0),*(undefined8 *)(iVar1 + 0x940));
  return;
}

