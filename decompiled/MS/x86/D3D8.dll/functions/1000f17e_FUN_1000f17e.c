/*
 * FUN_1000f17e at 1000f17e
 * undefined __thiscall FUN_1000f17e(void * this, HICON param_1)
 * Address ranges: 1000f17e-1000f271
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f17e(void *this,HICON param_1)

{
  HBITMAP h;
  int iVar1;
  int local_58;
  undefined4 local_54;
  DWORD local_50;
  DWORD local_4c;
  uint local_48;
  int local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  ICONINFO local_1c;
  char local_5;
  
  if (*(int *)((int)this + 0xd0) == 0) {
    if (param_1 == (HICON)0x0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 1;
      local_44 = 0;
      uStack_40 = 0;
      iStack_3c = 0;
      uStack_38 = 0;
      (**(code **)(**(int **)((int)this + 0xb8) + 0x2c))(&local_58);
    }
    else {
      local_5 = '\0';
      h = FUN_10024c6f(param_1,&local_1c,&local_5);
      if (h != (HBITMAP)0x0) {
        GetObjectW(h,0x18,local_34);
        if (local_5 == '\0') {
          iVar1 = 0;
        }
        else {
          iVar1 = (local_30 * 4) / 2 + local_20;
        }
        local_48 = FUN_1000f401((int)this);
        local_54 = local_2c;
        local_58 = local_30 / 2;
        local_4c = local_1c.yHotspot;
        local_44 = local_20;
        local_50 = local_1c.xHotspot;
        uStack_38 = 0;
        if (local_5 != '\0') {
          uStack_38 = local_28;
        }
        uStack_40 = local_28;
        iStack_3c = iVar1;
        (**(code **)(**(int **)((int)this + 0xb8) + 0x2c))(&local_58);
        DeleteObject(h);
      }
    }
  }
  return;
}

