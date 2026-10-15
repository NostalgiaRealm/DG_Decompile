/*
 * FUN_1801e1d70 at 1801e1d70
 * undefined FUN_1801e1d70(void)
 * Address ranges: 1801e1d70-1801e1e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e1d70(longlong param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_1801083e8(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xe28),
                  *(undefined4 *)(param_1 + 0xf0),&local_28);
    local_30[0] = 0;
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar1 = (*extraout_x11)(uVar3,*(undefined4 *)(param_1 + 0x18),local_28,uStack_24,local_30);
    *param_2 = (uint)(cVar1 != '\0');
    uVar2 = 0;
    if (*(char *)(param_1 + 0x103) == '\0') {
      local_30[0] = 0;
    }
    param_2[1] = local_30[0];
  }
  return uVar2;
}

