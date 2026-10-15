/*
 * FUN_180086290 at 180086290
 * undefined FUN_180086290(void)
 * Address ranges: 180086290-18008646f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180086290(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  
  func_0x0001801bad48(&local_50,*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      FUN_180082d80(param_1 + 0x180,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_50,
                    uStack_4c,0,0,0,8,0,0,0,0,0);
      FUN_180082d80(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_50,
                    uStack_4c,0,local_40,0,0x48,0,0,0,0,0);
    }
  }
  else {
    uVar2 = 4;
    if (*(longlong *)(param_1 + 0x198) == 0) {
      uVar1 = uVar2;
      if (*(int *)(param_1 + 0x34) == 1) {
        uVar1 = 0;
      }
      FUN_180082d80(param_1 + 0x180,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x34),1,local_50,uStack_4c,
                    local_44,0,0,0x28,0,uVar1,0,0,0);
    }
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      if (*(int *)(param_1 + 0x34) == 1) {
        uVar2 = 0;
      }
      FUN_180082d80(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x34),1,local_50,uStack_4c,
                    local_44,0,0,0x28,0,uVar2,0,0,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1d8) == 0)) {
    FUN_180083208(param_1 + 0x180,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_180083208(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  }
  return *(longlong *)(param_1 + 0x198) != 0;
}

