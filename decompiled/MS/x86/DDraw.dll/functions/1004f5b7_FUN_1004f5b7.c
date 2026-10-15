/*
 * FUN_1004f5b7 at 1004f5b7
 * int * __thiscall FUN_1004f5b7(void * this, int * param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1004f5b7-1004f849
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1004f5b7(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar6 = *(int *)((int)this + 0x2c);
  param_1[3] = 0;
  if (iVar6 != 0) {
    return param_1;
  }
  if (*(int *)((int)this + 0x40) == 0) {
    if (*(int *)((int)this + 0x6c) == 0) {
LAB_1004f6d0:
      if ((*(int *)((int)this + 0x4c) != 0) ||
         (uVar5 = FUN_1004f89c((int)this), (char)uVar5 != '\0')) {
        *(undefined4 *)(*(int *)((int)this + 0x54) * 0x20 + 0x14 + *(int *)((int)this + 0x48)) =
             *(undefined4 *)((int)this + 0x10);
        iVar6 = *(int *)((int)this + 0x48);
        uVar3 = *(undefined4 *)((int)this + 0x1c);
        iVar9 = *(int *)((int)this + 0x54) * 0x20;
        *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)((int)this + 0x18);
        *(undefined4 *)(iVar9 + 0x1c + iVar6) = uVar3;
        iVar6 = *(int *)((int)this + 0x48);
        uVar5 = *(int *)((int)this + 0x28) + 0xffU & 0xffffff00;
        if (uVar5 << 10 < *(int *)(*(int *)((int)this + 0x54) * 0x20 + 0x10 + iVar6) + uVar5) {
          uVar5 = (*(int *)((int)this + 0x54) + 1U) % *(uint *)((int)this + 0x4c);
          iVar9 = uVar5 * 0x20;
          piVar2 = *(int **)(iVar9 + 0x14 + iVar6);
          if (piVar2 != (int *)0x0) {
            uVar10 = (**(code **)(*piVar2 + 0x20))(piVar2);
            uVar7 = (uint)((ulonglong)uVar10 >> 0x20);
            uVar1 = *(uint *)(iVar9 + 0x1c + iVar6);
            if ((uVar1 <= uVar7) &&
               ((uVar1 < uVar7 || (*(uint *)(iVar9 + 0x18 + iVar6) <= (uint)uVar10)))) {
              *(uint *)((int)this + 0x54) = uVar5;
              *(undefined4 *)(iVar9 + 0x10 + *(int *)((int)this + 0x48)) = 0;
              goto LAB_1004f7d0;
            }
          }
          uVar5 = FUN_1004f89c((int)this);
          if ((char)uVar5 == '\0') goto LAB_1004f814;
          *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
        }
LAB_1004f7d0:
        puVar8 = (uint *)(*(int *)((int)this + 0x54) * 0x20 + *(int *)((int)this + 0x48));
        uVar5 = puVar8[3];
        *(uint *)((int)this + 0x6c) = uVar5;
        uVar1 = puVar8[4];
        uVar7 = *puVar8;
        iVar9 = uVar1 + *puVar8;
        param_1[3] = uVar5;
        iVar6 = puVar8[1] + (uint)CARRY4(uVar1,uVar7);
        *(int *)((int)this + 100) = iVar6;
        param_1[1] = iVar6;
        *(int *)((int)this + 0x60) = iVar9;
        uVar5 = puVar8[2];
        uVar1 = puVar8[4];
        *(uint *)((int)this + 0x68) = uVar5 + uVar1;
        param_1[2] = uVar5 + uVar1;
        iVar6 = *(int *)((int)this + 0x28);
        *param_1 = iVar9;
        puVar8[4] = puVar8[4] + (iVar6 + 0xffU & 0xffffff00);
      }
    }
    else if (param_2 == 1) {
      *(undefined4 *)(*(int *)((int)this + 0x54) * 0x20 + 0x14 + *(int *)((int)this + 0x48)) =
           *(undefined4 *)((int)this + 0x10);
      iVar6 = *(int *)((int)this + 0x48);
      uVar3 = *(undefined4 *)((int)this + 0x1c);
      iVar9 = *(int *)((int)this + 0x54) * 0x20;
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = uVar3;
      iVar6 = *(int *)((int)this + 100);
      param_1[2] = *(int *)((int)this + 0x68);
      *param_1 = *(int *)((int)this + 0x60);
      iVar9 = *(int *)((int)this + 0x6c);
      param_1[1] = iVar6;
      param_1[3] = iVar9;
    }
    else if (param_2 == 2) goto LAB_1004f6d0;
LAB_1004f814:
    if (*(int *)((int)this + 0x6c) != 0) {
      *(int *)(*(int *)((int)this + 0x54) * 0x20 + 0x14 + *(int *)((int)this + 0x48)) = param_3;
      iVar6 = *(int *)((int)this + 0x48);
      iVar9 = *(int *)((int)this + 0x54) * 0x20;
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = param_4;
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = param_5;
    }
    goto LAB_1004f63f;
  }
  iVar6 = *(int *)((int)this + 100);
  if (iVar6 == 0) {
LAB_1004f661:
    FUN_1004f86c((int)this);
    bVar4 = FUN_1005a616(*(void **)((int)this + 0x40),*(uint *)((int)this + 0x28),
                         (int *)((int)this + 0x60));
    if ((!bVar4) && (*(undefined4 **)((int)this + 0x44) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)((int)this + 0x44))(*(undefined4 *)((int)this + 0xc));
      bVar4 = FUN_1005a616(*(void **)((int)this + 0x40),*(uint *)((int)this + 0x28),
                           (int *)((int)this + 0x60));
    }
    *(undefined4 *)((int)this + 0x58) = 0xffffffff;
    if (bVar4 == false) goto LAB_1004f63f;
  }
  else {
    if (param_2 == 1) {
      iVar9 = *(int *)((int)this + 0x6c);
      param_1[2] = *(int *)((int)this + 0x60);
      *param_1 = *(int *)((int)this + 0x68);
      param_1[1] = iVar9;
      param_1[3] = iVar6;
      goto LAB_1004f63f;
    }
    if (param_2 != 2) goto LAB_1004f63f;
    piVar2 = *(int **)((int)this + 0x10);
    if (piVar2 != (int *)0x0) {
      uVar10 = (**(code **)(*piVar2 + 0x20))(piVar2);
      uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
      if ((uVar5 < *(uint *)((int)this + 0x1c)) ||
         ((uVar5 <= *(uint *)((int)this + 0x1c) && ((uint)uVar10 < *(uint *)((int)this + 0x18)))))
      goto LAB_1004f661;
    }
    if (*(int *)((int)this + 0x10) == 0) goto LAB_1004f661;
  }
  iVar6 = *(int *)((int)this + 0x6c);
  param_1[2] = *(int *)((int)this + 0x60);
  *param_1 = *(int *)((int)this + 0x68);
  iVar9 = *(int *)((int)this + 100);
  param_1[1] = iVar6;
  param_1[3] = iVar9;
LAB_1004f63f:
  if (param_3 != 0) {
    *(int *)((int)this + 0x10) = param_3;
    *(undefined4 *)((int)this + 0x18) = param_4;
    *(undefined4 *)((int)this + 0x1c) = param_5;
  }
  if (param_1[3] != 0) {
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  }
  return param_1;
}

