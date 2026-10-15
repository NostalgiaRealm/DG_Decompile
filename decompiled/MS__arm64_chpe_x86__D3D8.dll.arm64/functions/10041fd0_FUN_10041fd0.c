/*
 * FUN_10041fd0 at 10041fd0
 * undefined FUN_10041fd0(void)
 * Address ranges: 10041fd0-100420af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041fd0(undefined8 *param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  uint uVar5;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 1);
  if (*puVar1 != 0) {
    uVar5 = 0;
    if (*puVar1 == 0) {
      iVar4 = 0;
      goto LAB_10042034;
    }
    do {
      iVar4 = *(int *)((int)param_1 + 4) + uVar5 * 0x18;
LAB_10042034:
      if (*(int *)(iVar4 + 0x10) != 0) {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  FUN_100fed00(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  FUN_100fed00(0);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

