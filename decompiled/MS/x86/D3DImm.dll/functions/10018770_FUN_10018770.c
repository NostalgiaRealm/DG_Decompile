/*
 * FUN_10018770 at 10018770
 * undefined __thiscall FUN_10018770(void * this, uint param_1, int * param_2, uint param_3, uint param_4, float param_5, uint param_6, int param_7)
 * Address ranges: 10018770-10018a0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10018770(void *this,uint param_1,int *param_2,uint param_3,uint param_4,float param_5,
            uint param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float afStack_18 [5];
  
  if (0x1000 < param_1 * 6) {
    DebugBreak();
    return;
  }
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  iStack_38 = 0;
  if (param_7 != 0) {
    iStack_38 = (**(code **)(*(int *)(param_7 + -0x88) + 0x60))(0);
  }
  iVar1 = *(int *)((int)this + 0x1e58);
  iVar6 = iVar1;
  if (iVar1 == 0) {
    iVar6 = *(int *)((int)this + 0x1e68);
  }
  iVar3 = 0x1e6c;
  if (iVar1 == 0) {
    iVar3 = 0x1e8c;
  }
  if ((((param_7 == 0) && (iVar6 != 0)) && (param_1 == 1)) && ((*param_2 == 0 && (param_2[1] == 0)))
     ) {
    bVar5 = (byte)*(undefined4 *)((int)this + iVar3);
    uVar4 = *(uint *)(iVar6 + 0x14) >> (bVar5 & 0x1f);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (param_2[2] == uVar4) {
      uVar4 = *(uint *)(iVar6 + 0x18) >> (bVar5 & 0x1f);
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (param_2[3] == uVar4) {
        FUN_10017820(this,0,0,0);
        if (((param_3 & 1) != 0) &&
           (FUN_10029340(this,param_4,afStack_18), *(int *)((int)this + 0x1eb4) != 0)) {
          piVar2 = *(int **)((int)this + 0x1e58);
          uStack_28 = 0;
          uStack_24 = 0;
          bVar5 = (byte)*(int *)((int)this + 0x1e6c);
          uStack_20 = (uint)piVar2[5] >> (bVar5 & 0x1f);
          if (uStack_20 == 0) {
            uStack_20 = 1;
          }
          uStack_1c = (uint)piVar2[6] >> (bVar5 & 0x1f);
          if (uStack_1c == 0) {
            uStack_1c = 1;
          }
          (**(code **)(*piVar2 + 0xc))
                    (piVar2[0xb] * *(int *)((int)this + 0x1e7c) + *(int *)((int)this + 0x1e6c),
                     &uStack_28);
          piVar2 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
          (**(code **)(*piVar2 + 200))(piVar2,*(undefined4 *)((int)this + 0x1eb4),&uStack_20);
        }
        if ((param_3 & 6) == 0) {
          return;
        }
        if (*(int *)((int)this + 0x1ee4) == 0) {
          return;
        }
        piVar2 = *(int **)((int)this + 0x1e68);
        uStack_28 = 0;
        uStack_24 = 0;
        bVar5 = (byte)*(int *)((int)this + 0x1e8c);
        uStack_20 = (uint)piVar2[5] >> (bVar5 & 0x1f);
        if (uStack_20 == 0) {
          uStack_20 = 1;
        }
        uStack_1c = (uint)piVar2[6] >> (bVar5 & 0x1f);
        if (uStack_1c == 0) {
          uStack_1c = 1;
        }
        (**(code **)(*piVar2 + 0xc))
                  (piVar2[0xb] * *(int *)((int)this + 0x1e90) + *(int *)((int)this + 0x1e8c),
                   &uStack_28);
        piVar2 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
        (**(code **)(*piVar2 + 0xd4))
                  (piVar2,*(undefined4 *)((int)this + 0x1ee4),param_3 >> 1 & 3,param_5,
                   param_6 & 0xff);
        return;
      }
    }
  }
  FUN_100179e0(this,param_1 * 6,param_3,param_4,param_6,iStack_38);
  FUN_1002d17c(this,param_1,(int)param_2,(byte)param_3,param_4,param_5,(char)param_6);
  return;
}

