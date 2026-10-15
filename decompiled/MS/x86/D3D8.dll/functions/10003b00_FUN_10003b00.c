/*
 * FUN_10003b00 at 10003b00
 * int __thiscall FUN_10003b00(void * this, uint param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 10003b00-10003cff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10003b00(void *this,uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  ushort in_FPUControlWord;
  uint local_10;
  int *local_c;
  uint *local_8;
  
  iVar6 = -0x7789f796;
  *(uint *)((int)this + 0xb2c) = param_1;
  local_c = &DAT_100ba720 + param_1 * 0x8a;
  if (*local_c == 0) goto LAB_10003cea;
  *(int *)((int)this + 0xb24) = *local_c;
  local_8 = &local_10;
  param_1 = CONCAT22(param_1._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    param_1 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar3 = FUN_100ad475(0x87c4);
  piVar7 = (int *)(iVar3 + 0x13U & 0xfffffff0);
  piVar7[-1] = iVar3;
  FUN_100ada8e(piVar7,0,0x87b0);
  piVar7 = FUN_10015ef7(piVar7);
  *(int **)((int)this + 0xabc) = piVar7;
  if (piVar7 == (int *)0x0) goto LAB_10003cea;
  bVar1 = FUN_1000213d(*(void **)((int)this + 0xacc),*(int *)((int)this + 0xb2c));
  piVar7 = local_c;
  if (bVar1) {
    iVar6 = -0x7fffbffb;
    iVar3 = (**(code **)(*(int *)*local_c + 0x1c))();
    if (iVar3 == 0) {
      puVar4 = FUN_1002bea0((&DAT_100ba730)[*(int *)((int)this + 0xb2c) * 0x8a],piVar7[2]);
LAB_10003c0f:
      *(undefined4 **)((int)this + 0x14) = puVar4;
    }
    else if (iVar3 == 1) {
      puVar4 = FUN_100383e0((&DAT_100ba730)[*(int *)((int)this + 0xb2c) * 0x8a],piVar7[2]);
      goto LAB_10003c0f;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      *(undefined1 *)(*(int *)((int)this + 0x14) + 0xc) = 0;
      *(undefined1 *)((int)this + 0xac8) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x14) + 4) = 0xffffffff;
      *(undefined4 *)((int)this + 0xac0) = 0xffffffff;
      *(undefined4 *)(*(int *)((int)this + 0x14) + 8) = 0xff000000;
      *(undefined4 *)((int)this + 0xac4) = 0xff000000;
      *(undefined1 *)(*(int *)((int)this + 0x14) + 0xd) = 0;
      *(undefined1 *)(*(int *)((int)this + 0x14) + 0xe) = *(undefined1 *)(DAT_100ba2b4 + 0x95e);
      cVar2 = (**(code **)(**(int **)((int)this + 0x14) + 8))(param_4);
      if (cVar2 != '\0') {
        puVar5 = (undefined1 *)(**(code **)(**(int **)((int)this + 0x14) + 0x10))((int)&param_1 + 3)
        ;
        *(undefined1 *)((int)this + 0x10) = *puVar5;
        iVar6 = FUN_100039f8(this,1,param_3);
        if (-1 < iVar6) goto LAB_10003cea;
        (**(code **)(**(int **)((int)this + 0x14) + 0xc))();
      }
      if (-1 < iVar6) goto LAB_10003cea;
      (**(code **)(**(int **)((int)this + 0x14) + 4))();
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  if (iVar6 < 0) {
    *(undefined4 *)((int)this + 0xb24) = 0;
    *(undefined4 *)((int)this + 0xb28) = 0;
    FUN_1001394c((int)this);
  }
LAB_10003cea:
  *(byte *)((int)this + 0x100) = (byte)((uint)iVar6 >> 0x1f) ^ 1;
  return iVar6;
}

