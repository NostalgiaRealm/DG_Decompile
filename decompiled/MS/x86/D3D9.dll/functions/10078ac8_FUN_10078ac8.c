/*
 * FUN_10078ac8 at 10078ac8
 * uint __thiscall FUN_10078ac8(void * this, int param_1, uint param_2, uint param_3, int param_4)
 * Address ranges: 10078ac8-10078deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10078ac8(void *this,int param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined4 in_EAX;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined1 local_c0 [16];
  undefined4 local_b0;
  int local_94 [5];
  int local_80 [6];
  undefined1 local_68 [12];
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  uint local_24;
  float local_20;
  uint local_1c;
  int local_18;
  void *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar6 = 1;
  if ((1 < *(uint *)((int)this + 0x28)) && (param_3 != 0)) {
    local_14 = this;
    FUN_100773d5(local_68,*(int *)((int)this + 0x40),*(int *)((int)this + 0x10));
    (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),local_c0);
    if (param_2 == 0) {
      piVar2 = *(int **)(param_1 + 0x14);
    }
    else {
      piVar2 = *(int **)(param_2 + 0x14);
    }
    (**(code **)(*piVar2 + 0x20))(piVar2,local_80);
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x18) + 0x20))
              ((int *)**(undefined4 **)(param_1 + 0x18),local_94);
    uVar3 = (**(code **)(*(int *)this + 0x20))(0);
    local_c = uVar3;
    local_8 = (**(code **)(*(int *)this + 0x24))(0);
    in_EAX = FUN_100777a5(uVar3,local_8,1,1,1,local_b0,local_80[0],local_94[0],0,0,0x28,0,0,0,'\0',
                          '\0');
    if ((char)in_EAX == '\0') {
      uVar6 = 0;
    }
    else {
      uVar3 = 0;
      if (*(int *)((int)this + 0x24) != 0) {
        do {
          if (((param_3 & 1 << ((byte)uVar3 & 0x1f)) != 0) &&
             (param_2 = 1, 1 < *(uint *)((int)this + 0x28))) {
            local_10 = uVar3 * param_4;
            local_18 = local_10 * 0x1c;
            local_20 = (float)((double)(int)local_8 +
                              (double)(&DAT_100d97a0)[-((int)local_8 >> 0x1f)]);
            local_28 = (float)((double)(int)local_c +
                              (double)(&DAT_100d97a0)[-((int)local_c >> 0x1f)]);
            do {
              bVar1 = (byte)param_2;
              local_34 = 1;
              uVar4 = local_c >> (bVar1 - 1 & 0x1f);
              local_3c = uVar6;
              if (uVar4 != 0) {
                local_3c = uVar4;
              }
              uVar4 = local_8 >> (bVar1 - 1 & 0x1f);
              iVar5 = *(int *)((int)this + 0xb8);
              local_38 = uVar6;
              if (uVar4 != 0) {
                local_38 = uVar4;
              }
              local_48 = 0;
              local_44 = 0;
              local_40 = 0;
              if (iVar5 == 0) {
                iVar5 = *(int *)((int)this + 0x54);
              }
              piVar2 = *(int **)(*(int *)((int)this + 0x44) + 4);
              local_24 = local_3c;
              local_1c = local_38;
              (**(code **)(*piVar2 + 0xb8))
                        (piVar2,local_5c,0,0,0,0,iVar5,param_2 + local_10 + -1,&local_48);
              this = local_14;
              uVar4 = local_c >> (bVar1 & 0x1f);
              local_30 = uVar6;
              if (uVar4 != 0) {
                local_30 = uVar4;
              }
              uVar4 = local_8 >> (bVar1 & 0x1f);
              local_2c = uVar6;
              if (uVar4 != 0) {
                local_2c = uVar4;
              }
              if (*(char *)((int)local_14 + 0x3c) == '\0') {
                fVar7 = 0.5;
              }
              else {
                fVar7 = 1.0;
              }
              FUN_10076efb(*(void **)((int)local_14 + 0xa8),*(int *)((int)local_14 + 0x1c),
                           *(uint *)((int)local_14 + 0x1c),param_2,uVar3,0,0,0.495,0x3efd70a4,
                           (float)((double)(int)local_30 +
                                  (double)(&DAT_100d97a0)[-((int)local_30 >> 0x1f)]) + 0.495,
                           (float)((double)(int)local_2c +
                                  (double)(&DAT_100d97a0)[-((int)local_2c >> 0x1f)]) + 0.495,
                           fVar7 / local_28,fVar7 / local_20,
                           ((float)((double)(int)local_24 +
                                   (double)(&DAT_100d97a0)[-((int)local_24 >> 0x1f)]) + fVar7) /
                           local_28,((float)((double)(int)local_1c +
                                            (double)(&DAT_100d97a0)[-((int)local_1c >> 0x1f)]) +
                                    fVar7) / local_20,*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 0x1c + local_18),0,
                           local_5c,local_54,0,0,0,*(char *)((int)local_14 + 0x3c),0x80000016,0);
              param_2 = param_2 + 1;
            } while (param_2 < *(uint *)((int)this + 0x28));
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x24));
      }
      in_EAX = FUN_10077958(local_68,1,1);
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)uVar6);
}

