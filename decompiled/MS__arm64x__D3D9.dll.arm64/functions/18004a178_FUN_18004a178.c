/*
 * FUN_18004a178 at 18004a178
 * undefined FUN_18004a178(void)
 * Address ranges: 18004a178-18004a1fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a178(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180043828(lVar1,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
                *(undefined8 *)((longlong)param_1 + 0x14),*(undefined8 *)((longlong)param_1 + 0x1c),
                *(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                *(undefined8 *)((longlong)param_1 + 0x2c),*(undefined4 *)((longlong)param_1 + 0x34),
                (int)param_1[7],*(undefined1 *)((longlong)param_1 + 0x3c),0);
  if (param_1[8] != 0) {
    FUN_1800f3550(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0,(int)param_1[10],param_1[8],param_1[9]);
  }
  return;
}

