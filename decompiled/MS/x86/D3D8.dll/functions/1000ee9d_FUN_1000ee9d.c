/*
 * FUN_1000ee9d at 1000ee9d
 * undefined4 __fastcall FUN_1000ee9d(void * param_1)
 * Address ranges: 1000ee9d-1000eeec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000ee9d(void *param_1)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  
  uVar1 = 0x8876086c;
  if ((*(uint *)(*(int *)((int)param_1 + 4) + 0xb8) >> 0xb & 1) != 0) {
    uStack_8 = param_1;
    FUN_10003838((void *)((int)&uStack_8 + 3),
                 (byte)(*(uint *)(*(int *)((int)param_1 + 0x18) + 0xb0c) >> 2) & 1);
    uVar1 = FUN_1000ec84(param_1,'\0');
    FUN_10003881((char *)((int)&uStack_8 + 3));
  }
  return uVar1;
}

