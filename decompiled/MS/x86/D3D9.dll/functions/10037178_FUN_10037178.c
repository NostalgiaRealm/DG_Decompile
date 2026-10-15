/*
 * FUN_10037178 at 10037178
 * undefined __thiscall FUN_10037178(void * this, uint param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5)
 * Address ranges: 10037178-100371ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10037178(void *this,uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_18 = param_1;
  local_10 = param_3;
  local_14 = param_2;
  local_c = param_4;
  uVar1 = FUN_10037403(this,&local_18);
  if ((uVar1 == *(uint *)((int)this + 8)) ||
     (uVar2 = FUN_10037088((void *)(*(int *)((int)this + 4) + uVar1 * 0x18),local_18,local_14,
                           local_10,local_c), (char)uVar2 == '\0')) {
    FUN_10037339(this,uVar1,&local_18,&param_5);
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x10) = param_5;
  }
  return;
}

