/*
 * FUN_100301b8 at 100301b8
 * undefined FUN_100301b8(void)
 * Address ranges: 100301b8-100302ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100301b8(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x3058 + uVar4 * 4);
    if (iVar1 == 0) {
      iVar1 = param_1 + uVar4 * 4;
    }
    else {
      FUN_1006a700(*(undefined4 *)(*(int *)(param_1 + 0x3018) + 0x3300),
                   *(undefined4 *)(*(int *)(param_1 + 0x3018) + 0x3304),iVar1);
      iVar1 = param_1 + uVar4 * 4;
      *(undefined4 *)(iVar1 + 0x3058) = 0;
    }
    if (*(int *)(param_1 + 0x301c + uVar4 * 4) != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3);
      *(undefined4 *)(iVar1 + 0x301c) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xf);
  return;
}

