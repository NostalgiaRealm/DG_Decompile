/*
 * FUN_100165fc at 100165fc
 * undefined4 __thiscall FUN_100165fc(void * this, byte param_1, char param_2)
 * Address ranges: 100165fc-1001684d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100165fc(void *this,byte param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar5;
  undefined1 uVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool local_5;
  
  uVar6 = 1;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = *(byte *)((int)this + 0x3237) | param_1;
  *(byte *)((int)this + 0x3237) = bVar2;
  if ((*(byte *)((int)this + 0x3150) != 0) || (local_5 = true, bVar2 != 0)) {
    lVar10 = FUN_100160d0(this,*(int *)((int)this + 0x3194),(undefined4 *)((int)this + 0x2bd0),0x580
                          ,*(byte *)((int)this + 0x3150));
    uVar5 = (uint)((ulonglong)lVar10 >> 0x20);
    uVar3 = (uint)lVar10 | uVar5;
    bVar8 = uVar3 == 0;
    local_5 = !bVar8;
    uVar4 = (undefined3)(uVar3 >> 8);
    *(byte *)((int)this + 0x3150) = *(byte *)((int)this + 0x3150) & bVar8;
    *(byte *)((int)this + 0x3237) = *(byte *)((int)this + 0x3237) & bVar8;
    if (!bVar8) {
      FUN_1003d74c(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),0,(uint)lVar10,uVar5);
      uVar4 = extraout_var;
    }
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x3188) + 0x1304);
    uVar11 = (**(code **)(**(int **)((int)this + 0x3198) + 0x2c))();
    FUN_1003d74c(iVar1,1,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar4 = extraout_var_00;
  }
  piVar7 = (int *)((int)this + 0x3188);
  if ((param_2 == '\0') && (bVar8 = true, param_1 == 0)) goto LAB_10016839;
  bVar2 = *(byte *)((int)this + 0x3238) | param_1;
  *(byte *)((int)this + 0x3238) = bVar2;
  if (*(char *)((int)this + 0x3152) == '\0') {
    bVar9 = true;
    if (bVar2 != 0) goto LAB_10016745;
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    if (*(int *)((int)this + 0xd8) != 0) {
      do {
        *(float *)((int)this + uVar5 * 4 + 0x323c) =
             (float)*(byte *)((int)this + uVar5 + 0x29b0) / 255.0;
        uVar3 = *(uint *)((int)this + 0xd8);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    *(float *)((int)this + uVar3 * 4 + 0x323c) =
         (float)*(byte *)(uVar3 + 0x29af + (int)this) / 255.0;
LAB_10016745:
    lVar10 = FUN_100160d0(this,*(int *)((int)this + 0x31a4),(undefined4 *)((int)this + 0x323c),
                          *(int *)((int)this + 0xd8) * 4 + 4,*(byte *)((int)this + 0x3152));
    uVar5 = (uint)((ulonglong)lVar10 >> 0x20);
    uVar3 = (uint)lVar10 | uVar5;
    bVar9 = uVar3 != 0;
    *(byte *)((int)this + 0x3238) = *(byte *)((int)this + 0x3238) & !bVar9;
    uVar4 = (undefined3)(uVar3 >> 8);
    *(byte *)((int)this + 0x3152) = *(byte *)((int)this + 0x3152) & !bVar9;
    bVar8 = bVar9;
    if (!bVar9) goto LAB_10016839;
    FUN_1003d7e9(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),5,(uint)lVar10,uVar5);
    bVar8 = false;
    uVar4 = extraout_var_01;
    if (!bVar9) goto LAB_10016839;
  }
  bVar8 = bVar9;
  FUN_1003d12e(*(void **)(*piVar7 + 0x1304),*(uint *)((int)this + 0x319c),0,1,0x80);
  FUN_1003d12e(*(void **)(*piVar7 + 0x1304),*(uint *)((int)this + 0x31a0),0,1,0x80);
  iVar1 = *(int *)(*piVar7 + 0x1304);
  uVar11 = (**(code **)(**(int **)((int)this + 0x319c) + 0x2c))();
  FUN_1003d7e9(iVar1,3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  iVar1 = *(int *)(*(int *)((int)this + 0x3188) + 0x1304);
  uVar11 = (**(code **)(**(int **)((int)this + 0x31a0) + 0x2c))(*(int **)((int)this + 0x31a0));
  FUN_1003d7e9(iVar1,4,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar4 = extraout_var_02;
LAB_10016839:
  if ((!local_5) || (!bVar8)) {
    uVar6 = 0;
  }
  return CONCAT31(uVar4,uVar6);
}

