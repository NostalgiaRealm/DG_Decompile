/*
 * FUN_10025448 at 10025448
 * undefined __thiscall FUN_10025448(void * this, int param_1, undefined4 param_2, undefined4 param_3, LONG * param_4, LONG * param_5)
 * Address ranges: 10025448-100254c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10025448(void *this,int param_1,undefined4 param_2,undefined4 param_3,LONG *param_4,
            LONG *param_5)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18 [5];
  
  local_34 = 0;
  local_30 = 0;
  piVar1 = *(int **)((int)this + 0x118);
  local_38 = *(undefined4 *)((int)this + 0xfc);
  local_2c = FUN_1005d9c9(piVar1 + 1);
  local_28 = 2;
  local_24 = 2;
  local_20 = 0;
  local_1c = 0;
  FUN_100253c5(this,local_18);
  FUN_10004bf5(&local_38,piVar1,param_1,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),param_4,
               param_5,(RECT *)(&DAT_1006c460 + *(int *)((int)this + 0x11c) * 0x228),0,extraout_ECX,
               extraout_ECX,local_18);
  return;
}

