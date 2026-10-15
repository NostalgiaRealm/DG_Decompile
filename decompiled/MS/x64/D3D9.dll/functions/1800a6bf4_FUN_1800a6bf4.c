/*
 * FUN_1800a6bf4 at 1800a6bf4
 * undefined __fastcall FUN_1800a6bf4(longlong * param_1, undefined4 * param_2, int param_3, ulonglong param_4)
 * Address ranges: 1800a6bf4-1800a6da1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a6bf4(longlong *param_1,undefined4 *param_2,int param_3,ulonglong param_4)

{
  uint *puVar1;
  
  puVar1 = param_2 + 4;
  if (param_3 == 0) {
    FUN_1800edbe0(puVar1,param_1,0x2d,param_4);
  }
  else {
    FUN_1800edbe0(puVar1,param_1,0x8000002d,
                  (ulonglong)*(uint *)(&DAT_1800fe998 + (ulonglong)(param_3 - 1) * 4));
  }
  if (((byte)*param_2 & 0xf) == 4) {
    FUN_1800edbe0(puVar1,param_1,0x32,param_4 & 0xffffffff);
    FUN_1800edbe0(puVar1,param_1,0x40,param_4 & 0xffffffff);
    FUN_1800edbe0(puVar1,param_1,0x1c,param_4 & 0xffffffff);
  }
  return;
}

