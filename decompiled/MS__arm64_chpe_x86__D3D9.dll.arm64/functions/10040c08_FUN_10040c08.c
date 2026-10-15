/*
 * FUN_10040c08 at 10040c08
 * undefined FUN_10040c08(void)
 * Address ranges: 10040c08-10040ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10040c08(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  undefined8 local_20;
  undefined4 local_18;
  int iStack_14;
  
  if (((*(uint *)(param_1 + 0x34) >> 5 & 1) == 0) && (*(char *)(param_1 + 0xad) != '\0')) {
    local_20 = 0;
    local_18 = FUN_1003ebe0(*(undefined2 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x1c),
                            *(undefined4 *)(param_1 + 0x18));
    puVar5 = (undefined4 *)(param_1 + 0xa8);
    puVar4 = (undefined4 *)(param_1 + 0xa4);
    puVar6 = (undefined4 *)(param_1 + 0x70);
    puVar7 = (undefined4 *)(param_1 + 0x6c);
    iStack_14 = *(ushort *)(param_1 + 0xe) - 1;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar1 = (*extraout_w11)(uVar3,*puVar7,*puVar6,*puVar4,*puVar5,&local_20);
    *(char *)(param_1 + 0xad) = cVar1 == '\0';
    uVar2 = cVar1 != '\0';
  }
  else {
    uVar2 = FUN_1003f5e0(param_1,*(undefined1 *)(param_1 + 0x48));
  }
  return uVar2;
}

