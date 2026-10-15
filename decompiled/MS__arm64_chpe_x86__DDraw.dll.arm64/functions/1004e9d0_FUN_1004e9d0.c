/*
 * FUN_1004e9d0 at 1004e9d0
 * undefined FUN_1004e9d0(void)
 * Address ranges: 1004e9d0-1004eabb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e9d0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar4 = 0;
    puVar1 = (uint *)(iVar2 + 0x34);
    if (((*puVar1 >> 5 & 1) != 0) && (*(int *)(iVar2 + 0x24) == 0)) {
      uVar4 = 0;
      if (*(int *)(iVar2 + 0x20) == 0) {
        puVar5 = (undefined4 *)(iVar2 + 0x70);
        puVar6 = (undefined4 *)(iVar2 + 0x6c);
        uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar4 = (*extraout_w11)(uVar3,*puVar6,*puVar5);
      }
      if (*(int *)(iVar2 + 0x20) != 0) {
        *puVar1 = *puVar1 | 1;
      }
    }
    uVar3 = 0x80004005;
    switch(uVar4) {
    case 0:
      uVar3 = 0;
      break;
    case 1:
      uVar3 = 0x8876021c;
    }
  }
  return uVar3;
}

