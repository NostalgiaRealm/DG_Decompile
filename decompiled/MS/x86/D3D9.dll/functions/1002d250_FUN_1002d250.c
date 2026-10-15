/*
 * FUN_1002d250 at 1002d250
 * undefined1 __thiscall FUN_1002d250(void * this, undefined4 param_1)
 * Address ranges: 1002d250-1002d2e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1002d250(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  uVar1 = 0;
  if (*(short *)((int)this + 0xc) == 1) {
    if ((char)param_1 == '\0') {
      local_18 = 0;
      local_14 = 0;
      local_10 = FUN_1002cd85((int)this);
      local_c = *(ushort *)((int)this + 0xe) - 1;
      uVar1 = (**(code **)(*(int *)this + 0x18))(&local_18);
    }
    else {
      local_8 = 0;
      param_1 = 0;
      cVar2 = (**(code **)(*(int *)this + 0x28))(&local_8,&param_1);
      if (cVar2 != '\0') {
        (**(code **)(*(int *)this + 0x10))
                  (local_8,*(undefined4 *)((int)this + 0x20),*(undefined2 *)((int)this + 8),
                   *(undefined2 *)((int)this + 10),param_1,*(undefined4 *)((int)this + 0x10));
        (**(code **)(*(int *)this + 0x2c))();
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
    if ((char)param_1 == '\0') {
      uVar1 = (**(code **)(*(int *)this + 0x20))();
    }
  }
  return uVar1;
}

