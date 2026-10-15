/*
 * FUN_10114660 at 10114660
 * undefined FUN_10114660(void)
 * Address ranges: 10114660-1011485f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10114660(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  *param_3 = 0;
  iVar4 = 0;
  iVar2 = FUN_10132550(param_2,&DAT_1015e670,0x10);
  if (((((iVar2 == 0) || (iVar2 = FUN_10132550(param_2,&DAT_1015e560,0x10), iVar2 == 0)) ||
       (iVar2 = FUN_10132550(param_2,&DAT_1015e570,0x10), iVar2 == 0)) ||
      ((iVar2 = FUN_10132550(param_2,&DAT_1015e620,0x10), iVar2 == 0 ||
       (iVar2 = FUN_10132550(param_2,&DAT_1015e630,0x10), iVar2 == 0)))) ||
     (iVar2 = FUN_10132550(param_2,&DAT_1015e560,0x10), iVar2 == 0)) {
    *param_3 = param_1;
    FUN_10114870(param_1);
  }
  else {
    iVar2 = FUN_10132550(param_2,&DAT_1015e640,0x10);
    puVar1 = (uint *)(param_1 + 0x920);
    if (((((iVar2 == 0) && (*puVar1 != 0)) ||
         ((iVar2 = FUN_10132550(param_2,&DAT_1015e650,0x10), iVar2 == 0 && (1 < *puVar1)))) ||
        ((iVar2 = FUN_10132550(param_2,&DAT_1015e590,0x10), iVar2 == 0 && (2 < *puVar1)))) ||
       (((iVar2 = FUN_10132550(param_2,&DAT_1015e5a0,0x10), iVar2 == 0 && (3 < *puVar1)) ||
        (((iVar2 = FUN_10132550(param_2,&DAT_1015e5f0,0x10), iVar2 == 0 && (4 < *puVar1)) ||
         ((iVar2 = FUN_10132550(param_2,&DAT_1015e600,0x10), iVar2 == 0 && (5 < *puVar1)))))))) {
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

