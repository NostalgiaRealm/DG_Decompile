/*
 * FUN_180206e88 at 180206e88
 * undefined FUN_180206e88(void)
 * Address ranges: 180206e88-180206ef7;180206f08-180206f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206e88(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
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
    lVar5 = FUN_1802229a8(lVar5);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar5,*(undefined8 *)(param_1 + 0xb20),
                          (ulonglong)*(uint *)(param_1 + 0xb2c) << 5);
    }
  }
  else {
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0xb20) + (ulonglong)*(uint *)(param_1 + 0xb28) * 0x20);
    puVar1[1] = param_2;
    *puVar1 = 0;
    puVar1[3] = CONCAT44(uStack_24,param_5);
    puVar1[2] = CONCAT44(param_4,param_3);
    *(int *)(param_1 + 0xb28) = *(int *)(param_1 + 0xb28) + 1;
  }
  return;
}

