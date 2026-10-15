/*
 * FUN_10037440 at 10037440
 * undefined FUN_10037440(void)
 * Address ranges: 10037440-100374bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10037440(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x32dc),param_2);
  iVar4 = (*extraout_w11)(uVar3);
  uVar1 = *(uint *)(iVar4 + 0x18);
  if (*(uint *)(iVar4 + 0x18) <= param_3) {
    uVar1 = param_3;
  }
  uVar2 = *(uint *)(iVar4 + 0x1c);
  if (param_4 <= *(uint *)(iVar4 + 0x1c)) {
    uVar2 = param_4;
  }
  return uVar1 < uVar2;
}

