/*
 * FUN_180023794 at 180023794
 * undefined __fastcall FUN_180023794(longlong * param_1)
 * Address ranges: 180023794-180023814
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023794(longlong *param_1)

{
  FUN_18002121c((longlong *)param_1[0x630]);
  *(undefined1 *)((longlong)param_1 + 0x2be5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2be3) = 1;
  *(float *)(param_1 + 0x565) = (float)*(uint *)(param_1 + 0x16);
  *(float *)((longlong)param_1 + 0x2b2c) = (float)*(uint *)((longlong)param_1 + 0xb4);
  param_1[0x561] = param_1[0x564];
  param_1[0x562] = param_1[0x565];
  param_1[0x563] = param_1[0x566];
  FUN_1800369d8(param_1,(int *)((longlong)param_1 + 0x29a4));
  return;
}

