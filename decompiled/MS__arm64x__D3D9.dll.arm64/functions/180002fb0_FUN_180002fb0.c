/*
 * FUN_180002fb0 at 180002fb0
 * undefined FUN_180002fb0(void)
 * Address ranges: 180002fb0-180003003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180002fb0(undefined8 param_1,ulonglong param_2,int param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_18024de60 + 0x86c);
  if (*(int *)(DAT_18024de60 + 0x86c) == 0) {
    if (param_4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = param_4;
      if (param_4 == 1) {
        puVar1 = &DAT_180253358;
        if (param_3 != 2) {
          puVar1 = &DAT_180253348;
        }
        iVar2 = *(int *)(puVar1[(param_2 & 0xffffffff) * 5] + (ulonglong)param_5 * 4);
      }
    }
  }
  return iVar2;
}

