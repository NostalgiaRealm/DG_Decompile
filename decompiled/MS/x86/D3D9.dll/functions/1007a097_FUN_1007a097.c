/*
 * FUN_1007a097 at 1007a097
 * bool __fastcall FUN_1007a097(void * param_1)
 * Address ranges: 1007a097-1007a222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1007a097(void *param_1)

{
  uint *puVar1;
  char cVar2;
  uint *extraout_EDX;
  uint *local_24;
  undefined4 local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  FUN_1008f5b4(param_1,&local_1c);
  puVar1 = (uint *)((int)param_1 + 0x24);
  cVar2 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
  local_24 = extraout_EDX;
  if (cVar2 == '\0') {
    if (*(int *)((int)param_1 + 0xf4) == 0) {
      FUN_100777a5(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                   *extraout_EDX,*puVar1,1,local_1c,local_18,local_10,0,0,0x28,0,
                   -(uint)(*puVar1 != 1) & 4,0,'\0','\0');
    }
    if (*(int *)((int)param_1 + 0x114) == 0) {
      FUN_100777a5(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                   *extraout_EDX,*puVar1,1,local_1c,local_18,local_10,0,0,0x28,0,
                   -(uint)(*puVar1 != 1) & 4,0,'\0','\0');
    }
  }
  else if (*(int *)((int)param_1 + 0xf4) == 0) {
    FUN_100777a5(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                 *extraout_EDX,*puVar1,1,local_1c,local_18,0,0,0,8,0,0,0,'\0','\0');
    FUN_100777a5(*(undefined4 *)((int)param_1 + 0x14),*(undefined4 *)((int)param_1 + 0x18),
                 *(uint *)((int)param_1 + 0x20),*puVar1,1,local_1c,local_18,0,local_c,0,0x48,0,0,0,
                 '\0','\0');
    local_24 = (uint *)((int)param_1 + 0x20);
  }
  if ((*(int *)((int)param_1 + 0xf4) == 0) || (*(int *)((int)param_1 + 0x114) == 0)) {
    FUN_10077958((void *)((int)param_1 + 0xe8),*local_24,*puVar1);
    FUN_10077958((void *)((int)param_1 + 0x108),*local_24,*puVar1);
  }
  return *(int *)((int)param_1 + 0xf4) != 0;
}

