/*
 * FUN_1801ac8b0 at 1801ac8b0
 * undefined FUN_1801ac8b0(void)
 * Address ranges: 1801ac8b0-1801ac9c7;1801ac9d0-1801ac9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ac8b0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *extraout_x11;
  uint uVar5;
  uint uVar6;
  
  FUN_180221ec0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + -0x3c) != 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + -0xcc) != 0) {
      do {
        uVar6 = 0;
        if (*(int *)(param_1 + -0xd0) != 0) {
          do {
            (*(code *)puVar2)();
            (*extraout_x11)(param_1 + -0x100,uVar6,uVar5,1);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_1 + -0xd0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + -0xcc));
    }
    FUN_1801a7d98(param_1 + -0x50,1,1);
  }
  if (((param_2 != 0) && (*(char *)(param_1 + -0xb3) == '\0')) &&
     (*(int *)(param_1 + -0xbc) - 1U < 2)) {
    lVar3 = *(longlong *)(param_1 + -0xe8);
    if (lVar3 == 0) {
      uVar4 = CONCAT44(0,*(int *)(param_1 + -0xd0) * *(int *)(param_1 + -0xcc));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      lVar3 = uVar4 << 4;
      if (SUB168(auVar1 * ZEXT816(0x10),8) != 0) {
        lVar3 = -1;
      }
      lVar3 = FUN_1802229a8(lVar3);
      *(longlong *)(param_1 + -0xe8) = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(lVar3,param_2,
                        (ulonglong)(uint)(*(int *)(param_1 + -0xd0) * *(int *)(param_1 + -0xcc)) <<
                        4);
  }
  return;
}

