/*
 * FUN_1800ae544 at 1800ae544
 * undefined8 __fastcall FUN_1800ae544(longlong param_1, uint param_2, ulonglong param_3, char * param_4)
 * Address ranges: 1800ae544-1800ae573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800ae544(longlong param_1,uint param_2,ulonglong param_3,char *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + -0x30)) && ((param_3 & 0xfffffffd) == 0)) &&
     (param_4 != (char *)0x0)) {
    uVar1 = FUN_180003ec8(param_1 + -0xa0,param_2,param_4);
  }
  return uVar1;
}

