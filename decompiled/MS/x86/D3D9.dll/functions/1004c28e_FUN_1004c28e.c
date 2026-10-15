/*
 * FUN_1004c28e at 1004c28e
 * int * __thiscall FUN_1004c28e(void * this, undefined4 param_1, uint param_2, int param_3, uint param_4, undefined4 * param_5)
 * Address ranges: 1004c28e-1004c334
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1004c28e(void *this,undefined4 param_1,uint param_2,int param_3,uint param_4,undefined4 *param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char local_1c;
  undefined4 *local_18;
  int local_14;
  
  piVar3 = (int *)0x0;
  FUN_10036e19(&local_18,0x100);
  iVar1 = *(int *)(*(int *)((int)this + 0x28) * 0x16c0 + 0x6c4 + *(int *)((int)this + 0x24));
  if ((iVar1 == 0x10de) || (local_1c = '\x01', iVar1 == 0x8086)) {
    local_1c = '\0';
  }
  uVar2 = FUN_1005e07f(*(uint *)((int)this + 0x44),*(byte **)((int)this + -4),param_3,param_4,0x51,
                       (int *)&local_18,param_5,(int)this + 0x2c,local_1c,
                       *(undefined1 *)((int)this + 0x38),param_1,param_2);
  if ((char)uVar2 != '\0') {
    piVar3 = FUN_100c630f(local_14 - (int)local_18,local_18);
  }
  thunk_FUN_100cfd6c(local_18);
  return piVar3;
}

