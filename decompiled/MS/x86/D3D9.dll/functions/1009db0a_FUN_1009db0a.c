/*
 * FUN_1009db0a at 1009db0a
 * undefined4 __stdcall FUN_1009db0a(int param_1, uint param_2, int param_3, undefined4 * param_4)
 * Address ranges: 1009db0a-1009db72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009db0a(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + 0x120) + 0xdd0) >> 2) & 1);
  uVar2 = 0x8876086c;
  *param_4 = 0;
  if ((param_2 < *(uint *)(iVar1 + 0x90)) && (param_3 == 0)) {
    uVar2 = FUN_1009d053(*(int *)(iVar1 + 0x3c + param_2 * 4) + 0x5c,0x100d1370,param_4);
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

