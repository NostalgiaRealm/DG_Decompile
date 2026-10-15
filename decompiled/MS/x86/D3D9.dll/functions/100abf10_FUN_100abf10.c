/*
 * FUN_100abf10 at 100abf10
 * undefined4 * __thiscall FUN_100abf10(void * this, undefined4 * param_1)
 * Address ranges: 100abf10-100abf85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100abf10(void *this,undefined4 *param_1)

{
  SIZE_T SVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = *param_1;
  FUN_1000fd91((void *)((int)this + 4),param_1 + 1);
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_1[5] != 0) {
    SVar1 = (SIZE_T)((ulonglong)(uint)param_1[6] * 8);
    if ((int)((ulonglong)(uint)param_1[6] * 8 >> 0x20) != 0) {
      SVar1 = 0xffffffff;
    }
    puVar2 = (undefined4 *)FUN_100cfd89(SVar1);
    *(undefined4 **)((int)this + 0x10) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100cff00(puVar2,(undefined4 *)param_1[4],param_1[5] << 3);
      *(undefined4 *)((int)this + 0x14) = param_1[5];
      *(undefined4 *)((int)this + 0x18) = param_1[6];
    }
  }
  return this;
}

