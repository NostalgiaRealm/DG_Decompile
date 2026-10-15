/*
 * FUN_1000fd91 at 1000fd91
 * undefined4 * __thiscall FUN_1000fd91(void * this, undefined4 * param_1)
 * Address ranges: 1000fd91-1000fdf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000fd91(void *this,undefined4 *param_1)

{
  SIZE_T SVar1;
  undefined4 *puVar2;
  
  thunk_FUN_100cfd6c(*(LPVOID *)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1[1] != 0) {
    SVar1 = (SIZE_T)((ulonglong)(uint)param_1[2] * 4);
    if ((int)((ulonglong)(uint)param_1[2] * 4 >> 0x20) != 0) {
      SVar1 = 0xffffffff;
    }
    puVar2 = (undefined4 *)FUN_100cfd89(SVar1);
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100cff00(puVar2,(undefined4 *)*param_1,param_1[1] << 2);
      *(undefined4 *)((int)this + 4) = param_1[1];
      *(undefined4 *)((int)this + 8) = param_1[2];
    }
  }
  return this;
}

