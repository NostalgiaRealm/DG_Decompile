/*
 * FUN_10014eb0 at 10014eb0
 * undefined FUN_10014eb0(void)
 * Address ranges: 10014eb0-10014f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014eb0(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *extraout_w11;
  int extraout_w15;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  uint local_c;
  
  FUN_10034140(param_1,&local_20);
  local_20 = (undefined4)local_1c;
  if (*(char *)(extraout_w15 + 0x150) != '\0') {
    iVar4 = 0x24;
    if (*(int *)(extraout_w15 + 0x1c) == 0x15) {
      iVar4 = 0x34;
    }
    local_20 = *(undefined4 *)(iVar4 + *(int *)(extraout_w15 + 4));
  }
  bVar1 = *(int *)(extraout_w15 + 0x24) == 1;
  if (bVar1) {
    local_1c = 5;
  }
  else {
    local_1c = 9;
  }
  uStack_14 = 0xffffffff;
  local_c = (uint)bVar1;
  puVar3 = (undefined4 *)(extraout_w15 + 0x54);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,*puVar3,&local_20);
  return;
}

