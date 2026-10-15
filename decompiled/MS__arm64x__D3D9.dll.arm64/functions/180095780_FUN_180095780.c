/*
 * FUN_180095780 at 180095780
 * undefined FUN_180095780(void)
 * Address ranges: 180095780-1800957d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095780(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 0) {
    func_0x000180222c50(*(undefined8 *)(lVar1 + 0x10),0,0x400);
  }
  else {
    thunk_FUN_180001218(*(undefined8 *)(lVar1 + 0x10),*param_1,0x400);
  }
  *(undefined1 *)(lVar1 + 0x191) = 1;
  FUN_180094100(lVar1,0,0);
  return;
}

