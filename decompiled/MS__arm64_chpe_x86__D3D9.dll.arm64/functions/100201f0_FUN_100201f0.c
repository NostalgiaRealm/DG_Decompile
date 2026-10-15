/*
 * FUN_100201f0 at 100201f0
 * undefined FUN_100201f0(void)
 * Address ranges: 100201f0-100202ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100201f0(int param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_10004f50(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xd90),*(undefined4 *)(param_1 + 0xa4),
                 &local_28);
    local_30[0] = 0;
    puVar3 = (undefined4 *)(param_1 + 8);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar1 = (*extraout_w11)(uVar2,*puVar3,local_28,uStack_24,local_30);
    *param_2 = (uint)(cVar1 != '\0');
    uVar2 = 0;
    if (*(char *)(param_1 + 0xb7) == '\0') {
      local_30[0] = 0;
    }
    param_2[1] = local_30[0];
  }
  return uVar2;
}

