/*
 * FUN_180012d3c at 180012d3c
 * undefined __fastcall FUN_180012d3c(longlong * param_1, byte param_2, byte param_3)
 * Address ranges: 180012d3c-180012ddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012d3c(longlong *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = param_3 << 3 | param_2 | param_2 * '\x04' | param_2 * '\x02';
  if (bVar2 != *(byte *)((longlong)param_1 + 0x2b54)) {
    FUN_1800144d0((longlong *)param_1[0x660]);
    (**(code **)(*param_1 + 0x2e0))(param_1);
    uVar1 = 0;
    *(byte *)((longlong)param_1 + 0x2b54) = bVar2;
    *(undefined1 *)((longlong)param_1 + 0x2c79) = 1;
    if (((int)param_1[0x542] == 0) || ((int)param_1[0x55f] != 0)) {
      uVar1 = 0xff0000;
    }
    *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) & 0xffff;
    *(uint *)((longlong)param_1 + 0x2cac) = *(uint *)((longlong)param_1 + 0x2cac) | uVar1;
    *(undefined1 *)(param_1 + 0x65e) = 1;
  }
  *(uint *)((longlong)param_1 + 0x2a0c) = (uint)param_2;
  *(uint *)(param_1 + 0x542) = (uint)param_3;
  return;
}

