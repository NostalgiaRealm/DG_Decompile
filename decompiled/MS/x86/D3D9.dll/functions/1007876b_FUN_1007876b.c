/*
 * FUN_1007876b at 1007876b
 * bool __fastcall FUN_1007876b(void * param_1)
 * Address ranges: 1007876b-100787bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1007876b(void *param_1)

{
  bool bVar1;
  undefined4 local_18 [5];
  
  bVar1 = false;
  if (*(int *)((int)param_1 + 0x74) == 0) {
    FUN_1008f5b4(param_1,local_18);
    FUN_100777a5(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                 *(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),1,local_18[0],0,0,0,3
                 ,0,0x30000,0,0,'\0','\0');
    FUN_100781da(param_1);
    bVar1 = *(int *)((int)param_1 + 0x74) == 0;
  }
  return !bVar1;
}

