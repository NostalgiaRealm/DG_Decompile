/*
 * FUN_100bbe00 at 100bbe00
 * undefined FUN_100bbe00(void)
 * Address ranges: 100bbe00-100bbecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bbe00(int param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar3 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    iVar1 = **(int **)(param_1 + -0x4e10);
    FUN_100045b0(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0xacc),*(undefined4 *)(iVar1 + 0xa4),
                 &local_28);
    local_30[0] = 0;
    puVar4 = (undefined4 *)(iVar1 + 8);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar2 = (*extraout_w11)(uVar3,*puVar4,local_28,uStack_24,local_30);
    *param_2 = (uint)(cVar2 != '\0');
    uVar3 = 0;
    if (*(char *)(iVar1 + 0xb7) == '\0') {
      local_30[0] = 0;
    }
    param_2[1] = local_30[0];
  }
  return uVar3;
}

