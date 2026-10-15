/*
 * FUN_18009b748 at 18009b748
 * undefined4 __fastcall FUN_18009b748(longlong * param_1)
 * Address ranges: 18009b748-18009b7a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18009b748(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_18009dcd0((longlong)param_1,'\0','\0');
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

