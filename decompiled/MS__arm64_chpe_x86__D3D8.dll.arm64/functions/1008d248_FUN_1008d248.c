/*
 * FUN_1008d248 at 1008d248
 * undefined FUN_1008d248(void)
 * Address ranges: 1008d248-1008d2ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008d248(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  puVar2 = (undefined4 *)(param_1 + 0x74);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(*(int *)(param_1 + 0x44) + 4),param_2,
                     (int)param_2 + *(int *)(param_1 + 0x2c) * param_3);
  (*extraout_w11)(uVar1,*puVar2);
  return 0;
}

