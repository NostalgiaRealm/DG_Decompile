/*
 * FUN_180158fd8 at 180158fd8
 * undefined FUN_180158fd8(void)
 * Address ranges: 180158fd8-18015903b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180158fd8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1801526a0(lVar1,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
                *(undefined8 *)((longlong)param_1 + 0x14),*(undefined8 *)((longlong)param_1 + 0x1c),
                *(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],0);
  if (*(longlong *)((longlong)param_1 + 0x2c) != 0) {
    FUN_180212050(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0,*(undefined4 *)((longlong)param_1 + 0x3c),
                  *(longlong *)((longlong)param_1 + 0x2c),*(undefined8 *)((longlong)param_1 + 0x34))
    ;
  }
  return;
}

