/*
 * FUN_180101f70 at 180101f70
 * undefined FUN_180101f70(void)
 * Address ranges: 180101f70-180101fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180101f70(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    uVar2 = 1;
  }
  else if (param_3 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  uVar1 = (*__imp_KERNEL32_dll_SetFilePointer)(param_1,param_2,0,uVar2);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  return 0;
}

