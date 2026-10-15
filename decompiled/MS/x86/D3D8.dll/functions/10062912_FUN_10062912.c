/*
 * FUN_10062912 at 10062912
 * bool __fastcall FUN_10062912(void * param_1)
 * Address ranges: 10062912-10062966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10062912(void *param_1)

{
  bool bVar1;
  undefined4 local_18 [5];
  
  bVar1 = false;
  if (*(int *)((int)param_1 + 0x74) == 0) {
    FUN_1007923c(param_1,local_18);
    FUN_10061b08(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                 *(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),1,local_18[0],0,0,0,3
                 ,0,0x30000,0,0,'\0','\0');
    FUN_100623cd(param_1);
    bVar1 = *(int *)((int)param_1 + 0x74) == 0;
  }
  return !bVar1;
}

