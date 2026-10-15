/*
 * _grTexDownloadTable@12 at 180002374
 * undefined __fastcall _grTexDownloadTable@12(int param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 180002374-1800023b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTable_12(int param_1,uint param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
                    /* 0x2374  91  _grTexDownloadTable@12
                       0x2374  248  grTexDownloadTable */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    FUN_180017570((longlong)puVar1,param_1,param_2,param_3,0,0xff);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

