/*
 * FUN_18015a138 at 18015a138
 * undefined FUN_18015a138(void)
 * Address ranges: 18015a138-18015a19f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015a138(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1801526a0(lVar1,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
                *(undefined8 *)((longlong)param_1 + 0x14),*(undefined8 *)((longlong)param_1 + 0x1c),
                0,*(undefined4 *)((longlong)param_1 + 0x24),1);
  if (param_1[5] != 0) {
    FUN_180212050(*(longlong *)(lVar1 + 0xf6e0) + 0x17f0,(int)param_1[7],param_1[5],param_1[6]);
  }
  return;
}

