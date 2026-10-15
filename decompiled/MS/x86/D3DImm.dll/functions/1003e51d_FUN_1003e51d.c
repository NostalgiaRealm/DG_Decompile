/*
 * FUN_1003e51d at 1003e51d
 * undefined __thiscall FUN_1003e51d(void * this, int param_1, uint param_2)
 * Address ranges: 1003e51d-1003e9d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e51d(void *this,int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar5 = *(uint *)((int)this + param_1 * 4 + 0x290);
  if (uVar5 == param_2) {
    return;
  }
  uVar8 = param_2;
  if (0x23 < param_1) {
    if (0x90 < param_1) {
LAB_1003e98a:
      FUN_10005f20(this,param_1,param_2);
      goto LAB_1003e993;
    }
    if (param_1 == 0x90) {
      if (((*(uint *)(*(int *)((int)this + 0xa58) + 0x74) & 0x1000) == 0) &&
         ((*(uint *)(*(int *)((int)this + 0xa58) + 0xac) & 0x1000) == 0)) goto LAB_1003e993;
      uVar9 = 0x90;
      goto LAB_1003e5aa;
    }
    if (param_1 < 0x2e) {
      if (param_1 != 0x2d) {
        if (param_1 == 0x24) {
          if (*(int *)((int)this + 0xa5c) != 0) {
            *(undefined1 *)((int)this + 0xa86) = 1;
            goto LAB_1003e993;
          }
          uVar9 = 0x24;
        }
        else if (param_1 == 0x25) {
          if (*(int *)((int)this + 0xa5c) != 0) {
            *(undefined1 *)((int)this + 0xa87) = 1;
            goto LAB_1003e993;
          }
          uVar9 = 0x25;
        }
        else {
          if (param_1 != 0x26) {
            if (param_1 == 0x2b) {
              iVar10 = 0xf;
            }
            else {
              if (param_1 != 0x2c) goto LAB_1003e98a;
              iVar10 = 0xd;
            }
            goto LAB_1003e5ba;
          }
          if (*(int *)((int)this + 0xa5c) != 0) {
            *(undefined1 *)((int)this + 0xa88) = 1;
            goto LAB_1003e993;
          }
          uVar9 = 0x26;
        }
        goto LAB_1003e5aa;
      }
      iVar10 = 0xe;
    }
    else if (param_1 == 0x2e) {
      iVar10 = 0x13;
    }
    else {
      if (param_1 != 0x31) {
        if ((param_1 == 0x32) || (param_1 == 0x33)) goto LAB_1003e993;
        goto LAB_1003e98a;
      }
      iVar10 = 0x15;
    }
LAB_1003e5ba:
    FUN_100060dd(this,0,iVar10,uVar8);
    goto LAB_1003e993;
  }
  if (param_1 == 0x23) {
    bVar4 = 0;
    if (*(int *)((int)this + 0xa5c) != 0) {
      if (uVar5 == 0) {
        if (param_2 != 0) goto LAB_1003e8b9;
      }
      else if (param_2 == 0) {
LAB_1003e8b9:
        bVar4 = 1;
      }
      *(byte *)((int)this + 0xa86) = *(byte *)((int)this + 0xa86) | bVar4;
      *(byte *)((int)this + 0xa87) = *(byte *)((int)this + 0xa87) | bVar4;
      *(byte *)((int)this + 0xa88) = *(byte *)((int)this + 0xa88) | bVar4;
    }
    uVar9 = 0x23;
    goto LAB_1003e5aa;
  }
  if (0xb < param_1) {
    if (param_1 == 0xc) goto LAB_1003e993;
    if (param_1 == 0x11) {
      if ((param_2 != 1) && (param_2 != 2)) goto LAB_1003e993;
      iVar10 = 0x10;
      uVar8 = (param_2 == 2) + 1;
      goto LAB_1003e5ba;
    }
    uVar8 = 3;
    if (param_1 != 0x12) {
      if (param_1 != 0x15) goto LAB_1003e98a;
      local_c = *(int *)((int)this + 0x508);
      local_14 = *(int *)((int)this + 0x50c);
      *(undefined1 *)((int)this + 0xa84) = 0;
      if (param_2 == 1) {
LAB_1003e784:
        iVar10 = 2;
        local_c = 2;
        local_10 = *(int *)((int)this + 0x500);
LAB_1003e78d:
        local_8 = 2;
      }
      else {
        if (param_2 == 2) {
LAB_1003e76d:
          iVar10 = 4;
          local_10 = 0;
          *(undefined1 *)((int)this + 0xa84) = 1;
          *(undefined1 *)((int)this + 0xa89) = 1;
          goto LAB_1003e78d;
        }
        if (param_2 == 3) {
          iVar10 = 0xd;
LAB_1003e748:
          local_c = 0;
          local_10 = 0;
          goto LAB_1003e78d;
        }
        if (param_2 != 4) {
          if (param_2 == 7) goto LAB_1003e784;
          if (param_2 != 8) goto LAB_1003e76d;
          iVar10 = 7;
          goto LAB_1003e748;
        }
        iVar10 = 4;
        local_8 = 4;
        local_10 = 0;
        local_c = 2;
        local_14 = 0;
      }
      if ((((*(int *)((int)this + 0x4f8) != iVar10) || (*(int *)((int)this + 0x4fc) != 2)) ||
          (*(int *)((int)this + 0x504) != local_8)) || (*(int *)((int)this + 0x508) != local_c)) {
        *(uint *)((int)this + 0x934) = *(uint *)((int)this + 0x934) | 1;
      }
      *(int *)((int)this + 0x4f8) = iVar10;
      *(int *)((int)this + 0x504) = local_8;
      *(uint *)((int)this + 0x508) = local_c;
      *(undefined4 *)((int)this + 0x4fc) = 2;
      if (*(int *)((int)this + 0x500) != local_10) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x54))(0,3,local_10);
        *(int *)((int)this + 0x500) = local_10;
      }
      if (*(int *)((int)this + 0x50c) != local_14) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x54))(0,6,local_14);
        *(int *)((int)this + 0x50c) = local_14;
      }
      goto LAB_1003e993;
    }
    if ((param_2 == 0) || (6 < param_2)) {
      param_2 = 1;
LAB_1003e850:
      uVar5 = 1;
    }
    else {
      if (((param_2 == 1) || (param_2 == 3)) || (param_2 == 5)) goto LAB_1003e850;
      uVar5 = 2;
    }
    FUN_100060dd(this,0,0x11,uVar5);
    if ((param_2 == 1) || (param_2 == 2)) {
      uVar8 = 1;
    }
    else if ((param_2 == 3) || (param_2 == 4)) {
      uVar8 = 2;
    }
    iVar10 = 0x12;
    goto LAB_1003e5ba;
  }
  if (param_1 == 0xb) {
    if (*(int *)(*(int *)((int)this + 0xa58) + 0x30) == 1) goto LAB_1003e993;
    uVar9 = 0xb;
  }
  else {
    if (param_1 == 1) {
      if (param_2 == 0) {
        local_10 = 0;
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_1003f50e(this,param_2);
        local_10 = 0;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x34))(&DAT_1005d0c0,&local_10,0);
        }
      }
      piVar1 = *(int **)((int)this + 0x14f4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int *)((int)this + 0x14f4) = local_10;
      *(int **)((int)this + 0x14d4) = piVar6;
      if ((bool)*(char *)((int)this + 0x8f4) != (piVar6 != (int *)0x0)) {
        *(uint *)((int)this + 0x934) = *(uint *)((int)this + 0x934) | 1;
      }
      *(bool *)((int)this + 0x8f4) = piVar6 != (int *)0x0;
      *(undefined1 *)((int)this + 0xa89) = 1;
      if (piVar6 == (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x74))(0,0,0,0,0,0,0);
        goto LAB_1003e993;
      }
      iVar10 = (**(code **)(*piVar6 + 0x38))();
      if ((*(uint *)(iVar10 + 4) & 0x10000) == 0) {
LAB_1003e65b:
        local_c = local_c & 0xffffff00;
      }
      else {
        local_c = CONCAT31(local_c._1_3_,1);
        if ((*(byte *)(iVar10 + 0x4c) & 4) != 0) goto LAB_1003e65b;
      }
      uVar9 = *(undefined4 *)(iVar10 + 0x40);
      iVar10 = (*(int **)((int)this + 0x14d4))[1];
      local_8 = **(int **)((int)this + 0x14);
      uVar2 = *(undefined4 *)(iVar10 + 0x50);
      uVar3 = *(undefined4 *)(iVar10 + 0x6c);
      uVar7 = (**(code **)(**(int **)((int)this + 0x14d4) + 0x3c))(local_c,0);
      (**(code **)(local_8 + 0x74))(0,uVar3,uVar2,uVar9,uVar7);
      *(uint *)((int)this + 0x938) = *(uint *)((int)this + 0x938) | 1;
      goto LAB_1003e993;
    }
    if (param_1 == 3) {
      iVar10 = 0xc;
      goto LAB_1003e5ba;
    }
    if (param_1 == 5) {
      uVar8 = (uint)(param_2 != 0);
      uVar5 = -(uint)(*(int *)((int)this + 0x2a8) != 0) & 2;
    }
    else {
      if (param_1 != 6) goto LAB_1003e98a;
      uVar8 = -(uint)(param_2 != 0) & 2;
      uVar5 = (uint)(*(int *)((int)this + 0x2a4) != 0);
    }
    uVar9 = 0x80;
    uVar8 = uVar5 | uVar8;
  }
LAB_1003e5aa:
  (**(code **)(**(int **)((int)this + 0x14) + 0x50))(uVar9,uVar8);
LAB_1003e993:
  *(uint *)((int)this + param_1 * 4 + 0x290) = param_2;
  return;
}

