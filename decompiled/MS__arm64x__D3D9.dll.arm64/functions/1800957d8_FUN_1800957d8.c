/*
 * FUN_1800957d8 at 1800957d8
 * undefined FUN_1800957d8(void)
 * Address ranges: 1800957d8-1800958ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800957d8(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_180101df0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  if (*(longlong *)(param_1 + -0x3c) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + -0xcc) != 0) {
      do {
        uVar5 = 0;
        if (*(int *)(param_1 + -0xd0) != 0) {
          do {
            (**(code **)(*(longlong *)(param_1 + -0x100) + 8))(param_1 + -0x100,uVar5,uVar4,1);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + -0xd0));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + -0xcc));
    }
    FUN_180091218(param_1 + -0x50,1,1);
  }
  if (((param_2 != 0) && (*(char *)(param_1 + -0xb3) == '\0')) &&
     (*(int *)(param_1 + -0xbc) - 1U < 2)) {
    lVar2 = *(longlong *)(param_1 + -0xe8);
    if (lVar2 == 0) {
      uVar3 = CONCAT44(0,*(int *)(param_1 + -0xd0) * *(int *)(param_1 + -0xcc));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar2 = uVar3 << 4;
      if (SUB168(auVar1 * ZEXT816(0x10),8) != 0) {
        lVar2 = -1;
      }
      lVar2 = thunk_FUN_180102f80(lVar2);
      *(longlong *)(param_1 + -0xe8) = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    thunk_FUN_180001218(lVar2,param_2,
                        (ulonglong)(uint)(*(int *)(param_1 + -0xd0) * *(int *)(param_1 + -0xcc)) <<
                        4);
    *(undefined1 *)(param_1 + -0xb3) = 1;
  }
  return;
}

