/*
 * FUN_18007df9c at 18007df9c
 * uint __fastcall FUN_18007df9c(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4, byte param_5)
 * Address ranges: 18007df9c-18007e02f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18007df9c(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_18007e0a8(param_1,param_3,param_4,param_5);
  if (*(char *)(param_3 + 0x1cc) == '\0') {
    uVar2 = 1;
    if (param_4 != 0x10) {
      uVar2 = param_4;
    }
    uVar1 = FUN_18007a038(param_1,param_2,param_3,uVar1,param_5,0,
                          (byte)(*(ulonglong *)(*(longlong *)(param_3 + 0x1b0) + 0x48) >>
                                ((byte)(uVar2 << 2) & 0x3f)) & 0xf,param_4 == 2,'\0');
  }
  return uVar1;
}

