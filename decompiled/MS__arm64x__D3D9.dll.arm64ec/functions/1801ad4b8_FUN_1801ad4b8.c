/*
 * FUN_1801ad4b8 at 1801ad4b8
 * undefined FUN_1801ad4b8(void)
 * Address ranges: 1801ad4b8-1801ad677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801ad4b8(longlong param_1)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_1801bad48(&local_50,*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    FUN_1801a7528(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_50,
                  uStack_4c,local_48,0x1688,0x1688,0,0,0,1,0,0);
    FUN_1801a7528(param_1 + 500,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_50,
                  uStack_4c,local_48,0x1688,0x1688,0,local_40,1,1,0,0);
  }
  else {
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      FUN_1801a7528(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_50,
                    uStack_4c,0,0x1688,0x1688,local_44,0,0,1,0,0);
    }
    if (*(longlong *)(param_1 + 0x208) == 0) {
      FUN_1801a7528(param_1 + 500,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_50,
                    uStack_4c,0,0x1688,0x1688,local_44,0,1,1,0,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
    FUN_1801a7d98(param_1 + 0x1a4,1,1);
    FUN_1801a7d98(param_1 + 500,1,1);
  }
  return *(longlong *)(param_1 + 0x1b8) != 0;
}

