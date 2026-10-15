/*
 * FUN_10060ba0 at 10060ba0
 * undefined FUN_10060ba0(void)
 * Address ranges: 10060ba0-10060c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10060ba0(int param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x1664);
    if (*param_2 < *(uint *)(param_1 + 0x1664)) {
      uVar1 = *param_2;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x1660);
    if (uVar1 * 0xc < 0x101) {
      uVar2 = (uVar1 * 3 & 0x3fffffff) >> 1;
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar6 = *puVar4;
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
          *param_3 = uVar6;
          param_3 = param_3 + 1;
        } while (uVar5 < uVar2);
      }
      if ((uVar1 * 3 & 1) != 0) {
        *(undefined4 *)param_3 = *(undefined4 *)puVar4;
      }
    }
    else {
      FUN_10081ee0(param_3,puVar4,uVar1 * 0xc);
    }
  }
  *param_2 = *(uint *)(param_1 + 0x1664);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return 0;
}

