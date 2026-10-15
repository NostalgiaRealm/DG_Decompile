/*
 * FUN_10004768 at 10004768
 * int __thiscall FUN_10004768(void * this, uint param_1, uint param_2, uint param_3, int param_4, undefined4 * param_5, uint * param_6, uint * param_7)
 * Address ranges: 10004768-1000484d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10004768(void *this,uint param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
            uint *param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_258 [3];
  uint local_24c;
  
  iVar1 = FUN_100029a5(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0),
                       *(int *)((int)this + 0xdc8),*(int *)((int)this + 0xde0),param_4,param_2,6,100
                       ,(undefined *)0x0);
  if ((((-1 < iVar1) && (iVar1 = -0x7789f794, param_1 != 0)) && (param_5 != (undefined4 *)0x0)) &&
     (((param_2 & 0x10) == 0 || ((*(byte *)((int)this + 0xdd0) & 0x40) == 0)))) {
    iVar1 = 0;
    *param_5 = 0;
    *param_7 = 0;
    *param_6 = 0;
    if ((param_4 == 0) && (*(int *)((int)this + 0xdc8) == 1)) {
      *param_7 = param_1;
      iVar3 = *(int *)((int)this + 0xdf0) * 0x228;
      if ((*(int *)(&DAT_100df4e4 + iVar3) == 0) && (*(uint *)(&DAT_100df4e0 + iVar3) < param_1)) {
        return -0x7789fe84;
      }
    }
    if (((param_3 != 0) && (uVar2 = FUN_10072f77(param_3,'\x01',local_258), (char)uVar2 != '\0')) &&
       (*param_6 = local_24c, param_1 < local_24c)) {
      iVar1 = -0x7789f794;
    }
  }
  return iVar1;
}

