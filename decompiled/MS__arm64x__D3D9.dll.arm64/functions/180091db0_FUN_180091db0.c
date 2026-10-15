/*
 * FUN_180091db0 at 180091db0
 * undefined FUN_180091db0(void)
 * Address ranges: 180091db0-180091e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180091db0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_180094100(param_1,0,0);
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      uVar1 = 0;
      if ((int)param_1[6] != 0) {
        do {
          (**(code **)(*param_1 + 8))(param_1,uVar1,uVar2,1);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 6));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x34));
  }
  return *(undefined4 *)((longlong)param_1 + 0x8c);
}

