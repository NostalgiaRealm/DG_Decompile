/*
 * FUN_1007e35d at 1007e35d
 * int __stdcall FUN_1007e35d(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int * param_7, undefined4 * param_8)
 * Address ranges: 1007e35d-1007e4d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007e35d(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int *param_7,undefined4 *param_8)

{
  void *this;
  uint uVar1;
  char cVar2;
  int iVar3;
  void *this_00;
  int *this_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  FUN_10003838(&local_5,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_c = 0;
  local_10 = 0x1c;
  this = (void *)(param_1 + -0x58e0);
  iVar3 = FUN_100042e7(this,param_2,param_3,&param_4,param_5,param_6,(int)param_7,param_8,&local_c,
                       &local_10);
  if (iVar3 < 0) goto LAB_1007e4c5;
  uVar4 = *(undefined4 *)(param_1 + -0x4dbc);
  iVar3 = -0x7ff8fff2;
  this_00 = (void *)FUN_100ad475(0xd8);
  if (this_00 == (void *)0x0) goto LAB_1007e4c5;
  this_01 = FUN_10081874(this_00,(int)this,param_2,param_3,(short)param_4,param_5,param_6,param_7,
                         local_10,uVar4,local_c);
  if (this_01 == (int *)0x0) goto LAB_1007e4c5;
  cVar2 = FUN_1000ff6b(this_01,(void *)(-(uint)(this_01[5] != 0) & this_01[5] - 0x58e0U));
  if (cVar2 != '\0') {
    param_7 = this_01;
    uVar4 = FUN_10003787((void *)(param_1 + -0x4da4),&param_7);
    if ((char)uVar4 != '\0') {
      iVar3 = FUN_100819ad((int)(this_01 + 0x1e),0x100af340,param_8);
      if (-1 < iVar3) {
        iVar5 = *(int *)(param_1 + -0x4db4) * 0x228;
        uVar1 = *(uint *)(&DAT_100ba918 + iVar5);
        *(uint *)(&DAT_100ba918 + iVar5) = uVar1 - local_c;
        *(uint *)(&DAT_100ba91c + iVar5) = *(int *)(&DAT_100ba91c + iVar5) - (uint)(uVar1 < local_c)
        ;
        FUN_100014ec(this,this_01 + 0x1c);
        goto LAB_1007e4ab;
      }
      FUN_10006519(this,(int)this_01);
    }
    FUN_100108d3((int)this_01);
    FUN_10010191(this_01);
  }
LAB_1007e4ab:
  if (iVar3 < 0) {
    FUN_1008190d(this_01);
    FUN_100ad48c(this_01);
  }
LAB_1007e4c5:
  FUN_10003881(&local_5);
  return iVar3;
}

