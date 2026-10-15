/*
 * FUN_18019bbd0 at 18019bbd0
 * undefined FUN_18019bbd0(void)
 * Address ranges: 18019bbd0-18019bcd7;18019bce0-18019bcf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019bbd0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *extraout_x11;
  uint uVar5;
  uint uVar6;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + -0x28) != 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        uVar6 = 0;
        if (*(int *)(param_1 + -0xb0) != 0) {
          do {
            (*(code *)puVar2)();
            (*extraout_x11)(param_1 + -0xe0,uVar6,uVar5,1);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_1 + -0xb0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + -0xac));
    }
    FUN_180198b40(param_1 + -0x40,1,1);
  }
  if (((param_2 != 0) && (*(char *)(param_1 + -0x93) == '\0')) &&
     (*(int *)(param_1 + -0x9c) - 1U < 2)) {
    lVar3 = *(longlong *)(param_1 + -200);
    if (lVar3 == 0) {
      uVar4 = CONCAT44(0,*(int *)(param_1 + -0xb0) * *(int *)(param_1 + -0xac));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      lVar3 = uVar4 << 4;
      if (SUB168(auVar1 * ZEXT816(0x10),8) != 0) {
        lVar3 = -1;
      }
      lVar3 = FUN_1802229a8(lVar3);
      *(longlong *)(param_1 + -200) = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(lVar3,param_2,
                        (ulonglong)(uint)(*(int *)(param_1 + -0xb0) * *(int *)(param_1 + -0xac)) <<
                        4);
  }
  return;
}

