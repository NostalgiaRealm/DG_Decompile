/*
 * FUN_1801526a0 at 1801526a0
 * undefined FUN_1801526a0(void)
 * Address ranges: 1801526a0-180152753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801526a0(undefined8 param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined1 *puVar1;
  longlong local_58;
  undefined4 local_50;
  
  FUN_18014c730();
  local_58 = 0;
  if (param_4 != 0) {
    local_58 = param_4 + -0x30;
  }
  local_50 = *(undefined4 *)(param_3 + 0x10);
  puVar1 = &DAT_0000004c;
  if (param_4 != 0) {
    puVar1 = (undefined1 *)(param_4 + 0x1c);
  }
  FUN_180168ce0(param_1,param_2,param_3,0,&local_58,param_5,param_6,param_7,param_8,0,*puVar1);
  return;
}

