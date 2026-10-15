/*
 * FUN_1801da040 at 1801da040
 * undefined FUN_1801da040(void)
 * Address ranges: 1801da040-1801da0ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da040(longlong param_1,uint param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  longlong lVar4;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x5a00)) && (param_3 != (uint *)0x0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    FUN_1801083e8(*(undefined8 *)(*(longlong *)(lVar4 + 0x50) + 0xe28),*(undefined4 *)(lVar4 + 0xe8)
                  ,&local_28);
    local_30[0] = 0;
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar1 = (*extraout_x11)(uVar3,*(undefined4 *)(lVar4 + 0x10),local_28,uStack_24,local_30);
    *param_3 = (uint)(cVar1 != '\0');
    uVar2 = 0;
    if (*(char *)(lVar4 + 0xfb) == '\0') {
      local_30[0] = 0;
    }
    param_3[1] = local_30[0];
  }
  return uVar2;
}

