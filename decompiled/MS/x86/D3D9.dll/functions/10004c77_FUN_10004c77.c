/*
 * FUN_10004c77 at 10004c77
 * int __thiscall FUN_10004c77(void * this, uint param_1, uint * param_2, uint param_3, int param_4, int param_5, undefined4 * param_6, uint * param_7, undefined4 * param_8)
 * Address ranges: 10004c77-10004dae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10004c77(void *this,uint param_1,uint *param_2,uint param_3,int param_4,int param_5,
            undefined4 *param_6,uint *param_7,undefined4 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_6 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_6 = 0;
  iVar1 = FUN_100029a5(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0),
                       *(int *)((int)this + 0xdc8),*(int *)((int)this + 0xde0),param_5,param_3,5,
                       param_4,(undefined *)0x0);
  iVar6 = 0;
  if (iVar1 != 0x876086f) {
    iVar6 = iVar1;
  }
  if (((param_3 & 0x400) != 0) && (1 < *param_2)) {
    iVar6 = -0x7789f794;
  }
  if (iVar6 < 0) {
    return iVar6;
  }
  uVar2 = FUN_1002cae1(param_1,param_1,1);
  uVar4 = *param_2;
  if (*param_2 == 0) {
    *param_2 = uVar2;
    uVar4 = uVar2;
  }
  uVar3 = FUN_100062df(this,param_1,param_1,uVar4,uVar2,param_4);
  if ((char)uVar3 == '\0') {
    return -0x7789f794;
  }
  iVar6 = 0;
  *param_7 = 0;
  if (param_5 == 0) {
    if (*(int *)((int)this + 0xdc8) == 1) {
      uVar4 = FUN_10014561(param_1,param_1,uVar4,6,param_4);
      iVar5 = *(int *)((int)this + 0xdf0) * 0x228;
      *param_7 = uVar4;
      if ((*(int *)(&DAT_100df4e4 + iVar5) == 0) && (*(uint *)(&DAT_100df4e0 + iVar5) < uVar4)) {
        iVar6 = -0x7789fe84;
      }
    }
  }
  else if (param_5 == 3) {
    uVar3 = 0x2a;
    goto LAB_10004d9b;
  }
  uVar3 = FUN_100020ae(param_4);
LAB_10004d9b:
  if (-1 < iVar6) {
    iVar6 = iVar1;
  }
  *param_8 = uVar3;
  return iVar6;
}

