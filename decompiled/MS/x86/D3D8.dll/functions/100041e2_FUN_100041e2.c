/*
 * FUN_100041e2 at 100041e2
 * uint __thiscall FUN_100041e2(void * this, uint param_1, uint param_2, int param_3, uint param_4, undefined4 param_5, int param_6, uint param_7, char param_8, undefined4 param_9, uint * param_10)
 * Address ranges: 100041e2-100042e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100041e2(void *this,uint param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,
            int param_6,uint param_7,char param_8,undefined4 param_9,uint *param_10)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = *(int *)((int)this + 0xb04);
    uVar1 = FUN_1000303e(*(void **)((int)this + 0xacc),iVar2,1,param_1,param_2,1);
    if (((char)uVar1 != '\0') && ((param_4 == 0 || (param_8 == '\0' && param_6 == 0)))) {
      uVar3 = FUN_10002833(*(void **)((int)this + 0xacc),extraout_ECX,iVar2,
                           *(int *)((int)this + 0xb1c),param_6,param_7,1,param_3,0);
      if ((-1 < (int)uVar3) && (param_4 != 0)) {
        uVar3 = FUN_10002b5c(*(int *)((int)this + 0xb2c),*(int *)((int)this + 0xb04),param_3,
                             extraout_ECX_00,param_4,extraout_ECX_00,0);
      }
      if (((-1 < (int)uVar3) && (*param_10 = 0, param_6 == 0)) && (*(int *)((int)this + 0xb04) == 1)
         ) {
        uVar1 = FUN_1000e6ee(param_1,param_2,param_3);
        iVar2 = *(int *)((int)this + 0xb2c) * 0x228;
        *param_10 = uVar1;
        if ((*(int *)(&DAT_100ba91c + iVar2) == 0) && (*(uint *)(&DAT_100ba918 + iVar2) < uVar1)) {
          uVar3 = 0x8876017c;
        }
      }
    }
  }
  return uVar3;
}

