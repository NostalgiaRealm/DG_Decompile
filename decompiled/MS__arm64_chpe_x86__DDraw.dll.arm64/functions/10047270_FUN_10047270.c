/*
 * FUN_10047270 at 10047270
 * undefined FUN_10047270(void)
 * Address ranges: 10047270-10047323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047270(undefined8 param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  code *extraout_w11;
  undefined1 auStack_410 [1024];
  
  FUN_10050030(param_3);
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x108) == 0) && (*(int *)(param_3 + 0x108) != 0)) {
      FUN_10041540(*(int *)(param_3 + 0x108),auStack_410);
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar2,auStack_410);
      puVar1 = (uint *)(*(int *)(param_2 + 4) + 200);
      *puVar1 = *puVar1 | 4;
    }
    else {
      FUN_10050030(param_2);
    }
  }
  return;
}

