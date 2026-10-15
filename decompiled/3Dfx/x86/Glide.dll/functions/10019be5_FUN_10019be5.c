/*
 * FUN_10019be5 at 10019be5
 * undefined __thiscall FUN_10019be5(void * this, char param_1, char param_2)
 * Address ranges: 10019be5-10019c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019be5(void *this,char param_1,char param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  RECT local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  LONG local_38;
  LONG LStack_34;
  LONG LStack_30;
  LONG LStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_8 = (*(int **)((int)this + 0xc))[0x25];
  cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x34))(&local_38);
  if (cVar1 != '\0') {
    local_68.left = local_38;
    local_68.top = LStack_34;
    local_68.right = LStack_30;
    local_68.bottom = LStack_2c;
    local_58 = local_28;
    uStack_54 = uStack_24;
    uStack_50 = uStack_20;
    uStack_4c = uStack_1c;
    local_48 = local_18;
    uStack_44 = uStack_14;
    uStack_40 = uStack_10;
    uStack_3c = uStack_c;
    FUN_10004090(*(void **)((int)this + 0x1c),local_8,&local_68,extraout_ECX,param_2,param_1);
  }
  return;
}

