/*
 * FUN_18003aa88 at 18003aa88
 * undefined __cdecl FUN_18003aa88(longlong * param_1, byte param_2, byte param_3)
 * Address ranges: 18003aa88-18003ab5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003aa88(longlong *param_1,byte param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  bVar1 = (param_2 & 1) == 0;
  if (bVar1) {
    bVar4 = 0;
    bVar2 = 0;
  }
  else {
    bVar4 = 4;
    bVar2 = 2;
  }
  bVar2 = param_3 << 3 | bVar4 | bVar2 | !bVar1;
  if (bVar2 != *(byte *)((longlong)param_1 + 0x2abc)) {
    FUN_180023700((longlong *)param_1[0x630]);
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(byte *)((longlong)param_1 + 0x2abc) = bVar2;
    *(undefined1 *)((longlong)param_1 + 0x2be1) = 1;
    if (((int)param_1[0x533] == 0) || ((int)param_1[0x54c] != 0)) {
      uVar3 = 0xff0000;
    }
    else {
      uVar3 = 0;
    }
    *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) & 0xffff | uVar3;
    *(undefined1 *)(param_1 + 0x62e) = 1;
  }
  *(uint *)((longlong)param_1 + 0x2994) = (uint)param_2;
  *(uint *)(param_1 + 0x533) = (uint)param_3;
  return;
}

