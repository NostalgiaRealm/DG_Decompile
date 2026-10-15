/*
 * FUN_1001e4e0 at 1001e4e0
 * undefined FUN_1001e4e0(void)
 * Address ranges: 1001e4e0-1001e6a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001e4e0(int param_1,char param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auStack_50 [16];
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x34) != 3) &&
     ((*(char *)(*(int *)(param_1 + 0x18) + 0x669d) == '\0' || (*(int *)(param_1 + 0x34) != 0)))) {
    FUN_10157b40(auStack_50);
    iVar2 = *(int *)(param_1 + 4);
    uVar4 = 0;
    puVar1 = (uint *)(iVar2 + 0x34);
    if (((*puVar1 >> 5 & 1) != 0) && (*(int *)(iVar2 + 0x24) == 0)) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        puVar6 = (undefined4 *)(iVar2 + 0x70);
        puVar7 = (undefined4 *)(iVar2 + 0x6c);
        uVar4 = (*pcVar3)();
        uVar4 = (*extraout_w11)(uVar4,*puVar7,*puVar6);
      }
      if ((*(int *)(iVar2 + 0x20) != 0) && (param_2 == '\0')) {
        *puVar1 = *puVar1 | 1;
      }
    }
    FUN_1000d740(*(int *)(param_1 + 0x18),param_1);
    FUN_10157a90(auStack_50);
  }
  iVar2 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar2 + 0x50) != 0) && (*(char *)(iVar2 + 0x7e) != '\0')) {
    FUN_10040c08(iVar2);
    puVar6 = (undefined4 *)(iVar2 + 0x70);
    puVar7 = (undefined4 *)(iVar2 + 0x6c);
    (*pcVar3)();
    (*extraout_w11_00)(param_1,*puVar7,*puVar6);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar5 = (*pcVar3)();
    (*extraout_w11_01)(uVar5);
  }
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0xb8);
  *puVar1 = *puVar1 & 0xfffff7ff;
  return uVar4;
}

