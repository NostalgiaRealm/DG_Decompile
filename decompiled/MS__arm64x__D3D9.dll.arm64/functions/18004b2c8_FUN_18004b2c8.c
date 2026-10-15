/*
 * FUN_18004b2c8 at 18004b2c8
 * undefined FUN_18004b2c8(void)
 * Address ranges: 18004b2c8-18004b353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b2c8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180043828(lVar1,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
                *(undefined8 *)((longlong)param_1 + 0x14),*(undefined8 *)((longlong)param_1 + 0x1c),
                0,*(undefined4 *)((longlong)param_1 + 0x24),param_1[5],(int)param_1[6],
                *(undefined4 *)((longlong)param_1 + 0x34),(char)param_1[7],1);
  if (*(longlong *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1800f3550(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0,*(undefined4 *)((longlong)param_1 + 0x4c),
                  *(longlong *)((longlong)param_1 + 0x3c),*(undefined8 *)((longlong)param_1 + 0x44))
    ;
  }
  return;
}

