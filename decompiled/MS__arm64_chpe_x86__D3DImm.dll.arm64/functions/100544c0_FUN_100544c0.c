/*
 * FUN_100544c0 at 100544c0
 * undefined FUN_100544c0(void)
 * Address ranges: 100544c0-100545f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100544c0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  int local_50 [4];
  
  local_50[0] = param_2;
  iVar2 = FUN_100594a0(param_1 + 0x17c8,local_50);
  if (iVar2 != 0) {
    FUN_10059760(param_1 + 0x17b8,iVar2);
    FUN_10059530(param_1 + 0x17c8,local_50);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x14d4 + uVar4 * 4) == param_2) {
      uVar3 = (*pcVar1)();
      (*extraout_w11)(uVar3,uVar4,0,0,0,0,0,0);
      iVar2 = param_1 + uVar4 * 4;
      *(undefined4 *)(iVar2 + 0x14d4) = 0;
      *(undefined4 *)(iVar2 + 0x14f4) = 0;
      *(undefined1 *)(uVar4 + param_1 + 0x8f4) = 0;
      *(uint *)(param_1 + 0x934) = 1 << (ulonglong)(uVar4 & 0x1f) | *(uint *)(param_1 + 0x934);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return;
}

