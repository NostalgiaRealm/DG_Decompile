/*
 * FUN_180003a20 at 180003a20
 * int __fastcall FUN_180003a20(undefined8 param_1, ulonglong param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 180003a20-180003a6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180003a20(undefined8 param_1,ulonglong param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(DAT_180111f20 + 0x86c);
  if ((iVar1 == 0) && (iVar1 = 1, param_4 != 0)) {
    if (param_4 != 1) {
      return param_4;
    }
    puVar2 = &DAT_1801123d8;
    if (param_3 == 2) {
      puVar2 = &DAT_1801123e8;
    }
    iVar1 = *(int *)(puVar2[(param_2 & 0xffffffff) * 5] + (ulonglong)param_5 * 4);
  }
  return iVar1;
}

