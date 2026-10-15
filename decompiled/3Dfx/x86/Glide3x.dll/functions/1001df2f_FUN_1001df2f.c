/*
 * FUN_1001df2f at 1001df2f
 * undefined4 __thiscall FUN_1001df2f(void * this, undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1001df2f-1001e154
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001df2f(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *this_00;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iStack_78;
  
  this_00 = (int *)((int)this + 0x13c);
  iStack_78 = 0x1001df50;
  FUN_10052de1(this_00,0,0x71c);
  uVar4 = 0;
  do {
    iVar3 = uVar4 * 0x104;
    *(undefined4 *)((int)this + iVar3 + 0x1e0) =
         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3300);
    uVar4 = uVar4 + 1;
    *(int *)((int)this + iVar3 + 0x1e4) =
         *(int *)(*(int *)((int)this + 0x138) + 0x3300) + 0x510 +
         *(int *)(*(int *)((int)this + 0x138) + 0x3304) * 0x1510;
    *(undefined4 *)((int)this + iVar3 + 0x13c) =
         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3304);
  } while (uVar4 < 7);
  uVar4 = FUN_10020fef(this_00,param_1,'\0');
  if ((char)uVar4 != '\0') {
    uVar2 = FUN_10020fef((void *)((int)this + 0x240),param_1,'\0');
    if ((char)uVar2 != '\0') {
      bVar5 = *(int *)(*(int *)((int)this + 0x138) + 0xcc) == 2;
      if (bVar5) {
        param_1 = param_2;
      }
      uVar2 = FUN_10020fef((void *)((int)this + 0x344),param_1,bVar5);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_1001caf9((int)this);
        if ((char)uVar2 != '\0') {
          iStack_78 = 0x1001e07d;
          (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)this + 0x138) + 0x3308) + 0x5c))();
          iStack_78 = (int)this + 0x8cc;
          piVar1 = (int *)**(undefined4 **)(*(int *)((int)this + 0x138) + 0x3308);
          iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,&stack0xffffffa0,0);
          if (-1 < iVar3) {
            iVar3 = *(int *)((int)this + 0x138);
            iStack_78 = 0;
            uVar2 = FUN_10044351(*(void **)(iVar3 + 0x3300),*(int *)(iVar3 + 0x3304),1,iVar3,
                                 (int *)((int)this + 0x8cc),(int *)&stack0xffffff8c,&iStack_78);
            DAT_1005b82c = this;
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
          piVar1 = *(int **)((int)this + 0x8d0);
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)((int)this + 0x8d0) = 0;
          FUN_1001cb79((int)this);
        }
        FUN_100210ec((int *)((int)this + 0x344));
      }
      FUN_100210ec((int *)((int)this + 0x240));
    }
    uVar4 = FUN_100210ec(this_00);
  }
  return uVar4 & 0xffffff00;
}

