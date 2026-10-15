/*
 * FUN_10004906 at 10004906
 * uint __thiscall FUN_10004906(void * this, uint param_1, uint param_2, int param_3, uint param_4, uint param_5, int param_6, uint param_7, char param_8, undefined4 param_9, uint * param_10)
 * Address ranges: 10004906-10004a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10004906(void *this,uint param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
            uint param_7,char param_8,undefined4 param_9,uint *param_10)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = *(int *)((int)this + 0xdc8);
    uVar1 = FUN_10003405(*(void **)((int)this + 0xd90),iVar2,1,param_1,param_2,1);
    if (((char)uVar1 != '\0') && ((param_4 == 0 || (param_8 == '\0' && param_6 == 0)))) {
      uVar3 = FUN_100029a5(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0),iVar2,
                           *(int *)((int)this + 0xde0),param_6,param_7,1,param_3,(undefined *)0x0);
      if ((-1 < (int)uVar3) && (param_4 != 0)) {
        uVar3 = FUN_10002e5f(*(int *)((int)this + 0xdf0),*(int *)((int)this + 0xdc8),param_3,
                             extraout_ECX,param_4,param_5,0);
      }
      if (((-1 < (int)uVar3) && (*param_10 = 0, param_6 == 0)) && (*(int *)((int)this + 0xdc8) == 1)
         ) {
        uVar1 = FUN_10012477(param_1,param_2,param_3);
        iVar2 = *(int *)((int)this + 0xdf0) * 0x228;
        *param_10 = uVar1;
        if ((*(int *)(&DAT_100df4e4 + iVar2) == 0) && (*(uint *)(&DAT_100df4e0 + iVar2) < uVar1)) {
          uVar3 = 0x8876017c;
        }
      }
    }
  }
  return uVar3;
}

