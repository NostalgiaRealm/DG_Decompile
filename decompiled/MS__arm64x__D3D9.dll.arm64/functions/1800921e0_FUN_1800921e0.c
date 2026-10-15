/*
 * FUN_1800921e0 at 1800921e0
 * undefined FUN_1800921e0(void)
 * Address ranges: 1800921e0-180092237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800921e0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  
  if ((*(longlong *)(param_1 + 0xc4) != 0) &&
     (uVar1 = FUN_180091fa8((int)param_1,param_1 + 0xb0,param_1 + 0x60,param_4,param_5,param_2,
                            param_3,((ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3)
                                     << 5 | 0x10) + *(longlong *)(param_1 + 0x84)), (uVar1 & 1) != 0
     )) {
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return;
}

