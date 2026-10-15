/*
 * FUN_1001a000 at 1001a000
 * undefined FUN_1001a000(void)
 * Address ranges: 1001a000-1001a0ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001a000(int param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar1 = *(char *)(param_1 + 0xb5) == '\0';
  if (bVar1) {
    puVar3 = (undefined4 *)(param_1 + 0x48);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,&local_30,*puVar3);
    param_2[3] = uStack_18;
    param_2[2] = uStack_20;
    param_2[1] = uStack_28;
    *param_2 = local_30;
    (*(code *)PTR_FUN_1013426c)
              (param_2 + 4,0,0,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  return bVar1;
}

