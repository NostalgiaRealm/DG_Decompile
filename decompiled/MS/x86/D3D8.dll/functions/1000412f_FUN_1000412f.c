/*
 * FUN_1000412f at 1000412f
 * int __thiscall FUN_1000412f(void * this, uint param_1, uint param_2, int param_3, int param_4, undefined4 * param_5, uint * param_6)
 * Address ranges: 1000412f-100041e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1000412f(void *this,uint param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,
            uint *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_10002833(*(void **)((int)this + 0xacc),this,*(int *)((int)this + 0xb04),
                       *(int *)((int)this + 0xb1c),param_4,param_2,7,param_3,0);
  if (((-1 < iVar1) && (iVar1 = -0x7789f794, param_1 != 0)) && (param_5 != (undefined4 *)0x0)) {
    uVar2 = 2;
    if (param_3 == 0x66) {
      uVar2 = 4;
    }
    if ((uVar2 <= param_1) &&
       (((param_2 & 0x10) == 0 || ((*(byte *)((int)this + 0xb0c) & 0x40) == 0)))) {
      iVar1 = 0;
      *param_5 = 0;
      *param_6 = 0;
      if ((param_4 == 0) && (*(int *)((int)this + 0xb04) == 1)) {
        iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
        *param_6 = param_1;
        if ((*(int *)(&DAT_100ba91c + iVar3) == 0) && (*(uint *)(&DAT_100ba918 + iVar3) < param_1))
        {
          iVar1 = -0x7789fe84;
        }
      }
    }
  }
  return iVar1;
}

