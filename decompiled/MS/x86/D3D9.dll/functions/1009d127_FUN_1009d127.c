/*
 * FUN_1009d127 at 1009d127
 * undefined __fastcall FUN_1009d127(undefined4 * param_1)
 * Address ranges: 1009d127-1009d1a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009d127(undefined4 *param_1)

{
  void *this;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[0x20] + 0xdd0) >> 2) & 1);
  if ((param_1[0x23] == 0) && (param_1[0x22] == 0)) {
    this = (void *)param_1[0x20];
    FUN_10092150(this,(int)param_1);
    FUN_10006fc5(this,(int)param_1);
  }
  else {
    FUN_10092150((void *)param_1[0x20],(int)param_1);
  }
  FUN_10012425((int)param_1);
  FUN_1009cfe8(param_1);
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

