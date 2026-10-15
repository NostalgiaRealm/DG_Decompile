/*
 * FUN_10060800 at 10060800
 * undefined FUN_10060800(void)
 * Address ranges: 10060800-1006092b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10060800(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_50 [4];
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  iVar2 = -0x7ff8ffa9;
  if ((((param_4 != (undefined4 *)0x0) && (param_3 != (int *)0x0)) && (param_5 == 0)) &&
     (*param_3 == 0x14)) {
    *param_4 = 0;
    iVar2 = -0x7ff8fff2;
    uVar3 = FUN_1004f050(*(int *)(param_1 + 0xa70));
    if (uVar3 != 0) {
      iVar2 = FUN_10061810(uVar3,param_2,param_3);
      if ((iVar2 < 0) || (iVar2 = FUN_100614d0(uVar3,&DAT_1009c520,param_4), iVar2 < 0)) {
        FUN_10061400(uVar3);
        FUN_10081d50(uVar3,0x9c);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xa70);
        if (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 0xc);
          local_50[0] = uVar3;
          if (*(char *)(iVar1 + 0x1efc) != '\0') {
            FUN_100059f0(iVar1 + 0xd8,local_50);
          }
        }
      }
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar2;
}

