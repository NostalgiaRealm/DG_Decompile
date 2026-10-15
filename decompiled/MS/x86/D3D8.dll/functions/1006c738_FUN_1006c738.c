/*
 * FUN_1006c738 at 1006c738
 * undefined4 __fastcall FUN_1006c738(void * param_1)
 * Address ranges: 1006c738-1006c7d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1006c738(void *param_1)

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
  
  cVar1 = FUN_1006c7d3((int)param_1);
  uVar2 = extraout_var;
  if (cVar1 == '\0') {
    bVar3 = false;
    if (*(int *)((int)param_1 + 0x90) == 0) {
      FUN_1007923c(this,&local_18);
      FUN_1006b825((void *)((int)param_1 + 0x84),*(uint *)((int)param_1 + 0x14),
                   *(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x20),
                   *(uint *)((int)param_1 + 0x24),1,local_18,local_14,0,0x1688,0x1688,local_c,
                   local_8,'\0','\0',0,0);
      FUN_1006c6a4(param_1);
      bVar3 = *(int *)((int)param_1 + 0x90) == 0;
      uVar2 = extraout_var_01;
    }
  }
  else {
    bVar3 = false;
    if (*(int *)((int)param_1 + 0x98) == 0) {
      *(undefined1 *)((int)param_1 + 0xbc) = 1;
      FUN_1006b18d((void *)((int)param_1 + 0x84),*(int *)((int)param_1 + 0x20),
                   *(int *)((int)param_1 + 0x24));
      FUN_1006c6a4(param_1);
      bVar3 = *(int *)((int)param_1 + 0x98) == 0;
      uVar2 = extraout_var_00;
    }
  }
  return CONCAT31(uVar2,!bVar3);
}

