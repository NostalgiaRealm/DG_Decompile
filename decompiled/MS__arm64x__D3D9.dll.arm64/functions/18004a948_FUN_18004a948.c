/*
 * FUN_18004a948 at 18004a948
 * undefined FUN_18004a948(void)
 * Address ranges: 18004a948-18004a9af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a948(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180043770(lVar1,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
                *(undefined8 *)((longlong)param_1 + 0x14),*(undefined8 *)((longlong)param_1 + 0x1c),
                0,*(undefined4 *)((longlong)param_1 + 0x24),1);
  if (param_1[5] != 0) {
    FUN_1800f3550(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0,(int)param_1[7],param_1[5],param_1[6]);
  }
  return;
}

