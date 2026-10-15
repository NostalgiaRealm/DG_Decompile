/*
 * FUN_100290a3 at 100290a3
 * int __stdcall FUN_100290a3(int param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 100290a3-100290da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100290a3(int param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  iVar2 = -0x7ff8ffa9;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    param_3 = (undefined4 *)0x0;
    iVar2 = FUN_100294c5((void *)(param_1 + 4),param_2,puVar1,(int *)&param_3);
  }
  return iVar2;
}

