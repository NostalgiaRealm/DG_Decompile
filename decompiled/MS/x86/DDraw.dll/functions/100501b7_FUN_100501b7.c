/*
 * FUN_100501b7 at 100501b7
 * int __thiscall FUN_100501b7(void * this, uint param_1, uint param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * Address ranges: 100501b7-100502bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100501b7(void *this,uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  undefined4 *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  LPCRITICAL_SECTION local_c;
  int local_8;
  
  local_c = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(local_c);
  local_8 = 0;
  if (*(char *)((int)this + 0x34) == '\0') {
    uVar3 = FUN_1005081c(this,&param_1);
    if ((char)uVar3 == '\0') goto LAB_100502a9;
  }
  puVar4 = (undefined4 *)FUN_100507cd(this,&param_1);
  if (puVar4 != (undefined4 *)0x0) {
    this_00 = puVar4 + 1;
    *puVar4 = param_3;
    piVar5 = (int *)FUN_10050857(this_00,&param_2);
    iVar2 = param_5;
    iVar1 = param_4;
    if (piVar5 == (int *)0x0) {
      param_1 = 0xffffffff;
      piVar5 = (int *)FUN_10050857(this_00,&param_1);
      local_20 = param_5;
      local_24 = param_4;
      if (piVar5 != (int *)0x0) {
        local_8 = FUN_10050050(piVar5,extraout_ECX_00,param_4,param_5);
      }
      local_1c = param_2;
      local_18 = param_6;
      local_14 = param_7;
      local_10 = param_8;
      FUN_10050891(this_00,&param_2,&local_24);
    }
    else {
      local_8 = FUN_10050050(piVar5,extraout_ECX,param_4,param_5);
      piVar5[2] = param_2;
      piVar5[3] = param_6;
      *piVar5 = iVar1;
      piVar5[1] = iVar2;
      piVar5[4] = param_7;
      piVar5[5] = param_8;
    }
  }
LAB_100502a9:
  LeaveCriticalSection(local_c);
  return local_8;
}

