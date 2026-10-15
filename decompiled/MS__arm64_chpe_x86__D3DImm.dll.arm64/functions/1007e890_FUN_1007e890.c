/*
 * FUN_1007e890 at 1007e890
 * undefined FUN_1007e890(void)
 * Address ranges: 1007e890-1007e94b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007e890(int param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined1 auStack_60 [32];
  
  puVar1 = (uint *)(param_1 + 0x518);
  if (*puVar1 != 0) {
    FUN_1007ca08(param_1,param_2,auStack_60);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar4 = 0;
    if (*puVar1 != 0) {
      do {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3,*(undefined4 *)(param_2 + 8),param_2,auStack_60);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *puVar1);
    }
  }
  return;
}

