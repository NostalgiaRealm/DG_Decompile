/*
 * FUN_10004051 at 10004051
 * int __thiscall FUN_10004051(void * this, uint param_1, uint param_2, uint param_3, int param_4, undefined4 * param_5, uint * param_6, uint * param_7)
 * Address ranges: 10004051-1000412e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10004051(void *this,uint param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,
            uint *param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_b8 [3];
  uint local_ac;
  
  iVar1 = FUN_10002833(*(void **)((int)this + 0xacc),this,*(int *)((int)this + 0xb04),
                       *(int *)((int)this + 0xb1c),param_4,param_2,6,100,0);
  if ((((-1 < iVar1) && (iVar1 = -0x7789f794, param_1 != 0)) && (param_5 != (undefined4 *)0x0)) &&
     (((param_2 & 0x10) == 0 || ((*(byte *)((int)this + 0xb0c) & 0x40) == 0)))) {
    iVar1 = 0;
    *param_5 = 0;
    *param_7 = 0;
    *param_6 = 0;
    if ((param_4 == 0) && (*(int *)((int)this + 0xb04) == 1)) {
      *param_7 = param_1;
      iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
      if ((*(int *)(&DAT_100ba91c + iVar3) == 0) && (*(uint *)(&DAT_100ba918 + iVar3) < param_1)) {
        return -0x7789fe84;
      }
    }
    if (((param_3 != 0) && (uVar2 = FUN_1005d2bc(param_3,'\x01',local_b8), (char)uVar2 != '\0')) &&
       (*param_6 = local_ac, param_1 < local_ac)) {
      iVar1 = -0x7789f794;
    }
  }
  return iVar1;
}

