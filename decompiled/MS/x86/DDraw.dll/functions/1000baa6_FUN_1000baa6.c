/*
 * FUN_1000baa6 at 1000baa6
 * bool __fastcall FUN_1000baa6(void * param_1)
 * Address ranges: 1000baa6-1000bafa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1000baa6(void *param_1)

{
  bool bVar1;
  undefined4 local_18 [5];
  
  bVar1 = false;
  if (*(int *)((int)param_1 + 0x74) == 0) {
    FUN_100221f0(param_1,local_18);
    FUN_1000ac9c(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                 *(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),1,local_18[0],0,0,0,3
                 ,0,0x30000,0,0,'\0','\0');
    FUN_1000b561(param_1);
    bVar1 = *(int *)((int)param_1 + 0x74) == 0;
  }
  return !bVar1;
}

