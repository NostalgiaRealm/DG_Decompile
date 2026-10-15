/*
 * FUN_180085d50 at 180085d50
 * undefined FUN_180085d50(void)
 * Address ranges: 180085d50-180085e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085d50(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + -0x28) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        uVar5 = 0;
        if (*(int *)(param_1 + -0xb0) != 0) {
          do {
            (**(code **)(*(longlong *)(param_1 + -0xe0) + 8))(param_1 + -0xe0,uVar5,uVar4,1);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + -0xb0));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + -0xac));
    }
    FUN_180083208(param_1 + -0x40,1,1);
  }
  if (((param_2 != 0) && (*(char *)(param_1 + -0x93) == '\0')) &&
     (*(int *)(param_1 + -0x9c) - 1U < 2)) {
    lVar2 = *(longlong *)(param_1 + -200);
    if (lVar2 == 0) {
      uVar3 = CONCAT44(0,*(int *)(param_1 + -0xb0) * *(int *)(param_1 + -0xac));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar2 = uVar3 << 4;
      if (SUB168(auVar1 * ZEXT816(0x10),8) != 0) {
        lVar2 = -1;
      }
      lVar2 = thunk_FUN_180102f80(lVar2);
      *(longlong *)(param_1 + -200) = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    thunk_FUN_180001218(lVar2,param_2,
                        (ulonglong)(uint)(*(int *)(param_1 + -0xb0) * *(int *)(param_1 + -0xac)) <<
                        4);
    *(undefined1 *)(param_1 + -0x93) = 1;
  }
  return;
}

