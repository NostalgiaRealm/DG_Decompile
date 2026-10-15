/*
 * FUN_100ac950 at 100ac950
 * undefined FUN_100ac950(void)
 * Address ranges: 100ac950-100aca0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac950(int param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x60) + param_2 * 0x1c + 0xc;
  (*(code *)PTR_FUN_1016c298)(iVar2,iVar2,param_3);
  if (*(int *)(param_1 + 0xc4) != 0) {
    iVar2 = *(int *)(param_1 + 0xc4) + param_2 * 0x1c + 0xc;
    (*(code *)PTR_FUN_1016c298)(iVar2,iVar2,param_3);
  }
  *(undefined1 *)(param_1 + 0xdb) = 0;
  pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + ((param_2 >> 5) + 0x33) * 4);
  *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return;
}

