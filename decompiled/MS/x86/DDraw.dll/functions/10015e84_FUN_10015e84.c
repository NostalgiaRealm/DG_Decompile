/*
 * FUN_10015e84 at 10015e84
 * undefined4 __fastcall FUN_10015e84(void * param_1)
 * Address ranges: 10015e84-10015f1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10015e84(void *param_1)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 uVar2;
  void *this;
  bool bVar3;
  undefined4 local_18;
  int local_14;
  int local_c;
  int local_8;
  
  cVar1 = FUN_10015f1f((int)param_1);
  uVar2 = extraout_var;
  if (cVar1 == '\0') {
    bVar3 = false;
    if (*(int *)((int)param_1 + 0x90) == 0) {
      FUN_100221f0(this,&local_18);
      FUN_10014f74((void *)((int)param_1 + 0x84),*(uint *)((int)param_1 + 0x14),
                   *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),
                   *(uint *)((int)param_1 + 0x24),1,local_18,local_14,0,0x1688,0x1688,local_c,
                   local_8,'\0','\0',0,0);
      FUN_10015df0(param_1);
      bVar3 = *(int *)((int)param_1 + 0x90) == 0;
      uVar2 = extraout_var_01;
    }
  }
  else {
    bVar3 = false;
    if (*(int *)((int)param_1 + 0x98) == 0) {
      *(undefined1 *)((int)param_1 + 0xbc) = 1;
      FUN_100148dc((void *)((int)param_1 + 0x84),*(int *)((int)param_1 + 0x20),
                   *(int *)((int)param_1 + 0x24));
      FUN_10015df0(param_1);
      bVar3 = *(int *)((int)param_1 + 0x98) == 0;
      uVar2 = extraout_var_00;
    }
  }
  return CONCAT31(uVar2,!bVar3);
}

