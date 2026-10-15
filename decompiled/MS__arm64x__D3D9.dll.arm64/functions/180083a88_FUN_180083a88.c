/*
 * FUN_180083a88 at 180083a88
 * undefined FUN_180083a88(void)
 * Address ranges: 180083a88-180083b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180083a88(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_180083fc0(param_1,0);
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
  return param_1[0x11];
}

