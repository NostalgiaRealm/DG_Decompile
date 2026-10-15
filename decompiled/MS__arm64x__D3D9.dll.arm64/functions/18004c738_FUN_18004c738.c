/*
 * FUN_18004c738 at 18004c738
 * undefined FUN_18004c738(void)
 * Address ranges: 18004c738-18004c7bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c738(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180043b98(lVar1,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
                *(undefined8 *)((longlong)param_1 + 0x14),*(undefined8 *)((longlong)param_1 + 0x1c),
                *(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                *(undefined4 *)((longlong)param_1 + 0x2c),(char)param_1[6],
                *(undefined1 *)((longlong)param_1 + 0x34),(char)param_1[7]);
  if (*(longlong *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1800f3550(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0,*(undefined4 *)((longlong)param_1 + 0x4c),
                  *(longlong *)((longlong)param_1 + 0x3c),*(undefined8 *)((longlong)param_1 + 0x44))
    ;
  }
  return;
}

