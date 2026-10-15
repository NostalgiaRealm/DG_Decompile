/*
 * FUN_100606d0 at 100606d0
 * undefined FUN_100606d0(void)
 * Address ranges: 100606d0-10060777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100606d0(undefined4 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 != (undefined8 *)0x0) && (param_3 != 0)) {
    FUN_100122e0(&local_70,param_3);
    param_2[1] = uStack_68;
    *param_2 = local_70;
    param_2[3] = uStack_58;
    param_2[2] = uStack_60;
    param_2[5] = uStack_48;
    param_2[4] = local_50;
    param_2[7] = uStack_38;
    param_2[6] = uStack_40;
    FUN_1005e440(param_1,param_2,param_2);
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

