/*
 * FUN_10006820 at 10006820
 * undefined FUN_10006820(void)
 * Address ranges: 10006820-1000692f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006820(int param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  uint uVar6;
  undefined4 local_40 [4];
  
  puVar1 = (undefined8 *)(param_1 + 0xad0);
  FUN_100fed00(*(undefined4 *)puVar1);
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  uVar6 = 0;
  while( true ) {
    if (param_2 <= uVar6) {
      iVar2 = FUN_10006f60(param_1,param_2,param_3,*(undefined4 *)puVar1,0,1);
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 0xb28) = (&DAT_101387c8)[*(int *)(param_1 + 0xb2c) * 0x8a];
        FUN_100fc100(DAT_1013ceec);
        puVar4 = (undefined4 *)(param_3 + 8);
        puVar5 = (undefined4 *)(param_3 + 4);
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(param_1,*puVar5,*puVar4);
        iVar2 = 0;
      }
      return iVar2;
    }
    local_40[0] = 0;
    uVar3 = FUN_1000ead0(puVar1,local_40);
    if ((uVar3 & 1) == 0) break;
    uVar6 = uVar6 + 1;
  }
  return -0x7fffbffb;
}

