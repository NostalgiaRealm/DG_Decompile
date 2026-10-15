/*
 * FUN_100bd238 at 100bd238
 * undefined FUN_100bd238(void)
 * Address ranges: 100bd238-100bd2ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bd238(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  FUN_100bd1a0(param_1,param_2);
  if (*(int *)(param_2 + 0x164) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,1);
  }
  FUN_100fed00(*(undefined4 *)(param_2 + 0x97c));
  FUN_100fed00(*(undefined4 *)(param_2 + 0x978));
  FUN_100fec90(*(undefined4 *)(param_2 + 0x980),0);
  FUN_100fec90(*(undefined4 *)(param_2 + 0x168),0x4858);
  if (*(int *)(param_2 + 0x984) != 0) {
    (*(code *)PTR_FUN_1013412c)(*(int *)(param_2 + 0x984),0,0x8000);
  }
  return;
}

