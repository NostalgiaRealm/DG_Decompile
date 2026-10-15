/*
 * FUN_1007b154 at 1007b154
 * undefined __thiscall FUN_1007b154(void * this, int param_1, float param_2)
 * Address ranges: 1007b154-1007b27d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007b154(void *this,int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  
  if (*(float *)((int)this + param_1 * 4 + 0x28c) != param_2) {
    if (param_1 == 0x99) {
      if ((*(byte *)((int)this + 0xb0c) & 0x80) != 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
        FUN_1007ced5(this,(undefined4 *)0x0);
        if (*(LPVOID *)((int)this + 0x57b8) != (LPVOID)0x0) {
          FUN_10080e28(*(LPVOID *)((int)this + 0x57b8));
          *(undefined4 *)((int)this + 0x57b8) = 0;
        }
        uVar3 = 0;
        do {
          iVar2 = *(int *)((int)this + uVar3 * 4 + 0x57bc);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
            FUN_10081bdb(*(int **)((int)this + uVar3 * 4 + 0x57bc));
            *(undefined4 *)((int)this + uVar3 * 4 + 0x57bc) = 0;
            *(undefined4 *)((int)this + uVar3 * 4 + 0x57fc) = 0;
            *(undefined4 *)((int)this + uVar3 * 4 + 0x583c) = 0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x10);
        *(undefined4 *)((int)this + 0x587c) = 0;
        *(undefined4 *)((int)this + 0x5884) = 0;
        *(undefined4 *)((int)this + 0x5888) = 0;
        *(undefined4 *)((int)this + 0x588c) = 0;
        *(undefined4 *)((int)this + 0x5890) = 0;
        *(undefined4 *)((int)this + 0x5894) = 0;
        *(undefined4 *)((int)this + 0x5898) = 0;
        *(float *)((int)this + 0x4f0) = param_2;
        FUN_1007b09f((int)this);
      }
    }
    else if (param_1 == 0xa4) {
      FUN_1007b11b((int)this);
      *(float *)((int)this + 0x51c) = param_2;
    }
    else {
      if ((param_1 == 0xa6) &&
         (pfVar1 = (float *)(*(int *)((int)this + 0x58f4) + 0xb0),
         *pfVar1 <= param_2 && param_2 != *pfVar1)) {
        param_2 = *(float *)(*(int *)((int)this + 0x58f4) + 0xb0);
      }
      FUN_10013a74(this,param_1,(int)param_2);
    }
    *(float *)((int)this + param_1 * 4 + 0x28c) = param_2;
  }
  return;
}

