/*
 * FUN_100199fa at 100199fa
 * undefined __thiscall FUN_100199fa(void * this, uint param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100199fa-10019a68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100199fa(void *this,uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = 0;
  uVar1 = FUN_10019c31(this,&local_18);
  if (uVar1 != *(uint *)((int)this + 8)) {
    uVar2 = FUN_1001990a((void *)(*(int *)((int)this + 4) + uVar1 * 0x18),local_18,local_14,
                         (uint)local_10,local_10._4_4_);
    if ((char)uVar2 != '\0') {
      *(undefined4 *)(extraout_ECX + 0x10) = param_5;
      return;
    }
  }
  FUN_10019b67(this,uVar1,&local_18,&param_5);
  return;
}

