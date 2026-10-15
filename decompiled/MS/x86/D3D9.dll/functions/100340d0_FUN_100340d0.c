/*
 * FUN_100340d0 at 100340d0
 * undefined __thiscall FUN_100340d0(void * this, uint param_1, int * param_2, uint param_3, uint param_4, float param_5, uint param_6, int param_7)
 * Address ranges: 100340d0-100343b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100340d0(void *this,uint param_1,int *param_2,uint param_3,uint param_4,float param_5,
            uint param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *unaff_EBX;
  uint uVar5;
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
  uVar5 = 0;
  do {
    piVar1 = *(int **)((int)this + uVar5 * 4 + 0xf830);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))
                (*(undefined4 *)((int)this + uVar5 * 4 + 0xf844),
                 *(undefined4 *)((int)this + uVar5 * 4 + 0xf854),0);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  if (*(int **)((int)this + 0xf840) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xf840) + 4))
              (*(undefined4 *)((int)this + 0xf864),*(undefined4 *)((int)this + 0xf868),0);
  }
  iStack_38 = 0;
  if (param_7 != 0) {
    iStack_38 = (**(code **)(*(int *)(param_7 + -0x88) + 0x60))(0);
  }
  iVar2 = *(int *)((int)this + 0xf830);
  iVar6 = iVar2;
  if (iVar2 == 0) {
    iVar6 = *(int *)((int)this + 0xf840);
  }
  iVar3 = 0xf844;
  if (iVar2 == 0) {
    iVar3 = 0xf864;
  }
  if ((((param_7 == 0) && (iVar6 != 0)) && (param_1 == 1)) && ((*param_2 == 0 && (param_2[1] == 0)))
     ) {
    bVar4 = (byte)*(undefined4 *)((int)this + iVar3);
    uVar5 = *(uint *)(iVar6 + 0x14) >> (bVar4 & 0x1f);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (param_2[2] == uVar5) {
      uVar5 = *(uint *)(iVar6 + 0x18) >> (bVar4 & 0x1f);
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      if (param_2[3] == uVar5) {
        FUN_10032e50(this,0,0,0);
        if ((param_3 & 1) != 0) {
          FUN_1004f390(this,param_4,afStack_18);
          uVar5 = 0;
          do {
            if (*(int *)((int)this + uVar5 * 4 + 0xf8ec) != 0) {
              piVar1 = *(int **)((int)this + uVar5 * 4 + 0xf830);
              iVar2 = *(int *)((int)this + uVar5 * 4 + 0xf844);
              uStack_28 = 0;
              uStack_24 = 0;
              bVar4 = (byte)iVar2;
              uStack_20 = (uint)piVar1[5] >> (bVar4 & 0x1f);
              if (uStack_20 == 0) {
                uStack_20 = 1;
              }
              uStack_1c = (uint)piVar1[6] >> (bVar4 & 0x1f);
              if (uStack_1c == 0) {
                uStack_1c = 1;
              }
              (**(code **)(*piVar1 + 0xc))
                        (piVar1[0xb] * *(int *)((int)this + uVar5 * 4 + 0xf854) + iVar2,&uStack_28);
              (**(code **)(**(int **)(*unaff_EBX + 4) + 200))
                        (*(int **)(*unaff_EBX + 4),*(undefined4 *)((int)this + uVar5 * 4 + 0xf8ec),
                         &uStack_20);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 4);
        }
        if ((param_3 & 6) == 0) {
          return;
        }
        if (*(int *)((int)this + 0xf9c4) == 0) {
          return;
        }
        piVar1 = *(int **)((int)this + 0xf840);
        uStack_28 = 0;
        uStack_24 = 0;
        bVar4 = (byte)*(int *)((int)this + 0xf864);
        uStack_20 = (uint)piVar1[5] >> (bVar4 & 0x1f);
        if (uStack_20 == 0) {
          uStack_20 = 1;
        }
        uStack_1c = (uint)piVar1[6] >> (bVar4 & 0x1f);
        if (uStack_1c == 0) {
          uStack_1c = 1;
        }
        (**(code **)(*piVar1 + 0xc))
                  (piVar1[0xb] * *(int *)((int)this + 0xf868) + *(int *)((int)this + 0xf864),
                   &uStack_28);
        (**(code **)(**(int **)(*unaff_EBX + 4) + 0xd4))
                  (*(int **)(*unaff_EBX + 4),*(undefined4 *)((int)this + 0xf9c4),param_3 >> 1 & 3,
                   param_5,param_6 & 0xff);
        return;
      }
    }
  }
  FUN_10033010(this,param_1 * 6,param_3,param_4,param_6,iStack_38);
  FUN_10053dd5(this,param_1,(int)param_2,(byte)param_3,param_4,param_5,(char)param_6);
  return;
}

