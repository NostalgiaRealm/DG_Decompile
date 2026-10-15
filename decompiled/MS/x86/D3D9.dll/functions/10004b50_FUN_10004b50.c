/*
 * FUN_10004b50 at 10004b50
 * int __thiscall FUN_10004b50(void * this, uint param_1, uint param_2, uint param_3, uint * param_4, uint param_5, int param_6, int param_7, undefined4 * param_8, uint * param_9, undefined4 * param_10)
 * Address ranges: 10004b50-10004c76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10004b50(void *this,uint param_1,uint param_2,uint param_3,uint *param_4,uint param_5,
            int param_6,int param_7,undefined4 *param_8,uint *param_9,undefined4 *param_10)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (param_8 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_8 = 0;
  iVar2 = FUN_100029a5(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0),
                       *(int *)((int)this + 0xdc8),*(int *)((int)this + 0xde0),param_7,param_5,4,
                       param_6,(undefined *)0x0);
  iVar7 = 0;
  if (iVar2 != 0x876086f) {
    iVar7 = iVar2;
  }
  if (iVar7 < 0) {
    return iVar7;
  }
  uVar3 = FUN_1002cae1(param_1,param_2,param_3);
  uVar4 = *param_4;
  if (*param_4 == 0) {
    *param_4 = uVar3;
    uVar4 = uVar3;
  }
  cVar1 = FUN_1000636e(this,param_1,param_2,param_3,uVar4,uVar3,param_6);
  iVar7 = -0x7789f794;
  if (cVar1 == '\0') goto LAB_10004c69;
  iVar7 = 0;
  *param_9 = 0;
  if (param_7 == 0) {
    if (*(int *)((int)this + 0xdc8) == 1) {
      uVar4 = FUN_10015659(param_1,param_2,param_3,uVar4,param_6);
      iVar6 = *(int *)((int)this + 0xdf0) * 0x228;
      *param_9 = uVar4;
      if ((*(int *)(&DAT_100df4e4 + iVar6) == 0) && (*(uint *)(&DAT_100df4e0 + iVar6) < uVar4)) {
        iVar7 = -0x7789fe84;
      }
    }
LAB_10004c53:
    uVar5 = FUN_100020ae(param_6);
  }
  else {
    if (param_7 != 3) goto LAB_10004c53;
    uVar5 = 0x2a;
  }
  *param_10 = uVar5;
LAB_10004c69:
  if (-1 < iVar7) {
    iVar7 = iVar2;
  }
  return iVar7;
}

