/*
 * FUN_10052e40 at 10052e40
 * undefined FUN_10052e40(void)
 * Address ranges: 10052e40-10052f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052e40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar3 = 0x80070057;
  if (((param_2 == 0) && (param_3 != 0)) &&
     (uVar3 = 0x88760082, (*(uint *)(iVar1 + 0x1b8) >> 9 & 1) != 0)) {
    puVar4 = (undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x120);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(0x477fff00,uVar3,*puVar4,param_3);
    uVar3 = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar3;
}

