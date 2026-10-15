/*
 * FUN_1800e7f80 at 1800e7f80
 * undefined FUN_1800e7f80(void)
 * Address ranges: 1800e7f80-1800e8037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e7f80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined4 uStack_24;
  
  iVar2 = *(int *)(param_1 + 0xb2c);
  if (*(int *)(param_1 + 0xb28) == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    lVar5 = CONCAT44(0,uVar3) << 5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    if (SUB168(auVar4 * ZEXT816(0x20),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = thunk_FUN_180102f80(lVar5);
    if (lVar5 == 0) {
      return;
    }
    thunk_FUN_180001218(lVar5,*(undefined8 *)(param_1 + 0xb20),
                        (ulonglong)*(uint *)(param_1 + 0xb2c) << 5);
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xb20));
    *(longlong *)(param_1 + 0xb20) = lVar5;
    *(uint *)(param_1 + 0xb2c) = uVar3;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0xb20) + (ulonglong)*(uint *)(param_1 + 0xb28) * 0x20);
  puVar1[1] = param_2;
  *puVar1 = 0;
  puVar1[3] = CONCAT44(uStack_24,param_5);
  puVar1[2] = CONCAT44(param_4,param_3);
  *(int *)(param_1 + 0xb28) = *(int *)(param_1 + 0xb28) + 1;
  return;
}

