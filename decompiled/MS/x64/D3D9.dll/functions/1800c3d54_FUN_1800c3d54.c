/*
 * FUN_1800c3d54 at 1800c3d54
 * undefined __fastcall FUN_1800c3d54(longlong * param_1)
 * Address ranges: 1800c3d54-1800c3da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c3d54(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)((longlong)param_1 + 0x3c) != 0) {
    do {
      (**(code **)(*param_1 + 0x30))(param_1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((longlong)param_1 + 0x3c));
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x18))();
  }
  param_1[0x1c] = 0;
  return;
}

