/*
 * FUN_1800151c0 at 1800151c0
 * undefined __cdecl FUN_1800151c0(longlong * param_1, byte param_2, byte param_3)
 * Address ranges: 1800151c0-180015297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800151c0(longlong *param_1,byte param_2,byte param_3)

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
  if (bVar2 != *(byte *)((longlong)param_1 + 0x2b54)) {
    FUN_180016b90((longlong *)param_1[0x660]);
    (**(code **)(*param_1 + 0x2e0))(param_1);
    *(byte *)((longlong)param_1 + 0x2b54) = bVar2;
    *(undefined1 *)((longlong)param_1 + 0x2c79) = 1;
    if (((int)param_1[0x542] == 0) || ((int)param_1[0x55f] != 0)) {
      uVar3 = 0xff0000;
    }
    else {
      uVar3 = 0;
    }
    *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) & 0xffff | uVar3;
    *(undefined1 *)(param_1 + 0x65e) = 1;
  }
  *(uint *)((longlong)param_1 + 0x2a0c) = (uint)param_2;
  *(uint *)(param_1 + 0x542) = (uint)param_3;
  return;
}

