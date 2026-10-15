/*
 * FUN_10089cb2 at 10089cb2
 * undefined4 * __thiscall FUN_10089cb2(void * this, undefined4 * param_1)
 * Address ranges: 10089cb2-10089d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10089cb2(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  SIZE_T SVar2;
  
  *(undefined4 *)this = *param_1;
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1[2] != 0) {
    SVar2 = (SIZE_T)((ulonglong)(uint)param_1[3] * 4);
    if ((int)((ulonglong)(uint)param_1[3] * 4 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar1 = (undefined4 *)FUN_100ad4a9(SVar2);
    *(undefined4 **)((int)this + 4) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100adac0(puVar1,(undefined4 *)param_1[1],param_1[2] << 2);
      *(undefined4 *)((int)this + 8) = param_1[2];
      *(undefined4 *)((int)this + 0xc) = param_1[3];
    }
  }
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_1[5] != 0) {
    SVar2 = (SIZE_T)((ulonglong)(uint)param_1[6] * 8);
    if ((int)((ulonglong)(uint)param_1[6] * 8 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar1 = (undefined4 *)FUN_100ad4a9(SVar2);
    *(undefined4 **)((int)this + 0x10) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100adac0(puVar1,(undefined4 *)param_1[4],param_1[5] << 3);
      *(undefined4 *)((int)this + 0x14) = param_1[5];
      *(undefined4 *)((int)this + 0x18) = param_1[6];
    }
  }
  return this;
}

