/*
 * FUN_1801fdbb8 at 1801fdbb8
 * undefined FUN_1801fdbb8(void)
 * Address ranges: 1801fdbb8-1801fdc73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fdbb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0xd78) != 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
    lVar5 = *(longlong *)(param_2 + 0xd80);
    thunk_FUN_1802236f8(param_1 + 0x620);
    lVar1 = param_1 + (ulonglong)uVar2 * 0x18c0 + 0xbc0;
    lVar4 = 0;
    do {
      if (lVar5 == *(longlong *)(lVar1 + lVar4 * 8)) {
        *(undefined8 *)(lVar1 + lVar4 * 8) = 0;
      }
      puVar3 = __hybrid_os_arm64x_dispatch_icall;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar5);
    thunk_FUN_18022370c(param_1 + 0x620);
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)();
    *(undefined8 *)(param_2 + 0xd78) = 0;
    *(undefined8 *)(param_2 + 0xd80) = 0;
  }
  return;
}

