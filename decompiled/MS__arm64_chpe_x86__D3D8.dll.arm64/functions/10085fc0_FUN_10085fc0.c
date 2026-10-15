/*
 * FUN_10085fc0 at 10085fc0
 * undefined FUN_10085fc0(void)
 * Address ranges: 10085fc0-100860ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085fc0(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x1d0dc + uVar4 * 4);
    if (iVar1 == 0) {
      iVar1 = param_1 + uVar4 * 4;
    }
    else {
      FUN_100d7690(*(undefined4 *)(param_1 + 0x1cf00),*(undefined4 *)(param_1 + 0x14),iVar1);
      iVar1 = param_1 + uVar4 * 4;
      *(undefined4 *)(iVar1 + 0x1d0dc) = 0;
    }
    if (*(int *)(param_1 + 0x1cfdc + uVar4 * 4) != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3);
      *(undefined4 *)(iVar1 + 0x1cfdc) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  return;
}

