/*
 * FUN_100243f3 at 100243f3
 * undefined __thiscall FUN_100243f3(void * this, int param_1, void * param_2, int param_3, int param_4, uint param_5, byte param_6)
 * Address ranges: 100243f3-100245a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100243f3(void *this,int param_1,void *param_2,int param_3,int param_4,uint param_5,byte param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_8;
  
  FUN_100209b0((int)this);
  uVar1 = *(uint *)((int)param_2 + 0xc);
  if (param_1 == 6) {
    if (2 < param_5) {
      param_5 = param_5 - 2;
      local_8 = 0;
      if (param_5 != 0) {
        while( true ) {
          uVar5 = 0;
          uVar4 = *(int *)((int)this + 0x6c) + *(int *)((int)this + 0x68);
          if (0x1000 - uVar4 < 0x10) {
            FUN_100218e0(this,0,1,0);
            uVar4 = uVar5;
          }
          uVar3 = (0x1000 - uVar4) / 3;
          uVar4 = param_5;
          if (uVar3 <= param_5) {
            uVar4 = uVar3;
          }
          FUN_100209f0(this,4,param_2,param_3,*(int *)((int)this + 0x1d6c),0,uVar1,(void *)0x0,
                       uVar4 * 3,param_6);
          *(byte *)((int)this + 0x1d3f) =
               *(byte *)((int)this + 0x1d3f) |
               (*(uint *)((int)this + 0x21c8) & *(uint *)((int)param_2 + 0x10)) !=
               *(uint *)((int)param_2 + 0x10);
          *(undefined4 *)((int)this + 0x21c8) = *(undefined4 *)((int)param_2 + 0x10);
          *(undefined1 *)((int)this + 0x21cc) = 1;
          if (uVar4 != 0) {
            do {
              **(int **)((int)this + 100) = local_8 + 1 + param_4 + uVar5;
              *(uint *)(*(int *)((int)this + 100) + 4) = local_8 + 2 + param_4 + uVar5;
              *(int *)(*(int *)((int)this + 100) + 8) = param_4;
              *(int *)((int)this + 100) = *(int *)((int)this + 100) + 0xc;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
          }
          local_8 = local_8 + uVar4;
          *(uint *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar4 * 3;
          param_5 = param_5 - uVar4;
          if (param_5 == 0) break;
          FUN_10021d20(this,(uint)param_2);
        }
      }
      FUN_100218e0(this,0,0,0);
    }
  }
  else {
    FUN_100209f0(this,param_1,param_2,param_3,*(int *)((int)this + 0x2020),0,uVar1,(void *)0x0,0,
                 param_6);
    *(byte *)((int)this + 0x1d3f) =
         *(byte *)((int)this + 0x1d3f) |
         (*(uint *)((int)this + 0x21c8) & *(uint *)((int)param_2 + 0x10)) !=
         *(uint *)((int)param_2 + 0x10);
    *(undefined4 *)((int)this + 0x21c8) = *(undefined4 *)((int)param_2 + 0x10);
    *(undefined1 *)((int)this + 0x21cc) = 0;
    bVar2 = FUN_1001fc20(this);
    if (bVar2 != 0) {
      FUN_100529b9(*(int *)(*(int *)((int)this + 0x1d54) + 0x1304),param_5,1,param_4,0);
    }
    FUN_10020980((int)this);
  }
  return;
}

