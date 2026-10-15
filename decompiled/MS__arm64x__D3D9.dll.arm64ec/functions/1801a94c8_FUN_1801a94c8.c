/*
 * FUN_1801a94c8 at 1801a94c8
 * undefined FUN_1801a94c8(void)
 * Address ranges: 1801a94c8-1801a968b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801a94c8(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  
  if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
    if (*(longlong *)(param_1 + 0xd4) == 0) {
      *(undefined1 *)(param_1 + 0xfc) = 1;
      FUN_1801a6db8(param_1 + 0xb0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      uVar4 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar3 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            do {
              FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar3);
              uVar1 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
              thunk_FUN_180223c20(((ulonglong)(uVar3 + *(int *)(param_1 + 0x3c) * uVar4) << 5 | 0x10
                                  ) + *(longlong *)(param_1 + 0x84),0,0,uVar1);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)(param_1 + 0x30));
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x34));
      }
    }
    lVar2 = *(longlong *)(param_1 + 0xd4);
  }
  else {
    if (*(longlong *)(param_1 + 0xc4) == 0) {
      FUN_1801bad48(&local_40);
      FUN_1801a7528(param_1 + 0xb0,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_40,
                    uStack_3c,0,0x1688,0x1688,local_34,uStack_30,0,0,0,0);
      uVar4 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar3 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            do {
              FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar3);
              uVar1 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
              thunk_FUN_180223c20(((ulonglong)(uVar3 + *(int *)(param_1 + 0x3c) * uVar4) << 5 | 0x10
                                  ) + *(longlong *)(param_1 + 0x84),0,0,uVar1);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)(param_1 + 0x30));
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x34));
      }
    }
    lVar2 = *(longlong *)(param_1 + 0xc4);
  }
  return lVar2 != 0;
}

