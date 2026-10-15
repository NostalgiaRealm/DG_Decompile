/*
 * FUN_1002a786 at 1002a786
 * undefined4 __thiscall FUN_1002a786(void * this, undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1002a786-1002a9ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002a786(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *this_00;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iStack_78;
  
  this_00 = (int *)((int)this + 0x13c);
  iStack_78 = 0x1002a7a7;
  FUN_10050561(this_00,0,0x30c);
  uVar4 = 0;
  do {
    iVar3 = uVar4 * 0x104;
    *(undefined4 *)((int)this + iVar3 + 0x1e0) =
         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3180);
    uVar4 = uVar4 + 1;
    *(int *)((int)this + iVar3 + 0x1e4) =
         *(int *)(*(int *)((int)this + 0x138) + 0x3180) + 0x510 +
         *(int *)(*(int *)((int)this + 0x138) + 0x3184) * 0x1510;
    *(undefined4 *)((int)this + iVar3 + 0x13c) =
         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3184);
  } while (uVar4 < 3);
  uVar4 = FUN_1002da36(this_00,param_1,'\0');
  if ((char)uVar4 != '\0') {
    uVar2 = FUN_1002da36((void *)((int)this + 0x240),param_1,'\0');
    if ((char)uVar2 != '\0') {
      bVar5 = *(int *)(*(int *)((int)this + 0x138) + 0xcc) == 2;
      if (bVar5) {
        param_1 = param_2;
      }
      uVar2 = FUN_1002da36((void *)((int)this + 0x344),param_1,bVar5);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_10029390((int)this);
        if ((char)uVar2 != '\0') {
          iStack_78 = 0x1002a8d4;
          (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)this + 0x138) + 0x3188) + 0x5c))();
          iStack_78 = (int)this + 0x4bc;
          piVar1 = (int *)**(undefined4 **)(*(int *)((int)this + 0x138) + 0x3188);
          iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,&stack0xffffffa0,0);
          if (-1 < iVar3) {
            iVar3 = *(int *)((int)this + 0x138);
            iStack_78 = 0;
            uVar2 = FUN_10041bf9(*(void **)(iVar3 + 0x3180),*(int *)(iVar3 + 0x3184),1,iVar3,
                                 (int *)((int)this + 0x4bc),(int *)&stack0xffffff8c,&iStack_78);
            DAT_10059758 = this;
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
          piVar1 = *(int **)((int)this + 0x4c0);
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)((int)this + 0x4c0) = 0;
          FUN_10029410((int)this);
        }
        FUN_1002db33((int *)((int)this + 0x344));
      }
      FUN_1002db33((int *)((int)this + 0x240));
    }
    uVar4 = FUN_1002db33(this_00);
  }
  return uVar4 & 0xffffff00;
}

