/*
 * FUN_10060198 at 10060198
 * undefined FUN_10060198(void)
 * Address ranges: 10060198-10060253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060198(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x8e0);
  if ((iVar1 != 0) && (param_2 != 0)) {
    uVar2 = FUN_100598e0(*(undefined4 *)(param_1 + 0x8e4),param_2,param_3,param_4,iVar1,param_1,
                         param_5,*(undefined8 *)(param_1 + 0x938));
    uVar2 = uVar2 & 0xffffffff;
    if ((*(int *)(*(int *)(param_1 + 0x8e0) + 0x20) != 3) &&
       (uVar3 = FUN_100590e0(uVar2,param_5,param_4), (uVar3 & 1) != 0)) {
      FUN_1005f320(param_1,param_2,param_3,uVar2 & 0xffffffff,param_5);
    }
  }
  return;
}

