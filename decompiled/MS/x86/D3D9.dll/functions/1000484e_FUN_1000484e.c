/*
 * FUN_1000484e at 1000484e
 * int __thiscall FUN_1000484e(void * this, uint param_1, uint param_2, int param_3, int param_4, undefined4 * param_5, uint * param_6)
 * Address ranges: 1000484e-10004905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1000484e(void *this,uint param_1,uint param_2,int param_3,int param_4,undefined4 *param_5,
            uint *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_100029a5(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0),
                       *(int *)((int)this + 0xdc8),*(int *)((int)this + 0xde0),param_4,param_2,7,
                       param_3,(undefined *)0x0);
  if (((-1 < iVar1) && (iVar1 = -0x7789f794, param_1 != 0)) && (param_5 != (undefined4 *)0x0)) {
    uVar2 = 2;
    if (param_3 == 0x66) {
      uVar2 = 4;
    }
    if ((uVar2 <= param_1) &&
       (((param_2 & 0x10) == 0 || ((*(byte *)((int)this + 0xdd0) & 0x40) == 0)))) {
      iVar1 = 0;
      *param_5 = 0;
      *param_6 = 0;
      if ((param_4 == 0) && (*(int *)((int)this + 0xdc8) == 1)) {
        iVar3 = *(int *)((int)this + 0xdf0) * 0x228;
        *param_6 = param_1;
        if ((*(int *)(&DAT_100df4e4 + iVar3) == 0) && (*(uint *)(&DAT_100df4e0 + iVar3) < param_1))
        {
          iVar1 = -0x7789fe84;
        }
      }
    }
  }
  return iVar1;
}

