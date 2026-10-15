/*
 * FUN_100e1e10 at 100e1e10
 * undefined FUN_100e1e10(void)
 * Address ranges: 100e1e10-100e200f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e1e10(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  *param_3 = 0;
  iVar4 = 0;
  iVar2 = FUN_100ff610(param_2,&DAT_10129280,0x10);
  if (((((iVar2 == 0) || (iVar2 = FUN_100ff610(param_2,&DAT_10129170,0x10), iVar2 == 0)) ||
       (iVar2 = FUN_100ff610(param_2,&DAT_10129180,0x10), iVar2 == 0)) ||
      ((iVar2 = FUN_100ff610(param_2,&DAT_10129230,0x10), iVar2 == 0 ||
       (iVar2 = FUN_100ff610(param_2,&DAT_10129240,0x10), iVar2 == 0)))) ||
     (iVar2 = FUN_100ff610(param_2,&DAT_10129170,0x10), iVar2 == 0)) {
    *param_3 = param_1;
    FUN_100e2020(param_1);
  }
  else {
    iVar2 = FUN_100ff610(param_2,&DAT_10129250,0x10);
    puVar1 = (uint *)(param_1 + 0x920);
    if (((((iVar2 == 0) && (*puVar1 != 0)) ||
         ((iVar2 = FUN_100ff610(param_2,&DAT_10129260,0x10), iVar2 == 0 && (1 < *puVar1)))) ||
        ((iVar2 = FUN_100ff610(param_2,&DAT_101291a0,0x10), iVar2 == 0 && (2 < *puVar1)))) ||
       (((iVar2 = FUN_100ff610(param_2,&DAT_101291b0,0x10), iVar2 == 0 && (3 < *puVar1)) ||
        (((iVar2 = FUN_100ff610(param_2,&DAT_10129200,0x10), iVar2 == 0 && (4 < *puVar1)) ||
         ((iVar2 = FUN_100ff610(param_2,&DAT_10129210,0x10), iVar2 == 0 && (5 < *puVar1)))))))) {
      local_40[0] = 0;
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar4 = (*extraout_w11)(uVar3,param_2,local_40);
      if (-1 < iVar4) {
        *param_3 = param_1;
      }
    }
    else {
      iVar4 = -0x7fffbffe;
    }
  }
  return iVar4;
}

